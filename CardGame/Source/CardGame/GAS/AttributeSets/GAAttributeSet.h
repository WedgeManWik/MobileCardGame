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
    ATTRIBUTE_ACCESSORS(UGAAttributeSet, Energy);
    ATTRIBUTE_ACCESSORS(UGAAttributeSet, MaxEnergy);

    ATTRIBUTE_ACCESSORS(UGAAttributeSet, MagicAttack);
    ATTRIBUTE_ACCESSORS(UGAAttributeSet, MagicDefence);
    ATTRIBUTE_ACCESSORS(UGAAttributeSet, PhysicalAttack);
    ATTRIBUTE_ACCESSORS(UGAAttributeSet, PhysicalDefence);

    ATTRIBUTE_ACCESSORS(UGAAttributeSet, MagicBlock);
    ATTRIBUTE_ACCESSORS(UGAAttributeSet, PhysicalBlock);

    UPROPERTY(BlueprintReadOnly, Category = "Attributes", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData Health;

    UPROPERTY(BlueprintReadOnly, Category = "Attributes", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData MaxHealth;

    UPROPERTY(BlueprintReadOnly, Category = "Attributes", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData Mana;

    UPROPERTY(BlueprintReadOnly, Category = "Attributes", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData MaxMana;

    UPROPERTY(BlueprintReadOnly, Category = "Attributes", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData Energy;

    UPROPERTY(BlueprintReadOnly, Category = "Attributes", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData MaxEnergy;

    UPROPERTY(BlueprintReadOnly, Category = "Attributes", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData MagicAttack;

    UPROPERTY(BlueprintReadOnly, Category = "Attributes", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData MagicDefence;

    UPROPERTY(BlueprintReadOnly, Category = "Attributes", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData PhysicalAttack;

    UPROPERTY(BlueprintReadOnly, Category = "Attributes", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData PhysicalDefence;

    UPROPERTY(BlueprintReadOnly, Category = "Attributes", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData MagicBlock;

    UPROPERTY(BlueprintReadOnly, Category = "Attributes", Meta = (AllowPrivateAccess = true))
    FGameplayAttributeData PhysicalBlock;

    virtual void PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const override;
    virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;

    void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;

    virtual void ClampAttributeOnChange(const FGameplayAttribute& Attribute, float& NewValue) const;
};
