// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "PetGameModeBase.h"//included for struct save
#include "Kismet/KismetSystemLibrary.h"// should allow line traceI
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h" //allows tactoriterator
#include "EnhancedInputSubsystems.h"


// Sets default values
AMainCharacter::AMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//set stack size
	StackSize = 20;

	RedStack = 0;
	GreenStack = 0;
	BlueStack = 0;
	YellowStack = 0;

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

	//Create Drop Location
	DropLocation = CreateDefaultSubobject<USceneComponent>(TEXT("DropLocation"));
	DropLocation->SetupAttachment(MainCharacterMesh);//relative to char mesh

	//create physics handle
	PhysicsHandle = CreateDefaultSubobject<UPhysicsHandleComponent>(TEXT("PhysicsHandle"));
	check(PhysicsHandle != nullptr);

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

	SaveGame(); //save on game load to prevent false file crash

	MainCharacterMesh->bCastDynamicShadow = false; //stops weird floating shadows
	MainCharacterMesh->CastShadow = false;

	

	
}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsGrabbed == true)
	{
		//set location to end of line trace
		PhysicsHandle->SetTargetLocation((CameraComponent->GetComponentLocation())+(CameraComponent->GetForwardVector() * Distance));
	}
}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{

		//Jump
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &AMainCharacter::Jumping);

		//Move
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMainCharacter::Move);

		//Look
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMainCharacter::Look);

		//Looking
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Triggered, this, &AMainCharacter::Interact);

		//Save
		EnhancedInputComponent->BindAction(Save, ETriggerEvent::Triggered, this, &AMainCharacter::SaveGame);

		//Load
		EnhancedInputComponent->BindAction(Load, ETriggerEvent::Triggered, this, &AMainCharacter::LoadGame);

		//Pet
		EnhancedInputComponent->BindAction(PetAction, ETriggerEvent::Completed, this, &AMainCharacter::Pet);//should fire on release

		//Kick
		EnhancedInputComponent->BindAction(KickAction, ETriggerEvent::Completed, this, &AMainCharacter::Kick);//should fire on release

		//Grab
		EnhancedInputComponent->BindAction(GrabAction, ETriggerEvent::Triggered, this, &AMainCharacter::Grab);

		EnhancedInputComponent->BindAction(GrabAction, ETriggerEvent::Completed,this, &AMainCharacter::Released);
	}


}

void AMainCharacter::Grab() 
{
	InitialiseTrace();
	if (Hit)
	{
		if (HitResult.GetActor()->IsA(AAEgg::StaticClass())) //if trace is a Egg
		{
			PhysicsHandle->GrabComponentAtLocationWithRotation(HitResult.GetComponent(), NAME_None, HitResult.GetActor()->GetActorLocation(), HitResult.GetActor()->GetActorRotation());
			bIsGrabbed = true;
		}
	}

}

void AMainCharacter::Released()
{
	if (bIsGrabbed == true)
	{
		PhysicsHandle->ReleaseComponent();
		bIsGrabbed = false;
	}
}

void AMainCharacter::Interact()
{
	InitialiseTrace();//runs trace
	AddToInventory();//Checks if it can be added and does it or breaks rocks

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

void AMainCharacter::Pet()
{
	InitialiseTrace();
	//fire a ray
	GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Green, FString::Printf(TEXT("PAT PAT")));

	//if it hits a pet
	if (Hit)
	{
		//get the pet
		if (APetMaster* PetInFront = Cast<APetMaster>(HitResult.GetActor()))//if it casts to the pet there
		{
			//reduce all PF by 0.1
			PetInFront->NFBashful += (-0.1f);
			PetInFront->NFSerious += (-0.1f);
			PetInFront->NFBashful = PetInFront->ClampBashful();
			PetInFront->NFSerious = PetInFront->ClampSerious();//clamp just in case

			//play happy animation in pet


			//play happy noise in pet
		}
	}
}

void AMainCharacter::Kick()
{
	InitialiseTrace();
	//fire a ray
	GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Red, FString::Printf(TEXT("Fwaaaa")));


	//if it hits a pet
	if (Hit)
	{
		//get the pet
		if (APetMaster* PetInFront = Cast<APetMaster>(HitResult.GetActor()))//if it casts to the pet there
		{
			//reduce all PF by 0.1
			PetInFront->PFCalm += (-0.1f);
			PetInFront->PFJoyful += (-0.1f);
			PetInFront->PFCalm = PetInFront->ClampCalm();
			PetInFront->PFJoyful = PetInFront->ClampJoyful();//clamp just in case

			//Ragdoll the pet
			PetInFront->PetMeshAdult->SetCollisionProfileName(TEXT("Ragdoll"));//set collsion
			PetInFront->PetMeshAdult->SetSimulatePhysics(true);//sim physics
			PetInFront->PetMeshAdult->WakeRigidBody();//wake it

			//play wheeee noise in pet


			//Impulse the pet in player forward vector
			PetInFront->PetMeshAdult->AddImpulse(CameraComponent->GetForwardVector() * KickDistance, NAME_None, true);

			//include something in pets to stop them rag dolling
			PetInFront->RagdollTimer();
		}
	}
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


	//add self to actors that need to be ignored
	ActorsToIgnore.Add(this);

	//line trace for multiple objects with bool
	//uses camera channel and complex collision is true
	//Green for trace and red for hit and final float is 60secs
	Hit = UKismetSystemLibrary::LineTraceSingle(this, Start, End, UEngineTypes::ConvertToTraceType(ECC_Camera), true, ActorsToIgnore, EDrawDebugTrace::ForDuration, HitResult, true, FLinearColor::Green, FLinearColor::Red, 60.f);

	
}

