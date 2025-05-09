// Copywrite Harry James Dandy 2025. All Rights Reserved.


#include "DayNightCycle.h"

// Sets default values
ADayNightCycle::ADayNightCycle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADayNightCycle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADayNightCycle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TimerValues(DeltaTime);
	RotateLight();

}

float ADayNightCycle::Clamp(float min, float max, float var)
{
	float ClampedValue = FMath::Clamp(var, min, max);

	return ClampedValue;
}

void ADayNightCycle::TimerValues(float DeltaTime)
{
	DayTimer = DayTimer + DeltaTime;

	ModulusDay = fmodf(DayTimer, DayLength);

	DayDonePercentage = Clamp(0.f, 1.f, (ModulusDay / DayLength)); //gives us 0-1 of day completion
}

void ADayNightCycle::RotateLight()
{
	check(SunLight);//check it's valid
	check(SunRotationCurve); //check curve

	FVector Location;


		//use progression curve to get float for rotation
		float TempLoc = SunProgressionCurve->GetFloatValue(DayDonePercentage);
		Location = SunRotationCurve->GetVectorValue(TempLoc);

	


	 double Degree = 360L;

	long double X = Location.X * 360l;
	long double Y = Location.Y * 360l;
	long double Z = Location.Z * 360l;

	FRotator rotation;

	rotation.Roll = X;
	rotation.Pitch = Y;
	rotation.Yaw = Z;

	SunLight->SetActorRotation(rotation);
}

