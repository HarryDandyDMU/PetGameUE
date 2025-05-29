// Fill out your copyright notice in the Description page of Project Settings.


#include "ARubbleMaster.h"

// Sets default values
AARubbleMaster::AARubbleMaster()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RubbleMesh = CreateDefaultSubobject <UStaticMeshComponent>(TEXT("RubbleMesh")); //create the mesh
	check(RubbleMesh != nullptr);
	SetRootComponent(RubbleMesh);


	//Create Drop Location
	DropLocation = CreateDefaultSubobject<USceneComponent>(TEXT("DropLocation"));
	DropLocation->SetupAttachment(RubbleMesh);//relative to char mesh

}


void AARubbleMaster::Break()
{
	//spawn all gems
	for (TSubclassOf<AAGem> Gem : Gems)
	{
		int iRandAmount = rand() % 2; //for each gem random int between0-1

		for (int i = 0; i < iRandAmount; i++)//spawn loop
		{
			FActorSpawnParameters SpawnParams;

			AActor* ItemToDrop = GetWorld()->SpawnActor<AAGem>(Gem, DropLocation->GetComponentLocation(), FRotator::ZeroRotator, SpawnParams); //no rotation and worldspace component location
		}
	}
	//spawn particles?
	
	//spawn egg code 
	int RandEgg = rand() % 101;

	if (RandEgg < 10)
	{
		FActorSpawnParameters SpawnParams;

		AActor* ItemToDrop = GetWorld()->SpawnActor<AAUpdatedEgg>(EggType, DropLocation->GetComponentLocation(), FRotator::ZeroRotator, SpawnParams); //no rotation and worldspace component location

	}

	Destroy();
}

