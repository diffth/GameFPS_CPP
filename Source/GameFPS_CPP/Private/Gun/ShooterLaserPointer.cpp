// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun/ShooterLaserPointer.h"

// Sets default values
AShooterLaserPointer::AShooterLaserPointer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShooterLaserPointer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShooterLaserPointer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

