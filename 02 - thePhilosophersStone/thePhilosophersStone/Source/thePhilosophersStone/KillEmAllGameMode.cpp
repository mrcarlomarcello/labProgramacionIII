// Fill out your copyright notice in the Description page of Project Settings.


#include "KillEmAllGameMode.h"
#include "EngineUtils.h"
#include "GameFramework/Controller.h"
#include "ShootingAIController.h"


void AKillEmAllGameMode::PawnKilled(APawn* PawnKilled)
{
    Super::PawnKilled(PawnKilled);

    //UE_LOG(LogTemp, Warning, TEXT("A Pawn killed!"));
    
    APlayerController* PlayerController = Cast<APlayerController>(PawnKilled->GetController());
    
    if(PlayerController != nullptr){
        EndGame(false);
    }

    for(AShootingAIController* Controller : TActorRange<AShootingAIController>(GetWorld()))
    {
        if(!Controller->IsDead())
        {
            return;
        }
    }
    
    EndGame(true);
}

void AKillEmAllGameMode::EndGame(bool bIsPlayerWinner)
{
    for(AController* Controller : TActorRange<AController>(GetWorld()))
    {
        bool bIsWinner = Controller->IsPlayerController() == bIsPlayerWinner;
        Controller->GameHasEnded(Controller->GetPawn(), bIsWinner);        
    }
}
