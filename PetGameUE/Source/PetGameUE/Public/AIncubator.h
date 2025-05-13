// Copywrite Harry James Dandy 2025. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AIncubator.generated.h"

UCLASS()
class PETGAMEUE_API AAIncubator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAIncubator();

	//IncubatorMesh
	UPROPERTY(VisibleDefaultsOnly, Category = "Components")
	UStaticMeshComponent* IncubatorMesh;





};
