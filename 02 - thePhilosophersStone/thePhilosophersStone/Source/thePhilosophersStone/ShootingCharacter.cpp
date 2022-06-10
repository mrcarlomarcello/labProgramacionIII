// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootingCharacter.h"


// Sets default values
AShootingCharacter::AShootingCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShootingCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShootingCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
//HACEMOS EL BINDING DEL CONTROL
void AShootingCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &AShootingCharacter::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &AShootingCharacter::MoveRight);
	PlayerInputComponent->BindAxis(TEXT("TurnRightRate"), this, &AShootingCharacter::TurnRightRate);
	PlayerInputComponent->BindAxis(TEXT("TurnRight"), this, &AShootingCharacter::TurnRight);
	PlayerInputComponent->BindAxis(TEXT("LookUpRate"), this, &AShootingCharacter::LookUpRate);		
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AShootingCharacter::LookUp);		
}

void AShootingCharacter::MoveForward(float AxisValue)
{
	AddMovementInput(GetActorForwardVector() * AxisValue);
}

void AShootingCharacter::MoveRight(float AxisValue)
{
	AddMovementInput(GetActorRightVector() * AxisValue);
}

void AShootingCharacter::TurnRightRate(float AxisValue)
{
	//AddMovementInput(GetActorRightVector() * AxisValue);
	AddControllerYawInput(AxisValue);
}

void AShootingCharacter::TurnRight(float AxisValue)
{
	AddControllerYawInput(AxisValue);
}

void AShootingCharacter::LookUpRate(float AxisValue)
{
	AddControllerPitchInput(AxisValue);
}

void AShootingCharacter::LookUp(float AxisValue)
{
	AddControllerPitchInput(AxisValue);
}





