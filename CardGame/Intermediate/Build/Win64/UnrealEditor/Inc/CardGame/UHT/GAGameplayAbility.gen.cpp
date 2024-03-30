// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardGame/GAS/Abilities/GAGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAGameplayAbility() {}
// Cross Module References
	CARDGAME_API UClass* Z_Construct_UClass_UGAGameplayAbility();
	CARDGAME_API UClass* Z_Construct_UClass_UGAGameplayAbility_NoRegister();
	CARDGAME_API UEnum* Z_Construct_UEnum_CardGame_EAbilityInputID();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_CardGame();
// End Cross Module References
	void UGAGameplayAbility::StaticRegisterNativesUGAGameplayAbility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGAGameplayAbility);
	UClass* Z_Construct_UClass_UGAGameplayAbility_NoRegister()
	{
		return UGAGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UGAGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityInputID_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputID_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityInputID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_CardGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GAS/Abilities/GAGameplayAbility.h" },
		{ "ModuleRelativePath", "GAS/Abilities/GAGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGAGameplayAbility_Statics::NewProp_AbilityInputID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAGameplayAbility_Statics::NewProp_AbilityInputID_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "GAS/Abilities/GAGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGAGameplayAbility_Statics::NewProp_AbilityInputID = { "AbilityInputID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGAGameplayAbility, AbilityInputID), Z_Construct_UEnum_CardGame_EAbilityInputID, METADATA_PARAMS(Z_Construct_UClass_UGAGameplayAbility_Statics::NewProp_AbilityInputID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAGameplayAbility_Statics::NewProp_AbilityInputID_MetaData)) }; // 2039570255
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAGameplayAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameplayAbility_Statics::NewProp_AbilityInputID_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAGameplayAbility_Statics::NewProp_AbilityInputID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAGameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGAGameplayAbility_Statics::ClassParams = {
		&UGAGameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGAGameplayAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGAGameplayAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGAGameplayAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGAGameplayAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAGameplayAbility()
	{
		if (!Z_Registration_Info_UClass_UGAGameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGAGameplayAbility.OuterSingleton, Z_Construct_UClass_UGAGameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGAGameplayAbility.OuterSingleton;
	}
	template<> CARDGAME_API UClass* StaticClass<UGAGameplayAbility>()
	{
		return UGAGameplayAbility::StaticClass();
	}
	UGAGameplayAbility::UGAGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAGameplayAbility);
	UGAGameplayAbility::~UGAGameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_Users_janio_Documents_GitHub_MobileCardGame_CardGame_Source_CardGame_GAS_Abilities_GAGameplayAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_janio_Documents_GitHub_MobileCardGame_CardGame_Source_CardGame_GAS_Abilities_GAGameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGAGameplayAbility, UGAGameplayAbility::StaticClass, TEXT("UGAGameplayAbility"), &Z_Registration_Info_UClass_UGAGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGAGameplayAbility), 1695090316U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_janio_Documents_GitHub_MobileCardGame_CardGame_Source_CardGame_GAS_Abilities_GAGameplayAbility_h_639700002(TEXT("/Script/CardGame"),
		Z_CompiledInDeferFile_FID_Users_janio_Documents_GitHub_MobileCardGame_CardGame_Source_CardGame_GAS_Abilities_GAGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_janio_Documents_GitHub_MobileCardGame_CardGame_Source_CardGame_GAS_Abilities_GAGameplayAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
