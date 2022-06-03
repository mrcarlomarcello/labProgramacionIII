// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/WorldPartition/HLOD/HLODActor.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AWorldPartitionHLOD_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AWorldPartitionHLOD();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHLODSubActor();
	ENGINE_API UClass* Z_Construct_UClass_UHLODLayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister();
// End Cross Module References
	void AWorldPartitionHLOD::StaticRegisterNativesAWorldPartitionHLOD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWorldPartitionHLOD);
	UClass* Z_Construct_UClass_AWorldPartitionHLOD_NoRegister()
	{
		return AWorldPartitionHLOD::StaticClass();
	}
	struct Z_Construct_UClass_AWorldPartitionHLOD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_HLODSubActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HLODSubActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HLODSubActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubActorsHLODLayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubActorsHLODLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridIndexX_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_GridIndexX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridIndexY_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_GridIndexY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridIndexZ_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_GridIndexZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HLODBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HLODBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinVisibleDistance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MinVisibleDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HLODHash_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_HLODHash;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODLevel_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_LODLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequireWarmup_MetaData[];
#endif
		static void NewProp_bRequireWarmup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireWarmup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceCell_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SourceCell;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceCellName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceCellName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWorldPartitionHLOD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPartitionHLOD_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/HLOD/HLODActor.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODActor.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_HLODSubActors_Inner = { "HLODSubActors", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHLODSubActor, METADATA_PARAMS(nullptr, 0) }; // 2045593302
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_HLODSubActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_HLODSubActors = { "HLODSubActors", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPartitionHLOD, HLODSubActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_HLODSubActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_HLODSubActors_MetaData)) }; // 2045593302
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_SubActorsHLODLayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODActor.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_SubActorsHLODLayer = { "SubActorsHLODLayer", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPartitionHLOD, SubActorsHLODLayer), Z_Construct_UClass_UHLODLayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_SubActorsHLODLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_SubActorsHLODLayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_GridIndexX_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODActor.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_GridIndexX = { "GridIndexX", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPartitionHLOD, GridIndexX), METADATA_PARAMS(Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_GridIndexX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_GridIndexX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_GridIndexY_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODActor.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_GridIndexY = { "GridIndexY", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPartitionHLOD, GridIndexY), METADATA_PARAMS(Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_GridIndexY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_GridIndexY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_GridIndexZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODActor.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_GridIndexZ = { "GridIndexZ", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPartitionHLOD, GridIndexZ), METADATA_PARAMS(Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_GridIndexZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_GridIndexZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_HLODBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_HLODBounds = { "HLODBounds", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPartitionHLOD, HLODBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_HLODBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_HLODBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_MinVisibleDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODActor.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_MinVisibleDistance = { "MinVisibleDistance", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPartitionHLOD, MinVisibleDistance), METADATA_PARAMS(Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_MinVisibleDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_MinVisibleDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_HLODHash_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODActor.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_HLODHash = { "HLODHash", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPartitionHLOD, HLODHash), METADATA_PARAMS(Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_HLODHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_HLODHash_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_LODLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODActor.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_LODLevel = { "LODLevel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPartitionHLOD, LODLevel), METADATA_PARAMS(Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_LODLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_LODLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_bRequireWarmup_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODActor.h" },
	};
#endif
	void Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_bRequireWarmup_SetBit(void* Obj)
	{
		((AWorldPartitionHLOD*)Obj)->bRequireWarmup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_bRequireWarmup = { "bRequireWarmup", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWorldPartitionHLOD), &Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_bRequireWarmup_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_bRequireWarmup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_bRequireWarmup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_SourceCell_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODActor.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_SourceCell = { "SourceCell", nullptr, (EPropertyFlags)0x0044000020000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPartitionHLOD, SourceCell_DEPRECATED), Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_SourceCell_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_SourceCell_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_SourceCellName_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODActor.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_SourceCellName = { "SourceCellName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPartitionHLOD, SourceCellName), METADATA_PARAMS(Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_SourceCellName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_SourceCellName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldPartitionHLOD_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_HLODSubActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_HLODSubActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_SubActorsHLODLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_GridIndexX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_GridIndexY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_GridIndexZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_HLODBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_MinVisibleDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_HLODHash,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_LODLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_bRequireWarmup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_SourceCell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionHLOD_Statics::NewProp_SourceCellName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWorldPartitionHLOD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldPartitionHLOD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldPartitionHLOD_Statics::ClassParams = {
		&AWorldPartitionHLOD::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWorldPartitionHLOD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionHLOD_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWorldPartitionHLOD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionHLOD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWorldPartitionHLOD()
	{
		if (!Z_Registration_Info_UClass_AWorldPartitionHLOD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldPartitionHLOD.OuterSingleton, Z_Construct_UClass_AWorldPartitionHLOD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWorldPartitionHLOD.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<AWorldPartitionHLOD>()
	{
		return AWorldPartitionHLOD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldPartitionHLOD);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AWorldPartitionHLOD)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWorldPartitionHLOD, AWorldPartitionHLOD::StaticClass, TEXT("AWorldPartitionHLOD"), &Z_Registration_Info_UClass_AWorldPartitionHLOD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldPartitionHLOD), 2756218323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_504531209(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
