// Fill out your copyright notice in the Description page of Project Settings.


#include "Kismet/KismetSystemLibrary.h"
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



void AAEgg::BeginPlay()
{
	//check incubator every 10 seconds
	GetWorld()->GetTimerManager().SetTimer(IncubatorCheck, this, &AAEgg::DetectIncubator, IncubatorTime, true, -1.f); 

}


void AAEgg::Hatch()
{
	FActorSpawnParameters SpawnParams;

	AActor* SpeciesToDrop = GetWorld()->SpawnActor<APetMaster>(PetToSpawn, DropLocation->GetComponentLocation(), FRotator::ZeroRotator, SpawnParams); //no rotation and worldspace component location

	Destroy();


}

void AAEgg::DetectIncubator()
{
	FVector Start = GetActorLocation();
	FVector End = GetActorLocation();

	TArray<AActor*> ActorsToIgnore;

	TArray<FHitResult> HitArray;

	bool Hit;

	Hit = UKismetSystemLibrary::SphereTraceMulti(GetWorld(), Start, End, Radius, UEngineTypes::ConvertToTraceType(ECC_Camera), false, ActorsToIgnore, EDrawDebugTrace::ForDuration, HitArray, true, FLinearColor::Green, FLinearColor::Red, 60.f);

	if (Hit)
	{
		for(const FHitResult ThingHit : HitArray)
		{
			if (ThingHit.GetActor()->IsA((AAIncubator::StaticClass())))
			{
				////start hatching
				//GetWorld()->GetTimerManager().SetTimer(HatchTimer, this, &AAEgg::Hatch, HatchTime, false, -1.f); 
				Hatch();

				//Stop Incubator Check
				GetWorld()->GetTimerManager().ClearTimer(IncubatorCheck);
			}
		}
	}


	

}

