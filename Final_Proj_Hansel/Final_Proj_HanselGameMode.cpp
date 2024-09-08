// Copyright Epic Games, Inc. All Rights Reserved.

#include "Final_Proj_HanselGameMode.h"
#include "Final_Proj_HanselCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFinal_Proj_HanselGameMode::AFinal_Proj_HanselGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
