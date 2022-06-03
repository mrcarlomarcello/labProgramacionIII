// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVM_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RigVM;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RigVM()
	{
		if (!Z_Registration_Info_UPackage__Script_RigVM.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RigVM",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x926537EA,
				0x1C00A832,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RigVM.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RigVM.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RigVM(Z_Construct_UPackage__Script_RigVM, TEXT("/Script/RigVM"), Z_Registration_Info_UPackage__Script_RigVM, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x926537EA, 0x1C00A832));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
