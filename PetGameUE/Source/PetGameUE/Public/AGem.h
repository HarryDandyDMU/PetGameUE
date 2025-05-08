// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"// so pets can see them
#include "AGem.generated.h"

UCLASS()
class PETGAMEUE_API AAGem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAGem();

	
	//GemSTaticMesh
	UPROPERTY(VisibleDefaultsOnly, Category = "Components")
	UStaticMeshComponent* GemMesh;

	// Text of type //won't build if deleted

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Gem")
	FName GemType;

	//Stimuli Source
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Components")
	UAIPerceptionStimuliSourceComponent* StimuliSource;

	FName GetGemType();//function to get gemtype for save





};
