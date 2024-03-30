// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardGame/CardGameCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCardGameCharacter() {}
// Cross Module References
	CARDGAME_API UClass* Z_Construct_UClass_ACardGameCharacter();
	CARDGAME_API UClass* Z_Construct_UClass_ACardGameCharacter_NoRegister();
	CARDGAME_API UClass* Z_Construct_UClass_UGAAttributeSet_NoRegister();
	CARDGAME_API UClass* Z_Construct_UClass_UGAGameplayAbility_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CardGame();
// End Cross Module References
	void ACardGameCharacter::StaticRegisterNativesACardGameCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACardGameCharacter);
	UClass* Z_Construct_UClass_ACardGameCharacter_NoRegister()
	{
		return ACardGameCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ACardGameCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultAbilities;
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultEffects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACardGameCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CardGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACardGameCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CardGameCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "CardGameCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACardGameCharacter_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GAS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CardGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACardGameCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACardGameCharacter, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACardGameCharacter_Statics::NewProp_AbilitySystemComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACardGameCharacter_Statics::NewProp_AbilitySystemComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACardGameCharacter_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GAS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CardGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACardGameCharacter_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACardGameCharacter, AttributeSet), Z_Construct_UClass_UGAAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACardGameCharacter_Statics::NewProp_AttributeSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACardGameCharacter_Statics::NewProp_AttributeSet_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACardGameCharacter_Statics::NewProp_DefaultAbilities_Inner = { "DefaultAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGAGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACardGameCharacter_Statics::NewProp_DefaultAbilities_MetaData[] = {
		{ "Category", "GAS" },
		{ "ModuleRelativePath", "CardGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACardGameCharacter_Statics::NewProp_DefaultAbilities = { "DefaultAbilities", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACardGameCharacter, DefaultAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACardGameCharacter_Statics::NewProp_DefaultAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACardGameCharacter_Statics::NewProp_DefaultAbilities_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACardGameCharacter_Statics::NewProp_DefaultEffects_Inner = { "DefaultEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACardGameCharacter_Statics::NewProp_DefaultEffects_MetaData[] = {
		{ "Category", "GAS" },
		{ "ModuleRelativePath", "CardGameCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACardGameCharacter_Statics::NewProp_DefaultEffects = { "DefaultEffects", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACardGameCharacter, DefaultEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACardGameCharacter_Statics::NewProp_DefaultEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACardGameCharacter_Statics::NewProp_DefaultEffects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACardGameCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardGameCharacter_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardGameCharacter_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardGameCharacter_Statics::NewProp_DefaultAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardGameCharacter_Statics::NewProp_DefaultAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardGameCharacter_Statics::NewProp_DefaultEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardGameCharacter_Statics::NewProp_DefaultEffects,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACardGameCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ACardGameCharacter, IAbilitySystemInterface), false },  // 220555618
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACardGameCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACardGameCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACardGameCharacter_Statics::ClassParams = {
		&ACardGameCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACardGameCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACardGameCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACardGameCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACardGameCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACardGameCharacter()
	{
		if (!Z_Registration_Info_UClass_ACardGameCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACardGameCharacter.OuterSingleton, Z_Construct_UClass_ACardGameCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACardGameCharacter.OuterSingleton;
	}
	template<> CARDGAME_API UClass* StaticClass<ACardGameCharacter>()
	{
		return ACardGameCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACardGameCharacter);
	ACardGameCharacter::~ACardGameCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_janio_Documents_GitHub_MobileCardGame_CardGame_Source_CardGame_CardGameCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_janio_Documents_GitHub_MobileCardGame_CardGame_Source_CardGame_CardGameCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACardGameCharacter, ACardGameCharacter::StaticClass, TEXT("ACardGameCharacter"), &Z_Registration_Info_UClass_ACardGameCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACardGameCharacter), 514359527U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_janio_Documents_GitHub_MobileCardGame_CardGame_Source_CardGame_CardGameCharacter_h_3181898295(TEXT("/Script/CardGame"),
		Z_CompiledInDeferFile_FID_Users_janio_Documents_GitHub_MobileCardGame_CardGame_Source_CardGame_CardGameCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_janio_Documents_GitHub_MobileCardGame_CardGame_Source_CardGame_CardGameCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
