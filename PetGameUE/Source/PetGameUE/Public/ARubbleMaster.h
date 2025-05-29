// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AUpdatedEgg.h"
#include "AGem.h" //included for gems

#include "ARubbleMaster.generated.h"

UCLASS()
class PETGAMEUE_API AARubbleMaster : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AARubbleMaster();

	//RubbleMesh
	UPROPERTY(VisibleDefaultsOnly, Category = "Components")
	UStaticMeshComponent* RubbleMesh;

	UPROPERTY(EditDefaultsOnly, Category = "Components") //location for items to drop relative to char
	USceneComponent* DropLocation;

	//bp children of gem
	UPROPERTY(EditDefaultsOnly, Category = "Gems")
	TArray<TSubclassOf<AAGem>> Gems;//contains gems

	UPROPERTY(EditDefaultsOnly, Category = "Gems")
	TSubclassOf<AAUpdatedEgg> EggType;


	void Break();//function when it breaks
};
