// Fill out your copyright notice in the Description page of Project Settings.

#include "PetGameModeBase.h"
#include "SaveGameClass.h"//included for saves
#include <Kismet/GameplayStatics.h>//included for saves
#include "CoreMinimal.h"
#include "EngineUtils.h" //allows tactoriterator



APetGameModeBase::APetGameModeBase()
{
	World = GetWorld(); //sets it to world
}

TArray<FGemStruct> APetGameModeBase::GetGemsStruct()
{
	GemList.Empty();//clear the gemlist before filling

	//foreach gem in level log their type and location into the struct
	for (AAGem* Gem : GemsFromIt)//for each actor in gems from iterator
	{
		//set data for struct
		CurrentGem.GemType = Gem->GemType;
		CurrentGem.GemLocation = Gem->GetActorLocation();
		//.add is intensive to re allocate array size
		GemList.Add(CurrentGem);//add current gem to gem list after setting data
	}

	GemsFromIt.Empty();//empty the array to stop repeats

	return TArray<FGemStruct>(GemList);
}

TArray<FGemStruct> APetGameModeBase::GetEggsStruct()
{

	return TArray<FGemStruct>();
}

TArray<FGemStruct> APetGameModeBase::GetSpeciesStruct()
{

	return TArray<FGemStruct>();
}

void APetGameModeBase::ActorIterator()
{
	//see about passing in variable can't get it to work rn
	//GEMS
	for (TActorIterator<AAGem> Iterator(World); Iterator; ++Iterator)
	{
		//get the actor from iterator pointer
		AAGem* Actor = *Iterator;

		GemsFromIt.Add(Actor);//add a pointer to that actor to the array
	}

	//EGGS
	for (TActorIterator<AAEgg> Iterator(World); Iterator; ++Iterator)
	{
		//get the actor from iterator pointer
		AAEgg* Actor = *Iterator;

		EggsFromIt.Add(Actor);//add a pointer to that actor to the array
	}

	//PETS	
	for (TActorIterator<APetMaster> Iterator(World); Iterator; ++Iterator)
	{
		//get the actor from iterator pointer
		APetMaster* Actor = *Iterator;

		PetsFromIt.Add(Actor);//add a pointer to that actor to the array
	}
}

void APetGameModeBase::SaveGame()
{
	//SEE ABOUT ASYNC CHANGES TO LOWER LOAD
	//make save game instance and if it's true
	if (USaveGameClass* CurrentSaveInstance = Cast<USaveGameClass>(UGameplayStatics::CreateSaveGameObject(USaveGameClass::StaticClass())))
	{
		if (AMainCharacter* Player =  Cast<AMainCharacter>(UGameplayStatics::GetPlayerCharacter(World,0))) //if you cast to player
		{

			GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::White, FString::Printf(TEXT("Player saved GAME")));

			//add player location
			CurrentSaveInstance->PlayerLocation = Player->GetActorLocation();//get player location add to save

			//add player inventory
			CurrentSaveInstance->BlueStack = Player->BlueStack;
			CurrentSaveInstance->RedStack = Player->RedStack;
			CurrentSaveInstance->YellowStack = Player->YellowStack;
			CurrentSaveInstance->GreenStack = Player->GreenStack;
			//update ui for inventory
			Player->OnInventoryUpdated.Broadcast();
		}

		//save gem struct
		//if can cast to game mode
		//get array of struct of all gems
		TArray<FGemStruct> GemStruct = this->GetGemsStruct();

		for (FGemStruct Gem : GemStruct) 
		{
			GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Black, FString::Printf(TEXT("SAVED")));
			CurrentSaveInstance->Gems.Add(Gem);
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

void APetGameModeBase::LoadGame()
{

		//get loaded game instance and if it's true
	if (USaveGameClass* LoadedSaveInstance = Cast<USaveGameClass>(UGameplayStatics::LoadGameFromSlot(TEXT("SaveSlotTest"),0)))
	{
		
		// if true
		if (LoadedSaveInstance != nullptr)//change these to variables based off ui later 
		{

			if (AMainCharacter* Player = Cast<AMainCharacter>(UGameplayStatics::GetPlayerCharacter(World, 0))) //if you cast to player
			{
				GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::White, FString::Printf(TEXT("Player Loaded GAME")));

				//load player location
				Player->SetActorLocation(LoadedSaveInstance->PlayerLocation);//load player location from save

				//load player inventory
				Player->BlueStack = LoadedSaveInstance->BlueStack;
				Player->GreenStack = LoadedSaveInstance->GreenStack;
				Player->YellowStack = LoadedSaveInstance->YellowStack;
				Player->RedStack = LoadedSaveInstance->RedStack;
				//update ui for inventory
				Player->OnInventoryUpdated.Broadcast();
			}
				//destory all gems
				for (TActorIterator<AAGem> Iterator(World); Iterator; ++Iterator)
				{
					Iterator->Destroy();//remove all agems on load
				}

				//load gem struct
				FVector CurrentSpawnLocation;//to hold current spawn location
				FName CurrentSpawnType; //to hold current spawn type

				LoadGems = LoadedSaveInstance->Gems;
				
				
				for (FGemStruct Gem : LoadedSaveInstance->Gems) //NOT RUNNING
				{
					FActorSpawnParameters SpawnParams;
					//check gem to drop and -- the stack and then 
					GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Black, FString::Printf(TEXT("Loaded")));


					if (Gem.GemType == FName(TEXT("Blue")))
					{
						World->SpawnActor<AAGem>(BlueGem, Gem.GemLocation, FRotator::ZeroRotator, SpawnParams); //no rotation and wsaved location


					}
					else if (Gem.GemType == FName(TEXT("Yellow")))
					{
						World->SpawnActor<AAGem>(YellowGem, Gem.GemLocation, FRotator::ZeroRotator, SpawnParams); //no rotation and wsaved location

					}
					else if (Gem.GemType == FName(TEXT("Red")))
					{
						World->SpawnActor<AAGem>(RedGem, Gem.GemLocation, FRotator::ZeroRotator, SpawnParams); //no rotation and wsaved location

					}
					else if (Gem.GemType == FName(TEXT("Green")))
					{
						World->SpawnActor<AAGem>(GreenGem, Gem.GemLocation, FRotator::ZeroRotator, SpawnParams); //no rotation and wsaved location

					}
				}

				//Destory all pets

				//load pet struct


			}
		}
	}
