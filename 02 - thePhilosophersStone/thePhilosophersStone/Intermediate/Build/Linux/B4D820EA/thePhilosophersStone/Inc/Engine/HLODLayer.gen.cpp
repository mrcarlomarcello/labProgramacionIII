// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/WorldPartition/HLOD/HLODLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODLayer() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHLODLayerType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UHLODLayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHLODLayer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UHLODBuilder_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UHLODBuilderSettings_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshMergingSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshProxySettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshApproximationSettings();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHLODLayerType;
	static UEnum* EHLODLayerType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHLODLayerType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHLODLayerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EHLODLayerType, Z_Construct_UPackage__Script_Engine(), TEXT("EHLODLayerType"));
		}
		return Z_Registration_Info_UEnum_EHLODLayerType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EHLODLayerType>()
	{
		return EHLODLayerType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EHLODLayerType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EHLODLayerType_Statics::Enumerators[] = {
		{ "EHLODLayerType::Instancing", (int64)EHLODLayerType::Instancing },
		{ "EHLODLayerType::MeshMerge", (int64)EHLODLayerType::MeshMerge },
		{ "EHLODLayerType::MeshSimplify", (int64)EHLODLayerType::MeshSimplify },
		{ "EHLODLayerType::MeshApproximate", (int64)EHLODLayerType::MeshApproximate },
		{ "EHLODLayerType::Custom", (int64)EHLODLayerType::Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EHLODLayerType_Statics::Enum_MetaDataParams[] = {
		{ "Custom.DisplayName", "Custom" },
		{ "Custom.Name", "EHLODLayerType::Custom" },
		{ "Instancing.DisplayName", "Instancing" },
		{ "Instancing.Name", "EHLODLayerType::Instancing" },
		{ "MeshApproximate.DisplayName", "Approximated Mesh" },
		{ "MeshApproximate.Name", "EHLODLayerType::MeshApproximate" },
		{ "MeshMerge.DisplayName", "Merged Mesh" },
		{ "MeshMerge.Name", "EHLODLayerType::MeshMerge" },
		{ "MeshSimplify.DisplayName", "Simplified Mesh" },
		{ "MeshSimplify.Name", "EHLODLayerType::MeshSimplify" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODLayer.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EHLODLayerType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EHLODLayerType",
		"EHLODLayerType",
		Z_Construct_UEnum_Engine_EHLODLayerType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EHLODLayerType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EHLODLayerType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EHLODLayerType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EHLODLayerType()
	{
		if (!Z_Registration_Info_UEnum_EHLODLayerType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHLODLayerType.InnerSingleton, Z_Construct_UEnum_Engine_EHLODLayerType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHLODLayerType.InnerSingleton;
	}
	void UHLODLayer::StaticRegisterNativesUHLODLayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHLODLayer);
	UClass* Z_Construct_UClass_UHLODLayer_NoRegister()
	{
		return UHLODLayer::StaticClass();
	}
	struct Z_Construct_UClass_UHLODLayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_LayerType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LayerType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HLODBuilderClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HLODBuilderClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HLODBuilderSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HLODBuilderSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSpatiallyLoaded_MetaData[];
#endif
		static void NewProp_bIsSpatiallyLoaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSpatiallyLoaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysLoaded_MetaData[];
#endif
		static void NewProp_bAlwaysLoaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysLoaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CellSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingRange_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_LoadingRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentLayer_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ParentLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshMergeSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshMergeSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshSimplifySettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshSimplifySettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshApproximationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshApproximationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HLODMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_HLODMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHLODLayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODLayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WorldPartition/HLOD/HLODLayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODLayer.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHLODLayer_Statics::NewProp_LayerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODLayer_Statics::NewProp_LayerType_MetaData[] = {
		{ "Category", "HLOD" },
		{ "Comment", "/** Type of HLOD generation to use */" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODLayer.h" },
		{ "ToolTip", "Type of HLOD generation to use" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHLODLayer_Statics::NewProp_LayerType = { "LayerType", nullptr, (EPropertyFlags)0x0040000800004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHLODLayer, LayerType), Z_Construct_UEnum_Engine_EHLODLayerType, METADATA_PARAMS(Z_Construct_UClass_UHLODLayer_Statics::NewProp_LayerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODLayer_Statics::NewProp_LayerType_MetaData)) }; // 3005817978
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODLayer_Statics::NewProp_HLODBuilderClass_MetaData[] = {
		{ "Category", "HLOD" },
		{ "Comment", "/** HLODBuilder class */" },
		{ "EditCondition", "LayerType == EHLODLayerType::Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODLayer.h" },
		{ "ToolTip", "HLODBuilder class" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHLODLayer_Statics::NewProp_HLODBuilderClass = { "HLODBuilderClass", nullptr, (EPropertyFlags)0x0044000800004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHLODLayer, HLODBuilderClass), Z_Construct_UClass_UHLODBuilder_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UHLODLayer_Statics::NewProp_HLODBuilderClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODLayer_Statics::NewProp_HLODBuilderClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODLayer_Statics::NewProp_HLODBuilderSettings_MetaData[] = {
		{ "Category", "HLOD" },
		{ "EditInline", "" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODLayer.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UHLODLayer_Statics::NewProp_HLODBuilderSettings = { "HLODBuilderSettings", nullptr, (EPropertyFlags)0x0044000802020009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHLODLayer, HLODBuilderSettings), Z_Construct_UClass_UHLODBuilderSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHLODLayer_Statics::NewProp_HLODBuilderSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODLayer_Statics::NewProp_HLODBuilderSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODLayer_Statics::NewProp_bIsSpatiallyLoaded_MetaData[] = {
		{ "Category", "HLOD" },
		{ "Comment", "/** Whether HLOD actors generated for this layer will be spatially loaded */" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODLayer.h" },
		{ "ToolTip", "Whether HLOD actors generated for this layer will be spatially loaded" },
	};
#endif
	void Z_Construct_UClass_UHLODLayer_Statics::NewProp_bIsSpatiallyLoaded_SetBit(void* Obj)
	{
		((UHLODLayer*)Obj)->bIsSpatiallyLoaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHLODLayer_Statics::NewProp_bIsSpatiallyLoaded = { "bIsSpatiallyLoaded", nullptr, (EPropertyFlags)0x0040000800004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UHLODLayer), &Z_Construct_UClass_UHLODLayer_Statics::NewProp_bIsSpatiallyLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHLODLayer_Statics::NewProp_bIsSpatiallyLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODLayer_Statics::NewProp_bIsSpatiallyLoaded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODLayer_Statics::NewProp_bAlwaysLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODLayer.h" },
	};
#endif
	void Z_Construct_UClass_UHLODLayer_Statics::NewProp_bAlwaysLoaded_SetBit(void* Obj)
	{
		((UHLODLayer*)Obj)->bAlwaysLoaded_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHLODLayer_Statics::NewProp_bAlwaysLoaded = { "bAlwaysLoaded", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UHLODLayer), &Z_Construct_UClass_UHLODLayer_Statics::NewProp_bAlwaysLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHLODLayer_Statics::NewProp_bAlwaysLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODLayer_Statics::NewProp_bAlwaysLoaded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODLayer_Statics::NewProp_CellSize_MetaData[] = {
		{ "Category", "HLOD" },
		{ "Comment", "/** Cell size of the runtime grid created to encompass HLOD actors generated for this HLOD Layer */" },
		{ "EditCondition", "bIsSpatiallyLoaded" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODLayer.h" },
		{ "ToolTip", "Cell size of the runtime grid created to encompass HLOD actors generated for this HLOD Layer" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHLODLayer_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0040000800004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHLODLayer, CellSize), METADATA_PARAMS(Z_Construct_UClass_UHLODLayer_Statics::NewProp_CellSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODLayer_Statics::NewProp_CellSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODLayer_Statics::NewProp_LoadingRange_MetaData[] = {
		{ "Category", "HLOD" },
		{ "Comment", "/** Loading range of the runtime grid created to encompass HLOD actors generated for this HLOD Layer */" },
		{ "EditCondition", "bIsSpatiallyLoaded" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODLayer.h" },
		{ "ToolTip", "Loading range of the runtime grid created to encompass HLOD actors generated for this HLOD Layer" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UHLODLayer_Statics::NewProp_LoadingRange = { "LoadingRange", nullptr, (EPropertyFlags)0x0040000800004001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHLODLayer, LoadingRange), METADATA_PARAMS(Z_Construct_UClass_UHLODLayer_Statics::NewProp_LoadingRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODLayer_Statics::NewProp_LoadingRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODLayer_Statics::NewProp_ParentLayer_MetaData[] = {
		{ "Category", "HLOD" },
		{ "Comment", "/** HLOD Layer to assign to the generated HLOD actors */" },
		{ "EditCondition", "bIsSpatiallyLoaded" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODLayer.h" },
		{ "ToolTip", "HLOD Layer to assign to the generated HLOD actors" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHLODLayer_Statics::NewProp_ParentLayer = { "ParentLayer", nullptr, (EPropertyFlags)0x0044000800004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHLODLayer, ParentLayer), Z_Construct_UClass_UHLODLayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHLODLayer_Statics::NewProp_ParentLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODLayer_Statics::NewProp_ParentLayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODLayer_Statics::NewProp_MeshMergeSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODLayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHLODLayer_Statics::NewProp_MeshMergeSettings = { "MeshMergeSettings", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHLODLayer, MeshMergeSettings_DEPRECATED), Z_Construct_UScriptStruct_FMeshMergingSettings, METADATA_PARAMS(Z_Construct_UClass_UHLODLayer_Statics::NewProp_MeshMergeSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODLayer_Statics::NewProp_MeshMergeSettings_MetaData)) }; // 4152754152
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODLayer_Statics::NewProp_MeshSimplifySettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODLayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHLODLayer_Statics::NewProp_MeshSimplifySettings = { "MeshSimplifySettings", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHLODLayer, MeshSimplifySettings_DEPRECATED), Z_Construct_UScriptStruct_FMeshProxySettings, METADATA_PARAMS(Z_Construct_UClass_UHLODLayer_Statics::NewProp_MeshSimplifySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODLayer_Statics::NewProp_MeshSimplifySettings_MetaData)) }; // 970875992
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODLayer_Statics::NewProp_MeshApproximationSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODLayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHLODLayer_Statics::NewProp_MeshApproximationSettings = { "MeshApproximationSettings", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHLODLayer, MeshApproximationSettings_DEPRECATED), Z_Construct_UScriptStruct_FMeshApproximationSettings, METADATA_PARAMS(Z_Construct_UClass_UHLODLayer_Statics::NewProp_MeshApproximationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODLayer_Statics::NewProp_MeshApproximationSettings_MetaData)) }; // 897450091
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODLayer_Statics::NewProp_HLODMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODLayer.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHLODLayer_Statics::NewProp_HLODMaterial = { "HLODMaterial", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHLODLayer, HLODMaterial_DEPRECATED), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHLODLayer_Statics::NewProp_HLODMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODLayer_Statics::NewProp_HLODMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHLODLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODLayer_Statics::NewProp_LayerType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODLayer_Statics::NewProp_LayerType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODLayer_Statics::NewProp_HLODBuilderClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODLayer_Statics::NewProp_HLODBuilderSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODLayer_Statics::NewProp_bIsSpatiallyLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODLayer_Statics::NewProp_bAlwaysLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODLayer_Statics::NewProp_CellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODLayer_Statics::NewProp_LoadingRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODLayer_Statics::NewProp_ParentLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODLayer_Statics::NewProp_MeshMergeSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODLayer_Statics::NewProp_MeshSimplifySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODLayer_Statics::NewProp_MeshApproximationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODLayer_Statics::NewProp_HLODMaterial,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHLODLayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHLODLayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHLODLayer_Statics::ClassParams = {
		&UHLODLayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UHLODLayer_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UHLODLayer_Statics::PropPointers), 0),
		0,
		0x001004A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHLODLayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODLayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHLODLayer()
	{
		if (!Z_Registration_Info_UClass_UHLODLayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHLODLayer.OuterSingleton, Z_Construct_UClass_UHLODLayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHLODLayer.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UHLODLayer>()
	{
		return UHLODLayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHLODLayer);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_Statics::EnumInfo[] = {
		{ EHLODLayerType_StaticEnum, TEXT("EHLODLayerType"), &Z_Registration_Info_UEnum_EHLODLayerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3005817978U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHLODLayer, UHLODLayer::StaticClass, TEXT("UHLODLayer"), &Z_Registration_Info_UClass_UHLODLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHLODLayer), 1259992183U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_1835854101(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
