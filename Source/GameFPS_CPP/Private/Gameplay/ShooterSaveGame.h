// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ShooterSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class UShooterSaveGame : public USaveGame
{
	GENERATED_BODY()
	
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<float> ScoresCPP;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FString> TimesCPP;
};
