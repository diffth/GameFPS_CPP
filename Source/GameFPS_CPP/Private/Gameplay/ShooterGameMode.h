// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ShooterGameMode.generated.h"

DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE(FShooterGameModeOnEndGame, AShooterGameMode, OnEndGameCPP);

UENUM(BlueprintType)
enum class StateOfGameCPP : uint8
{
	Ready,
	Playing,
	Ended,
};

/**
 * 
 */
UCLASS()
class AShooterGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void UpdateRankingCPP();

	UFUNCTION(BlueprintCallable)
	StateOfGameCPP GetStateCPP() const;
	
public:
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FShooterGameModeOnEndGame OnEndGameCPP;

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

	UPROPERTY(Category = GameMode, VisibleAnywhere, BlueprintReadWrite)
	float ScoreCPP;

	UPROPERTY(Category = GameMode, VisibleAnywhere, BlueprintReadWrite)
	StateOfGameCPP StateCPP;
};
