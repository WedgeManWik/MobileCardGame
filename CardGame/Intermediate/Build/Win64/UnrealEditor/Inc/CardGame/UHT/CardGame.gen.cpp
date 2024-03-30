// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardGame/CardGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCardGame() {}
// Cross Module References
	CARDGAME_API UEnum* Z_Construct_UEnum_CardGame_EAbilityInputID();
	UPackage* Z_Construct_UPackage__Script_CardGame();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAbilityInputID;
	static UEnum* EAbilityInputID_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAbilityInputID.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAbilityInputID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CardGame_EAbilityInputID, (UObject*)Z_Construct_UPackage__Script_CardGame(), TEXT("EAbilityInputID"));
		}
		return Z_Registration_Info_UEnum_EAbilityInputID.OuterSingleton;
	}
	template<> CARDGAME_API UEnum* StaticEnum<EAbilityInputID>()
	{
		return EAbilityInputID_StaticEnum();
	}
	struct Z_Construct_UEnum_CardGame_EAbilityInputID_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CardGame_EAbilityInputID_Statics::Enumerators[] = {
		{ "EAbilityInputID::None", (int64)EAbilityInputID::None },
		{ "EAbilityInputID::Confirm", (int64)EAbilityInputID::Confirm },
		{ "EAbilityInputID::Cancel", (int64)EAbilityInputID::Cancel },
		{ "EAbilityInputID::FireAbility", (int64)EAbilityInputID::FireAbility },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CardGame_EAbilityInputID_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cancel.Name", "EAbilityInputID::Cancel" },
		{ "Confirm.Name", "EAbilityInputID::Confirm" },
		{ "FireAbility.Name", "EAbilityInputID::FireAbility" },
		{ "ModuleRelativePath", "CardGame.h" },
		{ "None.Name", "EAbilityInputID::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CardGame_EAbilityInputID_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CardGame,
		nullptr,
		"EAbilityInputID",
		"EAbilityInputID",
		Z_Construct_UEnum_CardGame_EAbilityInputID_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CardGame_EAbilityInputID_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CardGame_EAbilityInputID_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CardGame_EAbilityInputID_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CardGame_EAbilityInputID()
	{
		if (!Z_Registration_Info_UEnum_EAbilityInputID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAbilityInputID.InnerSingleton, Z_Construct_UEnum_CardGame_EAbilityInputID_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAbilityInputID.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_janio_Documents_GitHub_MobileCardGame_CardGame_Source_CardGame_CardGame_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_janio_Documents_GitHub_MobileCardGame_CardGame_Source_CardGame_CardGame_h_Statics::EnumInfo[] = {
		{ EAbilityInputID_StaticEnum, TEXT("EAbilityInputID"), &Z_Registration_Info_UEnum_EAbilityInputID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2039570255U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_janio_Documents_GitHub_MobileCardGame_CardGame_Source_CardGame_CardGame_h_721589254(TEXT("/Script/CardGame"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_janio_Documents_GitHub_MobileCardGame_CardGame_Source_CardGame_CardGame_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_janio_Documents_GitHub_MobileCardGame_CardGame_Source_CardGame_CardGame_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
