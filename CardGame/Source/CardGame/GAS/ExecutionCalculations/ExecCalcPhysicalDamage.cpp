// Fill out your copyright notice in the Description page of Project Settings.


#include "ExecCalcPhysicalDamage.h"
#include "CardGame/GAS/AttributeSets/GAAttributeSet.h"

struct PhysicalDamageCapture
{
	DECLARE_ATTRIBUTE_CAPTUREDEF(Health);
	DECLARE_ATTRIBUTE_CAPTUREDEF(MaxHealth);
	DECLARE_ATTRIBUTE_CAPTUREDEF(PhysicalAttack);
	DECLARE_ATTRIBUTE_CAPTUREDEF(PhysicalDefence);
	DECLARE_ATTRIBUTE_CAPTUREDEF(PhysicalBlock);

	PhysicalDamageCapture()
	{
		DEFINE_ATTRIBUTE_CAPTUREDEF(UGAAttributeSet, Health, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UGAAttributeSet, MaxHealth, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UGAAttributeSet, PhysicalAttack, Source, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UGAAttributeSet, PhysicalDefence, Target, false);
		DEFINE_ATTRIBUTE_CAPTUREDEF(UGAAttributeSet, PhysicalBlock, Target, false);
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
	RelevantAttributesToCapture.Add(GetPhysicalDamageCapture().PhysicalAttackDef);
	RelevantAttributesToCapture.Add(GetPhysicalDamageCapture().PhysicalDefenceDef);
	RelevantAttributesToCapture.Add(GetPhysicalDamageCapture().PhysicalBlockDef);
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

	float PhysicalAttack = 0.0f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(GetPhysicalDamageCapture().PhysicalAttackDef, EvaluationParameters, PhysicalAttack);

	float PhysicalDefence = 0.0f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(GetPhysicalDamageCapture().PhysicalDefenceDef, EvaluationParameters, PhysicalDefence);

	float PhysicalBlock = 0.0f;
	ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(GetPhysicalDamageCapture().PhysicalBlockDef, EvaluationParameters, PhysicalBlock);

	float BaseDamage = FMath::Max<float>(Spec.GetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag(FName("Attribute.ChangeAmount")), false, -1.0f), 0.0f);

	float DamageMultiplier = ((PhysicalAttack / 100.f) + 1.f) * (1.f - ((PhysicalDefence / 100.f) * 0.5f));
	float DamageToDeal = FMath::RoundHalfFromZero(BaseDamage * DamageMultiplier);

	float LeftOverDamage = FMath::Max(DamageToDeal - PhysicalBlock, 0.f);
	ExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(GetPhysicalDamageCapture().PhysicalBlockProperty, EGameplayModOp::Override, FMath::Max(PhysicalBlock - DamageToDeal, 0.f)));

	if (LeftOverDamage > 0.f)
	{
		ExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(GetPhysicalDamageCapture().HealthProperty, EGameplayModOp::Override, FMath::Max(Health - LeftOverDamage, 0.f)));
	}
}


