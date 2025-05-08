// Copywrite Harry James Dandy 2025. All Rights Reserved.


#include "AIncubator.h"

// Sets default values
AAIncubator::AAIncubator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	IncubatorMesh = CreateDefaultSubobject <UStaticMeshComponent>(TEXT("IncubatorMesh")); //create the mesh
	check(IncubatorMesh != nullptr);
	SetRootComponent(IncubatorMesh);


}

