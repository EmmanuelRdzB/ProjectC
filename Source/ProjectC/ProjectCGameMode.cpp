// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectCGameMode.h"
#include "ProjectCPlayerController.h"
#include "ProjectCCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectCGameMode::AProjectCGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AProjectCPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}