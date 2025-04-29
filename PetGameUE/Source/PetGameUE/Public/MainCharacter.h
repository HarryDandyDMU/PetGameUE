// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "Camera/CameraComponent.h"//include for camera
#include "Components/CapsuleComponent.h" //included for capulse
#include "AGem.h" //included for gems
#include "ARubbleMaster.h"//included for mining rubble
#include "MainCharacter.generated.h"


//broadcast to ui
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FInventoryUpdated);

UCLASS()
class PETGAMEUE_API AMainCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMainCharacter();
	
	//delegate for ui#
	UPROPERTY(BlueprintAssignable, Category = "Inventory")
	FInventoryUpdated OnInventoryUpdated;


	//ITEMS THAT MAKE UP THE CHARACTER

	//mesh5
	UPROPERTY(VisibleDefaultsOnly, Category = "Components")
	USkeletalMeshComponent* MainCharacterMesh;
	//camera

	UPROPERTY(VisibleAnywhere, Category = "Components") //fps cam
	UCameraComponent* CameraComponent;

	UPROPERTY(EditDefaultsOnly, Category = "Inventory") //location for items to drop relative to char
	USceneComponent* DropLocation;

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
	//ia interact
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputAction* InteractAction;

	//input action for openclose inventory
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputAction* Inventory;


	//interact action
	void Interact();

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

	bool Hit; //whether the ray hits

	FHitResult HitResult; //variable of hit return

	//inventory stacks

	FString GemType;

	UPROPERTY(BlueprintReadOnly, Category = "Inventory")
	int StackSize;//max stack size

	UPROPERTY(BlueprintReadOnly, Category = "Inventory")
	int RedStack;//red gem count

	UPROPERTY(BlueprintReadOnly, Category = "Inventory")
	int GreenStack; //green gem count

	UPROPERTY(BlueprintReadOnly, Category = "Inventory")
	int BlueStack;//blue gem stack

	UPROPERTY(BlueprintReadOnly, Category = "Inventory")
	int YellowStack;//yellow gem stack

	


	//runs in begin play to init trace
	void InitialiseTrace();

	//add to inv or break rocks
	void AddToInventory();


	//simple drop function
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	AActor* DropItem();

	//bp children of gem
	UPROPERTY(BlueprintReadWrite, Category = "Inventory")
	TSubclassOf<AAGem> GemToDrop;

private:
	UFUNCTION(BlueprintCallable, Category = "Save")
	void SaveGame();

	UFUNCTION(BlueprintCallable, Category = "Save")
	void LoadGame();
};
