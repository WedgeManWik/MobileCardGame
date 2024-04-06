// Fill out your copyright notice in the Description page of Project Settings.


#include "ExecCalcMagicDamage.h"
#include "CardGame/GAS/AttributeSets/GAAttributeSet.h"

struct MagicDamageCapture
{
	DECLARE_ATTRIBUTE_CAPTUREDEF(Health);
	DECLARE_ATTRIBUTE_CAPTUREDEF(MaxHealth);
	DECLARE_ATTRIBUTE_CAPTUREDEF(MagicAttackEffectiveness);
	DECLARE_ATTRIBUTE_CAPTUREDEF(MagicDefensiveResistence);

	MagicDamageCapture()
	{
		DEFINE_ATTRIBUTE_CAPTUREDEF(UGAAttributeSet, Health, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UGAAttributeSet, MaxHealth, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UGAAttributeSet, MagicAttackEffectiveness, Source, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UGAAttributeSet, MagicDefensiveResistence, Target, false);
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
	RelevantAttributesToCapture.Add(GetMagicDamageCapture().MagicAttackEffectivenessDef);
	RelevantAttributesToCapture.Add(GetMagicDamageCapture().MagicDefensiveResistenceDef);
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

	float MagicAttackEffectiveness = 0.0f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(GetMagicDamageCapture().MagicAttackEffectivenessDef, EvaluationParameters, MagicAttackEffectiveness);

	float MagicDefensiveResistence = 0.0f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(GetMagicDamageCapture().MagicDefensiveResistenceDef, EvaluationParameters, MagicDefensiveResistence);

	float BaseDamage = FMath::Max<float>(Spec.GetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag(FName("Event.Damage")), false, -1.0f), 0.0f);

	float DamageMultiplier = (MagicAttackEffectiveness + 1.f) * ((1.f - MagicDefensiveResistence) + 1);
	float DamageToDeal = BaseDamage * DamageMultiplier;

	ExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(GetMagicDamageCapture().HealthProperty, EGameplayModOp::Additive, -DamageToDeal));
}


