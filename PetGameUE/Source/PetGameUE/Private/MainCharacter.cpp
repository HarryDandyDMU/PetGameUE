// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "Kismet/KismetSystemLibrary.h"// should allow line trace
#include "AGem.h"
#include "EnhancedInputSubsystems.h"


// Sets default values
AMainCharacter::AMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//initialise the camera
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	check(CameraComponent != nullptr);

	//attach to capsule
	CameraComponent->SetupAttachment(CastChecked<USceneComponent, UCapsuleComponent>(GetCapsuleComponent()));

	//move to eye height
	CameraComponent->SetRelativeLocation(FVector(0.f, 0.f, 25.f)); //CURRENTLY MAGIC NUMBER NEED CHANGE
	CameraComponent->bUsePawnControlRotation = true;

	//initialise the mesh
	MainCharacterMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Skel Mesh"));
	check(MainCharacterMesh != nullptr);

	//attach mesh to camera cause it's first person
	MainCharacterMesh->SetupAttachment(CameraComponent);


}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();

	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
			ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>
			(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}


	MainCharacterMesh->bCastDynamicShadow = false; //stops weird floating shadows
	MainCharacterMesh->CastShadow = false;

	

	
}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	InitialiseTrace();

}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{

		//Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &AMainCharacter::Jumping);

		//Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMainCharacter::Move);

		//Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMainCharacter::Look);

	}


}

void AMainCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}

}

void AMainCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}

}

void AMainCharacter::Jumping()
{
	Jump();
}


//trace

void AMainCharacter::InitialiseTrace() 
{
	//create start and end locations
	FVector Start = CameraComponent->GetComponentLocation();//returns rcamera root location
	FVector End = (Start) + (CameraComponent->GetForwardVector() * Distance);//returns root add forward vector times by distance
	//swap above for camera forward vector

	//array of actors to ignore;
	TArray<AActor*> ActorsToIgnore;

	//variable of hit return
	FHitResult HitResult;

	//add self to actors that need to be ignored
	ActorsToIgnore.Add(this);

	//line trace for multiple objects with bool
	//uses camera channel and complex collision is true
	//Green for trace and red for hit and final float is 60secs
	const bool Hit = UKismetSystemLibrary::LineTraceSingle(this, Start, End, UEngineTypes::ConvertToTraceType(ECC_Camera), true, ActorsToIgnore, EDrawDebugTrace::ForDuration, HitResult, true, FLinearColor::Green, FLinearColor::Red, 60.f);

	if (Hit == true)
	{
		
			//GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Emerald, FString::Printf(TEXT("Hit: %s"), *HitResult.GetActor()->GetName()));
			if (HitResult.GetActor()->IsA(AAGem::StaticClass())) //if trace is a gem
			{
				GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Magenta, FString::Printf(TEXT("Hit: %s"), *HitResult.GetActor()->GetName()));

			}
	}
}

void AMainCharacter::AddToInventory()
{
	//make hit result public or at least a class variables

	//do the gem check above

	//get max stack size

	//get gem type

	//add one to gem type if it's under max stack size

	//destroy the hit result
}

