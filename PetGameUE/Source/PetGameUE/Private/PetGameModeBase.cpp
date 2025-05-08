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

void APetGameModeBase::ActorIterator()
{
	int it = 0;//temp var for index key

	//empty gem arrays
	GemTypeMapGM.Empty();
	GemLocationMapGM.Empty();
	
	//GEMS array fill
	for (TActorIterator<AAGem> Iterator(World); Iterator; ++Iterator)
	{
		//get the actor from iterator pointer
		AAGem* Actor = *Iterator;

		FString Temp = Actor->GetFName().ToString();
		GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::White, Temp);

		GemTypeMapGM.Add(it,Actor->GetGemType());//get type
		GemLocationMapGM.Add(it, Actor->GetActorLocation());//get location

		it++;
	}

	it = 0; //set index to 0

	//empty egg arrays
	EggHatchTimeGM.Empty();
	PetToSpawnGM.Empty();
	SpeciesTypeGM.Empty();
	EggLocationMapGM.Empty();

	//EGGS
	for (TActorIterator<AAUpdatedEgg> Iterator(World); Iterator; ++Iterator)
	{
		//get the actor from iterator pointer
		AAUpdatedEgg* Actor = *Iterator;

		FString Temp = Actor->GetFName().ToString();
		GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::White, Temp);

		//sort out time left in egg
		float originaltime = Actor->HatchTime;
		float elapsedtime = Actor->GetWorldTimerManager().GetTimerElapsed(Actor->HatchTimer);

		float timeleft = originaltime - elapsedtime;

		//append to dict of hatch timer amounts
		EggHatchTimeGM.Add(it, elapsedtime); //add leftover time for load
		PetToSpawnGM.Add(it, Actor->PetToSpawn);//add pet to spawn
		SpeciesTypeGM.Add(it, Actor->SpeciesType);//add iteration species type for bp spawn
		EggLocationMapGM.Add(it, Actor->GetActorLocation());//add location
		

		it++;
	}

	it = 0;
	//PETS	
	for (TActorIterator<APetMaster> Iterator(World); Iterator; ++Iterator)
	{
		//get the actor from iterator pointer
		APetMaster* Actor = *Iterator;

		FString Temp = Actor->GetFName().ToString();
		GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::White, Temp);

		MorphBashfulGM.Add(it, Actor->NFBashful);//add morph for bashful
		MorphCalmGM.Add(it, Actor->PFCalm);//add morph for calm
		MorphJoyfulGM.Add(it, Actor->PFJoyful);//add morph for joyful
		MorphSeriousGM.Add(it, Actor->NFSerious);//add morph for serious

		CurrentEvolutionGM.Add(it, Actor->CurrentEvolution);//add current evolution

		PetLocationGM.Add(it, Actor->GetActorLocation());// add current location

		PetSpeciesTypeGM.Add(it, Actor->SpeciesType); //species type

		
		it++;
	}
}

void APetGameModeBase::SaveGame()
{
	ActorIterator();//RUNS ACTOR ITERATOR

	//test if iteration arrays are full

	for (int i = 0; i < GemTypeMapGM.Num(); i++)
	{
		FString Temp = GemTypeMapGM[i].ToString();
		if (Temp == "None")
		{
			GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::White, FString::Printf(TEXT("RESET TYPE IN BP")));
		}
		GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Emerald, Temp);
	}

	//open saved instance
	USaveGameClass* CurrentSaveInstance = Cast<USaveGameClass>(UGameplayStatics::CreateSaveGameObject(USaveGameClass::StaticClass()));

	if (CurrentSaveInstance)//if valid
	{
		GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::White, FString::Printf(TEXT("Save Valid")));

		////save the type and location of each gem
		for (int i = 0; i < GemLocationMapGM.Num(); i++) //for every location obtained (location and type will always be equal)
		{
			CurrentSaveInstance->GemLocationMap.Add(i, GemLocationMapGM[i]); //transfer to save dictionary
			CurrentSaveInstance->GemTypeMap.Add(i, GemTypeMapGM[i]); //transfer to save dictionary of type
		}

		//save the type and Species and timer of each egg
		for (int i = 0; i < EggLocationMapGM.Num(); i++) //for every location obtained (location and type will always be equal)
		{
			CurrentSaveInstance->EggLocationMap.Add(i, EggLocationMapGM[i]); //transfer to save dictionary
			CurrentSaveInstance->EggHatchTime.Add(i, EggHatchTimeGM[i]); //transfer to save dictionary of type
			CurrentSaveInstance->PetToSpawn.Add(i, PetToSpawnGM[i]); //transfer to save dictionary
			CurrentSaveInstance->SpeciesType.Add(i, SpeciesTypeGM[i]); //transfer to save dictionary of type
		}

		for (int i = 0; i < PetSpeciesTypeGM.Num(); i++)
		{
			CurrentSaveInstance->MorphCalm.Add(i, MorphCalmGM[i]);
			CurrentSaveInstance->MorphBashful.Add(i, MorphBashfulGM[i]);
			CurrentSaveInstance->MorphJoyful.Add(i, MorphJoyfulGM[i]);
			CurrentSaveInstance->MorphSerious.Add(i, MorphSeriousGM[i]);

			CurrentSaveInstance->CurrentEvolution.Add(i, CurrentEvolutionGM[i]);
			CurrentSaveInstance->PetLocation.Add(i, PetLocationGM[i]);
			CurrentSaveInstance->PetSpeciesType.Add(i, PetSpeciesTypeGM[i]);
		}


		//RUN THE SAVE (Swap for variables)
		UGameplayStatics::SaveGameToSlot(CurrentSaveInstance, TEXT("Slot1"), 0);
	}


}

