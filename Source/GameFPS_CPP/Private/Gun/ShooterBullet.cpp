// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun/ShooterBullet.h"

// Sets default values
AShooterBullet::AShooterBullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BulletCPP = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BulletCPP"));
	if (BulletCPP)
	{
		RootComponent = BulletCPP;
	}
}

void AShooterBullet::SetSpeedCPP(float Value)
{
	SpeedCPP = Value;
}

// Called when the game starts or when spawned
void AShooterBullet::BeginPlay()
{
	Super::BeginPlay();
	
	if (BulletCPP)
	{
		BulletCPP->OnComponentHit.AddUniqueDynamic(this, &AShooterBullet::OnCompHitCall);
	}
}

void AShooterBullet::OnCompHitCall(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalInpulse, const FHitResult& Hit)
{
	Destroy();
}

// Called every frame
void AShooterBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

 