// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPlayerController.h"		// Must be first include
#include "BattleTank.h"
#include "Tank.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController Not Controlling Tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController Controlling %s"), *(ControlledTank->GetName()));
	}

	
}

ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}
