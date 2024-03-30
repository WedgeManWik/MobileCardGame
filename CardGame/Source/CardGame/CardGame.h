// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EAbilityInputID : uint8
{
	None,
	Confirm,
	Cancel,
	FireAbility
};

DECLARE_LOG_CATEGORY_EXTERN(LogCardGame, Log, All);
