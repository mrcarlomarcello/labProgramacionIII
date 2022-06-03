// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/StaticParameterSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticParameterSet() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticParameterBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticSwitchParameter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticComponentMaskParameter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMaterialLayersParameter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialLayersFunctions();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticParameterSet();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaticParameterBase;
class UScriptStruct* FStaticParameterBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaticParameterBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaticParameterBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticParameterBase, Z_Construct_UPackage__Script_Engine(), TEXT("StaticParameterBase"));
	}
	return Z_Registration_Info_UScriptStruct_StaticParameterBase.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStaticParameterBase>()
{
	return FStaticParameterBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStaticParameterBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_MetaData[];
#endif
		static void NewProp_bOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticParameterBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\nBase parameter properties\n*/" },
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
		{ "ToolTip", "Base parameter properties" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticParameterBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticParameterBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticParameterBase_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticParameterBase_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticParameterBase, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticParameterBase_Statics::NewProp_ParameterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticParameterBase_Statics::NewProp_ParameterInfo_MetaData)) }; // 3294237919
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticParameterBase_Statics::NewProp_bOverride_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticParameterBase_Statics::NewProp_bOverride_SetBit(void* Obj)
	{
		((FStaticParameterBase*)Obj)->bOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticParameterBase_Statics::NewProp_bOverride = { "bOverride", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStaticParameterBase), &Z_Construct_UScriptStruct_FStaticParameterBase_Statics::NewProp_bOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticParameterBase_Statics::NewProp_bOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticParameterBase_Statics::NewProp_bOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticParameterBase_Statics::NewProp_ExpressionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticParameterBase_Statics::NewProp_ExpressionGUID = { "ExpressionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticParameterBase, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticParameterBase_Statics::NewProp_ExpressionGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticParameterBase_Statics::NewProp_ExpressionGUID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticParameterBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticParameterBase_Statics::NewProp_ParameterInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticParameterBase_Statics::NewProp_bOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticParameterBase_Statics::NewProp_ExpressionGUID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticParameterBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StaticParameterBase",
		sizeof(FStaticParameterBase),
		alignof(FStaticParameterBase),
		Z_Construct_UScriptStruct_FStaticParameterBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticParameterBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticParameterBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticParameterBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticParameterBase()
	{
		if (!Z_Registration_Info_UScriptStruct_StaticParameterBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaticParameterBase.InnerSingleton, Z_Construct_UScriptStruct_FStaticParameterBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StaticParameterBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStaticSwitchParameter>() == std::is_polymorphic<FStaticParameterBase>(), "USTRUCT FStaticSwitchParameter cannot be polymorphic unless super FStaticParameterBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaticSwitchParameter;
class UScriptStruct* FStaticSwitchParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaticSwitchParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaticSwitchParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticSwitchParameter, Z_Construct_UPackage__Script_Engine(), TEXT("StaticSwitchParameter"));
	}
	return Z_Registration_Info_UScriptStruct_StaticSwitchParameter.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStaticSwitchParameter>()
{
	return FStaticSwitchParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Holds the information for a static switch parameter\n*/" },
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
		{ "ToolTip", "Holds the information for a static switch parameter" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticSwitchParameter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((FStaticSwitchParameter*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStaticSwitchParameter), &Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FStaticParameterBase,
		&NewStructOps,
		"StaticSwitchParameter",
		sizeof(FStaticSwitchParameter),
		alignof(FStaticSwitchParameter),
		Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticSwitchParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_StaticSwitchParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaticSwitchParameter.InnerSingleton, Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StaticSwitchParameter.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStaticComponentMaskParameter>() == std::is_polymorphic<FStaticParameterBase>(), "USTRUCT FStaticComponentMaskParameter cannot be polymorphic unless super FStaticParameterBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaticComponentMaskParameter;
class UScriptStruct* FStaticComponentMaskParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaticComponentMaskParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaticComponentMaskParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticComponentMaskParameter, Z_Construct_UPackage__Script_Engine(), TEXT("StaticComponentMaskParameter"));
	}
	return Z_Registration_Info_UScriptStruct_StaticComponentMaskParameter.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStaticComponentMaskParameter>()
{
	return FStaticComponentMaskParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[];
#endif
		static void NewProp_R_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_R;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_G_MetaData[];
#endif
		static void NewProp_G_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_G;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static void NewProp_B_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static void NewProp_A_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_A;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Holds the information for a static component mask parameter\n*/" },
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
		{ "ToolTip", "Holds the information for a static component mask parameter" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticComponentMaskParameter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_R_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_R_SetBit(void* Obj)
	{
		((FStaticComponentMaskParameter*)Obj)->R = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStaticComponentMaskParameter), &Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_R_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_R_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_G_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_G_SetBit(void* Obj)
	{
		((FStaticComponentMaskParameter*)Obj)->G = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_G = { "G", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStaticComponentMaskParameter), &Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_G_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_G_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_G_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_B_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_B_SetBit(void* Obj)
	{
		((FStaticComponentMaskParameter*)Obj)->B = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStaticComponentMaskParameter), &Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_B_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_A_SetBit(void* Obj)
	{
		((FStaticComponentMaskParameter*)Obj)->A = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStaticComponentMaskParameter), &Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_A_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_A_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_R,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_G,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewProp_A,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FStaticParameterBase,
		&NewStructOps,
		"StaticComponentMaskParameter",
		sizeof(FStaticComponentMaskParameter),
		alignof(FStaticComponentMaskParameter),
		Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticComponentMaskParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_StaticComponentMaskParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaticComponentMaskParameter.InnerSingleton, Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StaticComponentMaskParameter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaticTerrainLayerWeightParameter;
class UScriptStruct* FStaticTerrainLayerWeightParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaticTerrainLayerWeightParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaticTerrainLayerWeightParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter, Z_Construct_UPackage__Script_Engine(), TEXT("StaticTerrainLayerWeightParameter"));
	}
	return Z_Registration_Info_UScriptStruct_StaticTerrainLayerWeightParameter.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStaticTerrainLayerWeightParameter>()
{
	return FStaticTerrainLayerWeightParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_MetaData[];
#endif
		static void NewProp_bOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WeightmapIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWeightBasedBlend_MetaData[];
#endif
		static void NewProp_bWeightBasedBlend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeightBasedBlend;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Stores information that maps a terrain layer to a particular weightmap index\n* Despite the name, these are not actually material parameters. These bindings are automatically generated by landscape when materials are initialized\n* Still stored in FStaticParameterSet, since it influences generation of shaders on the MI\n*/" },
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
		{ "ToolTip", "Stores information that maps a terrain layer to a particular weightmap index\nDespite the name, these are not actually material parameters. These bindings are automatically generated by landscape when materials are initialized\nStill stored in FStaticParameterSet, since it influences generation of shaders on the MI" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticTerrainLayerWeightParameter>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticTerrainLayerWeightParameter, ParameterInfo_DEPRECATED), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_ParameterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_ParameterInfo_MetaData)) }; // 3294237919
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_ExpressionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_ExpressionGUID = { "ExpressionGUID", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticTerrainLayerWeightParameter, ExpressionGUID_DEPRECATED), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_ExpressionGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_ExpressionGUID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_bOverride_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_bOverride_SetBit(void* Obj)
	{
		((FStaticTerrainLayerWeightParameter*)Obj)->bOverride_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_bOverride = { "bOverride", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStaticTerrainLayerWeightParameter), &Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_bOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_bOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_bOverride_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_LayerName_MetaData[] = {
		{ "Comment", "// WITH_EDITORONLY_DATA\n" },
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
		{ "ToolTip", "WITH_EDITORONLY_DATA" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticTerrainLayerWeightParameter, LayerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_LayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_LayerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_WeightmapIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_WeightmapIndex = { "WeightmapIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticTerrainLayerWeightParameter, WeightmapIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_WeightmapIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_WeightmapIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_bWeightBasedBlend_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_bWeightBasedBlend_SetBit(void* Obj)
	{
		((FStaticTerrainLayerWeightParameter*)Obj)->bWeightBasedBlend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_bWeightBasedBlend = { "bWeightBasedBlend", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStaticTerrainLayerWeightParameter), &Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_bWeightBasedBlend_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_bWeightBasedBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_bWeightBasedBlend_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_ParameterInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_ExpressionGUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_bOverride,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_LayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_WeightmapIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewProp_bWeightBasedBlend,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StaticTerrainLayerWeightParameter",
		sizeof(FStaticTerrainLayerWeightParameter),
		alignof(FStaticTerrainLayerWeightParameter),
		Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_StaticTerrainLayerWeightParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaticTerrainLayerWeightParameter.InnerSingleton, Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StaticTerrainLayerWeightParameter.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStaticMaterialLayersParameter>() == std::is_polymorphic<FStaticParameterBase>(), "USTRUCT FStaticMaterialLayersParameter cannot be polymorphic unless super FStaticParameterBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaticMaterialLayersParameter;
class UScriptStruct* FStaticMaterialLayersParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMaterialLayersParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaticMaterialLayersParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMaterialLayersParameter, Z_Construct_UPackage__Script_Engine(), TEXT("StaticMaterialLayersParameter"));
	}
	return Z_Registration_Info_UScriptStruct_StaticMaterialLayersParameter.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStaticMaterialLayersParameter>()
{
	return FStaticMaterialLayersParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMaterialLayersParameter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::NewProp_Value_MetaData[] = {
		{ "Comment", "// WITH_EDITOR\n" },
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
		{ "ToolTip", "WITH_EDITOR" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMaterialLayersParameter, Value), Z_Construct_UScriptStruct_FMaterialLayersFunctions, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::NewProp_Value_MetaData)) }; // 566012996
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FStaticParameterBase,
		&NewStructOps,
		"StaticMaterialLayersParameter",
		sizeof(FStaticMaterialLayersParameter),
		alignof(FStaticMaterialLayersParameter),
		Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticMaterialLayersParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_StaticMaterialLayersParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaticMaterialLayersParameter.InnerSingleton, Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StaticMaterialLayersParameter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaticParameterSet;
class UScriptStruct* FStaticParameterSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaticParameterSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaticParameterSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticParameterSet, Z_Construct_UPackage__Script_Engine(), TEXT("StaticParameterSet"));
	}
	return Z_Registration_Info_UScriptStruct_StaticParameterSet.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStaticParameterSet>()
{
	return FStaticParameterSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStaticParameterSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticSwitchParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticSwitchParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticSwitchParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticComponentMaskParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticComponentMaskParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticComponentMaskParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TerrainLayerWeightParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TerrainLayerWeightParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TerrainLayerWeightParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialLayers_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasMaterialLayers_MetaData[];
#endif
		static void NewProp_bHasMaterialLayers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMaterialLayers;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialLayersParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialLayersParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialLayersParameters;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticParameterSet_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Contains all the information needed to identify a single permutation of static parameters. */" },
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
		{ "ToolTip", "Contains all the information needed to identify a single permutation of static parameters." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticParameterSet>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_StaticSwitchParameters_Inner = { "StaticSwitchParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStaticSwitchParameter, METADATA_PARAMS(nullptr, 0) }; // 3600673326
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_StaticSwitchParameters_MetaData[] = {
		{ "Comment", "/** An array of static switch parameters in this set */" },
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
		{ "ToolTip", "An array of static switch parameters in this set" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_StaticSwitchParameters = { "StaticSwitchParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticParameterSet, StaticSwitchParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_StaticSwitchParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_StaticSwitchParameters_MetaData)) }; // 3600673326
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_StaticComponentMaskParameters_Inner = { "StaticComponentMaskParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStaticComponentMaskParameter, METADATA_PARAMS(nullptr, 0) }; // 168421174
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_StaticComponentMaskParameters_MetaData[] = {
		{ "Comment", "/** An array of static component mask parameters in this set */" },
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
		{ "ToolTip", "An array of static component mask parameters in this set" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_StaticComponentMaskParameters = { "StaticComponentMaskParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticParameterSet, StaticComponentMaskParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_StaticComponentMaskParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_StaticComponentMaskParameters_MetaData)) }; // 168421174
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_TerrainLayerWeightParameters_Inner = { "TerrainLayerWeightParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter, METADATA_PARAMS(nullptr, 0) }; // 554250429
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_TerrainLayerWeightParameters_MetaData[] = {
		{ "Comment", "/** An array of terrain layer weight parameters in this set */" },
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
		{ "ToolTip", "An array of terrain layer weight parameters in this set" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_TerrainLayerWeightParameters = { "TerrainLayerWeightParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticParameterSet, TerrainLayerWeightParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_TerrainLayerWeightParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_TerrainLayerWeightParameters_MetaData)) }; // 554250429
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_MaterialLayers_MetaData[] = {
		{ "Comment", "/** Material layers for this set */" },
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
		{ "ToolTip", "Material layers for this set" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_MaterialLayers = { "MaterialLayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticParameterSet, MaterialLayers), Z_Construct_UScriptStruct_FMaterialLayersFunctions, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_MaterialLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_MaterialLayers_MetaData)) }; // 566012996
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_bHasMaterialLayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_bHasMaterialLayers_SetBit(void* Obj)
	{
		((FStaticParameterSet*)Obj)->bHasMaterialLayers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_bHasMaterialLayers = { "bHasMaterialLayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FStaticParameterSet), &Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_bHasMaterialLayers_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_bHasMaterialLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_bHasMaterialLayers_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_MaterialLayersParameters_Inner = { "MaterialLayersParameters", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStaticMaterialLayersParameter, METADATA_PARAMS(nullptr, 0) }; // 1565225302
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_MaterialLayersParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/StaticParameterSet.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_MaterialLayersParameters = { "MaterialLayersParameters", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticParameterSet, MaterialLayersParameters_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_MaterialLayersParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_MaterialLayersParameters_MetaData)) }; // 1565225302
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticParameterSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_StaticSwitchParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_StaticSwitchParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_StaticComponentMaskParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_StaticComponentMaskParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_TerrainLayerWeightParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_TerrainLayerWeightParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_MaterialLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_bHasMaterialLayers,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_MaterialLayersParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewProp_MaterialLayersParameters,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticParameterSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StaticParameterSet",
		sizeof(FStaticParameterSet),
		alignof(FStaticParameterSet),
		Z_Construct_UScriptStruct_FStaticParameterSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticParameterSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticParameterSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticParameterSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticParameterSet()
	{
		if (!Z_Registration_Info_UScriptStruct_StaticParameterSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaticParameterSet.InnerSingleton, Z_Construct_UScriptStruct_FStaticParameterSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StaticParameterSet.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_StaticParameterSet_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_StaticParameterSet_h_Statics::ScriptStructInfo[] = {
		{ FStaticParameterBase::StaticStruct, Z_Construct_UScriptStruct_FStaticParameterBase_Statics::NewStructOps, TEXT("StaticParameterBase"), &Z_Registration_Info_UScriptStruct_StaticParameterBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticParameterBase), 1052701436U) },
		{ FStaticSwitchParameter::StaticStruct, Z_Construct_UScriptStruct_FStaticSwitchParameter_Statics::NewStructOps, TEXT("StaticSwitchParameter"), &Z_Registration_Info_UScriptStruct_StaticSwitchParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticSwitchParameter), 3600673326U) },
		{ FStaticComponentMaskParameter::StaticStruct, Z_Construct_UScriptStruct_FStaticComponentMaskParameter_Statics::NewStructOps, TEXT("StaticComponentMaskParameter"), &Z_Registration_Info_UScriptStruct_StaticComponentMaskParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticComponentMaskParameter), 168421174U) },
		{ FStaticTerrainLayerWeightParameter::StaticStruct, Z_Construct_UScriptStruct_FStaticTerrainLayerWeightParameter_Statics::NewStructOps, TEXT("StaticTerrainLayerWeightParameter"), &Z_Registration_Info_UScriptStruct_StaticTerrainLayerWeightParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticTerrainLayerWeightParameter), 554250429U) },
		{ FStaticMaterialLayersParameter::StaticStruct, Z_Construct_UScriptStruct_FStaticMaterialLayersParameter_Statics::NewStructOps, TEXT("StaticMaterialLayersParameter"), &Z_Registration_Info_UScriptStruct_StaticMaterialLayersParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticMaterialLayersParameter), 1565225302U) },
		{ FStaticParameterSet::StaticStruct, Z_Construct_UScriptStruct_FStaticParameterSet_Statics::NewStructOps, TEXT("StaticParameterSet"), &Z_Registration_Info_UScriptStruct_StaticParameterSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticParameterSet), 859702739U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_StaticParameterSet_h_1255022130(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_StaticParameterSet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_StaticParameterSet_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
