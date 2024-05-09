// Fill out your copyright notice in the Description page of Project Settings.


#include "ExecCalcMagicDamage.h"
#include "CardGame/GAS/AttributeSets/GAAttributeSet.h"

struct MagicDamageCapture
{
	DECLARE_ATTRIBUTE_CAPTUREDEF(Health);
	DECLARE_ATTRIBUTE_CAPTUREDEF(MaxHealth);
	DECLARE_ATTRIBUTE_CAPTUREDEF(MagicAttack);
	DECLARE_ATTRIBUTE_CAPTUREDEF(MagicDefence);
	DECLARE_ATTRIBUTE_CAPTUREDEF(MagicBlock);

	MagicDamageCapture()
	{
		DEFINE_ATTRIBUTE_CAPTUREDEF(UGAAttributeSet, Health, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UGAAttributeSet, MaxHealth, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UGAAttributeSet, MagicAttack, Source, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UGAAttributeSet, MagicDefence, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UGAAttributeSet, MagicBlock, Target, false);
	}
};

static MagicDamageCapture& GetMagicDamageCapture()
{
	static MagicDamageCapture MagicDamageCapture;
	return MagicDamageCapture;
}

UExecCalcMagicDamage::UExecCalcMagicDamage()
{
	RelevantAttributesToCapture.Add(GetMagicDamageCapture().HealthDef);
	RelevantAttributesToCapture.Add(GetMagicDamageCapture().MaxHealthDef);
	RelevantAttributesToCapture.Add(GetMagicDamageCapture().MagicAttackDef);
	RelevantAttributesToCapture.Add(GetMagicDamageCapture().MagicDefenceDef);
	RelevantAttributesToCapture.Add(GetMagicDamageCapture().MagicBlockDef);
}

void UExecCalcMagicDamage::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& ExecutionOutput) const
{
	UAbilitySystemComponent* TargetAbilitySystemComponent = ExecutionParams.GetTargetAbilitySystemComponent();
	AActor* TargetActor = TargetAbilitySystemComponent ? TargetAbilitySystemComponent->GetAvatarActor() : nullptr;

	UAbilitySystemComponent* SourceAbilitySystemComponent = ExecutionParams.GetTargetAbilitySystemComponent();
	AActor* SourceActor = SourceAbilitySystemComponent ? SourceAbilitySystemComponent->GetAvatarActor() : nullptr;

	const FGameplayEffectSpec& Spec = ExecutionParams.GetOwningSpec();
	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

	FAggregatorEvaluateParameters EvaluationParameters;
	EvaluationParameters.SourceTags = SourceTags;
	EvaluationParameters.TargetTags = TargetTags;

	float Health = 0.0f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(GetMagicDamageCapture().HealthDef, EvaluationParameters, Health);

	float MaxHealth = 0.0f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(GetMagicDamageCapture().MaxHealthDef, EvaluationParameters, MaxHealth);

	float MagicAttack = 0.0f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(GetMagicDamageCapture().MagicAttackDef, EvaluationParameters, MagicAttack);

	float MagicDefence = 0.0f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(GetMagicDamageCapture().MagicDefenceDef, EvaluationParameters, MagicDefence);

	float MagicBlock = 0.0f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(GetMagicDamageCapture().MagicBlockDef, EvaluationParameters, MagicBlock);

	float BaseDamage = FMath::Max<float>(Spec.GetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag(FName("Attribute.ChangeAmount")), false, -1.0f), 0.0f);

	float DamageMultiplier = ((MagicAttack / 100.f) + 1.f) * (1.f - ((MagicDefence / 100.f) * 0.5f));
	int DamageToDealInt = FMath::TruncToInt(BaseDamage * DamageMultiplier * 100.f);
	float DamageToDeal = DamageToDealInt / 100.f;

	float LeftOverDamage = FMath::Max(DamageToDeal - MagicBlock, 0.f);
	ExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(GetMagicDamageCapture().MagicBlockProperty, EGameplayModOp::Override, FMath::Max(MagicBlock - DamageToDeal, 0.f)));

	if (LeftOverDamage > 0.f)
	{
		ExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(GetMagicDamageCapture().HealthProperty, EGameplayModOp::Override, FMath::Max(Health - LeftOverDamage, 0.f)));
	}
}


