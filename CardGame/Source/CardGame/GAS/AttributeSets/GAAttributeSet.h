// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "GAAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
 	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
 	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
 	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
 	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class CARDGAME_API UGAAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
    UGAAttributeSet();

    ATTRIBUTE_ACCESSORS(UGAAttributeSet, Health);
    ATTRIBUTE_ACCESSORS(UGAAttributeSet, MaxHealth);
    ATTRIBUTE_ACCESSORS(UGAAttributeSet, Mana);
    ATTRIBUTE_ACCESSORS(UGAAttributeSet, MaxMana);
    ATTRIBUTE_ACCESSORS(UGAAttributeSet, MagicAttackEffectiveness);
    ATTRIBUTE_ACCESSORS(UGAAttributeSet, MagicDefensiveResistence);
    ATTRIBUTE_ACCESSORS(UGAAttributeSet, PhysicalAttackEffectiveness);
    ATTRIBUTE_ACCESSORS(UGAAttributeSet, PhysicalDefensiveResistence);

    UPROPERTY(BlueprintReadOnly, Category = "Attributes", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData Health;

    UPROPERTY(BlueprintReadOnly, Category = "Attributes", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData MaxHealth;

    UPROPERTY(BlueprintReadOnly, Category = "Attributes", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData Mana;

    UPROPERTY(BlueprintReadOnly, Category = "Attributes", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData MaxMana;

    UPROPERTY(BlueprintReadOnly, Category = "Attributes", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData MagicAttackEffectiveness;

    UPROPERTY(BlueprintReadOnly, Category = "Attributes", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData MagicDefensiveResistence;

    UPROPERTY(BlueprintReadOnly, Category = "Attributes", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData PhysicalAttackEffectiveness;

    UPROPERTY(BlueprintReadOnly, Category = "Attributes", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData PhysicalDefensiveResistence;

    virtual void PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const override;
    virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;

    void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;

    virtual void ClampAttributeOnChange(const FGameplayAttribute& Attribute, float& NewValue) const;
};
