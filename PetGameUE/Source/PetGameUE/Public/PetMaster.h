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

	UPROPERTY(VisibleAnywhere, Category = "Evolution")
	EEvolution CurrentEvolution;

	UPROPERTY(EditAnywhere, Category = "Evolution")
	EEvolution DefaultEvolution;

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

private:

	void Morph();

};
