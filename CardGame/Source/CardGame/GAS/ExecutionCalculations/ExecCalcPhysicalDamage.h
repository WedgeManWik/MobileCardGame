// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "ExecCalcPhysicalDamage.generated.h"

UCLASS()
class CARDGAME_API UExecCalcPhysicalDamage : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()

	UExecCalcPhysicalDamage();

	virtual void Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& ExecutionOutput) const override;
};
