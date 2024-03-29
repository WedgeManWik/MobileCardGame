// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CardGameCharacter.generated.h"

UCLASS(Blueprintable)
class ACardGameCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ACardGameCharacter();

	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;

private:
};

