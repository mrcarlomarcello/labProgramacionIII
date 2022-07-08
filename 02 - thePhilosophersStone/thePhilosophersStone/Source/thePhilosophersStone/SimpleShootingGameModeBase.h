// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SimpleShootingGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class THEPHILOSOPHERSSTONE_API ASimpleShootingGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	virtual void PawnKilled(APawn* PawnKilled);
	
};