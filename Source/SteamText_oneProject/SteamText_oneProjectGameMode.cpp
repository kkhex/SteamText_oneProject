// Copyright Epic Games, Inc. All Rights Reserved.

#include "SteamText_oneProjectGameMode.h"
#include "SteamText_oneProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASteamText_oneProjectGameMode::ASteamText_oneProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
