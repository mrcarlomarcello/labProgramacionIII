// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/WorldPartition/WorldPartitionRuntimeSpatialHashCell.h"
#include "Engine/Public/WorldPartition/WorldPartition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeSpatialHashCell() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCell();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UActorContainer_NoRegister();
// End Cross Module References
	void UWorldPartitionRuntimeSpatialHashCell::StaticRegisterNativesUWorldPartitionRuntimeSpatialHashCell()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionRuntimeSpatialHashCell);
	UClass* Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_NoRegister()
	{
		return UWorldPartitionRuntimeSpatialHashCell::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Extent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnsavedActorsContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UnsavedActorsContainer;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldPartitionRuntimeCell,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/WorldPartitionRuntimeSpatialHashCell.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHashCell.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHashCell.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWorldPartitionRuntimeSpatialHashCell, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_Statics::NewProp_Extent_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHashCell.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWorldPartitionRuntimeSpatialHashCell, Extent), METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_Statics::NewProp_Extent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_Statics::NewProp_Extent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_Statics::NewProp_Level_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHashCell.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWorldPartitionRuntimeSpatialHashCell, Level), METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_Statics::NewProp_Level_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_Statics::NewProp_UnsavedActorsContainer_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHashCell.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_Statics::NewProp_UnsavedActorsContainer = { "UnsavedActorsContainer", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWorldPartitionRuntimeSpatialHashCell, UnsavedActorsContainer), Z_Construct_UClass_UActorContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_Statics::NewProp_UnsavedActorsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_Statics::NewProp_UnsavedActorsContainer_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_Statics::NewProp_Extent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_Statics::NewProp_Level,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_Statics::NewProp_UnsavedActorsContainer,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionRuntimeSpatialHashCell>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_Statics::ClassParams = {
		&UWorldPartitionRuntimeSpatialHashCell::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionRuntimeSpatialHashCell.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionRuntimeSpatialHashCell.OuterSingleton, Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionRuntimeSpatialHashCell.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UWorldPartitionRuntimeSpatialHashCell>()
	{
		return UWorldPartitionRuntimeSpatialHashCell::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionRuntimeSpatialHashCell);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHashCell_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHashCell_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell, UWorldPartitionRuntimeSpatialHashCell::StaticClass, TEXT("UWorldPartitionRuntimeSpatialHashCell"), &Z_Registration_Info_UClass_UWorldPartitionRuntimeSpatialHashCell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionRuntimeSpatialHashCell), 1817098896U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHashCell_h_2237920913(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHashCell_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHashCell_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
