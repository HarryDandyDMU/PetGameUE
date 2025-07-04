// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AGem.h"//gem actor
#include "PetMaster.h"//pets class
#include "AUpdatedEgg.h"//egg class
#include "MainCharacter.h"//main char class
#include "FGemStruct.h"//gem struct
#include "GameFramework/GameModeBase.h"
#include "PetGameModeBase.generated.h"

/**
 * 
 */

UCLASS()
class PETGAMEUE_API APetGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:

	

	APetGameModeBase(); //constructor

	UWorld* World;//used to store world when gamemode inits

	void ActorIterator(); //function to contain actor iteration

	void SaveGame();

	void LoadGame();

	//save variables
	//GEMS
	UPROPERTY(EditDefaultsOnly, Category = "Gems")
	TSubclassOf<AAGem> RedGem;

	UPROPERTY(EditDefaultsOnly, Category = "Gems")
	TSubclassOf<AAGem> BlueGem;

	UPROPERTY(EditDefaultsOnly, Category = "Gems")
	TSubclassOf<AAGem> YellowGem;

	UPROPERTY(EditDefaultsOnly, Category = "Gems")
	TSubclassOf<AAGem> GreenGem;

	//PLAYER
	FVector PlayerLocationGM;

	AMainCharacter* PlayerGM;

	int RedStackGM;//red gem count

	int GreenStackGM; //green gem count

	int BlueStackGM;//blue gem stack

	int YellowStackGM;//yellow gem stack



	TMap<int32, FName> GemTypeMapGM; //dictionary of gem types
	TMap<int32, FVector> GemLocationMapGM;//Dictionary of gem locations

	//EGGS
	UPROPERTY(EditDefaultsOnly, Category = "Eggs")
	TSubclassOf<AAUpdatedEgg> Species1Egg;


	TMap<int32, float> EggHatchTimeGM;//Dictionary of Egg hatch timer amounts
	TMap<int32, TSubclassOf<APetMaster>> PetToSpawnGM; //dictionary of bps of pets to spawn
	TMap<int32, FName> SpeciesTypeGM;//Dictionary of type of egg to decide which bp to instantiate
	TMap<int32, FVector> EggLocationMapGM;//Dictionary of egg locations


	//SPECIES

	UPROPERTY(EditDefaultsOnly, Category = "Species")
	TSubclassOf<APetMaster> Species1Pet;


	TMap <int32, FName> PetSpeciesTypeGM;
	TMap <int32, FVector> PetLocationGM;
	TMap <int32, EEvolution> CurrentEvolutionGM;
	TMap <int32, float> MorphBashfulGM;
	TMap <int32, float> MorphJoyfulGM;
	TMap <int32, float> MorphSeriousGM;
	TMap <int32, float> MorphCalmGM;



};
