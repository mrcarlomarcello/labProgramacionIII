// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"


// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

}

// Esto Calcula cada Frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Ahora vamos a mover la plataforma adelante
	CurrentLocation = GetActorLocation();
	CurrentLocation.Y = CurrentLocation.Y + 5;
	CurrentLocation.Z = CurrentLocation.Z - 1;
	SetActorLocation(CurrentLocation);

	

	//Tenemos que resetear la Plataforma cuando se vaya muy lejos

}

