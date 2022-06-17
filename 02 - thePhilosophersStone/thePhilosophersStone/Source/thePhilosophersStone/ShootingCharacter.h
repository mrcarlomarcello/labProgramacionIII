// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ShootingCharacter.generated.h"

class AGun;

UCLASS()
class THEPHILOSOPHERSSTONE_API AShootingCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AShootingCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//agrgando este metodo de actor
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser);

private:

	//EL MAPEO NUEVO OVERRIDE DE LA CLASE HEREDADA ACHARACTER
	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);
	void TurnRightRate(float AxisValue);
	void TurnRight(float AxisValue);
	void LookUpRate(float AxisValue);	
	void LookUp(float AxisValue);

	//Haremos una shooting Function
	void Shoot();	
	
	//ESTA PROPIEDAD TENDREMOS QUE AGREGARLA A SETTINGS DESPUES!!!
	UPROPERTY(EditAnywhere)
	float RotationRate = 75;
	UPROPERTY(EditAnywhere)
	float MaxHealth = 100;
	
	UPROPERTY(VisibleAnywhere)
	float Health;
	

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AGun> GunClass;

	UPROPERTY()
	AGun* Gun;
	

};
