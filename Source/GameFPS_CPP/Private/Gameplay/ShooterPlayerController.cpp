// Fill out your copyright notice in the Description page of Project Settings.

#include "Gameplay/ShooterPlayerController.h"
#include <EnhancedInputSubsystems.h>

void AShooterPlayerController::BeginPlay()
{
	Super::BeginPlay();

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());

	if (Subsystem)
	{
		Subsystem->AddMappingContext(ShooterInputMappingContext, 0);
	}

	UUserWidget* Widget = CreateWidget(this, GameplayWidget);
}
   