// Copyright Epic Games, Inc. All Rights Reserved.

#include "thePhilosophersStoneGameMode.h"
#include "thePhilosophersStoneCharacter.h"
#include "UObject/ConstructorHelpers.h"

AthePhilosophersStoneGameMode::AthePhilosophersStoneGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
