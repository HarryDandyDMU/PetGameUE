// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "SaveGameClass.h"//included for saves
#include <Kismet/GameplayStatics.h>//included for saves
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
	//SEE ABOUT ASYNC CHANGES TO LOWER LOAD
	// SEE ABOUT CASTING TO GAME MODE AND RUNNING FUNCTION IN GAME MODE RATHER THAN CHARACTER
	//make save game instance and if it's true
	if (USaveGameClass* CurrentSaveInstance = Cast<USaveGameClass>(UGameplayStatics::CreateSaveGameObject(USaveGameClass::StaticClass())))
	{
		//add player location
		CurrentSaveInstance->PlayerLocation = this->GetActorLocation();//get player location add to save

		//add player inventory
		CurrentSaveInstance->BlueStack = this->BlueStack;
		CurrentSaveInstance->RedStack = this->RedStack;
		CurrentSaveInstance->YellowStack = this->YellowStack;
		CurrentSaveInstance->GreenStack = this->GreenStack;
		//update ui for inventory
		OnInventoryUpdated.Broadcast();

		//save gem struct
		//if can cast to game mode
		if (APetGameModeBase* CurrentGameMode = Cast<APetGameModeBase>(GetWorld()->GetAuthGameMode()))
		{

			//get array of struct of all gems
			TArray<FGemStruct> GemStruct = CurrentGameMode->GetGemsStruct();
			GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Black, FString::Printf(TEXT("SAVED")));

			//for each add to save arrays //THIS ISN'T RUNNING
			for (FGemStruct Gem : GemStruct) 
			{

				CurrentSaveInstance->Gems.Add(Gem);
			}
		}
		
		//save pet struct


		//do the saving iff the save works
		if (UGameplayStatics::SaveGameToSlot(CurrentSaveInstance, CurrentSaveInstance->SaveName, CurrentSaveInstance->UserIndex))//change these to variables based off ui later
		//do the saving iff the save works
		{
			GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Black, FString::Printf(TEXT("SAVED GAME")));

		}
	}
}

//CONSIDER MOVING TO GAMEMODE BASE
void AMainCharacter::LoadGame()
{
	//get save game instance and if it's true
	if (USaveGameClass* CurrentSaveInstance = Cast<USaveGameClass>(UGameplayStatics::CreateSaveGameObject(USaveGameClass::StaticClass())))
	{
		//open the slot into the instance 
		CurrentSaveInstance = Cast<USaveGameClass>(UGameplayStatics::LoadGameFromSlot(CurrentSaveInstance->SaveName, CurrentSaveInstance->UserIndex));
		// if true
		if (CurrentSaveInstance != nullptr)//change these to variables based off ui later
		{
			//load player location
			this->SetActorLocation(CurrentSaveInstance->PlayerLocation);//load player location from save

			//load player inventory
			this->BlueStack = CurrentSaveInstance->BlueStack;
			this->GreenStack = CurrentSaveInstance->GreenStack;
			this->YellowStack = CurrentSaveInstance->YellowStack;
			this->RedStack = CurrentSaveInstance->RedStack;
			//update ui for inventory
			OnInventoryUpdated.Broadcast();

			//destory all gems
			for (TActorIterator<AAGem> Iterator(GetWorld()); Iterator; ++Iterator)
			{
				Iterator->Destroy();//remove all agems on load
			}

			//load gem struct
			FVector CurrentSpawnLocation;//to hold current spawn location
			FName CurrentSpawnType; //to hold current spawn type

			TArray<FGemStruct> LoadGems = CurrentSaveInstance->Gems;

			//for each add to save arrays
			for (/*const*/ FGemStruct Gem : LoadGems)
			{
				FActorSpawnParameters SpawnParams;
				//check gem to drop and -- the stack and then 
				
				if (Gem.GemType == FName(TEXT("Blue")))
				{
					GetWorld()->SpawnActor<AAGem>(BlueGem, Gem.GemLocation, FRotator::ZeroRotator, SpawnParams); //no rotation and wsaved location
					

				}
				else if (Gem.GemType == FName(TEXT("Yellow")))
				{
					GetWorld()->SpawnActor<AAGem>(YellowGem, Gem.GemLocation, FRotator::ZeroRotator, SpawnParams); //no rotation and wsaved location
				
				}
				else if (Gem.GemType == FName(TEXT("Red")))
				{
					GetWorld()->SpawnActor<AAGem>(RedGem, Gem.GemLocation, FRotator::ZeroRotator, SpawnParams); //no rotation and wsaved location
				
				}
				else if (Gem.GemType == FName(TEXT("Green")))
				{
					GetWorld()->SpawnActor<AAGem>(GreenGem, Gem.GemLocation, FRotator::ZeroRotator, SpawnParams); //no rotation and wsaved location
				
				}
			}

			//Destory all pets

			//load pet struct


			GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::White, FString::Printf(TEXT("LOADED GAME")));
		}
	}
}

