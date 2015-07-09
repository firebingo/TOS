// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "TOS.h"
#include "TOSGameMode.h"
#include "TOSPawn.h"

ATOSGameMode::ATOSGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ATOSPawn::StaticClass();
}

