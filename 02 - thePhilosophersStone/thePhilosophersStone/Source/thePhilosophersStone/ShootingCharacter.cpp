// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootingCharacter.h"
#include "Gun.h"
#include "Components/CapsuleComponent.h"
#include "SimpleShootingGameModeBase.h"

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

	//Aqui usaremos la variable Health para tener un float de referencia
	Health = MaxHealth;

	//EN EL BEGING PLAY DE ESTE CHARACTER TENEMOS QUE CARGAR LA PISTOLA 
	// Parecido al proyecto de Proyectiles

	

	//Manual -> El weapon_r lo encontramos en el mesh de la animación en el editor! Hide it, este es la animación normal
	GetMesh()->HideBoneByName(TEXT("weapon_r"), EPhysBodyOp::PBO_None);

	
	//World es sinonimo de Nivel, asi que nos regresará el nivel actual
	Gun = GetWorld()->SpawnActor<AGun>(GunClass);
	Gun->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("WeaponSocket"));
	Gun->SetOwner(this);
}

bool AShootingCharacter::isDead() const
{
	return Health <= 0;
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
	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &ACharacter::Jump);		
	PlayerInputComponent->BindAction(TEXT("Shoot"), EInputEvent::IE_Pressed, this, &AShootingCharacter::Shoot);		
	
}

float AShootingCharacter::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
	float DamageToApply = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	
	DamageToApply = FMath::Min(Health, DamageToApply);
	Health -= DamageToApply;

	//Enviamos a Log
	UE_LOG(LogTemp, Warning, TEXT("Health left %f"), Health);

	if(isDead())
	{
		ASimpleShootingGameModeBase* GameMode = GetWorld()->GetAuthGameMode<ASimpleShootingGameModeBase>();
		if(GameMode != nullptr)
		{
			GameMode->PawnKilled(this);
		}
		
		DetachFromControllerPendingDestroy();
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		
	}

	return DamageToApply;
}

//MAPPEO MANUAL DEL SHOOTING SKELETON!!!
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
	AddControllerYawInput(AxisValue * RotationRate * GetWorld()->GetDeltaSeconds());
}

void AShootingCharacter::TurnRight(float AxisValue)
{
	AddControllerYawInput(AxisValue);
}

void AShootingCharacter::LookUpRate(float AxisValue)
{
	AddControllerPitchInput(AxisValue * RotationRate * GetWorld()->GetDeltaSeconds());
}

void AShootingCharacter::LookUp(float AxisValue)
{
	AddControllerPitchInput(AxisValue);
}

void AShootingCharacter::Shoot()
{
	Gun->PullTrigger();	
}





