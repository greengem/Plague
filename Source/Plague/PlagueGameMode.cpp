// Copyright Epic Games, Inc. All Rights Reserved.

#include "PlagueGameMode.h"
#include "PlagueCharacter.h"
#include "UObject/ConstructorHelpers.h"

APlagueGameMode::APlagueGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Characters/BP_ThirdPersonCharacter"));
	
	//MetaHuman
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/MetaHumans/Myles/BP_Myles"));
	
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

    // Set custom player controller class to our Blueprinted controller
    static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/Input/Controllers/PC_Game_Controller"));
    if (PlayerControllerBPClass.Class != nullptr)
    {
        PlayerControllerClass = PlayerControllerBPClass.Class;
    }
}
