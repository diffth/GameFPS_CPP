// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include <Components/TextBlock.h>
#include "ShooterGameplayWidget.generated.h"

/**
 * 
 */
UCLASS()
class UShooterGameplayWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(BlueprintReadOnly, meta=(BlueprintBaseOnly))
	TObjectPtr<UTextBlock> TextTime;

	UPROPERTY(BlueprintReadOnly, meta=(BlueprintBaseOnly))
	TObjectPtr<UTextBlock> TextRemainingBullets;

	UPROPERTY(BlueprintReadOnly, meta=(BlueprintBaseOnly))
	TObjectPtr<UTextBlock> TextMaxRemainingBullets;

	UPROPERTY(BlueprintReadOnly, meta=(BlueprintBaseOnly))
	TObjectPtr<UTextBlock> TextWeaponName;

	UPROPERTY(BlueprintReadOnly, meta=(BlueprintBaseOnly))
	TObjectPtr<UTextBlock> TextFireMode;

};
