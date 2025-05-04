// Copywrite Harry James Dandy 2025. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "ARubbleMaster.h"
#include "MainCharacter.h"
#include <Components/BoxComponent.h>//included for trigger
#include <Engine/TriggerVolume.h>// included for trigger volume
#include "CaveMaster.generated.h"

UCLASS()
class PETGAMEUE_API ACaveMaster : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACaveMaster();

	/*UPROPERTY(EditAnywhere, Category = "EnterCave")
	ATriggerVolume* TriggerEnterCaveVolume;

	UPROPERTY(EditAnywhere, Category = "ExitCave")
	ATriggerVolume* TriggerExitCaveVolume;*/

	UPROPERTY(EditAnywhere, Category = "Trigger")
	UBoxComponent* EnterCollision;

	UPROPERTY(EditAnywhere, Category = "Trigger")
	UBoxComponent* ExitCollision;

	UFUNCTION()
	void OnBeginOverlapBox(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


	UFUNCTION()
	void OnBeginOverlapBoxExit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


	UPROPERTY(EditAnywhere, Category = "CaveLocations")
	TArray<FVector> SpawnLocations;// array of rubble locations in the map

	UPROPERTY(EditAnywhere, Category = "Rubble")
	TSubclassOf<AARubbleMaster> RubbleToSpawn; //var of bp of rubble to spawn in cave on entry or exit




private:


	TArray<AARubbleMaster*> SpawnedRubbles; //array of all spawned rubbles use to destroy all on exit


	bool bShouldISpawn; // bool used to coin flip spawns

	bool bCaveReset = false;

	void CaveSpawn();

	void CaveExit();

	//APawn* Player;


};
