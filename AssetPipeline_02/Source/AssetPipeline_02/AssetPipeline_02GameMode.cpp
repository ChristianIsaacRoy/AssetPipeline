// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "AssetPipeline_02GameMode.h"
#include "AssetPipeline_02Character.h"
#include "UObject/ConstructorHelpers.h"

AAssetPipeline_02GameMode::AAssetPipeline_02GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
