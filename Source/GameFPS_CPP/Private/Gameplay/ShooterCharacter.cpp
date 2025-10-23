// Fill out your copyright notice in the Description page of Project Settings.

#include "Gameplay/ShooterCharacter.h"

// Sets default values
AShooterCharacter::AShooterCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ShadowBodyCPP = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ShadowBodyCPP"));
	ShadowBodyCPP->SetupAttachment(RootComponent);

	WeaponInBackCPP = CreateDefaultSubobject<UChildActorComponent>(TEXT("WeaponInBackCPP"));
	WeaponInBackCPP->SetupAttachment(ShadowBodyCPP);

	LowerBodyCPP = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LowerBodyCPP"));
	LowerBodyCPP->SetupAttachment(RootComponent);

	CameraCPP = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraCPP"));
	CameraCPP->SetupAttachment(RootComponent);

	FirstPersonCPP = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FirstPersonCPP"));
	FirstPersonCPP->SetupAttachment(CameraCPP);

	WeaponInHandCPP = CreateDefaultSubobject<UChildActorComponent>(TEXT("WeaponInHandCPP"));
	WeaponInHandCPP->SetupAttachment(FirstPersonCPP);
}

// Called when the game starts or when spawned
void AShooterCharacter::BeginPlay()
{
	Super::BeginPlay();
	
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
