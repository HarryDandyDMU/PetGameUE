// Copywrite Harry James Dandy 2025. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PetMaster.h"
//#include "AIncubator.h"
#include "Kismet/KismetSystemLibrary.h"
#include "AUpdatedEgg.generated.h"

UCLASS()
class PETGAMEUE_API AAUpdatedEgg : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAUpdatedEgg();

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

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Hatch();

	void DetectIncubator();

	float Radius = 100.f;

};
