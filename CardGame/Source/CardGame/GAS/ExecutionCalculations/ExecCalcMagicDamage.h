// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "ExecCalcMagicDamage.generated.h"

UCLASS()
class CARDGAME_API UExecCalcMagicDamage : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()

	UExecCalcMagicDamage();

	virtual void Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& ExecutionOutput) const override;
};
