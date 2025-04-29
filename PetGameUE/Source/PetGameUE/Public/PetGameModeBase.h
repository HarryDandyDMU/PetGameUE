// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AGem.h"//gem actor
#include "PetMaster.h"//pets class
#include "AEgg.h"//egg class
#include "GameFramework/GameModeBase.h"
#include "PetGameModeBase.generated.h"

/**
 * 
 */
//USTRUCT(BlueprintType)
//struct FGemStruct
//{
//	GENERATED_BODY()
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gem")
//	FName GemType;
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gem")
//	FVector GemLocation;
//
//};
//
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
//	/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Species")
//	EEvolution CurrentEvolution;*/
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
//
UCLASS()
class PETGAMEUE_API APetGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:

	APetGameModeBase(); //constructor
//
//	//struct containing all gems to be saved
//	FGemStruct CurrentGem;
//
//	TArray<FGemStruct> GemList; //array of structs of gems save stats
//
//	TArray<FGemStruct> GetGemsStruct();//function returning gem struct array
//
//	TArray<FGemStruct> GetEggsStruct();//function returning gem struct array
//
//	TArray<FGemStruct> GetSpeciesStruct();//function returning gem struct array
//
//	UWorld* World;//used to store world when gamemode inits
//
//	void ActorIterator(); //function to contain actor iteration
//
//	TArray<AAGem> GemsFromIt; //array of Gems from iterator
//
//	TArray<APetMaster> PetsFromIt; //array of pets from iterator
//
//	TArray<AAEgg> EggsFromIt; //array of eggs from iterator
//
//	int indexCounter = 0;
//
};
