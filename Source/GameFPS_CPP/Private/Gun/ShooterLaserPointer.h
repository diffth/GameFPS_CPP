// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShooterLaserPointer.generated.h"

UCLASS()
class AShooterLaserPointer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShooterLaserPointer();

	UFUNCTION(BlueprintCallable)
	float GetEndPointOfLaserCPP(FVector Start, FVector End) const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
