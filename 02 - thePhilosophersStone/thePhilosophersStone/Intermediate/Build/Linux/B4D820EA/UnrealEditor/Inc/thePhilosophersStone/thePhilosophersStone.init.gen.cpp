// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodethePhilosophersStone_init() {}
	THEPHILOSOPHERSSTONE_API UFunction* Z_Construct_UDelegateFunction_thePhilosophersStone_OnPickUp__DelegateSignature();
	THEPHILOSOPHERSSTONE_API UFunction* Z_Construct_UDelegateFunction_thePhilosophersStone_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_thePhilosophersStone;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_thePhilosophersStone()
	{
		if (!Z_Registration_Info_UPackage__Script_thePhilosophersStone.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_thePhilosophersStone_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_thePhilosophersStone_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/thePhilosophersStone",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD98ECDE0,
				0xBC18B977,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_thePhilosophersStone.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_thePhilosophersStone.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_thePhilosophersStone(Z_Construct_UPackage__Script_thePhilosophersStone, TEXT("/Script/thePhilosophersStone"), Z_Registration_Info_UPackage__Script_thePhilosophersStone, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD98ECDE0, 0xBC18B977));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
