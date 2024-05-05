// Copyright Epic Games, Inc. All Rights Reserved.

#include "CardGameCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/DecalComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Materials/Material.h"
#include "Engine/World.h"
//#include "AbilitySystemComponent.h"
#include "GAS/Abilities/GAGameplayAbility.h"
#include "GAS/AttributeSets/GAAttributeSet.h"

ACardGameCharacter::ACardGameCharacter()
{
	// Activate ticking in order to update the cursor every frame.
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>("AbilitySystemComponent");

	AttributeSet = CreateDefaultSubobject<UGAAttributeSet>("AttributeSet");
}

UAbilitySystemComponent* ACardGameCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void ACardGameCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if (!AbilitySystemComponent)
	{
		return;
	}

	AbilitySystemComponent->InitAbilityActorInfo(this, this);

	InitializeAbilities();
	InitializeEffects();
}

void ACardGameCharacter::InitializeAbilities()
{
	if (!HasAuthority() || !AbilitySystemComponent)
	{
		for (TSubclassOf<UGAGameplayAbility>& Ability : DefaultAbilities)
		{
			AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(Ability, 1, static_cast<int32>(Ability.GetDefaultObject()->AbilityInputID), this));
		}
	}
}

void ACardGameCharacter::InitializeEffects()
{
	if (!AbilitySystemComponent)
	{
		return;
	}

	FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
	EffectContext.AddSourceObject(this);

	for (TSubclassOf<UGameplayEffect>& Effect : DefaultEffects)
	{
		FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(Effect, 1, EffectContext);
		if (SpecHandle.IsValid())
		{
			FActiveGameplayEffectHandle GEHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
		}
	}
}

void ACardGameCharacter::OnHealthChangedNative(const FOnAttributeChangeData& Data)
{
	OnHealthChanged(Data.OldValue, Data.NewValue);
}

void ACardGameCharacter::OnManaChangedNative(const FOnAttributeChangeData& Data)
{
	OnManaChanged(Data.OldValue, Data.NewValue);
}

void ACardGameCharacter::OnEnergyChangedNative(const FOnAttributeChangeData& Data)
{
	OnEnergyChanged(Data.OldValue, Data.NewValue);
}

void ACardGameCharacter::OnMagicBlockChangedNative(const FOnAttributeChangeData& Data)
{
	OnMagicBlockChanged(Data.OldValue, Data.NewValue);
}

void ACardGameCharacter::OnPhysicalBlockChangedNative(const FOnAttributeChangeData& Data)
{
	OnPhysicalBlockChanged(Data.OldValue, Data.NewValue);
}

void ACardGameCharacter::OnMagicAttackChangedNative(const FOnAttributeChangeData& Data)
{
	OnMagicAttackChanged(Data.OldValue, Data.NewValue);
}

void ACardGameCharacter::OnPhysicalAttackChangedNative(const FOnAttributeChangeData& Data)
{
	OnPhysicalAttackChanged(Data.OldValue, Data.NewValue);
}

void ACardGameCharacter::OnMagicDefenceChangedNative(const FOnAttributeChangeData& Data)
{
	OnMagicDefenceChanged(Data.OldValue, Data.NewValue);
}

void ACardGameCharacter::OnPhysicalDefenceChangedNative(const FOnAttributeChangeData& Data)
{
	OnPhysicalDefenceChanged(Data.OldValue, Data.NewValue);
}

void ACardGameCharacter::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);
}

void ACardGameCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetHealthAttribute()).AddUObject(this, &ACardGameCharacter::OnHealthChangedNative);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetManaAttribute()).AddUObject(this, &ACardGameCharacter::OnManaChangedNative);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetEnergyAttribute()).AddUObject(this, &ACardGameCharacter::OnEnergyChangedNative);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMagicBlockAttribute()).AddUObject(this, &ACardGameCharacter::OnMagicBlockChangedNative);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetPhysicalBlockAttribute()).AddUObject(this, &ACardGameCharacter::OnPhysicalBlockChangedNative);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMagicAttackAttribute()).AddUObject(this, &ACardGameCharacter::OnMagicAttackChangedNative);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetPhysicalAttackAttribute()).AddUObject(this, &ACardGameCharacter::OnPhysicalAttackChangedNative);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMagicDefenceAttribute()).AddUObject(this, &ACardGameCharacter::OnMagicDefenceChangedNative);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetPhysicalDefenceAttribute()).AddUObject(this, &ACardGameCharacter::OnPhysicalDefenceChangedNative);
	}
}

