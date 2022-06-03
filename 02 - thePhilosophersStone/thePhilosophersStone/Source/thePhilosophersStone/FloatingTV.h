// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloatingTV.generated.h"

UCLASS()
class THEPHILOSOPHERSSTONE_API AFloatingTV : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloatingTV();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Moving TV")
	FVector CurrentLocation; // = FVector(-2280.0,-1930.0,95);

	UPROPERTY(EditAnywhere, Category = "Moving TV");
	FVector PlatformSpeed = FVector(0.0,-.75,-0.75);

	UPROPERTY(EditAnywhere, Category = "Moving TV");	
	float MoveDistance = 500;

	UPROPERTY(VisibleAnywhere)
	float distanceTravelled = -1;
	
	//No vamos a usar UPROPERTY(EditAnywhere) solo lo veremos en código
	FVector StartLocation;

	bool Active;
	
	
	
};
