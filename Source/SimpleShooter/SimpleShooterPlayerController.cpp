// Fill out your copyright notice in the Description page of Project Settings.


#include "SimpleShooterPlayerController.h"
#include "TimerManager.h"

void ASimpleShooterPlayerController::GameHasEnded(AActor* EndGameFocus, bool bIsWinner)
{
	Super::GameHasEnded(EndGameFocus, bIsWinner);

	GetWorldTimerManager().SetTimer(RestartTimer, this, &APlayerController::RestartLevel, RestartDelay);
}
