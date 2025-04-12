// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
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

	// Text of type
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Gem")
	FName GemType;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
