// Copywrite Harry James Dandy 2025. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "ARubbleMaster.h"
#include <Engine/TriggerVolume.h>// included for trigger volume
#include "CaveMaster.generated.h"

UCLASS()
class PETGAMEUE_API ACaveMaster : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACaveMaster();

	UPROPERTY(EditAnywhere, Category = "EnterCave")
	ATriggerVolume* TriggerEnterCaveVolume;

	UPROPERTY(EditAnywhere, Category = "ExitCave")
	ATriggerVolume* TriggerExitCaveVolume;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	TSubclassOf<AARubbleMaster> RubbleToSpawn; //var of bp of rubble to spawn in cave on entry or exit

	TArray<AARubbleMaster*> SpawnedRubbles; //array of all spawned rubbles use to destroy all on exit

	TArray<FVector> SpawnLocations;// array of rubble locations in the map

	bool bShouldISpawn; // bool used to coin flip spawns

	bool bCaveReset = false;

	void CaveSpawn();

	void CaveExit();

	APawn* Player;


};
