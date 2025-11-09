// Fill out your copyright notice in the Description page of Project Settings.

#include "Gameplay/ShooterCharacter.h"
#include <GameFramework/CharacterMovementComponent.h>
#include <Kismet/GameplayStatics.h>

// Sets default values
AShooterCharacter::AShooterCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ShadowBodyCPP = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ShadowBodyCPP"));
	//Null üũ
	if (ShadowBodyCPP)
	{
		ShadowBodyCPP->SetupAttachment(RootComponent);
		WeaponInBackCPP = CreateDefaultSubobject<UChildActorComponent>(TEXT("WeaponInBackCPP"));
		if (WeaponInBackCPP)
		{
			WeaponInBackCPP->SetupAttachment(ShadowBodyCPP);
		}
	}
	LowerBodyCPP = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LowerBodyCPP"));
	LowerBodyCPP->SetupAttachment(RootComponent);

	CameraCPP = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraCPP"));
	if (CameraCPP)
	{
		CameraCPP->SetupAttachment(RootComponent);
		FirstPersonCPP = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FirstPersonCPP"));
		if (FirstPersonCPP)
		{
			FirstPersonCPP->SetupAttachment(CameraCPP);
			WeaponInHandCPP = CreateDefaultSubobject<UChildActorComponent>(TEXT("WeaponInHandCPP"));
			if (WeaponInHandCPP)
			{
				WeaponInHandCPP->SetupAttachment(FirstPersonCPP);
			}
		}
	}
}

bool AShooterCharacter::CanRunCPP() const
{
	return (MoveForwardValueCPP > 0.0) && IsRunPressedCPP;
}

void AShooterCharacter::TickRunCPP()
{
	if (CanRunCPP())
	{
		switch (StateCPP)
		{
		case StateOfCharacterCPP::Idle:
			StateCPP = StateOfCharacterCPP::Running;
			GetCharacterMovement()->MaxWalkSpeed *= 2.0;
		}
	}
	else
	{
		switch (StateCPP)
		{
		case StateOfCharacterCPP::Running:
			StateCPP = StateOfCharacterCPP::Idle;
			GetCharacterMovement()->MaxWalkSpeed *= 0.5;
		}
	}
}

void AShooterCharacter::OnFootstepLeftCPP()
{
	UGameplayStatics::PlaySoundAtLocation(this, FootstepLeftSoundCPP, LowerBodyCPP->GetSocketLocation("foot_l"));
}

void AShooterCharacter::OnFootstepRightCPP()
{
	UGameplayStatics::PlaySoundAtLocation(this, FootstepRightSoundCPP, LowerBodyCPP->GetSocketLocation("foot_r"));
}

float AShooterCharacter::GetSpeedCPP() const
{
	return GetVelocity().Length();
}

// Called when the game starts or when spawned
void AShooterCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void AShooterCharacter::OnTriggerRun(const FInputActionValue& value)
{

}

// Called every frame
void AShooterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AShooterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
