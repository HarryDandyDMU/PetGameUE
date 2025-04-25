// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BTAIControllerPet.generated.h"

/**
 * 
 */
UCLASS()
class PETGAMEUE_API ABTAIControllerPet : public AAIController
{
	GENERATED_BODY()
	
protected:

    // Constructor for initializing components
    AEnemyBTAIController();

    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    // Called every frame
    virtual void Tick(float DeltaTime) override;


};
