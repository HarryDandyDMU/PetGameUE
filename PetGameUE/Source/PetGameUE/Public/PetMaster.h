// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PetMaster.generated.h"

//states of evolution to dictate models 
UENUM(BlueprintType)
enum class EEvolution : uint8 { //uint8 makes it tiny
	Baby,
	Adult,
	Elder
};

UCLASS()
class PETGAMEUE_API APetMaster : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APetMaster();

	//variables for stats for all pets make private later w/ get set functions that are clamped 0-1
	// NF = NEGATIVE FLOAT (BAD TRAIT)
	// PF = POSITIVE FLOAT (POSITIVE TRAIT)
	UPROPERTY(EditAnywhere, Category = "Mood")
	float PFJoyful; //0-1f used to Dicatate the blend shapes

	UPROPERTY(EditAnywhere, Category = "Mood")
	float NFSerious; //0-1f used to Dicatate the blend shapes

	UPROPERTY(EditAnywhere, Category = "Mood")
	float PFCalm; //0-1f used to Dicatate the blend shapes

	UPROPERTY(EditAnywhere, Category = "Mood")
	float NFBashful; //0-1f used to Dicatate the blend shapes

	UPROPERTY(EditAnywhere, Category = "Species")
	FName SpeciesType;

	UPROPERTY(EditAnywhere, Category = "Evolution")
	EEvolution CurrentEvolution;

	//include skeletal mesh component
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Mesh")
	USkeletalMeshComponent* PetMeshAdult;

	//include skeletal mesh component
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Mesh")
	USkeletalMeshComponent* PetMeshBaby;

	//include skeletal mesh component
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Mesh")
	USkeletalMeshComponent* PetMeshElder;

	//scene root
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Mesh")
	USceneComponent* DefaultSceneRoot;

	////capsule for hitbox
	//UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, Category = "Capsule")
	//UCapsuleComponent* CapsuleComp;

	//fname for morph target CHANGE TO ADULT WHEN MESH DONE
	FName BashfulMorph = TEXT("PetDefaultTestMorphBashFul");
	FName CalmMorph = TEXT("PetDefaultTestMorphCalm");
	FName SeriousMorph = TEXT("PetDefaultTestMorphSerious");
	FName JoyfulMorph = TEXT("PetDefaultTestMorphJoy");

	//bool to remove zero weight?


	//timer handle
	FTimerHandle EvolutionTimer;

	//Agetimer
	FTimerHandle AgeTimer;

	//age time length
	UPROPERTY(EditDefaultsOnly, Category = "Timer")
	float BabyTime = 120.f;//2 mins
	UPROPERTY(EditDefaultsOnly, Category = "Timer")
	float AdultTime = 1200.f;//20 mins

	//timer length
	UPROPERTY(EditDefaultsOnly, Category = "Timer")
	float EvolutionTime = 10.f;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void Evolve();

	void EvolveTimer();

	void Age();

	void HungerTimer();

	void Hungry();

	UPROPERTY(VisibleAnywhere, Category = "Eat")
	bool IsHungry = false;//set to false

	//Agetimer
	FTimerHandle HungerTimeHandle;

	UPROPERTY(EditDefaultsOnly, Category = "Timer")
	float HungerTime = 60.f;//1 mins

	float ClampBashful(); //for some reason has to be returned
	float ClampJoyful();
	float ClampSerious();
	float ClampCalm();


private:
	void Morph();

	void Eat();//function to ray trace food infront of pet

	UPROPERTY(VisibleAnywhere, Category = "Eat")
	float FoodDistance = 50.f;//distance to food check

	UPROPERTY(VisibleAnywhere, Category = "Eat")
	bool Hit;//if hit anything

	FHitResult HitResult; //variable of hit return

	UPROPERTY(VisibleAnywhere, Category = "Eat")
	int16 MaxFood = 100;

	UPROPERTY(VisibleAnywhere, Category = "Eat")
	int16 CurrentFood = 0;


};
