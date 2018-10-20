// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "GetMeowttaHereGameMode.h"
#include "GetMeowttaHereHUD.h"
#include "GetMeowttaHereCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGetMeowttaHereGameMode::AGetMeowttaHereGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGetMeowttaHereHUD::StaticClass();
}
