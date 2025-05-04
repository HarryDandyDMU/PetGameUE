// Copywrite Harry James Dandy 2025. All Rights Reserved.


#include "CaveMaster.h"

// Sets default values
ACaveMaster::ACaveMaster()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	EnterCollision = CreateDefaultSubobject<UBoxComponent>(FName("EnterMesh"));
	ExitCollision = CreateDefaultSubobject<UBoxComponent>(FName("ExitMesh"));
	//dont' need them  attached

	//add dynamic call to begin overlap to my begin overlap function
	EnterCollision->OnComponentBeginOverlap.AddDynamic(this, &ACaveMaster::OnBeginOverlapBox);
	ExitCollision->OnComponentBeginOverlap.AddDynamic(this, &ACaveMaster::OnBeginOverlapBoxExit);

}

void ACaveMaster::OnBeginOverlapBox(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Black, FString::Printf(TEXT("Overlap Enter")));
	
	if (bCaveReset == true)
	{
		CaveSpawn();

		bCaveReset = false;
	}


}

void ACaveMaster::OnBeginOverlapBoxExit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Black, FString::Printf(TEXT("Overlap Exit")));

	if (bCaveReset == false)
	{
		CaveExit();

		bCaveReset = true;
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




