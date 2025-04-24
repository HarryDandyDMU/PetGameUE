// Fill out your copyright notice in the Description page of Project Settings.


#include "AEgg.h"

// Sets default values
AAEgg::AAEgg()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//create egg mesh
	EggMesh = CreateDefaultSubobject <UStaticMeshComponent>(TEXT("Egg Mesh")); //create the mesh
	check(EggMesh != nullptr);
	SetRootComponent(EggMesh);

	//Create Drop Location
	DropLocation = CreateDefaultSubobject<USceneComponent>(TEXT("DropLocation"));
	DropLocation->SetupAttachment(EggMesh);//relative to EggMesh

}


// Called when the game starts or when spawned
void AAEgg::BeginPlay()
{
	Super::BeginPlay();

	

	Hatch();


	
}

// Called every frame
void AAEgg::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAEgg::Hatch()
{
	FActorSpawnParameters SpawnParams;

	AActor* SpeciesToDrop = GetWorld()->SpawnActor<APetMaster>(PetToSpawn, DropLocation->GetComponentLocation(), FRotator::ZeroRotator, SpawnParams); //no rotation and worldspace component location

	Destroy(); //die innit
}

bool AAEgg::DetectIncubator()
{

	return false;
}

