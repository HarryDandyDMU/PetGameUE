// Fill out your copyright notice in the Description page of Project Settings.


#include "BTAIPetController.h"
#include "BehaviorTree/BlackboardComponent.h"//to get bb

void ABTAIPetController::BeginPlay()
{
	Super::BeginPlay();

    //If AIBehavior is set
    if (AIBT != nullptr)
    {
        // Starts the behavior tree and initializes the Blackboard
        RunBehaviorTree(AIBT);

    }
}


// Constructor to set up sight sense
ABTAIPetController::ABTAIPetController()
{
    // create the eyes and senses
    AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerceptionComponent"));

    if (AIPerceptionComponent)
    {
        // make sight settings
        SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));
        SightConfig->SightRadius = 1000.0f;               // Detection radius
        SightConfig->LoseSightRadius = 1200.0f;           // Distance where lost
        SightConfig->PeripheralVisionAngleDegrees = 45.f;// FOV
        SightConfig->SetMaxAge(5.0f);                     // Memory time for actors

        //use this cause if all aren't selected it gets weird
        SightConfig->DetectionByAffiliation.bDetectEnemies = true;
        SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
        SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

        //use config and set dominant sense
        AIPerceptionComponent->ConfigureSense(*SightConfig);
        AIPerceptionComponent->SetDominantSense(SightConfig->GetSenseImplementation());

        // Bind the perception update event to the OnPerceptionUpdated function
        AIPerceptionComponent->OnPerceptionUpdated.AddDynamic(this, &ABTAIPetController::OnPerceptionUpdated);
    }
}

void ABTAIPetController::OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors)
{

    //pointer to closest gem
    AAGem* CloseGem = nullptr;//set to nothing to begin
    float CloseDistance = FLT_MAX;//var to store closest distance set to max float 

    for (AActor* Actor : UpdatedActors)//for each actor seen
    {
        if (Cast<AAGem>(Actor))//if the cast to the actor is a gem and returns true
        {
            AAGem* Gem = Cast<AAGem>(Actor); //store the actor in var

            //get the distance in vectors from gem and self
            float Distance = FVector::Dist(Gem->GetActorLocation(), GetPawn()->GetActorLocation());

            if (Distance < CloseDistance)//if distance is less that max on first fire or other actor distance
            {
                CloseDistance = Distance;//set shortest to this
                CloseGem = Gem;//set closest gem pointer 
            }
        }
    }

    //after checking distance

    if (CloseGem) //if exists
    {
        // If a gem found set the gem to bb component
        GetBlackboardComponent()->SetValueAsObject(TEXT("GemToEat"), CloseGem);
    }
    else
    {
        // Else clear it
        GetBlackboardComponent()->ClearValue(TEXT("GemToEat"));

    }


}
