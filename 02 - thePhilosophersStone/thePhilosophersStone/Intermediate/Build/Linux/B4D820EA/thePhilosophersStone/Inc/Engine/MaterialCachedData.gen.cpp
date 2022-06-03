// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/MaterialCachedData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialCachedData() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialFunctionInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialCachedParameterEntry();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialCachedParameters();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4d();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticComponentMaskValue();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParameterChannelNames();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialCachedExpressionData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialLayersFunctions();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeGrassType_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialInstanceCachedData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialFunctionInfo;
class UScriptStruct* FMaterialFunctionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialFunctionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialFunctionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialFunctionInfo, Z_Construct_UPackage__Script_Engine(), TEXT("MaterialFunctionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialFunctionInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialFunctionInfo>()
{
	return FMaterialFunctionInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Function;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Stores information about a function that this material references, used to know when the material needs to be recompiled. */" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "Stores information about a function that this material references, used to know when the material needs to be recompiled." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialFunctionInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_StateId_MetaData[] = {
		{ "Comment", "/** Id that the function had when this material was last compiled. */" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "Id that the function had when this material was last compiled." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_StateId = { "StateId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialFunctionInfo, StateId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_StateId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_StateId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_Function_MetaData[] = {
		{ "Comment", "/** The function which this material has a dependency on. */" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "The function which this material has a dependency on." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialFunctionInfo, Function), Z_Construct_UClass_UMaterialFunctionInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_Function_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_StateId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewProp_Function,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialFunctionInfo",
		sizeof(FMaterialFunctionInfo),
		alignof(FMaterialFunctionInfo),
		Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialFunctionInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialFunctionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialFunctionInfo.InnerSingleton, Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialFunctionInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialParameterCollectionInfo;
class UScriptStruct* FMaterialParameterCollectionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialParameterCollectionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialParameterCollectionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo, Z_Construct_UPackage__Script_Engine(), TEXT("MaterialParameterCollectionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialParameterCollectionInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialParameterCollectionInfo>()
{
	return FMaterialParameterCollectionInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParameterCollection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Stores information about a parameter collection that this material references, used to know when the material needs to be recompiled. */" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "Stores information about a parameter collection that this material references, used to know when the material needs to be recompiled." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialParameterCollectionInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_StateId_MetaData[] = {
		{ "Comment", "/** Id that the collection had when this material was last compiled. */" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "Id that the collection had when this material was last compiled." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_StateId = { "StateId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialParameterCollectionInfo, StateId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_StateId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_StateId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_ParameterCollection_MetaData[] = {
		{ "Comment", "/** The collection which this material has a dependency on. */" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "The collection which this material has a dependency on." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_ParameterCollection = { "ParameterCollection", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialParameterCollectionInfo, ParameterCollection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_ParameterCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_ParameterCollection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_StateId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewProp_ParameterCollection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialParameterCollectionInfo",
		sizeof(FMaterialParameterCollectionInfo),
		alignof(FMaterialParameterCollectionInfo),
		Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialParameterCollectionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialParameterCollectionInfo.InnerSingleton, Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialParameterCollectionInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialCachedParameterEditorInfo;
class UScriptStruct* FMaterialCachedParameterEditorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialCachedParameterEditorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialCachedParameterEditorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo, Z_Construct_UPackage__Script_Engine(), TEXT("MaterialCachedParameterEditorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialCachedParameterEditorInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialCachedParameterEditorInfo>()
{
	return FMaterialCachedParameterEditorInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Group;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SortPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpressionGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialCachedParameterEditorInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewProp_Description_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameterEditorInfo, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewProp_Group_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameterEditorInfo, Group), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewProp_SortPriority_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewProp_SortPriority = { "SortPriority", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameterEditorInfo, SortPriority), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewProp_SortPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewProp_SortPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewProp_ExpressionGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewProp_ExpressionGuid = { "ExpressionGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameterEditorInfo, ExpressionGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewProp_ExpressionGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewProp_ExpressionGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewProp_Group,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewProp_SortPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewProp_ExpressionGuid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialCachedParameterEditorInfo",
		sizeof(FMaterialCachedParameterEditorInfo),
		alignof(FMaterialCachedParameterEditorInfo),
		Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialCachedParameterEditorInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialCachedParameterEditorInfo.InnerSingleton, Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialCachedParameterEditorInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialCachedParameterEntry;
class UScriptStruct* FMaterialCachedParameterEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialCachedParameterEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialCachedParameterEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialCachedParameterEntry, Z_Construct_UPackage__Script_Engine(), TEXT("MaterialCachedParameterEntry"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialCachedParameterEntry.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialCachedParameterEntry>()
{
	return FMaterialCachedParameterEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfoSet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfoSet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ParameterInfoSet;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditorInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EditorInfo;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialCachedParameterEntry>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_ParameterInfoSet_ElementProp = { "ParameterInfoSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(nullptr, 0) }; // 3294237919
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_ParameterInfoSet_MetaData[] = {
		{ "Comment", "// This is used to map FMaterialParameterInfos to indices, which are then used to index various TArrays containing values for each type of parameter\n// (ExpressionGuids and Overrides, along with ScalarValues, VectorValues, etc)\n" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "This is used to map FMaterialParameterInfos to indices, which are then used to index various TArrays containing values for each type of parameter\n(ExpressionGuids and Overrides, along with ScalarValues, VectorValues, etc)" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FMaterialParameterInfo>::Value, "The structure 'FMaterialParameterInfo' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_ParameterInfoSet = { "ParameterInfoSet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameterEntry, ParameterInfoSet), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_ParameterInfoSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_ParameterInfoSet_MetaData)) }; // 3294237919
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_EditorInfo_Inner = { "EditorInfo", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo, METADATA_PARAMS(nullptr, 0) }; // 261779625
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_EditorInfo_MetaData[] = {
		{ "Comment", "// Editor-only information for each parameter\n" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "Editor-only information for each parameter" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_EditorInfo = { "EditorInfo", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameterEntry, EditorInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_EditorInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_EditorInfo_MetaData)) }; // 261779625
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_ParameterInfoSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_ParameterInfoSet,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_EditorInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewProp_EditorInfo,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialCachedParameterEntry",
		sizeof(FMaterialCachedParameterEntry),
		alignof(FMaterialCachedParameterEntry),
		Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialCachedParameterEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialCachedParameterEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialCachedParameterEntry.InnerSingleton, Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialCachedParameterEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialCachedParameters;
class UScriptStruct* FMaterialCachedParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialCachedParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialCachedParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialCachedParameters, Z_Construct_UPackage__Script_Engine(), TEXT("MaterialCachedParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialCachedParameters.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialCachedParameters>()
{
	return FMaterialCachedParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeEntries_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeEntries;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ScalarPrimitiveDataIndexValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalarPrimitiveDataIndexValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalarPrimitiveDataIndexValues;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VectorPrimitiveDataIndexValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorPrimitiveDataIndexValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorPrimitiveDataIndexValues;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScalarValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalarValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalarValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DoubleVectorValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoubleVectorValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DoubleVectorValues;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TextureValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureValues;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FontValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FontValues;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FontPageValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontPageValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FontPageValues;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RuntimeVirtualTextureValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeVirtualTextureValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimeVirtualTextureValues;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorOnlyEntries_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditorOnlyEntries;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_StaticSwitchValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticSwitchValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticSwitchValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticComponentMaskValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticComponentMaskValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticComponentMaskValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarMinMaxValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalarMinMaxValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalarMinMaxValues;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScalarCurveValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalarCurveValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalarCurveValues;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScalarCurveAtlasValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalarCurveAtlasValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalarCurveAtlasValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorChannelNameValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorChannelNameValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorChannelNameValues;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_VectorUsedAsChannelMaskValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorUsedAsChannelMaskValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorUsedAsChannelMaskValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureChannelNameValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureChannelNameValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureChannelNameValues;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialCachedParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_RuntimeEntries_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_RuntimeEntries = { "RuntimeEntries", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(RuntimeEntries, FMaterialCachedParameters), STRUCT_OFFSET(FMaterialCachedParameters, RuntimeEntries), Z_Construct_UScriptStruct_FMaterialCachedParameterEntry, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_RuntimeEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_RuntimeEntries_MetaData)) }; // 3083932172
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarPrimitiveDataIndexValues_Inner = { "ScalarPrimitiveDataIndexValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarPrimitiveDataIndexValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarPrimitiveDataIndexValues = { "ScalarPrimitiveDataIndexValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameters, ScalarPrimitiveDataIndexValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarPrimitiveDataIndexValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarPrimitiveDataIndexValues_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorPrimitiveDataIndexValues_Inner = { "VectorPrimitiveDataIndexValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorPrimitiveDataIndexValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorPrimitiveDataIndexValues = { "VectorPrimitiveDataIndexValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameters, VectorPrimitiveDataIndexValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorPrimitiveDataIndexValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorPrimitiveDataIndexValues_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarValues_Inner = { "ScalarValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarValues = { "ScalarValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameters, ScalarValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarValues_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorValues_Inner = { "VectorValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorValues = { "VectorValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameters, VectorValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorValues_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_DoubleVectorValues_Inner = { "DoubleVectorValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector4d, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_DoubleVectorValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_DoubleVectorValues = { "DoubleVectorValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameters, DoubleVectorValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_DoubleVectorValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_DoubleVectorValues_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_TextureValues_Inner = { "TextureValues", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_TextureValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_TextureValues = { "TextureValues", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameters, TextureValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_TextureValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_TextureValues_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_FontValues_Inner = { "FontValues", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_FontValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_FontValues = { "FontValues", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameters, FontValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_FontValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_FontValues_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_FontPageValues_Inner = { "FontPageValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_FontPageValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_FontPageValues = { "FontPageValues", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameters, FontPageValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_FontPageValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_FontPageValues_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_RuntimeVirtualTextureValues_Inner = { "RuntimeVirtualTextureValues", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_RuntimeVirtualTextureValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_RuntimeVirtualTextureValues = { "RuntimeVirtualTextureValues", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameters, RuntimeVirtualTextureValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_RuntimeVirtualTextureValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_RuntimeVirtualTextureValues_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_EditorOnlyEntries_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_EditorOnlyEntries = { "EditorOnlyEntries", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(EditorOnlyEntries, FMaterialCachedParameters), STRUCT_OFFSET(FMaterialCachedParameters, EditorOnlyEntries), Z_Construct_UScriptStruct_FMaterialCachedParameterEntry, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_EditorOnlyEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_EditorOnlyEntries_MetaData)) }; // 3083932172
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_StaticSwitchValues_Inner = { "StaticSwitchValues", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_StaticSwitchValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_StaticSwitchValues = { "StaticSwitchValues", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameters, StaticSwitchValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_StaticSwitchValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_StaticSwitchValues_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_StaticComponentMaskValues_Inner = { "StaticComponentMaskValues", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStaticComponentMaskValue, METADATA_PARAMS(nullptr, 0) }; // 4274143420
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_StaticComponentMaskValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_StaticComponentMaskValues = { "StaticComponentMaskValues", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameters, StaticComponentMaskValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_StaticComponentMaskValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_StaticComponentMaskValues_MetaData)) }; // 4274143420
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarMinMaxValues_Inner = { "ScalarMinMaxValues", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarMinMaxValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarMinMaxValues = { "ScalarMinMaxValues", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameters, ScalarMinMaxValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarMinMaxValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarMinMaxValues_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarCurveValues_Inner = { "ScalarCurveValues", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarCurveValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarCurveValues = { "ScalarCurveValues", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameters, ScalarCurveValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarCurveValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarCurveValues_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarCurveAtlasValues_Inner = { "ScalarCurveAtlasValues", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarCurveAtlasValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarCurveAtlasValues = { "ScalarCurveAtlasValues", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameters, ScalarCurveAtlasValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarCurveAtlasValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarCurveAtlasValues_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorChannelNameValues_Inner = { "VectorChannelNameValues", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FParameterChannelNames, METADATA_PARAMS(nullptr, 0) }; // 3477369234
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorChannelNameValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorChannelNameValues = { "VectorChannelNameValues", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameters, VectorChannelNameValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorChannelNameValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorChannelNameValues_MetaData)) }; // 3477369234
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorUsedAsChannelMaskValues_Inner = { "VectorUsedAsChannelMaskValues", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorUsedAsChannelMaskValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorUsedAsChannelMaskValues = { "VectorUsedAsChannelMaskValues", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameters, VectorUsedAsChannelMaskValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorUsedAsChannelMaskValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorUsedAsChannelMaskValues_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_TextureChannelNameValues_Inner = { "TextureChannelNameValues", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FParameterChannelNames, METADATA_PARAMS(nullptr, 0) }; // 3477369234
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_TextureChannelNameValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_TextureChannelNameValues = { "TextureChannelNameValues", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedParameters, TextureChannelNameValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_TextureChannelNameValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_TextureChannelNameValues_MetaData)) }; // 3477369234
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_RuntimeEntries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarPrimitiveDataIndexValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarPrimitiveDataIndexValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorPrimitiveDataIndexValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorPrimitiveDataIndexValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_DoubleVectorValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_DoubleVectorValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_TextureValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_TextureValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_FontValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_FontValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_FontPageValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_FontPageValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_RuntimeVirtualTextureValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_RuntimeVirtualTextureValues,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_EditorOnlyEntries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_StaticSwitchValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_StaticSwitchValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_StaticComponentMaskValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_StaticComponentMaskValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarMinMaxValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarMinMaxValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarCurveValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarCurveValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarCurveAtlasValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_ScalarCurveAtlasValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorChannelNameValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorChannelNameValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorUsedAsChannelMaskValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_VectorUsedAsChannelMaskValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_TextureChannelNameValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewProp_TextureChannelNameValues,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialCachedParameters",
		sizeof(FMaterialCachedParameters),
		alignof(FMaterialCachedParameters),
		Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialCachedParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialCachedParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialCachedParameters.InnerSingleton, Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialCachedParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialCachedExpressionData;
class UScriptStruct* FMaterialCachedExpressionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialCachedExpressionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialCachedExpressionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialCachedExpressionData, Z_Construct_UPackage__Script_Engine(), TEXT("MaterialCachedExpressionData"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialCachedExpressionData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialCachedExpressionData>()
{
	return FMaterialCachedExpressionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReferencedTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencedTextures;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FunctionInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FunctionInfos;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterCollectionInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterCollectionInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterCollectionInfos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialLayers_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialLayers;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GrassTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrassTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrassTypes;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DynamicParameterNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicParameterNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DynamicParameterNames;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_QualityLevelsUsed_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QualityLevelsUsed_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QualityLevelsUsed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasMaterialLayers_MetaData[];
#endif
		static void NewProp_bHasMaterialLayers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMaterialLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasRuntimeVirtualTextureOutput_MetaData[];
#endif
		static void NewProp_bHasRuntimeVirtualTextureOutput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRuntimeVirtualTextureOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasSceneColor_MetaData[];
#endif
		static void NewProp_bHasSceneColor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasSceneColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasPerInstanceCustomData_MetaData[];
#endif
		static void NewProp_bHasPerInstanceCustomData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPerInstanceCustomData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasPerInstanceRandom_MetaData[];
#endif
		static void NewProp_bHasPerInstanceRandom_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPerInstanceRandom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasVertexInterpolator_MetaData[];
#endif
		static void NewProp_bHasVertexInterpolator_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasVertexInterpolator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialAttributesPropertyConnectedBitmask_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaterialAttributesPropertyConnectedBitmask;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FNamePropertyParams NewProp_LandscapeLayerNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeLayerNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LandscapeLayerNames;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialCachedExpressionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_Parameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, Parameters), Z_Construct_UScriptStruct_FMaterialCachedParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_Parameters_MetaData)) }; // 530955014
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ReferencedTextures_Inner = { "ReferencedTextures", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ReferencedTextures_MetaData[] = {
		{ "Comment", "/** Array of all texture referenced by this material */" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "Array of all texture referenced by this material" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ReferencedTextures = { "ReferencedTextures", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, ReferencedTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ReferencedTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ReferencedTextures_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_FunctionInfos_Inner = { "FunctionInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMaterialFunctionInfo, METADATA_PARAMS(nullptr, 0) }; // 129791708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_FunctionInfos_MetaData[] = {
		{ "Comment", "/** Array of all functions this material depends on. */" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "Array of all functions this material depends on." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_FunctionInfos = { "FunctionInfos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, FunctionInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_FunctionInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_FunctionInfos_MetaData)) }; // 129791708
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ParameterCollectionInfos_Inner = { "ParameterCollectionInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo, METADATA_PARAMS(nullptr, 0) }; // 588735668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ParameterCollectionInfos_MetaData[] = {
		{ "Comment", "/** Array of all parameter collections this material depends on. */" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "Array of all parameter collections this material depends on." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ParameterCollectionInfos = { "ParameterCollectionInfos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, ParameterCollectionInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ParameterCollectionInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ParameterCollectionInfos_MetaData)) }; // 588735668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_MaterialLayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_MaterialLayers = { "MaterialLayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, MaterialLayers), Z_Construct_UScriptStruct_FMaterialLayersFunctions, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_MaterialLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_MaterialLayers_MetaData)) }; // 566012996
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_GrassTypes_Inner = { "GrassTypes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULandscapeGrassType_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_GrassTypes_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_GrassTypes = { "GrassTypes", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, GrassTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_GrassTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_GrassTypes_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DynamicParameterNames_Inner = { "DynamicParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DynamicParameterNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DynamicParameterNames = { "DynamicParameterNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, DynamicParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DynamicParameterNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DynamicParameterNames_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_QualityLevelsUsed_Inner = { "QualityLevelsUsed", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_QualityLevelsUsed_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_QualityLevelsUsed = { "QualityLevelsUsed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, QualityLevelsUsed), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_QualityLevelsUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_QualityLevelsUsed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasMaterialLayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasMaterialLayers_SetBit(void* Obj)
	{
		((FMaterialCachedExpressionData*)Obj)->bHasMaterialLayers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasMaterialLayers = { "bHasMaterialLayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMaterialCachedExpressionData), &Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasMaterialLayers_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasMaterialLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasMaterialLayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasRuntimeVirtualTextureOutput_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasRuntimeVirtualTextureOutput_SetBit(void* Obj)
	{
		((FMaterialCachedExpressionData*)Obj)->bHasRuntimeVirtualTextureOutput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasRuntimeVirtualTextureOutput = { "bHasRuntimeVirtualTextureOutput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMaterialCachedExpressionData), &Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasRuntimeVirtualTextureOutput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasRuntimeVirtualTextureOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasRuntimeVirtualTextureOutput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasSceneColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasSceneColor_SetBit(void* Obj)
	{
		((FMaterialCachedExpressionData*)Obj)->bHasSceneColor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasSceneColor = { "bHasSceneColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMaterialCachedExpressionData), &Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasSceneColor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasSceneColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasSceneColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasPerInstanceCustomData_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasPerInstanceCustomData_SetBit(void* Obj)
	{
		((FMaterialCachedExpressionData*)Obj)->bHasPerInstanceCustomData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasPerInstanceCustomData = { "bHasPerInstanceCustomData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMaterialCachedExpressionData), &Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasPerInstanceCustomData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasPerInstanceCustomData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasPerInstanceCustomData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasPerInstanceRandom_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasPerInstanceRandom_SetBit(void* Obj)
	{
		((FMaterialCachedExpressionData*)Obj)->bHasPerInstanceRandom = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasPerInstanceRandom = { "bHasPerInstanceRandom", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMaterialCachedExpressionData), &Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasPerInstanceRandom_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasPerInstanceRandom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasPerInstanceRandom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasVertexInterpolator_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasVertexInterpolator_SetBit(void* Obj)
	{
		((FMaterialCachedExpressionData*)Obj)->bHasVertexInterpolator = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasVertexInterpolator = { "bHasVertexInterpolator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMaterialCachedExpressionData), &Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasVertexInterpolator_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasVertexInterpolator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasVertexInterpolator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_MaterialAttributesPropertyConnectedBitmask_MetaData[] = {
		{ "Comment", "/** Each bit corresponds to EMaterialProperty connection status. */" },
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
		{ "ToolTip", "Each bit corresponds to EMaterialProperty connection status." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_MaterialAttributesPropertyConnectedBitmask = { "MaterialAttributesPropertyConnectedBitmask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, MaterialAttributesPropertyConnectedBitmask), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_MaterialAttributesPropertyConnectedBitmask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_MaterialAttributesPropertyConnectedBitmask_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_LandscapeLayerNames_Inner = { "LandscapeLayerNames", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_LandscapeLayerNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_LandscapeLayerNames = { "LandscapeLayerNames", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialCachedExpressionData, LandscapeLayerNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_LandscapeLayerNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_LandscapeLayerNames_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_Parameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ReferencedTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ReferencedTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_FunctionInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_FunctionInfos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ParameterCollectionInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_ParameterCollectionInfos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_MaterialLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_GrassTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_GrassTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DynamicParameterNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_DynamicParameterNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_QualityLevelsUsed_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_QualityLevelsUsed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasMaterialLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasRuntimeVirtualTextureOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasSceneColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasPerInstanceCustomData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasPerInstanceRandom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_bHasVertexInterpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_MaterialAttributesPropertyConnectedBitmask,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_LandscapeLayerNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewProp_LandscapeLayerNames,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialCachedExpressionData",
		sizeof(FMaterialCachedExpressionData),
		alignof(FMaterialCachedExpressionData),
		Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialCachedExpressionData()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialCachedExpressionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialCachedExpressionData.InnerSingleton, Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialCachedExpressionData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialInstanceCachedData;
class UScriptStruct* FMaterialInstanceCachedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialInstanceCachedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialInstanceCachedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialInstanceCachedData, Z_Construct_UPackage__Script_Engine(), TEXT("MaterialInstanceCachedData"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialInstanceCachedData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialInstanceCachedData>()
{
	return FMaterialInstanceCachedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParentLayerIndexRemap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentLayerIndexRemap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentLayerIndexRemap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialInstanceCachedData>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics::NewProp_ParentLayerIndexRemap_Inner = { "ParentLayerIndexRemap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics::NewProp_ParentLayerIndexRemap_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialCachedData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics::NewProp_ParentLayerIndexRemap = { "ParentLayerIndexRemap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialInstanceCachedData, ParentLayerIndexRemap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics::NewProp_ParentLayerIndexRemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics::NewProp_ParentLayerIndexRemap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics::NewProp_ParentLayerIndexRemap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics::NewProp_ParentLayerIndexRemap,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialInstanceCachedData",
		sizeof(FMaterialInstanceCachedData),
		alignof(FMaterialInstanceCachedData),
		Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialInstanceCachedData()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialInstanceCachedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialInstanceCachedData.InnerSingleton, Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialInstanceCachedData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialCachedData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialCachedData_h_Statics::ScriptStructInfo[] = {
		{ FMaterialFunctionInfo::StaticStruct, Z_Construct_UScriptStruct_FMaterialFunctionInfo_Statics::NewStructOps, TEXT("MaterialFunctionInfo"), &Z_Registration_Info_UScriptStruct_MaterialFunctionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialFunctionInfo), 129791708U) },
		{ FMaterialParameterCollectionInfo::StaticStruct, Z_Construct_UScriptStruct_FMaterialParameterCollectionInfo_Statics::NewStructOps, TEXT("MaterialParameterCollectionInfo"), &Z_Registration_Info_UScriptStruct_MaterialParameterCollectionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialParameterCollectionInfo), 588735668U) },
		{ FMaterialCachedParameterEditorInfo::StaticStruct, Z_Construct_UScriptStruct_FMaterialCachedParameterEditorInfo_Statics::NewStructOps, TEXT("MaterialCachedParameterEditorInfo"), &Z_Registration_Info_UScriptStruct_MaterialCachedParameterEditorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialCachedParameterEditorInfo), 261779625U) },
		{ FMaterialCachedParameterEntry::StaticStruct, Z_Construct_UScriptStruct_FMaterialCachedParameterEntry_Statics::NewStructOps, TEXT("MaterialCachedParameterEntry"), &Z_Registration_Info_UScriptStruct_MaterialCachedParameterEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialCachedParameterEntry), 3083932172U) },
		{ FMaterialCachedParameters::StaticStruct, Z_Construct_UScriptStruct_FMaterialCachedParameters_Statics::NewStructOps, TEXT("MaterialCachedParameters"), &Z_Registration_Info_UScriptStruct_MaterialCachedParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialCachedParameters), 530955014U) },
		{ FMaterialCachedExpressionData::StaticStruct, Z_Construct_UScriptStruct_FMaterialCachedExpressionData_Statics::NewStructOps, TEXT("MaterialCachedExpressionData"), &Z_Registration_Info_UScriptStruct_MaterialCachedExpressionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialCachedExpressionData), 2225340700U) },
		{ FMaterialInstanceCachedData::StaticStruct, Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics::NewStructOps, TEXT("MaterialInstanceCachedData"), &Z_Registration_Info_UScriptStruct_MaterialInstanceCachedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialInstanceCachedData), 3778681532U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialCachedData_h_1350165496(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialCachedData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialCachedData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
