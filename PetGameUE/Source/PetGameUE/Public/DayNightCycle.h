// Copywrite Harry James Dandy 2025. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Curves/CurveVector.h"
#include  "Engine/DirectionalLight.h"
#include "DayNightCycle.generated.h"

UCLASS()
class PETGAMEUE_API ADayNightCycle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADayNightCycle();

	//day
	UPROPERTY(VisibleAnywhere, Category = "Day")
	float DayTimer;//timer float for the day

	UPROPERTY(VisibleAnywhere, Category = "Day")
	float DayDonePercentage;//0/1 float that'll be clamped

	UPROPERTY(VisibleAnywhere, Category = "Day")
	float DayLength = 10.f;//day length in seconds

	UPROPERTY(VisibleAnywhere, Category = "Day")
	float ModulusDay;//holds modulus

	//sun variables
	UPROPERTY(EditAnywhere, Category = "Sun")
	UCurveVector* SunRotationCurve;

	UPROPERTY(EditAnywhere, Category = "Sun")
	UCurveFloat* SunProgressionCurve;

	UPROPERTY(EditAnywhere, Category = "Sun")
	ADirectionalLight* SunLight;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	//function for clamping values
	float Clamp(float min, float max, float var);

	//function to set timer values
	void TimerValues(float DeltaTime);

	void RotateLight();

};
