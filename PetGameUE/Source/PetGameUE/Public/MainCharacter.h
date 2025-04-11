// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "Camera/CameraComponent.h"//include for camera
#include "Components/CapsuleComponent.h" //included for capulse
#include "MainCharacter.generated.h"

UCLASS()
class PETGAMEUE_API AMainCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMainCharacter();


	//ITEMS THAT MAKE UP THE CHARACTER

	//mesh5
	UPROPERTY(VisibleDefaultsOnly, Category = "Components")
	USkeletalMeshComponent* MainCharacterMesh;
	//camera

	UPROPERTY(VisibleAnywhere, Category = "Components") //fps cam
		UCameraComponent* CameraComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//imc
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputMappingContext* DefaultMappingContext;

	//ia jump
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputAction* JumpAction;

	//ia move
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputAction* MoveAction;

	//ia look
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputAction* LookAction;

	//setup input action for pickup F key with bool type


	//move
	void Move(const FInputActionValue& Value);

	//look
	void Look(const FInputActionValue& Value);

	//jump
	void Jumping();


	//item detection tracing
	
	UPROPERTY(EditAnywhere, Category = "Detection Tracing")
	float Radius = 300.f;//easy default sphere range

	UPROPERTY(EditAnywhere, Category = "Detection Tracing")
	float Distance = 500.f;//easy distance to end point

	UPROPERTY(VisibleAnywhere, Category = "Movement")
	FVector ForwardDirection;//used in the trace aswell as movement

	//runs in begin play to init trace
	void InitialiseTrace();

	//add item to inventory
	void AddToInventory();






};
