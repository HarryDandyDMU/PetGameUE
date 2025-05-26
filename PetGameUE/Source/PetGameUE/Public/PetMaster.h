// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "Components/CapsuleComponent.h"//added for capsule

#include "GroomComponent.h"

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

		//capsule 
	UPROPERTY(BlueprintReadWrite, VisibleDefaultsOnly, Category = "Capsule")
	UCapsuleComponent* CapsuleComp;

	//When it hits the Player
	UFUNCTION()
	void OnCapsuleHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& HitBump);

	//include skeletal mesh component
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Mesh")
	USkeletalMeshComponent* PetMeshAdult;

	//include skeletal mesh component
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Mesh")
	USkeletalMeshComponent* PetMeshBaby;

	//include skeletal mesh component
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Mesh")
	USkeletalMeshComponent* PetMeshElder;

	//include elder grooms
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Grooms")
	UGroomComponent* GroomBashful;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Grooms")
	UGroomComponent* GroomJoyful;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Grooms")
	UGroomComponent* GroomCalm;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Grooms")
	UGroomComponent* GroomSerious;

	//scene root
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Mesh")
	USceneComponent* DefaultSceneRoot;



	//fname for morph target CHANGE TO ADULT WHEN MESH DONE
	FName BashfulMorph = TEXT("AdultBashful");
	FName CalmMorph = TEXT("AdultCalm");
	FName SeriousMorph = TEXT("AdultSerious");
	FName JoyfulMorph = TEXT("AdultJoyful");

	//fname for baby morphs
	FName BabyBashful = TEXT("BabyBashful");
	FName BabyCalm = TEXT("BabyCalm");
	FName BabyJoyful = TEXT("BabyJoyful");
	FName BabySerious = TEXT("BabySerious");

	//bool to remove zero weight?


	//timer handle
	FTimerHandle EvolutionTimer;

	//Agetimer
	FTimerHandle AgeTimer;

	//Ragdoll Timer
	FTimerHandle RagdollTime;

	//age time length
	UPROPERTY(EditDefaultsOnly, Category = "Timer")
	float BabyTime = 120.f;//2 mins
	UPROPERTY(EditDefaultsOnly, Category = "Timer")
	float AdultTime = 1200.f;//20 mins

	//timer length
	UPROPERTY(EditDefaultsOnly, Category = "Timer")
	float EvolutionTime = 10.f;


	UPROPERTY(EditDefaultsOnly, Category = "Timer")
	float RagdollTimeAmount = 8.f;


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


	void Morph(); //public so can be used on load

	UFUNCTION()
	void RagdollTimer();



	UFUNCTION()
	void RagdollReset();





private:

	void Eat();//function to ray trace food infront of pet

	UPROPERTY(VisibleAnywhere, Category = "Eat")
	float FoodDistance = 100.f;//distance to food check

	UPROPERTY(VisibleAnywhere, Category = "Eat")
	bool Hit;//if hit anything

	FHitResult HitResult; //variable of hit return

	UPROPERTY(VisibleAnywhere, Category = "Eat")
	int16 MaxFood = 100;

	UPROPERTY(VisibleAnywhere, Category = "Eat")
	int16 CurrentFood = 0;

	

};
