// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CardGame.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CARDGAME_CardGame_generated_h
#error "CardGame.generated.h already included, missing '#pragma once' in CardGame.h"
#endif
#define CARDGAME_CardGame_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_janio_Documents_GitHub_MobileCardGame_CardGame_Source_CardGame_CardGame_h


#define FOREACH_ENUM_EABILITYINPUTID(op) \
	op(EAbilityInputID::None) \
	op(EAbilityInputID::Confirm) \
	op(EAbilityInputID::Cancel) \
	op(EAbilityInputID::FireAbility) 

enum class EAbilityInputID : uint8;
template<> struct TIsUEnumClass<EAbilityInputID> { enum { Value = true }; };
template<> CARDGAME_API UEnum* StaticEnum<EAbilityInputID>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
