// Fill out your copyright notice in the Description page of Project Settings.


#include "Gameplay/ShooterGameMode.h"

void AShooterGameMode::UpdateRankingCPP()
{
	int32 RankingIndex = 0;
	for (int32 Index = 0; Index < RankingScoresCPP.Num(); ++Index)
	{
		float Element = RankingScoresCPP[Index];
		if (Element >= ScoreCPP)
		{
			RankingIndex++;
		}
		else
		{
			break;
		}
	}
}
