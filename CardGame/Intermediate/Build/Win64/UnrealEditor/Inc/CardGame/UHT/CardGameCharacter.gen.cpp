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
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACardGameCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACardGameCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACardGameCharacter_Statics::ClassParams = {
		&ACardGameCharacter::StaticClass,
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
		{ Z_Construct_UClass_ACardGameCharacter, ACardGameCharacter::StaticClass, TEXT("ACardGameCharacter"), &Z_Registration_Info_UClass_ACardGameCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACardGameCharacter), 655695664U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_janio_Documents_GitHub_MobileCardGame_CardGame_Source_CardGame_CardGameCharacter_h_1390383756(TEXT("/Script/CardGame"),
		Z_CompiledInDeferFile_FID_Users_janio_Documents_GitHub_MobileCardGame_CardGame_Source_CardGame_CardGameCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_janio_Documents_GitHub_MobileCardGame_CardGame_Source_CardGame_CardGameCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
