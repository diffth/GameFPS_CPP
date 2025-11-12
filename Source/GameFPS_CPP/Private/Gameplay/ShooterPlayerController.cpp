// Fill out your copyright notice in the Description page of Project Settings.

#include "Gameplay/ShooterPlayerController.h"
#include <EnhancedInputSubsystems.h>
#include <Kismet/GameplayStatics.h>
#include "ShooterGameMode.h"

void AShooterPlayerController::OnEndGameCPP()
{
	UUserWidget* Widget = CreateWidget(this, ResultWidget);
	if (Widget)
	{
		Widget->AddToViewport();
	}
}

void AShooterPlayerController::BeginPlay()
{
	Super::BeginPlay();

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());

	if (Subsystem)
	{
		Subsystem->AddMappingContext(ShooterInputMappingContext, 0);
	}

	UUserWidget* Widget = CreateWidget(this, GameplayWidget);
	if (Widget)
	{
		Widget->AddToViewport();
	}

	AShooterGameMode* GameMode = Cast<AShooterGameMode>(UGameplayStatics::GetGameMode(this));
	if (GameMode)
	{
		GameMode->OnEndGameCPP.AddUniqueDynamic(this, &AShooterPlayerController::OnEndGameCPP);
	}
}
   