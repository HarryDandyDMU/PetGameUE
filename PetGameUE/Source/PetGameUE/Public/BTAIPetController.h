// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "behaviorTree/BehaviorTree.h"
#include "behaviorTree/BehaviorTreeComponent.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Kismet/GamePlayStatics.h"
#include "AGem.h"//include gems
#include "BTAIPetController.generated.h"

/**
 * 
 */
UCLASS()
class PETGAMEUE_API ABTAIPetController : public AAIController
{
	GENERATED_BODY()

protected:

	ABTAIPetController();

	virtual void BeginPlay() override;//override of begin play
	
public:

	// AI sight
	UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, Category = "Perception")
	UAIPerceptionComponent* AIPerceptionComponent;

	// sight sense config
	UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, Category = "Perception")
	UAISenseConfig_Sight* SightConfig;

	// behavior tree
	UPROPERTY(EditAnywhere)
	UBehaviorTree* AIBT;

	//BBComponent
	UPROPERTY(EditAnywhere)
	UBlackboardComponent* BBComp;

	// perception update function (called on sense)
	UFUNCTION(BlueprintCallable, Category = "Perception")
	void OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors);

};
