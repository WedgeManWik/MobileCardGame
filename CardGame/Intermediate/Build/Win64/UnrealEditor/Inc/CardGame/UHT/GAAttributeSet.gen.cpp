// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardGame/GAS/AttributeSets/GAAttributeSet.h"
#include "AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAAttributeSet() {}
// Cross Module References
	CARDGAME_API UClass* Z_Construct_UClass_UGAAttributeSet();
	CARDGAME_API UClass* Z_Construct_UClass_UGAAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	UPackage* Z_Construct_UPackage__Script_CardGame();
// End Cross Module References
	void UGAAttributeSet::StaticRegisterNativesUGAAttributeSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGAAttributeSet);
	UClass* Z_Construct_UClass_UGAAttributeSet_NoRegister()
	{
		return UGAAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UGAAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Mana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMana;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagicAttackEffectiveness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MagicAttackEffectiveness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagicDefensiveResistence_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MagicDefensiveResistence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalAttackEffectiveness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicalAttackEffectiveness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalDefensiveResistence_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicalDefensiveResistence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGAAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_CardGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GAS/AttributeSets/GAAttributeSet.h" },
		{ "ModuleRelativePath", "GAS/AttributeSets/GAAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_Health_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "GAS/AttributeSets/GAAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGAAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_Health_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "GAS/AttributeSets/GAAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGAAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_MaxHealth_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_Mana_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "GAS/AttributeSets/GAAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_Mana = { "Mana", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGAAttributeSet, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_Mana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_Mana_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_MaxMana_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "GAS/AttributeSets/GAAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGAAttributeSet, MaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_MaxMana_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_MaxMana_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_MagicAttackEffectiveness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "GAS/AttributeSets/GAAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_MagicAttackEffectiveness = { "MagicAttackEffectiveness", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGAAttributeSet, MagicAttackEffectiveness), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_MagicAttackEffectiveness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_MagicAttackEffectiveness_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_MagicDefensiveResistence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "GAS/AttributeSets/GAAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_MagicDefensiveResistence = { "MagicDefensiveResistence", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGAAttributeSet, MagicDefensiveResistence), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_MagicDefensiveResistence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_MagicDefensiveResistence_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_PhysicalAttackEffectiveness_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "GAS/AttributeSets/GAAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_PhysicalAttackEffectiveness = { "PhysicalAttackEffectiveness", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGAAttributeSet, PhysicalAttackEffectiveness), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_PhysicalAttackEffectiveness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_PhysicalAttackEffectiveness_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_PhysicalDefensiveResistence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "GAS/AttributeSets/GAAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_PhysicalDefensiveResistence = { "PhysicalDefensiveResistence", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGAAttributeSet, PhysicalDefensiveResistence), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_PhysicalDefensiveResistence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_PhysicalDefensiveResistence_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGAAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_Mana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_MaxMana,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_MagicAttackEffectiveness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_MagicDefensiveResistence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_PhysicalAttackEffectiveness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGAAttributeSet_Statics::NewProp_PhysicalDefensiveResistence,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGAAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGAAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGAAttributeSet_Statics::ClassParams = {
		&UGAAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGAAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGAAttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGAAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGAAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGAAttributeSet()
	{
		if (!Z_Registration_Info_UClass_UGAAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGAAttributeSet.OuterSingleton, Z_Construct_UClass_UGAAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGAAttributeSet.OuterSingleton;
	}
	template<> CARDGAME_API UClass* StaticClass<UGAAttributeSet>()
	{
		return UGAAttributeSet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGAAttributeSet);
	UGAAttributeSet::~UGAAttributeSet() {}
	struct Z_CompiledInDeferFile_FID_GitHub_MobileCardGame_CardGame_Source_CardGame_GAS_AttributeSets_GAAttributeSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_MobileCardGame_CardGame_Source_CardGame_GAS_AttributeSets_GAAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGAAttributeSet, UGAAttributeSet::StaticClass, TEXT("UGAAttributeSet"), &Z_Registration_Info_UClass_UGAAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGAAttributeSet), 2305713238U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_MobileCardGame_CardGame_Source_CardGame_GAS_AttributeSets_GAAttributeSet_h_4188362834(TEXT("/Script/CardGame"),
		Z_CompiledInDeferFile_FID_GitHub_MobileCardGame_CardGame_Source_CardGame_GAS_AttributeSets_GAAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_MobileCardGame_CardGame_Source_CardGame_GAS_AttributeSets_GAAttributeSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
