// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AIncubator.h"
#include "PetMaster.h"// included to spawn baby
#include "AEgg.generated.h"

UCLASS()
class PETGAMEUE_API AAEgg : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAEgg();

	//egg Mesh
	UPROPERTY(VisibleDefaultsOnly, Category = "EggMesh")
	UStaticMeshComponent* EggMesh;

	//bp children of Species
	UPROPERTY(EditDefaultsOnly, Category = "Species")
	TSubclassOf<APetMaster> PetToSpawn;


	UPROPERTY(EditDefaultsOnly, Category = "SpawnLoc") 
	USceneComponent* DropLocation;

	UPROPERTY(EditAnywhere, Category = "Timer")
	FTimerHandle HatchTimer;

	UPROPERTY(EditDefaultsOnly, Category = "Timer")
	float HatchTime;

	UPROPERTY(EditAnywhere, Category = "Species")
	FName SpeciesType;

	UPROPERTY(EditDefaultsOnly, Category = "Timer")
	FTimerHandle IncubatorCheck;

	UPROPERTY(EditDefaultsOnly, Category = "Timer")
	float IncubatorTime;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	void Hatch();

	void DetectIncubator();

	float Radius = 100.f;
};
