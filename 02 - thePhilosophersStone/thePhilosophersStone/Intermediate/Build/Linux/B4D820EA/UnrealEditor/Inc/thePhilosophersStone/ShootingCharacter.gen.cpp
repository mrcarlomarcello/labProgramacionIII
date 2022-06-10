// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "thePhilosophersStone/ShootingCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootingCharacter() {}
// Cross Module References
	THEPHILOSOPHERSSTONE_API UClass* Z_Construct_UClass_AShootingCharacter_NoRegister();
	THEPHILOSOPHERSSTONE_API UClass* Z_Construct_UClass_AShootingCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_thePhilosophersStone();
// End Cross Module References
	void AShootingCharacter::StaticRegisterNativesAShootingCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShootingCharacter);
	UClass* Z_Construct_UClass_AShootingCharacter_NoRegister()
	{
		return AShootingCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AShootingCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShootingCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_thePhilosophersStone,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ShootingCharacter.h" },
		{ "ModuleRelativePath", "ShootingCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShootingCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootingCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShootingCharacter_Statics::ClassParams = {
		&AShootingCharacter::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShootingCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShootingCharacter()
	{
		if (!Z_Registration_Info_UClass_AShootingCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShootingCharacter.OuterSingleton, Z_Construct_UClass_AShootingCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShootingCharacter.OuterSingleton;
	}
	template<> THEPHILOSOPHERSSTONE_API UClass* StaticClass<AShootingCharacter>()
	{
		return AShootingCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShootingCharacter);
	struct Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_ShootingCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_ShootingCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShootingCharacter, AShootingCharacter::StaticClass, TEXT("AShootingCharacter"), &Z_Registration_Info_UClass_AShootingCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShootingCharacter), 2545907244U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_ShootingCharacter_h_66432292(TEXT("/Script/thePhilosophersStone"),
		Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_ShootingCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_ShootingCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
