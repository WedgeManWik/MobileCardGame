// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCardGame_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CardGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CardGame()
	{
		if (!Z_Registration_Info_UPackage__Script_CardGame.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CardGame",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xB56015EF,
				0xEC37F3BD,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CardGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CardGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CardGame(Z_Construct_UPackage__Script_CardGame, TEXT("/Script/CardGame"), Z_Registration_Info_UPackage__Script_CardGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB56015EF, 0xEC37F3BD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
