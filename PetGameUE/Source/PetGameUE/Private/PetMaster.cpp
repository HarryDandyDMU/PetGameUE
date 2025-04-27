// Fill out your copyright notice in the Description page of Project Settings.


#include "PetMaster.h"
#include "AGem.h"//to check if food
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "BehaviorTree/BlackboardComponent.h"//to get bb
#include "Kismet/KismetSystemLibrary.h"// should allow line traceI


// Sets default values
APetMaster::APetMaster()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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

	HungerTimer();//function that starts hunger countdown


	if (CurrentEvolution == EEvolution::Baby) //if you're baby on begin play
	{
		GetWorld()->GetTimerManager().SetTimer(AgeTimer, this, &APetMaster::Age, BabyTime, false, -1.f); //Start baby timer to adult
	}
	else if (CurrentEvolution == EEvolution::Adult)//else if you're an adult
	{
		GetWorld()->GetTimerManager().SetTimer(AgeTimer, this, &APetMaster::Age, AdultTime, false, -1.f); //Starts timer to age up to Elder

	}


	
}

// Called every frame
void APetMaster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Morph();// might need to make it less intensive

	Eat();//if hungry in functino

}

// Called to bind functionality to input
void APetMaster::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APetMaster::Evolve()
{

	//change model
	switch (CurrentEvolution)
	{
	case EEvolution::Baby:
		//show baby mesh
			PetMeshBaby->SetVisibility(true);
		//hide other meshes
			PetMeshAdult->SetVisibility(false);
			PetMeshElder->SetVisibility(false);
			GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Cyan, FString::Printf(TEXT("EvolveBaby")));
		break;

	case EEvolution::Adult:
		//show adult mesh
			PetMeshAdult->SetVisibility(true);
			//hide other meshes
			PetMeshBaby->SetVisibility(false);
			PetMeshElder->SetVisibility(false);
			GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Cyan, FString::Printf(TEXT("EvolveAdult")));
		break;

	case EEvolution::Elder:
		//show elder mesh
			PetMeshElder->SetVisibility(true);
			//hide other meshes
			PetMeshAdult->SetVisibility(false);
			PetMeshBaby->SetVisibility(false);
			GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Cyan, FString::Printf(TEXT("EvolveElder")));
		break;

	}
}

void APetMaster::EvolveTimer()
{
	GetWorld()->GetTimerManager().SetTimer(EvolutionTimer, this, &APetMaster::Evolve, EvolutionTime, true, -1.f); //run evolve every 5 seconds
}

void APetMaster::Age()
{
	switch (CurrentEvolution)
	{
	case EEvolution::Baby:
		GetWorld()->GetTimerManager().SetTimer(AgeTimer, this, &APetMaster::Age, AdultTime, false, -1.f); //Starts timer to age up to adult
		CurrentEvolution = EEvolution::Adult;//sets it to adult
		GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Magenta, FString::Printf(TEXT("Become Adult Age")));
		break;
	case EEvolution::Adult:
		CurrentEvolution = EEvolution::Elder;//sets it to Elder after timer above runs
		GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Magenta, FString::Printf(TEXT("Become Elder Age")));
		break;
	case EEvolution::Elder:
		GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Magenta, FString::Printf(TEXT("Elder Done Age")));
		break;
	default:
		break;
	}
}

void APetMaster::HungerTimer()
{
	GetWorld()->GetTimerManager().SetTimer(HungerTimeHandle, this, &APetMaster::Hungry, HungerTime, false, -1.f); //Starts timer to hungry

}

void APetMaster::Hungry()
{
	//sets pet to hungry
	IsHungry = true;//dictates eat function on tick

	GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Emerald, FString::Printf(TEXT("HUNGRY")));


	//need to set bb value here too
	//uses bp helper lib to get this blackboard then sat value with name ISHungry to is hunry
	UAIBlueprintHelperLibrary::GetBlackboard(this)->SetValueAsBool(TEXT("IsHungry"), IsHungry); 

}

