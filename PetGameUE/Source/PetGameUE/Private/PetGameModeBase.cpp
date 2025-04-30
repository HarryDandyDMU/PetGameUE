// Fill out your copyright notice in the Description page of Project Settings.

#include "PetGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h" //allows tactoriterator



APetGameModeBase::APetGameModeBase()
{
	World = GetWorld(); //sets it to world
}

TArray<FGemStruct> APetGameModeBase::GetGemsStruct()
{
	//foreach gem in level log their type and location into the struct
	for (AAGem* Gem : GemsFromIt)//for each actor in gems from iterator
	{
		//set data for struct
		CurrentGem.GemType = Gem->GemType;
		CurrentGem.GemLocation = Gem->GetActorLocation();
		//.add is intensive to re allocate array size
		GemList.Add(CurrentGem);//add current gem to gem list after setting data
	}

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
