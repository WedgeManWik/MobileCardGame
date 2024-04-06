// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardGame/GAS/ExecutionCalculations/ExecCalcPhysicalDamage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExecCalcPhysicalDamage() {}
// Cross Module References
	CARDGAME_API UClass* Z_Construct_UClass_UExecCalcPhysicalDamage();
	CARDGAME_API UClass* Z_Construct_UClass_UExecCalcPhysicalDamage_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
	UPackage* Z_Construct_UPackage__Script_CardGame();
// End Cross Module References
	void UExecCalcPhysicalDamage::StaticRegisterNativesUExecCalcPhysicalDamage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExecCalcPhysicalDamage);
	UClass* Z_Construct_UClass_UExecCalcPhysicalDamage_NoRegister()
	{
		return UExecCalcPhysicalDamage::StaticClass();
	}
	struct Z_Construct_UClass_UExecCalcPhysicalDamage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExecCalcPhysicalDamage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_CardGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExecCalcPhysicalDamage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GAS/ExecutionCalculations/ExecCalcPhysicalDamage.h" },
		{ "ModuleRelativePath", "GAS/ExecutionCalculations/ExecCalcPhysicalDamage.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExecCalcPhysicalDamage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExecCalcPhysicalDamage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExecCalcPhysicalDamage_Statics::ClassParams = {
		&UExecCalcPhysicalDamage::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UExecCalcPhysicalDamage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExecCalcPhysicalDamage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExecCalcPhysicalDamage()
	{
		if (!Z_Registration_Info_UClass_UExecCalcPhysicalDamage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExecCalcPhysicalDamage.OuterSingleton, Z_Construct_UClass_UExecCalcPhysicalDamage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExecCalcPhysicalDamage.OuterSingleton;
	}
	template<> CARDGAME_API UClass* StaticClass<UExecCalcPhysicalDamage>()
	{
		return UExecCalcPhysicalDamage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExecCalcPhysicalDamage);
	UExecCalcPhysicalDamage::~UExecCalcPhysicalDamage() {}
	struct Z_CompiledInDeferFile_FID_GitHub_MobileCardGame_CardGame_Source_CardGame_GAS_ExecutionCalculations_ExecCalcPhysicalDamage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_MobileCardGame_CardGame_Source_CardGame_GAS_ExecutionCalculations_ExecCalcPhysicalDamage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExecCalcPhysicalDamage, UExecCalcPhysicalDamage::StaticClass, TEXT("UExecCalcPhysicalDamage"), &Z_Registration_Info_UClass_UExecCalcPhysicalDamage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExecCalcPhysicalDamage), 426235234U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_MobileCardGame_CardGame_Source_CardGame_GAS_ExecutionCalculations_ExecCalcPhysicalDamage_h_2885539024(TEXT("/Script/CardGame"),
		Z_CompiledInDeferFile_FID_GitHub_MobileCardGame_CardGame_Source_CardGame_GAS_ExecutionCalculations_ExecCalcPhysicalDamage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_MobileCardGame_CardGame_Source_CardGame_GAS_ExecutionCalculations_ExecCalcPhysicalDamage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
