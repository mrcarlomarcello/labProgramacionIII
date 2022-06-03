// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceControl_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SourceControl;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SourceControl()
	{
		if (!Z_Registration_Info_UPackage__Script_SourceControl.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SourceControl",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000080,
				0xF5886DA9,
				0xDB8482AF,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SourceControl.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SourceControl.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SourceControl(Z_Construct_UPackage__Script_SourceControl, TEXT("/Script/SourceControl"), Z_Registration_Info_UPackage__Script_SourceControl, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF5886DA9, 0xDB8482AF));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
