// Copyright Epic Games, Inc. All Rights Reserved.

#include "PortforlioGameMode.h"
#include "PortforlioCharacter.h"
#include "UObject/ConstructorHelpers.h"

APortforlioGameMode::APortforlioGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
