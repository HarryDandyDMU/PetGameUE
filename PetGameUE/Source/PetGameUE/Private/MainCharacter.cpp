// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystem.h"

// Sets default values
AMainCharacter::AMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}
 
// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMainCharacter::Move(const FInputActionValue& InputValue)
{
	//input is 2dvector
	FVector2D MovementVector = InputValue.Get<FVector2D>();

	if (Controller != nullptr) //if controller isn't null
	{
		//find forward
		const FRotator Rotation = Controller->GetControlRotation(); //set rotation to the controller rotation
		const FRotator YawRotation(0, Rotation.Yaw, 0); //store the yaw in a seperate variable

		//get the forward vector based off rotation
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		//get right vector based off rotation
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		//add the movement
		AddMovementInput(ForwardDirection, MovementVector.Y); //add movement in the forward vector by the movement vector Y
		AddMovementInput(RightDirection, MovementVector.X); //same as above but with the X in the right direction
	}
}

void AMainCharacter::Look(const FInputActionValue& InputValue)
{
	//input
	FVector2D LookAxisVector = InputValue.Get<FVector2D>();

	if (Controller != nullptr)
	{
		//add yaw and pitch
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void AMainCharacter::Jump()
{
	Jump(); // jump innit
}

