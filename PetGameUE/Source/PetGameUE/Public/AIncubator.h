// Copywrite Harry James Dandy 2025. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include <Components/BoxComponent.h>//included for trigger
#include "AUpdatedEgg.h"
#include "AIncubator.generated.h"

UCLASS()
class PETGAMEUE_API AAIncubator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAIncubator();


	UPROPERTY(EditAnywhere, Category = "Trigger")
	UBoxComponent* EggCollision;

	//IncubatorMesh
	UPROPERTY(VisibleDefaultsOnly, Category = "Components")
	UStaticMeshComponent* IncubatorMesh;


	UFUNCTION()
	void OnBeginOverlapEgg(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);



};
