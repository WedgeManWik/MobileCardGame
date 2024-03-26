// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardGame/CardGameGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCardGameGameMode() {}
// Cross Module References
	CARDGAME_API UClass* Z_Construct_UClass_ACardGameGameMode();
	CARDGAME_API UClass* Z_Construct_UClass_ACardGameGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CardGame();
// End Cross Module References
	void ACardGameGameMode::StaticRegisterNativesACardGameGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACardGameGameMode);
	UClass* Z_Construct_UClass_ACardGameGameMode_NoRegister()
	{
		return ACardGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACardGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACardGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CardGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACardGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CardGameGameMode.h" },
		{ "ModuleRelativePath", "CardGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACardGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACardGameGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACardGameGameMode_Statics::ClassParams = {
		&ACardGameGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACardGameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACardGameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACardGameGameMode()
	{
		if (!Z_Registration_Info_UClass_ACardGameGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACardGameGameMode.OuterSingleton, Z_Construct_UClass_ACardGameGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACardGameGameMode.OuterSingleton;
	}
	template<> CARDGAME_API UClass* StaticClass<ACardGameGameMode>()
	{
		return ACardGameGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACardGameGameMode);
	ACardGameGameMode::~ACardGameGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_janio_Documents_GitHub_MobileCardGame_CardGame_Source_CardGame_CardGameGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_janio_Documents_GitHub_MobileCardGame_CardGame_Source_CardGame_CardGameGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACardGameGameMode, ACardGameGameMode::StaticClass, TEXT("ACardGameGameMode"), &Z_Registration_Info_UClass_ACardGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACardGameGameMode), 1921793228U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_janio_Documents_GitHub_MobileCardGame_CardGame_Source_CardGame_CardGameGameMode_h_188909802(TEXT("/Script/CardGame"),
		Z_CompiledInDeferFile_FID_Users_janio_Documents_GitHub_MobileCardGame_CardGame_Source_CardGame_CardGameGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_janio_Documents_GitHub_MobileCardGame_CardGame_Source_CardGame_CardGameGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
