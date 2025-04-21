// Fill out your copyright notice in the Description page of Project Settings.


#include "AEgg.h"

// Sets default values
AAEgg::AAEgg()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAEgg::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAEgg::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

