// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAIController.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree//BlackboardComponent.h"


void AShooterAIController::BeginPlay()
{
	Super::BeginPlay();

	if (AIBehavior)
	{
		RunBehaviorTree(AIBehavior);

		APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);

		APawn* AiPawn = GetPawn();

		GetBlackboardComponent()->SetValueAsVector(TEXT("PlayerLocation"), PlayerPawn->GetActorLocation());
		GetBlackboardComponent()->SetValueAsVector(TEXT("StartLocation"), AiPawn->GetActorLocation());
	}
}

void AShooterAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);
	//if (LineOfSightTo(PlayerPawn))
	//{
	//	SetFocus(PlayerPawn);
	//	MoveToActor(PlayerPawn, AcceptanceRadius);
	//}
	//else
	//{
	//	StopMovement();
	//	ClearFocus(EAIFocusPriority::Gameplay);
	//}
}

