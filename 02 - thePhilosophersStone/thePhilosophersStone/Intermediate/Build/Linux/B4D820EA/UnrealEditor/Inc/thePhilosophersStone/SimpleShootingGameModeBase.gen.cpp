// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "thePhilosophersStone/SimpleShootingGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleShootingGameModeBase() {}
// Cross Module References
	THEPHILOSOPHERSSTONE_API UClass* Z_Construct_UClass_ASimpleShootingGameModeBase_NoRegister();
	THEPHILOSOPHERSSTONE_API UClass* Z_Construct_UClass_ASimpleShootingGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_thePhilosophersStone();
// End Cross Module References
	void ASimpleShootingGameModeBase::StaticRegisterNativesASimpleShootingGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASimpleShootingGameModeBase);
	UClass* Z_Construct_UClass_ASimpleShootingGameModeBase_NoRegister()
	{
		return ASimpleShootingGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASimpleShootingGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASimpleShootingGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_thePhilosophersStone,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASimpleShootingGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SimpleShootingGameModeBase.h" },
		{ "ModuleRelativePath", "SimpleShootingGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASimpleShootingGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimpleShootingGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASimpleShootingGameModeBase_Statics::ClassParams = {
		&ASimpleShootingGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASimpleShootingGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASimpleShootingGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASimpleShootingGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ASimpleShootingGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASimpleShootingGameModeBase.OuterSingleton, Z_Construct_UClass_ASimpleShootingGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASimpleShootingGameModeBase.OuterSingleton;
	}
	template<> THEPHILOSOPHERSSTONE_API UClass* StaticClass<ASimpleShootingGameModeBase>()
	{
		return ASimpleShootingGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASimpleShootingGameModeBase);
	struct Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_SimpleShootingGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_SimpleShootingGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASimpleShootingGameModeBase, ASimpleShootingGameModeBase::StaticClass, TEXT("ASimpleShootingGameModeBase"), &Z_Registration_Info_UClass_ASimpleShootingGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASimpleShootingGameModeBase), 855329220U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_SimpleShootingGameModeBase_h_1758778725(TEXT("/Script/thePhilosophersStone"),
		Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_SimpleShootingGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_SimpleShootingGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
