// Fill out your copyright notice in the Description page of Project Settings.


#include "ExecCalcPhysicalDamage.h"
#include "CardGame/GAS/AttributeSets/GAAttributeSet.h"

struct PhysicalDamageCapture
{
	DECLARE_ATTRIBUTE_CAPTUREDEF(Health);
	DECLARE_ATTRIBUTE_CAPTUREDEF(MaxHealth);
	DECLARE_ATTRIBUTE_CAPTUREDEF(PhysicalAttackEffectiveness);
	DECLARE_ATTRIBUTE_CAPTUREDEF(PhysicalDefensiveResistence);

	PhysicalDamageCapture()
	{
		DEFINE_ATTRIBUTE_CAPTUREDEF(UGAAttributeSet, Health, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UGAAttributeSet, MaxHealth, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UGAAttributeSet, PhysicalAttackEffectiveness, Source, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UGAAttributeSet, PhysicalDefensiveResistence, Target, false);
	}
};

static PhysicalDamageCapture& GetPhysicalDamageCapture()
{
	static PhysicalDamageCapture PhysicalDamageCapture;
	return PhysicalDamageCapture;
}

UExecCalcPhysicalDamage::UExecCalcPhysicalDamage()
{
	RelevantAttributesToCapture.Add(GetPhysicalDamageCapture().HealthDef);
	RelevantAttributesToCapture.Add(GetPhysicalDamageCapture().MaxHealthDef);
	RelevantAttributesToCapture.Add(GetPhysicalDamageCapture().PhysicalAttackEffectivenessDef);
	RelevantAttributesToCapture.Add(GetPhysicalDamageCapture().PhysicalDefensiveResistenceDef);
}

void UExecCalcPhysicalDamage::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& ExecutionOutput) const
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
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(GetPhysicalDamageCapture().HealthDef, EvaluationParameters, Health);

	float MaxHealth = 0.0f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(GetPhysicalDamageCapture().MaxHealthDef, EvaluationParameters, MaxHealth);

	float PhysicalAttackEffectiveness = 0.0f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(GetPhysicalDamageCapture().PhysicalAttackEffectivenessDef, EvaluationParameters, PhysicalAttackEffectiveness);

	float PhysicalDefensiveResistence = 0.0f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(GetPhysicalDamageCapture().PhysicalDefensiveResistenceDef, EvaluationParameters, PhysicalDefensiveResistence);

	float BaseDamage = FMath::Max<float>(Spec.GetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag(FName("Event.Damage")), false, -1.0f), 0.0f);

	float DamageMultiplier = (PhysicalAttackEffectiveness + 1.f) * ((1.f - PhysicalDefensiveResistence) + 1);
	float DamageToDeal = BaseDamage * DamageMultiplier;

	ExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(GetPhysicalDamageCapture().HealthProperty, EGameplayModOp::Additive, -DamageToDeal));
}


