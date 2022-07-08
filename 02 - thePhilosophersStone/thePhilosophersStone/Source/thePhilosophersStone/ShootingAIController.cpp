// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootingAIController.h"
#include "Kismet/GameplayStatics.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "ShootingCharacter.h"


void AShootingAIController::BeginPlay()
{
    //SIEMPRE MAKE SURE QUE BeginPlay() este called by Super!!
    Super::BeginPlay();
    /*
    //Player 0 (yo)
    //APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(),0);    
    //Set focus al player 0... y si quiero otros AIs..?
    //SetFocus(PlayerPawn);    
    //MoveToActor(PlayerPawn, 200);
    */

    if(AIBehavior != nullptr)
    {
        RunBehaviorTree(AIBehavior);
        APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(),0);

        GetBlackboardComponent()->SetValueAsVector(TEXT("StartLocation"), GetPawn()->GetActorLocation());    
        
    }
}

void AShootingAIController::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);
    APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(),0);
    
    /* CAMBIOS ESTO SE MANDO AL CONTROL DE AI!!!!->BEHAVIOR TREE + BTSERVICES*.cpp
    if(LineOfSightTo(PlayerPawn))
    {
        GetBlackboardComponent()->SetValueAsVector(TEXT("PlayerLocation"), PlayerPawn->GetActorLocation());
        GetBlackboardComponent()->SetValueAsVector(TEXT("LastKnownPlayerLocation"), PlayerPawn->GetActorLocation());
    }else 
    {
        GetBlackboardComponent()->ClearValue(TEXT("PlayerLocation"));
    }
    */

}

bool AShootingAIController::IsDead() const
{
    AShootingCharacter* ControlledCharacter = Cast<AShootingCharacter>(GetPawn());
    if(ControlledCharacter != nullptr){
        return ControlledCharacter->isDead();
    }

    return true;
}
