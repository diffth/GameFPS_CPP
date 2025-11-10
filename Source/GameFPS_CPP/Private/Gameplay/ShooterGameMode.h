// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ShooterGameMode.generated.h"

/**
 * 
 */
UCLASS()
class AShooterGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(Category = GameMode, VisibleAnywhere, BlueprintReadWrite)
	FDateTime StartTimeCPP;

	UPROPERTY(Category = GameMode, VisibleAnywhere, BlueprintReadWrite)
	FDateTime EndTimeCPP;

	UPROPERTY(Category = GameMode, VisibleAnywhere, BlueprintReadWrite)
	TArray<float> RankingScoresCPP;

	UPROPERTY(Category = GameMode, VisibleAnywhere, BlueprintReadWrite)
	TArray<FString> RankingTimesCPP;

	UPROPERTY(Category = GameMode, VisibleAnywhere, BlueprintReadWrite)
	int32 RankingCPP;

	OnEndGameCPP;
};
