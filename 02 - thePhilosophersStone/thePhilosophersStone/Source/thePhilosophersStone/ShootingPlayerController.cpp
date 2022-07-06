// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootingPlayerController.h"
#include "TimerManager.h"
#include "Blueprint/UserWidget.h"



void AShootingPlayerController::GameHasEnded(class AActor* EndGameFocus, bool bIsWinner)
{
    Super::GameHasEnded(EndGameFocus, bIsWinner);

    UUserWidget* LoseScreen = CreateWidget(this, LoseScreenClass);
    if(LoseScreen != nullptr)
    {
        LoseScreen->AddToViewport();
    }

    UE_LOG(LogTemp, Warning, TEXT("We have finished!!!"));
    GetWorldTimerManager().SetTimer(RestartTimer, this, &APlayerController::RestartLevel, RestartDelay);
}