void APetGameModeBase::LoadGame()
{
	//open saved instance
	//USaveGameClass* CurrentLoadInstance = Cast<USaveGameClass>(UGameplayStatics::CreateSaveGameObject(USaveGameClass::StaticClass()));

	//set loaded save to this
	USaveGameClass* CurrentLoadInstance = Cast<USaveGameClass>(UGameplayStatics::LoadGameFromSlot(TEXT("Slot1"), 0));

	if (CurrentLoadInstance != nullptr)//if valid
	{
		GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::White, FString::Printf(TEXT("Load Valid")));

		int32 max = CurrentLoadInstance->GemTypeMap.Num();

		//DESTROY GEMS
		for (TActorIterator<AAGem> Iterator(World); Iterator; ++Iterator)
		{
			Iterator->Destroy();//remove all agems on load
		}

		//LOAD GEMS
		for (int i = 0; i < max; i++)//for the amount of types saved
		{
			FActorSpawnParameters SpawnParams;
			//check gem to drop and -- the stack and then 
			GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Black, FString::Printf(TEXT("Loaded")));

			FName CurrentType = CurrentLoadInstance->GemTypeMap[i];
			FVector CurrentLoc = CurrentLoadInstance->GemLocationMap[i];
			
			
			if (CurrentType == FName(TEXT("Blue")))
			{
				World->SpawnActor<AAGem>(BlueGem, CurrentLoc, FRotator::ZeroRotator, SpawnParams); //no rotation and wsaved location
			
			
			}
			else if (CurrentType == FName(TEXT("Yellow")))
			{
				World->SpawnActor<AAGem>(YellowGem, CurrentLoc, FRotator::ZeroRotator, SpawnParams); //no rotation and wsaved location
			
			}
			else if (CurrentType == FName(TEXT("Red")))
			{
				World->SpawnActor<AAGem>(RedGem, CurrentLoc, FRotator::ZeroRotator, SpawnParams); //no rotation and wsaved location
			
			}
			else if (CurrentType == FName(TEXT("Green")))
			{
				World->SpawnActor<AAGem>(GreenGem, CurrentLoc, FRotator::ZeroRotator, SpawnParams); //no rotation and wsaved location
			
			}
		}

		max = CurrentLoadInstance->EggLocationMap.Num(); //SET TO MAX NUM OF EGGS

		//DESTROY EGGS
		for (TActorIterator<AAUpdatedEgg> Iterator(World); Iterator; ++Iterator)
		{
			Iterator->Destroy();//remove all eGGS on load
		}

		//LOAD EGGS
		for (int i = 0; i < max; i++)//for the amount of types saved
		{
			FActorSpawnParameters SpawnParams;
			//check gem to drop and -- the stack and then 
			GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Black, FString::Printf(TEXT("Loaded egg")));

			FName CurrentType = CurrentLoadInstance->SpeciesType[i];
			FVector CurrentLoc = CurrentLoadInstance->EggLocationMap[i];
			TSubclassOf<APetMaster> CurrentPetToSpawn = CurrentLoadInstance->PetToSpawn[i];
			float CurrentTime = CurrentLoadInstance->EggHatchTime[i];


			if (CurrentType == FName(TEXT("Species1")))
			{
				AAUpdatedEgg* SpawnedEgg = World->SpawnActor<AAUpdatedEgg>(Species1Egg, CurrentLoc, FRotator::ZeroRotator, SpawnParams); //no rotation and saved location
				SpawnedEgg->HatchTime = CurrentTime;
				SpawnedEgg->PetToSpawn = CurrentPetToSpawn;

			}
			else if (CurrentType == FName(TEXT("Species2"))) //swap with other species
			{

			}
		}

		max = CurrentLoadInstance->PetLocation.Num(); //SET TO MAX NUM OF SPECIES


		//DESTROY SPECIES
		for (TActorIterator<APetMaster> Iterator(World); Iterator; ++Iterator)
		{
			Iterator->Destroy();//remove all Pets on load
		}
		//LOAD SPECIES
		for (int i = 0; i < max; i++)
		{
			GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Black, FString::Printf(TEXT("Loaded Pet")));

			FActorSpawnParameters SpawnParams;

			//load all needed stats

			FName CurrentType = CurrentLoadInstance->PetSpeciesType[i];
			FVector CurrentLoc = CurrentLoadInstance->PetLocation[i];
			EEvolution CurrentEvolution = CurrentLoadInstance->CurrentEvolution[i];

			float MorphSerious = CurrentLoadInstance->MorphSerious[i];
			float MorphCalm = CurrentLoadInstance->MorphCalm[i];
			float MorphJoyful = CurrentLoadInstance->MorphJoyful[i];
			float MorphBashful = CurrentLoadInstance->MorphBashful[i];

			//respawn it

			if (CurrentType == FName(TEXT("Species1")))
			{
				APetMaster* SpawnedPet = World->SpawnActor<APetMaster>(Species1Pet, CurrentLoc, FRotator::ZeroRotator, SpawnParams); //no rotation and saved location
				SpawnedPet->CurrentEvolution = CurrentEvolution;
				SpawnedPet->NFBashful = MorphBashful;
				SpawnedPet->NFSerious = MorphSerious;

				SpawnedPet->PFCalm = MorphCalm;
				SpawnedPet->PFJoyful = MorphJoyful;

				SpawnedPet->Morph();
				SpawnedPet->Evolve();
			}
		}
	}
}


