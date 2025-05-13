// Copywrite Harry James Dandy 2025. All Rights Reserved.


#include "AIncubator.h"

// Sets default values
AAIncubator::AAIncubator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	EggCollision = CreateDefaultSubobject<UBoxComponent>(FName("EggCollsion"));


	//add dynamic call to begin overlap to my begin overlap function
	EggCollision->OnComponentBeginOverlap.AddDynamic(this, &AAIncubator::OnBeginOverlapEgg);

	IncubatorMesh = CreateDefaultSubobject <UStaticMeshComponent>(TEXT("IncubatorMesh")); //create the mesh
	check(IncubatorMesh != nullptr);
	SetRootComponent(IncubatorMesh);

	EggCollision->SetupAttachment(IncubatorMesh);

}

void AAIncubator::OnBeginOverlapEgg(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
		//if the other actor is an egg
		if (AAUpdatedEgg* Egg = Cast<AAUpdatedEgg>(OtherActor)) 
		{
			//and if you can cast to it
			Egg->Hatch();
		}
}

