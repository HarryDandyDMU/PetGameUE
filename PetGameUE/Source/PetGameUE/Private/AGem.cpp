// Fill out your copyright notice in the Description page of Project Settings.


#include "AGem.h"
#include "Perception/AISense_Sight.h"//included for sight sense

// Sets default values
AAGem::AAGem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	GemMesh = CreateDefaultSubobject <UStaticMeshComponent>(TEXT("GemMesh")); //create the mesh
	check(GemMesh != nullptr);
	SetRootComponent(GemMesh);

	Tags.Add(FName(GemType));

	//Setup Source
	StimuliSource = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("Stimuli Source Component"));
	StimuliSource->RegisterForSense(TSubclassOf<UAISense_Sight>());


}

// Called when the game starts or when spawned
void AAGem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAGem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

