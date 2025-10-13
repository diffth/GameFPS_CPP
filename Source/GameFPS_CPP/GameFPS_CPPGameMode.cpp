// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameFPS_CPPGameMode.h"
#include "GameFPS_CPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGameFPS_CPPGameMode::AGameFPS_CPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
