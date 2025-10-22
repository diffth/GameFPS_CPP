// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameFPS_CPPGameMode.h"
#include "GameFPS_CPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGameFPS_CPPGameMode::AGameFPS_CPPGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
