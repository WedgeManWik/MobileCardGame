// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardGame/GAS/ExecutionCalculations/ExecCalcMagicDamage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExecCalcMagicDamage() {}
// Cross Module References
	CARDGAME_API UClass* Z_Construct_UClass_UExecCalcMagicDamage();
	CARDGAME_API UClass* Z_Construct_UClass_UExecCalcMagicDamage_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
	UPackage* Z_Construct_UPackage__Script_CardGame();
// End Cross Module References
	void UExecCalcMagicDamage::StaticRegisterNativesUExecCalcMagicDamage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExecCalcMagicDamage);
	UClass* Z_Construct_UClass_UExecCalcMagicDamage_NoRegister()
	{
		return UExecCalcMagicDamage::StaticClass();
	}
	struct Z_Construct_UClass_UExecCalcMagicDamage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExecCalcMagicDamage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_CardGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExecCalcMagicDamage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GAS/ExecutionCalculations/ExecCalcMagicDamage.h" },
		{ "ModuleRelativePath", "GAS/ExecutionCalculations/ExecCalcMagicDamage.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExecCalcMagicDamage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExecCalcMagicDamage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExecCalcMagicDamage_Statics::ClassParams = {
		&UExecCalcMagicDamage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UExecCalcMagicDamage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExecCalcMagicDamage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExecCalcMagicDamage()
	{
		if (!Z_Registration_Info_UClass_UExecCalcMagicDamage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExecCalcMagicDamage.OuterSingleton, Z_Construct_UClass_UExecCalcMagicDamage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExecCalcMagicDamage.OuterSingleton;
	}
	template<> CARDGAME_API UClass* StaticClass<UExecCalcMagicDamage>()
	{
		return UExecCalcMagicDamage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExecCalcMagicDamage);
	UExecCalcMagicDamage::~UExecCalcMagicDamage() {}
	struct Z_CompiledInDeferFile_FID_GitHub_MobileCardGame_CardGame_Source_CardGame_GAS_ExecutionCalculations_ExecCalcMagicDamage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_MobileCardGame_CardGame_Source_CardGame_GAS_ExecutionCalculations_ExecCalcMagicDamage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExecCalcMagicDamage, UExecCalcMagicDamage::StaticClass, TEXT("UExecCalcMagicDamage"), &Z_Registration_Info_UClass_UExecCalcMagicDamage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExecCalcMagicDamage), 1673752607U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_MobileCardGame_CardGame_Source_CardGame_GAS_ExecutionCalculations_ExecCalcMagicDamage_h_2711807323(TEXT("/Script/CardGame"),
		Z_CompiledInDeferFile_FID_GitHub_MobileCardGame_CardGame_Source_CardGame_GAS_ExecutionCalculations_ExecCalcMagicDamage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_MobileCardGame_CardGame_Source_CardGame_GAS_ExecutionCalculations_ExecCalcMagicDamage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
