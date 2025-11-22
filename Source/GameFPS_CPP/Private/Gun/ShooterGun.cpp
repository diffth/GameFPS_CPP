// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun/ShooterGun.h"
#include "ShooterBullet.h"
#include <Kismet/KismetSystemLibrary.h>

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

