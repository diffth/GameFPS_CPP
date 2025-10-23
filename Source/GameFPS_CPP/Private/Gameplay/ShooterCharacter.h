  // Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include <Camera/CameraComponent.h>
#include "ShooterCharacter.generated.h"

UCLASS()
class AShooterCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AShooterCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USkeletalMeshComponent> ShadowBodyCPP;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UChildActorComponent> WeaponInBackCPP;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USkeletalMeshComponent> LowerBodyCPP;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UCameraComponent> CameraCPP;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<USkeletalMeshComponent> FirstPersonCPP;
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UChildActorComponent> WeaponInHandCPP;


};
