// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/ShooterGameplayWidget.h"
#include <Gameplay/ShooterGameMode.h>
#include <Kismet/GameplayStatics.h>

void UShooterGameplayWidget::TickTimeCPP()
{
	AShooterGameMode* GameMode = Cast<AShooterGameMode>(UGameplayStatics::GetGameMode(this));
	if (GameMode)
	{
		StateOfGameCPP State = GameMode->GetStateCPP();
		FDateTime StartTime = GameMode->GetStartTimeCPP();
		FDateTime Now = FDateTime::Now();
		FTimespan Delta = Now - StartTime;

		switch (State)
		{
		case StateOfGameCPP::Ready:
			TextTime->SetText(FText::FromString(TEXT("")));
			break;
		case StateOfGameCPP::Playing:
			FString Minutes = FString::FromInt(Delta.GetMinutes());
			FString Seconds = FString::FromInt(Delta.GetSeconds());
			FString Milliseconds = FString::FromInt(Delta.GetTotalMicroseconds());
			FString Text = TEXT("Stopwatch > ") + Minutes + TEXT(":") + Seconds + TEXT(".") + Milliseconds;
			TextTime->SetText(FText::FromString(Text));
			break;
		}
	}
}
