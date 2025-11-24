// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun/ShooterGun.h"
#include "ShooterBullet.h"
#include <Kismet/KismetSystemLibrary.h>
#include <Kismet/GameplayStatics.h>
#include <Gameplay/ShooterCharacter.h>

// Sets default values
AShooterGun::AShooterGun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AShooterGun::FireBulletCPP(UClass* BulletClass, FTransform Transform)
{
	AShooterBullet* Bullet = Cast<AShooterBullet>(GetWorld()->SpawnActor(BulletClass, &Transform));

	if (Bullet)
	{
		Bullet->SetSpeedCPP(BulletSpeedCPP);
	}
}

void AShooterGun::RegisterNextFireCPP(float Duration)
{
	TimerFireCPP = UKismetSystemLibrary::K2_SetTimer(this, TEXT("Fire"), Duration, false);
}

void AShooterGun::FireReleaseCPP()
{
	IsFirePressedCPP = false;
	GetWorld()->GetTimerManager().ClearTimer(TimerFireCPP);
}

bool AShooterGun::IsFiringCPP() const
{
	return IsFirePressedCPP && GetWorld()->GetTimerManager().IsTimerActive(TimerFireCPP);
}

void AShooterGun::MakeRecoilCPP()
{
	AShooterCharacter* Character = Cast<AShooterCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	if (Character)
	{
		float Pitch = FMath::FRandRange(-0.15, -0.05);
		Character->AddControllerPitchInput(Pitch);
		 
		float Yaw = FMath::FRandRange(0.05, 0.15);
		Character->AddControllerYawInput(Yaw);
	}
}

// Called when the game starts or when spawned
void AShooterGun::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShooterGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

