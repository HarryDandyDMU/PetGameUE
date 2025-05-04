// Copywrite Harry James Dandy 2025. All Rights Reserved.


#include "CaveMaster.h"

// Sets default values
ACaveMaster::ACaveMaster()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ACaveMaster::BeginPlay()
{
	Player = GetWorld()->GetFirstPlayerController()->GetPawn(); //get ref to player
}

void ACaveMaster::Tick(float DeltaTime)
{
	
	if (TriggerEnterCaveVolume->IsOverlappingActor(Player))
	{
		//if enter cave volume is overlapping the player
		if (bCaveReset == true)
		{
			CaveSpawn(); //spawn rocks in cave

			bCaveReset = false; //bool for if game as been reset
		}
	}

	if (TriggerExitCaveVolume->IsOverlappingActor(Player))
	{
		if (bCaveReset == false) 
		{
			CaveExit();//empty the cave

			bCaveReset = true; //only once you've exited cave
		}
	}
}



void ACaveMaster::CaveSpawn()
{
	//on enter cave area trigger
	for (int i = 0; i < SpawnLocations.Num(); i++)
	{
		FVector CurrentSpawnLoc = SpawnLocations[i]; //get current loc to spawn
		
		FActorSpawnParameters SpawnParams; //create spawn params

		//spawn the rubble at location
		AARubbleMaster* RubbleDropped = GetWorld()->SpawnActor<AARubbleMaster>(RubbleToSpawn, CurrentSpawnLoc, FRotator::ZeroRotator, SpawnParams); 

		GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Black, FString::Printf(TEXT("Spawned Rubble")));

		//add rubble to spawned array
		SpawnedRubbles.Add(RubbleDropped);

	}
}

void ACaveMaster::CaveExit()
{
	for (AARubbleMaster* Rub : SpawnedRubbles)
	{
		if (Rub->IsValidLowLevel())
		{
			Rub->Destroy();
		}
	}

	//for (int i = 0; i < SpawnedRubbles.Num(); i++)
	//{
	//	if (SpawnedRubbles[i].IsValidLowLevel())
	//	{
	//		SpawnedRubbles[i].Destroy();//destroy actors on exit cave
	//	}
	//	
	//}
}