void AMainCharacter::AddToInventory()
{
	if (Hit == true)
	{

		//GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Emerald, FString::Printf(TEXT("Hit: %s"), *HitResult.GetActor()->GetName()));
		if (HitResult.GetActor()->IsA(AAGem::StaticClass())) //if trace is a gem
		{

			if (HitResult.GetActor()->ActorHasTag(FName(TEXT("Blue")))) //NEED TO SET NAME IN CONSTRUCTOR OF GEM SO IT'S NOT INSTANCED
			{
				//GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Magenta, FString::Printf(TEXT("PICKUP Red")));
				HitResult.GetActor()->Destroy();
				if (BlueStack < StackSize)
				{
					BlueStack++;
					

					//OnInventoryUpdated.Broadcast();
				}
			}
			else if (HitResult.GetActor()->ActorHasTag(FName(TEXT("Red"))))
			{
				HitResult.GetActor()->Destroy();
				if (RedStack < StackSize)
				{
					RedStack++;
					//OnInventoryUpdated.Broadcast();
				}
				else
				{
					//Respawn Gem
				}
			}
			else if (HitResult.GetActor()->ActorHasTag(FName(TEXT("Yellow"))))
			{
				HitResult.GetActor()->Destroy();
				if (YellowStack < StackSize)
				{
					YellowStack++;
					//OnInventoryUpdated.Broadcast();
				}
				else
				{
					//Respawn Gem
				}
			}
			else if (HitResult.GetActor()->ActorHasTag(FName(TEXT("Green"))))
			{
				HitResult.GetActor()->Destroy();
				if (GreenStack < StackSize)
				{
					GreenStack++;
					//OnInventoryUpdated.Broadcast();
				}
				else
				{
					//Respawn Gem
				}
			}

			OnInventoryUpdated.Broadcast(); //uupdate inventory
		}
		else if (HitResult.GetActor()->IsA(AARubbleMaster::StaticClass())) //if trace is a rubble and not a gem
		{
			GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Magenta, FString::Printf(TEXT("Hit: %s"), *HitResult.GetActor()->GetName()));

			if (AARubbleMaster* Rubble = Cast<AARubbleMaster>(HitResult.GetActor())) //if you can cast to the actor
			{
				GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Magenta, FString::Printf(TEXT("Hit: %s"), *HitResult.GetActor()->GetName()));

				Rubble->Break();
			}
		}
	}
}


AActor* AMainCharacter::DropItem()
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.Instigator = this;
	//check gem to drop and -- the stack and then 
	
	AActor* ItemToDrop = GetWorld()->SpawnActor<AAGem>(GemToDrop, DropLocation->GetComponentLocation(), FRotator::ZeroRotator, SpawnParams); //no rotation and worldspace component location

	if (ItemToDrop->ActorHasTag(FName(TEXT("Green")))) //checks stack size and removes if 0 or under (NEED TO LOOK INTO A WAY IT SPAWNS EARLIER)
	{
		if (GreenStack > 0) 
		{
			--GreenStack;
		}
		else
		{
			ItemToDrop->Destroy();
		}
	}
	else if (ItemToDrop->ActorHasTag(FName(TEXT("Red"))))
	{
		if (RedStack > 0)
		{
			--RedStack;
		}
		else
		{
			ItemToDrop->Destroy();
		}
	}
	else if (ItemToDrop->ActorHasTag(FName(TEXT("Yellow"))))
	{
		if (YellowStack > 0)
		{
			--YellowStack;
		}
		else
		{
			ItemToDrop->Destroy();
		}
	}
	else if (ItemToDrop->ActorHasTag(FName(TEXT("Blue"))))
	{
		if (BlueStack > 0)
		{
			--BlueStack;
		}
		else
		{
			ItemToDrop->Destroy();
		}
	}
	


	OnInventoryUpdated.Broadcast(); //uupdate inventory

	return ItemToDrop;
}

void AMainCharacter::SaveGame()
{

	if (APetGameModeBase* CurrentGameMode = Cast<APetGameModeBase>(GetWorld()->GetAuthGameMode()))
	{
		CurrentGameMode->SaveGame();
	}
}


void AMainCharacter::LoadGame()
{
	if (APetGameModeBase* CurrentGameMode = Cast<APetGameModeBase>(GetWorld()->GetAuthGameMode()))
	{
		CurrentGameMode->LoadGame();
	}
}

