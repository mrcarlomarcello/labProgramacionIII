// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/WorldPartition/WorldPartitionMiniMap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionMiniMap() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AWorldPartitionMiniMap_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AWorldPartitionMiniMap();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorDataLayer();
// End Cross Module References
	void AWorldPartitionMiniMap::StaticRegisterNativesAWorldPartitionMiniMap()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWorldPartitionMiniMap);
	UClass* Z_Construct_UClass_AWorldPartitionMiniMap_NoRegister()
	{
		return AWorldPartitionMiniMap::StaticClass();
	}
	struct Z_Construct_UClass_AWorldPartitionMiniMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MiniMapWorldBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MiniMapWorldBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MiniMapTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MiniMapTexture;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludedDataLayers_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedDataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ExcludedDataLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MiniMapTileSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MiniMapTileSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWorldPartitionMiniMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPartitionMiniMap_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A mini map to preview the world in world partition window. (editor-only)\n */" },
		{ "HideCategories", "Actor Advanced Display Events Object Attachment Info Input Blueprint Layers Tags Replication Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "WorldPartition/WorldPartitionMiniMap.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionMiniMap.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A mini map to preview the world in world partition window. (editor-only)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_MiniMapWorldBounds_MetaData[] = {
		{ "Category", "WorldPartitionMiniMap" },
		{ "Comment", "/*WorldBounds for MinMapTexture*/" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionMiniMap.h" },
		{ "ToolTip", "WorldBounds for MinMapTexture" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_MiniMapWorldBounds = { "MiniMapWorldBounds", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPartitionMiniMap, MiniMapWorldBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_MiniMapWorldBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_MiniMapWorldBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_UVOffset_MetaData[] = {
		{ "Category", "WorldPartitionMiniMap" },
		{ "Comment", "/* UVOffset used to setup Virtual Texture */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionMiniMap.h" },
		{ "ToolTip", "UVOffset used to setup Virtual Texture" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_UVOffset = { "UVOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPartitionMiniMap, UVOffset), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_UVOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_UVOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_MiniMapTexture_MetaData[] = {
		{ "Category", "WorldPartitionMiniMap" },
		{ "Comment", "/*MiniMap Texture for displaying on world partition window*/" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionMiniMap.h" },
		{ "ToolTip", "MiniMap Texture for displaying on world partition window" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_MiniMapTexture = { "MiniMapTexture", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPartitionMiniMap, MiniMapTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_MiniMapTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_MiniMapTexture_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_ExcludedDataLayers_ElementProp = { "ExcludedDataLayers", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(nullptr, 0) }; // 3962210771
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_ExcludedDataLayers_MetaData[] = {
		{ "Category", "WorldPartitionMiniMap" },
		{ "Comment", "/*Datalayers excluded from MiniMap rendering*/" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionMiniMap.h" },
		{ "ToolTip", "Datalayers excluded from MiniMap rendering" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FActorDataLayer>::Value, "The structure 'FActorDataLayer' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_ExcludedDataLayers = { "ExcludedDataLayers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPartitionMiniMap, ExcludedDataLayers), METADATA_PARAMS(Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_ExcludedDataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_ExcludedDataLayers_MetaData)) }; // 3962210771
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_MiniMapTileSize_MetaData[] = {
		{ "Category", "WorldPartitionMiniMap" },
		{ "Comment", "/*MiniMap Tile Size*/" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionMiniMap.h" },
		{ "ToolTip", "MiniMap Tile Size" },
		{ "UIMax", "8192" },
		{ "UIMin", "256" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_MiniMapTileSize = { "MiniMapTileSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldPartitionMiniMap, MiniMapTileSize), METADATA_PARAMS(Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_MiniMapTileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_MiniMapTileSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldPartitionMiniMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_MiniMapWorldBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_UVOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_MiniMapTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_ExcludedDataLayers_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_ExcludedDataLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldPartitionMiniMap_Statics::NewProp_MiniMapTileSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWorldPartitionMiniMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldPartitionMiniMap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldPartitionMiniMap_Statics::ClassParams = {
		&AWorldPartitionMiniMap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWorldPartitionMiniMap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionMiniMap_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWorldPartitionMiniMap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionMiniMap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWorldPartitionMiniMap()
	{
		if (!Z_Registration_Info_UClass_AWorldPartitionMiniMap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldPartitionMiniMap.OuterSingleton, Z_Construct_UClass_AWorldPartitionMiniMap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWorldPartitionMiniMap.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<AWorldPartitionMiniMap>()
	{
		return AWorldPartitionMiniMap::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldPartitionMiniMap);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMap_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMap_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWorldPartitionMiniMap, AWorldPartitionMiniMap::StaticClass, TEXT("AWorldPartitionMiniMap"), &Z_Registration_Info_UClass_AWorldPartitionMiniMap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldPartitionMiniMap), 346204231U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMap_h_3536667603(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMap_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
