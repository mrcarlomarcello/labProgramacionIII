// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/WorldPartition/WorldPartitionRuntimeHash.h"
#include "Engine/Public/WorldPartition/WorldPartition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeHash() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeHash_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeHash();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance;
	static UEnum* EWorldPartitionStreamingPerformance_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance, Z_Construct_UPackage__Script_Engine(), TEXT("EWorldPartitionStreamingPerformance"));
		}
		return Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EWorldPartitionStreamingPerformance>()
	{
		return EWorldPartitionStreamingPerformance_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance_Statics::Enumerators[] = {
		{ "EWorldPartitionStreamingPerformance::Good", (int64)EWorldPartitionStreamingPerformance::Good },
		{ "EWorldPartitionStreamingPerformance::Slow", (int64)EWorldPartitionStreamingPerformance::Slow },
		{ "EWorldPartitionStreamingPerformance::Critical", (int64)EWorldPartitionStreamingPerformance::Critical },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance_Statics::Enum_MetaDataParams[] = {
		{ "Critical.Name", "EWorldPartitionStreamingPerformance::Critical" },
		{ "Good.Name", "EWorldPartitionStreamingPerformance::Good" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeHash.h" },
		{ "Slow.Name", "EWorldPartitionStreamingPerformance::Slow" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EWorldPartitionStreamingPerformance",
		"EWorldPartitionStreamingPerformance",
		Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance()
	{
		if (!Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.InnerSingleton, Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.InnerSingleton;
	}
	void UWorldPartitionRuntimeHash::StaticRegisterNativesUWorldPartitionRuntimeHash()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionRuntimeHash);
	UClass* Z_Construct_UClass_UWorldPartitionRuntimeHash_NoRegister()
	{
		return UWorldPartitionRuntimeHash::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionRuntimeHash_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionRuntimeHash_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRuntimeHash_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "WorldPartition" },
		{ "IncludePath", "WorldPartition/WorldPartitionRuntimeHash.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeHash.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionRuntimeHash_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionRuntimeHash>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionRuntimeHash_Statics::ClassParams = {
		&UWorldPartitionRuntimeHash::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRuntimeHash_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeHash_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionRuntimeHash()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionRuntimeHash.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionRuntimeHash.OuterSingleton, Z_Construct_UClass_UWorldPartitionRuntimeHash_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionRuntimeHash.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UWorldPartitionRuntimeHash>()
	{
		return UWorldPartitionRuntimeHash::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionRuntimeHash);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_Statics::EnumInfo[] = {
		{ EWorldPartitionStreamingPerformance_StaticEnum, TEXT("EWorldPartitionStreamingPerformance"), &Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1168094187U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionRuntimeHash, UWorldPartitionRuntimeHash::StaticClass, TEXT("UWorldPartitionRuntimeHash"), &Z_Registration_Info_UClass_UWorldPartitionRuntimeHash, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionRuntimeHash), 113443691U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_3364136555(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
