// Fill out your copyright notice in the Description page of Project Settings.


#include "FloatingTV.h"


// Sets default values
AFloatingTV::AFloatingTV()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFloatingTV::BeginPlay()
{
	Super::BeginPlay();
	//Variable que dura toda la instancia de BeginPlay() usamos para hacer el return de la plataforma.
	StartLocation = GetActorLocation();
	Active = true;
}

// Called every frame
void AFloatingTV::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Ahora vamos a mover la plataforma adelante
	CurrentLocation = GetActorLocation();
	
	//CurrentLocation.Y = CurrentLocation.Y + 3;
	//CurrentLocation.Z = CurrentLocation.Z - 0.2;
	
	if(Active)
		CurrentLocation = CurrentLocation + (PlatformSpeed * DeltaTime * 100);
	else
		CurrentLocation = CurrentLocation + (PlatformSpeed * DeltaTime * 0);

	
	SetActorLocation(CurrentLocation);
	
	//Tenemos que resetear la Plataforma cuando se vaya muy lejos:
		
	//Revisar cuánto hemos movido la plataforma		
	distanceTravelled = FVector::Dist(StartLocation, CurrentLocation);

	if (distanceTravelled > MoveDistance){
		PlatformSpeed = -PlatformSpeed;
		StartLocation = CurrentLocation;
	};

}

