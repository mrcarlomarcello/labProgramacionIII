// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/WorldPartition/WorldPartitionVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AWorldPartitionVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AWorldPartitionVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void AWorldPartitionVolume::StaticRegisterNativesAWorldPartitionVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWorldPartitionVolume);
	UClass* Z_Construct_UClass_AWorldPartitionVolume_NoRegister()
	{
		return AWorldPartitionVolume::StaticClass();
	}
	struct Z_Construct_UClass_AWorldPartitionVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWorldPartitionVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPartitionVolume_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A world partition volume to allow loading cells inside (editor-only)\n */" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "WorldPartition/WorldPartitionVolume.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A world partition volume to allow loading cells inside (editor-only)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWorldPartitionVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldPartitionVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldPartitionVolume_Statics::ClassParams = {
		&AWorldPartitionVolume::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWorldPartitionVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWorldPartitionVolume()
	{
		if (!Z_Registration_Info_UClass_AWorldPartitionVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldPartitionVolume.OuterSingleton, Z_Construct_UClass_AWorldPartitionVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWorldPartitionVolume.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<AWorldPartitionVolume>()
	{
		return AWorldPartitionVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldPartitionVolume);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWorldPartitionVolume, AWorldPartitionVolume::StaticClass, TEXT("AWorldPartitionVolume"), &Z_Registration_Info_UClass_AWorldPartitionVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldPartitionVolume), 2261238895U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_2139480300(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
