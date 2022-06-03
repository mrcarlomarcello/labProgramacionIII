// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeveloperSettings_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DeveloperSettings;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DeveloperSettings()
	{
		if (!Z_Registration_Info_UPackage__Script_DeveloperSettings.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DeveloperSettings",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x29C7D017,
				0x4E34824F,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DeveloperSettings.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DeveloperSettings.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DeveloperSettings(Z_Construct_UPackage__Script_DeveloperSettings, TEXT("/Script/DeveloperSettings"), Z_Registration_Info_UPackage__Script_DeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x29C7D017, 0x4E34824F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
