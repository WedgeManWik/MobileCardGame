// Fill out your copyright notice in the Description page of Project Settings.


#include "GAAttributeSet.h"

UGAAttributeSet::UGAAttributeSet()
{
	MaxHealth = 100.f;
	MaxMana = 50.f;
	MaxEnergy = 50.f;

	Health = MaxHealth;
	Mana = MaxMana;
	Energy = MaxEnergy;
}

void UGAAttributeSet::PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const
{
	Super::PreAttributeBaseChange(Attribute, NewValue);

	ClampAttributeOnChange(Attribute, NewValue);
}

void UGAAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	ClampAttributeOnChange(Attribute, NewValue);
}

void UGAAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);
}

void UGAAttributeSet::ClampAttributeOnChange(const FGameplayAttribute& Attribute, float& NewValue) const
{
	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxHealth());
	}
	else if (Attribute == GetManaAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxMana());
	}
	else if (Attribute == GetEnergyAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxEnergy());
	}
	else if (Attribute == GetMagicAttackAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, 1.f);
	}
	else if (Attribute == GetMagicDefenceAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, 1.f);
	}
	else if (Attribute == GetPhysicalAttackAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, 1.f);
	}
	else if (Attribute == GetPhysicalDefenceAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, 1.f);
	}
	else if (Attribute == GetMagicBlockAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, NewValue);
	}
	else if (Attribute == GetPhysicalBlockAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, NewValue);
	}
}
