// Copyright Epic Games, Inc. All Rights Reserved.

#include "VOLLEYBALLGameMode.h"
#include "VOLLEYBALLCharacter.h"
#include "UObject/ConstructorHelpers.h"

AVOLLEYBALLGameMode::AVOLLEYBALLGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
