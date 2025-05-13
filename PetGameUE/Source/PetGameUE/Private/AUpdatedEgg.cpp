// Copywrite Harry James Dandy 2025. All Rights Reserved.


#include "AUpdatedEgg.h"

// Sets default values
AAUpdatedEgg::AAUpdatedEgg()
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
void AAUpdatedEgg::BeginPlay()
{
	Super::BeginPlay();
	
	GetWorld()->GetTimerManager().SetTimer(HatchTimer, this, &AAUpdatedEgg::DetectIncubator, HatchTime, true, -1.f);

}

// Called every frame
void AAUpdatedEgg::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAUpdatedEgg::Hatch()
{
	FActorSpawnParameters SpawnParams;

	AActor* SpeciesToDrop = GetWorld()->SpawnActor<APetMaster>(PetToSpawn, DropLocation->GetComponentLocation(), FRotator::ZeroRotator, SpawnParams); //no rotation and worldspace component location

	Destroy();
}

void AAUpdatedEgg::DetectIncubator()
{
	FVector Start = GetActorLocation();
	FVector End = GetActorLocation();

	TArray<AActor*> ActorsToIgnore;

	TArray<FHitResult> EggHitArray;

	bool Hit;

	Hit = UKismetSystemLibrary::SphereTraceMulti(GetWorld(), Start, End, Radius, UEngineTypes::ConvertToTraceType(ECC_Camera), false, ActorsToIgnore, EDrawDebugTrace::ForDuration, EggHitArray, true, FLinearColor::Green, FLinearColor::Red, 60.f);



	if (Hit == true)
	{
		for(const FHitResult& ThingHit : EggHitArray)
		{
			if (AAIncubator* Incubator = Cast<AAIncubator>(ThingHit.GetActor()))
			{
				Incubator = nullptr;
				Hatch();
			}


			////causing crashes (possibly too intensive)
			//if (ThingHit.GetActor()->IsA(AAIncubator::StaticClass()))
			//{
			//	////start hatching
			//	//GetWorld()->GetTimerManager().SetTimer(HatchTimer, this, &AAUpdatedEgg::Hatch, HatchTime, false, -1.f); 
			//	Hatch();

			//	//Stop Incubator Check
			//	//GetWorld()->GetTimerManager().ClearTimer(IncubatorCheck);

			//}
		}
	}

}

