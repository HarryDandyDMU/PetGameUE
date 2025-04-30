// Copywrite Harry James Dandy 2025

#pragma once

#include "CoreMinimal.h"
#include "PetMaster.h"//included to hopefully save an entire instance of the bp
#include "FGemStruct.h"//gem struct
#include "GameFramework/SaveGame.h"
#include "SaveGameClass.generated.h"

/**
 * 
 */

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
class PETGAMEUE_API USaveGameClass : public USaveGame
{
	GENERATED_BODY()
	

public:

	UPROPERTY(VisibleAnywhere, Category = "SaveSlots")
	FString SaveName; //name of save slot

	UPROPERTY(VisibleAnywhere, Category = "SaveSlots")
	uint16 UserIndex; //small int to carry player index

	//player location
	UPROPERTY(VisibleAnywhere, Category = "SavePlayer")
	FVector3d PlayerLocation;

	//inventory stacks
	UPROPERTY(VisibleAnywhere, Category = "SavePlayer")
	int BlueStack;
	UPROPERTY(VisibleAnywhere, Category = "SavePlayer")
	int GreenStack;
	UPROPERTY(VisibleAnywhere, Category = "SavePlayer")
	int YellowStack;
	UPROPERTY(VisibleAnywhere, Category = "SavePlayer")
	int RedStack;

	//gems
	TArray<FGemStruct> Gems;

	//Pets
	UPROPERTY(VisibleAnywhere, Category = "PetInstances")
	TArray<TSubclassOf<APetMaster>> PetInstances;//array of all pet instances hopefully

	USaveGameClass(); //constructor

};
