// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "GAS/Abilities/GAGameplayAbility.h"
#include "CardGameCharacter.generated.h"

class GAAttributeSet;

UCLASS(Blueprintable)
class ACardGameCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GAS", meta = (AllowPrivateAccess = "true"))
	class UAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GAS", meta = (AllowPrivateAccess = "true"))
	class UGAAttributeSet* AttributeSet;

public:
	ACardGameCharacter();

	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	virtual void PossessedBy(AController* NewController) override;

	virtual void InitializeAbilities();
	virtual void InitializeEffects();

	void OnHealthChangedNative(const FOnAttributeChangeData& Data);
	void OnManaChangedNative(const FOnAttributeChangeData& Data);
	void OnEnergyChangedNative(const FOnAttributeChangeData& Data);

	void OnMagicBlockChangedNative(const FOnAttributeChangeData& Data);
	void OnPhysicalBlockChangedNative(const FOnAttributeChangeData& Data);
	void OnMagicAttackChangedNative(const FOnAttributeChangeData& Data);
	void OnPhysicalAttackChangedNative(const FOnAttributeChangeData& Data);
	void OnMagicDefenceChangedNative(const FOnAttributeChangeData& Data);
	void OnPhysicalDefenceChangedNative(const FOnAttributeChangeData& Data);

	UFUNCTION(BlueprintImplementableEvent)
	void OnHealthChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent)
	void OnManaChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent)
	void OnEnergyChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent)
	void OnMagicBlockChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent)
	void OnPhysicalBlockChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent)
	void OnMagicAttackChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent)
	void OnPhysicalAttackChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent)
	void OnMagicDefenceChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent)
	void OnPhysicalDefenceChanged(float OldValue, float NewValue);

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "GAS")
	TArray<TSubclassOf<class UGAGameplayAbility>> DefaultAbilities;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "GAS")
	TArray<TSubclassOf<class UGameplayEffect>> DefaultEffects;

	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;

protected:
	virtual void BeginPlay() override;
private:
};

