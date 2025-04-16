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

	//Petmesh
	PetMeshAdult = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkelMeshComponent"));
	PetMeshAdult->SetCollisionProfileName(TEXT("Pet"));

	//CapsuleComp = GetCapsuleComponent();

	PetMeshAdult->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void APetMaster::BeginPlay()
{
	Super::BeginPlay();
	
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

void APetMaster::Morph()
{
	PetMeshAdult->SetMorphTarget(BashfulMorph, NFBashful, true);
	PetMeshAdult->SetMorphTarget(SeriousMorph, NFSerious, true);
	PetMeshAdult->SetMorphTarget(CalmMorph, PFCalm, true);
	PetMeshAdult->SetMorphTarget(JoyfulMorph, PFJoyful, true); //only one not working ? error in imporT?

}

