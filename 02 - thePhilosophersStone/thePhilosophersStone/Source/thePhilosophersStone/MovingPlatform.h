// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class THEPHILOSOPHERSSTONE_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
			
	// Called every frame
	virtual void Tick(float DeltaTime) override;	
	//UPPROPERTY agrega la propiedad a UnrealEngine (ojo!)
	
	//UPROPERTY(EditAnywhere)	
	//VectorInicial Para esta Plataforma (-2280.0,-1930.0,95)
	UPROPERTY(EditAnywhere, Category = "Moving Platform")
	FVector CurrentLocation; // = FVector(-2280.0,-1930.0,95);

	UPROPERTY(EditAnywhere, Category = "Moving Platform");
	FVector PlatformSpeed = FVector(0.0,3.0,-0.75);

	UPROPERTY(EditAnywhere, Category = "Moving Platform");	
	float MoveDistance = 5500;

	UPROPERTY(VisibleAnywhere)
	float distanceTravelled = -1;
	
	//No vamos a usar UPROPERTY(EditAnywhere) solo lo veremos en código
	FVector StartLocation;
	
	UPROPERTY(EditAnywhere, Category = "Moving Platform");
	bool Active;
	
};
