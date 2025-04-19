// Fill out your copyright notice in the Description page of Project Settings.


#include "PetMaster.h"

// Sets default values
APetMaster::APetMaster()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CurrentEvolution = DefaultEvolution;

	//setup scene root
	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent")); //used for spawning based off location

	//Petmesh adult
	PetMeshAdult = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("AdultSkelMeshComponent"));

	PetMeshAdult->SetupAttachment(RootComponent);

	//Petmesh baby
	PetMeshBaby = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BabySkelMeshComponent"));

	PetMeshBaby->SetupAttachment(RootComponent);

	//Petmesh Elder
	PetMeshElder = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ElderSkelMeshComponent"));

	PetMeshElder->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void APetMaster::BeginPlay()
{
	Super::BeginPlay();

	//remove all meshes
	PetMeshAdult->SetVisibility(false);
	PetMeshBaby->SetVisibility(false);
	PetMeshElder->SetVisibility(false);


	Evolve(); //sets to default evolution

	EvolveTimer();//starts timer for evolution


	
}

// Called every frame
void APetMaster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Morph();// might need to make it less intensive

}

// Called to bind functionality to input
void APetMaster::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APetMaster::Evolve()
{
	////set next evolution
	//if (CurrentEvolution == EEvolution::Baby)
	//{
	//	CurrentEvolution = EEvolution::Adult;
	//}

	////if adult become elder
	//if (CurrentEvolution == EEvolution::Adult)
	//{
	//	CurrentEvolution = EEvolution::Elder;
	//}

	

	//change model
	switch (CurrentEvolution)
	{
	case EEvolution::Baby:
		//show baby mesh
			PetMeshBaby->SetVisibility(true);
		//hide other meshes
			PetMeshAdult->SetVisibility(false);
			PetMeshElder->SetVisibility(false);
		break;
	case EEvolution::Adult:
		//show adult mesh
			PetMeshAdult->SetVisibility(true);
			//hide other meshes
			PetMeshBaby->SetVisibility(false);
			PetMeshElder->SetVisibility(false);
		break;
	case EEvolution::Elder:
		//show elder mesh
			PetMeshElder->SetVisibility(true);
			//hide other meshes
			PetMeshAdult->SetVisibility(false);
			PetMeshBaby->SetVisibility(false);
		break;
	}
}

void APetMaster::EvolveTimer()
{
	GetWorld()->GetTimerManager().SetTimer(EvolutionTimer, this, &APetMaster::Evolve, EvolutionTime, true, -1.f); //run evolve every 5 seconds
}

void APetMaster::Morph()
{
	PetMeshAdult->SetMorphTarget(BashfulMorph, NFBashful, false);
	PetMeshAdult->SetMorphTarget(SeriousMorph, NFSerious, false);
	PetMeshAdult->SetMorphTarget(CalmMorph, PFCalm, false);
	PetMeshAdult->SetMorphTarget(JoyfulMorph, PFJoyful, false); 

}

