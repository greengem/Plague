// Copyright Epic Games, Inc. All Rights Reserved.

#include "PlagueGameMode.h"
#include "PlagueCharacter.h"
#include "UObject/ConstructorHelpers.h"

APlagueGameMode::APlagueGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
