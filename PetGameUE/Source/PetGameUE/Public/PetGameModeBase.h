// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AGem.h"//gem actor
#include "PetMaster.h"//pets class
#include "AEgg.h"//egg class
#include "MainCharacter.h"//main char class
#include "FGemStruct.h"//gem struct
#include "GameFramework/GameModeBase.h"
#include "PetGameModeBase.generated.h"

/**
 * 
 */


//USTRUCT(BlueprintType)
//struct FEggStruct
//{
//	GENERATED_BODY()
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Egg")
//	FName EggType;
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Egg")
//	FVector EggLocation;
//
//};
//
//USTRUCT(BlueprintType)
//struct FSpeciesStruct
//{
//	GENERATED_BODY()
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Species")
//	FName SpeciesType;
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Species")
//	FVector Location;
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Species")
//	EEvolution CurrentEvolution;
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Morph")
//	float MorphJBashful;
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Morph")
//	float MorphJoyful;
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Morph")
//	float MorphSerious;
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Morph")
//	float MorphCalm;
//
//};

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

	TMap<int32, FName> GemTypeMapGM; //dictionary of gem types
	TMap<int32, FVector> GemLocationMapGM;//Dictionary of gem locations

	//EGGS
	UPROPERTY(EditDefaultsOnly, Category = "Eggs")
	TSubclassOf<AAEgg> Species1Egg;


	TMap<int32, float> EggHatchTimeGM;//Dictionary of Egg hatch timer amounts
	TMap<int32, TSubclassOf<APetMaster>> PetToSpawnGM; //dictionary of bps of pets to spawn
	TMap<int32, FName> SpeciesTypeGM;//Dictionary of type of egg to decide which bp to instantiate
	TMap<int32, FVector> EggLocationMapGM;//Dictionary of egg locations

};
