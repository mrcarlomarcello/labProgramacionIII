// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootingAIController.h"
#include "Kismet/GameplayStatics.h"




void AShootingAIController::BeginPlay()
{
    //SIEMPRE MAKE SURE QUE BeginPlay() este called by Super!!
    Super::BeginPlay();
    //Player 0 (yo)
    APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(),0);
    
    //Set focus al player 0... y si quiero otros AIs..?
    SetFocus(PlayerPawn);

    MoveToActor(PlayerPawn, 200);

}
