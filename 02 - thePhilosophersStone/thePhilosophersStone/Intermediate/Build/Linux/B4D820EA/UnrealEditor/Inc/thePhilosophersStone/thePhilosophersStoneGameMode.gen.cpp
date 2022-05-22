// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "thePhilosophersStone/thePhilosophersStoneGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodethePhilosophersStoneGameMode() {}
// Cross Module References
	THEPHILOSOPHERSSTONE_API UClass* Z_Construct_UClass_AthePhilosophersStoneGameMode_NoRegister();
	THEPHILOSOPHERSSTONE_API UClass* Z_Construct_UClass_AthePhilosophersStoneGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_thePhilosophersStone();
// End Cross Module References
	void AthePhilosophersStoneGameMode::StaticRegisterNativesAthePhilosophersStoneGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AthePhilosophersStoneGameMode);
	UClass* Z_Construct_UClass_AthePhilosophersStoneGameMode_NoRegister()
	{
		return AthePhilosophersStoneGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AthePhilosophersStoneGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AthePhilosophersStoneGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_thePhilosophersStone,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AthePhilosophersStoneGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "thePhilosophersStoneGameMode.h" },
		{ "ModuleRelativePath", "thePhilosophersStoneGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AthePhilosophersStoneGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AthePhilosophersStoneGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AthePhilosophersStoneGameMode_Statics::ClassParams = {
		&AthePhilosophersStoneGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AthePhilosophersStoneGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AthePhilosophersStoneGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AthePhilosophersStoneGameMode()
	{
		if (!Z_Registration_Info_UClass_AthePhilosophersStoneGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AthePhilosophersStoneGameMode.OuterSingleton, Z_Construct_UClass_AthePhilosophersStoneGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AthePhilosophersStoneGameMode.OuterSingleton;
	}
	template<> THEPHILOSOPHERSSTONE_API UClass* StaticClass<AthePhilosophersStoneGameMode>()
	{
		return AthePhilosophersStoneGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AthePhilosophersStoneGameMode);
	struct Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_thePhilosophersStoneGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_thePhilosophersStoneGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AthePhilosophersStoneGameMode, AthePhilosophersStoneGameMode::StaticClass, TEXT("AthePhilosophersStoneGameMode"), &Z_Registration_Info_UClass_AthePhilosophersStoneGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AthePhilosophersStoneGameMode), 3231360799U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_thePhilosophersStoneGameMode_h_2753751667(TEXT("/Script/thePhilosophersStone"),
		Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_thePhilosophersStoneGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_thePhilosophersStoneGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
