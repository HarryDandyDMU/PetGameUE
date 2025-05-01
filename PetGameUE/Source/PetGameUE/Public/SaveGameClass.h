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

	//Gems
	UPROPERTY(VisibleAnywhere, Category = "Gems")
	TMap<int32, FName> GemTypeMap; //dictionary of gem types
	UPROPERTY(VisibleAnywhere, Category = "Gems")
	TMap<int32, FVector> GemLocationMap;//Dictionary of gem locations

	//Eggs
	UPROPERTY(VisibleAnywhere, Category = "Eggs")
	TMap<int32, float> EggHatchTime;//Dictionary of Egg hatch timer amounts

	UPROPERTY(VisibleAnywhere, Category = "Eggs")
	TMap<int32, TSubclassOf<APetMaster>> PetToSpawn; //dictionary of bps of pets to spawn

	UPROPERTY(VisibleAnywhere, Category = "Eggs")
	TMap<int32, FName> SpeciesType;//Dictionary of type of egg to decide which bp to instantiate

	UPROPERTY(VisibleAnywhere, Category = "Eggs")
	TMap<int32, FVector> EggLocationMap;//Dictionary of gem locations



	USaveGameClass(); //constructor

};
