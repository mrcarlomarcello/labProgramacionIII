// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ShootingAIController.generated.h"

/**
 * 
 */
UCLASS()
class THEPHILOSOPHERSSTONE_API AShootingAIController : public AAIController
{
	GENERATED_BODY()
public:
	virtual void Tick(float DelatSeconds) override;
	bool IsDead() const;

//begin play es protected soo tenemos que hacerlo en la protected section de la clase
protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere)
	//float AcceptanceRadius = 200;	
	class UBehaviorTree* AIBehavior;

};
