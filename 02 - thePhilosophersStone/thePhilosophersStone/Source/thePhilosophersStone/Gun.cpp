// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun.h"

//Agregando compoinentes del Arma (Efectos)
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"

// Sets default values
AGun::AGun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Root);
	
}

void AGun::PullTrigger()
{
	UE_LOG(LogTemp, Warning, TEXT("You have just been shot Sire!"));
	//Vamos a Spawn un efecto includo en el paquete de armas
	UGameplayStatics::SpawnEmitterAttached(MuzzleFlash, Mesh, TEXT("MuzzleFlashSocket"));
	
	//Agarro al charater, pero vamos a utillizar polimorfismo, crearemos una Variable tipo Apuntador* APawn(padre) -> Apuntaremos luego a un
	// ya sea ACharacter , o despues, AAi! POR FIN!!!

	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	if(OwnerPawn == nullptr) return;
	
	AController* OwnerController = OwnerPawn->GetController();
	if(OwnerController == nullptr) return;

	FVector Location;
	FRotator Rotation;
	OwnerController->GetPlayerViewPoint(Location, Rotation);
	DrawDebugCamera(GetWorld(), Location, Rotation, 90, 2, FColor::Red, true);
}

// Called when the game starts or when spawned
void AGun::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

