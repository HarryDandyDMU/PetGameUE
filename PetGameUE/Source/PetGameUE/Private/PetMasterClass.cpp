// Fill out your copyright notice in the Description page of Project Settings.


#include "PetMasterClass.h"

// Sets default values
APetMasterClass::APetMasterClass()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APetMasterClass::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APetMasterClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APetMasterClass::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

