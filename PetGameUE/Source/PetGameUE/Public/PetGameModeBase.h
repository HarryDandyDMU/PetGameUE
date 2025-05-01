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

	TArray<AAGem*> GemsFromIt; //array of Gems from iterator

	TArray<APetMaster*> PetsFromIt; //array of pets from iterator

	TArray<AAEgg*> EggsFromIt; //array of eggs from iterator

	void SaveGame();

	void LoadGame();

	//save variables

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

	//LEGACY VARIABLES
	////struct containing all gems to be saved
	//FGemStruct CurrentGem;

	//TArray<FGemStruct> GemList; //array of structs of gems save stats

	////CAN'T BE UFUNCTION
	//TArray<FGemStruct> GetGemsStruct();//function returning gem struct array

	////CAN'T BE UFUNCTION
	//TArray<FGemStruct> GetEggsStruct();//function returning gem struct array

	////CAN'T BE UFUNCTION
	//TArray<FGemStruct> GetSpeciesStruct();//function returning gem struct array


	//TArray<FGemStruct> LoadGems;

};
