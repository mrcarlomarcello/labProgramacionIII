// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationTest_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AutomationTest;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AutomationTest()
	{
		if (!Z_Registration_Info_UPackage__Script_AutomationTest.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AutomationTest",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xB5194871,
				0x6941BCB2,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AutomationTest.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AutomationTest.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AutomationTest(Z_Construct_UPackage__Script_AutomationTest, TEXT("/Script/AutomationTest"), Z_Registration_Info_UPackage__Script_AutomationTest, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB5194871, 0x6941BCB2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
