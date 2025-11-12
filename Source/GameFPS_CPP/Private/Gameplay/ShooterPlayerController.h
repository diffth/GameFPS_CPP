// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include <Widget/ShooterGameplayWidget.h>
#include "ShooterPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class AShooterPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void OnEndGameCPP();

protected:
	virtual void BeginPlay() override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UInputMappingContext> ShooterInputMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> GameplayWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> ResultWidget;
};