float APetMaster::ClampBashful()
{
	return FMath::Clamp(NFBashful, 0.f, 1.f);
}

float APetMaster::ClampJoyful()
{
	return FMath::Clamp(PFJoyful, 0.f, 1.f);
}

float APetMaster::ClampSerious()
{
	return FMath::Clamp(NFSerious, 0.f, 1.f);
}

float APetMaster::ClampCalm()
{
	return FMath::Clamp(PFCalm, 0.f, 1.f);
}

void APetMaster::Morph()
{
	ClampBashful();
	ClampCalm();
	ClampJoyful();
	ClampSerious();

	PetMeshAdult->SetMorphTarget(BashfulMorph, NFBashful, false);
	PetMeshAdult->SetMorphTarget(SeriousMorph, NFSerious, false);
	PetMeshAdult->SetMorphTarget(CalmMorph, PFCalm, false);
	PetMeshAdult->SetMorphTarget(JoyfulMorph, PFJoyful, false); 
}

void APetMaster::Eat()
{
	if (IsHungry == true)
	{

		//create start and end locations
		FVector Start = RootComponent->GetComponentLocation();//returns root location
		FVector End = (Start)+(RootComponent->GetForwardVector() * FoodDistance);//returns root add forward vector times by FoodDistance

		//array of actors to ignore;
		TArray<AActor*> ActorsToIgnore;


		//add self to actors that need to be ignored
		ActorsToIgnore.Add(this);

		//line trace for multiple objects with bool
		//uses camera channel and complex collision is true
		//Green for trace and red for hit and final float is 60secs
		Hit = UKismetSystemLibrary::LineTraceSingle(this, Start, End, UEngineTypes::ConvertToTraceType(ECC_Visibility), true, ActorsToIgnore, EDrawDebugTrace::ForDuration, HitResult, true, FLinearColor::Green, FLinearColor::Red, 60.f);

		if (Hit == true)
		{
			GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Emerald, FString::Printf(TEXT("Hit: %s"), *HitResult.GetActor()->GetName()));

			if (HitResult.GetActor()->IsA(AAGem::StaticClass())) //if hungry scan and if hit is food
			{
				if (HitResult.GetActor()->ActorHasTag(FName(TEXT("Green")))) //if actor is food type
				{
					PFJoyful += .1f;
					HitResult.GetActor()->Destroy();
					IsHungry = false;//SET BACK TO NOT HUNGRY
					UAIBlueprintHelperLibrary::GetBlackboard(this)->SetValueAsBool(TEXT("IsHungry"), IsHungry);
					GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Emerald, FString::Printf(TEXT("EATEN")));
					HungerTimer();//restart timer

				}
				else if (HitResult.GetActor()->ActorHasTag(FName(TEXT("Red"))))
				{
					NFSerious += .1f;
					HitResult.GetActor()->Destroy();
					IsHungry = false;
					UAIBlueprintHelperLibrary::GetBlackboard(this)->SetValueAsBool(TEXT("IsHungry"), IsHungry);
					GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Emerald, FString::Printf(TEXT("EATEN")));
					HungerTimer();//restart timer


				}
				else if (HitResult.GetActor()->ActorHasTag(FName(TEXT("Yellow"))))
				{
					NFBashful += .1f;
					HitResult.GetActor()->Destroy();
					IsHungry = false;
					UAIBlueprintHelperLibrary::GetBlackboard(this)->SetValueAsBool(TEXT("IsHungry"), IsHungry);
					GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Emerald, FString::Printf(TEXT("EATEN")));
					HungerTimer();//restart timer

				}
				else if (HitResult.GetActor()->ActorHasTag(FName(TEXT("Blue"))))
				{
					PFCalm += .1f;
					HitResult.GetActor()->Destroy();
					IsHungry = false;
					UAIBlueprintHelperLibrary::GetBlackboard(this)->SetValueAsBool(TEXT("IsHungry"), IsHungry);
					GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Emerald, FString::Printf(TEXT("EATEN")));
					HungerTimer();//restart timer


				}
			}
		}
	}

}

