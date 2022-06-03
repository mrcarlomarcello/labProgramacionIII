// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfilerMessages_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ProfilerMessages;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ProfilerMessages()
	{
		if (!Z_Registration_Info_UPackage__Script_ProfilerMessages.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ProfilerMessages",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000080,
				0x8DA459A6,
				0xB5E51388,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ProfilerMessages.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ProfilerMessages.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ProfilerMessages(Z_Construct_UPackage__Script_ProfilerMessages, TEXT("/Script/ProfilerMessages"), Z_Registration_Info_UPackage__Script_ProfilerMessages, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8DA459A6, 0xB5E51388));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
