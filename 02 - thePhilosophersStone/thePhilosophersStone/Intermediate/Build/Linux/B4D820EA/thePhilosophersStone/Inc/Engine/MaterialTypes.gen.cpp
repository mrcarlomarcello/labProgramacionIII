// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/MaterialTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialTypes() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParameterChannelNames();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticComponentMaskValue();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParameterChannelNames;
class UScriptStruct* FParameterChannelNames::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParameterChannelNames.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParameterChannelNames.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParameterChannelNames, Z_Construct_UPackage__Script_Engine(), TEXT("ParameterChannelNames"));
	}
	return Z_Registration_Info_UScriptStruct_ParameterChannelNames.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParameterChannelNames>()
{
	return FParameterChannelNames::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FParameterChannelNames_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_R;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_G_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_G;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_A;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterChannelNames_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaterialTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParameterChannelNames>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_R_MetaData[] = {
		{ "Category", "MaterialExpressionVectorParameter" },
		{ "ModuleRelativePath", "Public/MaterialTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParameterChannelNames, R), METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_R_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_G_MetaData[] = {
		{ "Category", "MaterialExpressionVectorParameter" },
		{ "ModuleRelativePath", "Public/MaterialTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_G = { "G", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParameterChannelNames, G), METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_G_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_G_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_B_MetaData[] = {
		{ "Category", "MaterialExpressionVectorParameter" },
		{ "ModuleRelativePath", "Public/MaterialTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParameterChannelNames, B), METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_A_MetaData[] = {
		{ "Category", "MaterialExpressionVectorParameter" },
		{ "ModuleRelativePath", "Public/MaterialTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParameterChannelNames, A), METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_A_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParameterChannelNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_R,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_G,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_A,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParameterChannelNames_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ParameterChannelNames",
		sizeof(FParameterChannelNames),
		alignof(FParameterChannelNames),
		Z_Construct_UScriptStruct_FParameterChannelNames_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParameterChannelNames()
	{
		if (!Z_Registration_Info_UScriptStruct_ParameterChannelNames.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParameterChannelNames.InnerSingleton, Z_Construct_UScriptStruct_FParameterChannelNames_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ParameterChannelNames.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaticComponentMaskValue;
class UScriptStruct* FStaticComponentMaskValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaticComponentMaskValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaticComponentMaskValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticComponentMaskValue, Z_Construct_UPackage__Script_Engine(), TEXT("StaticComponentMaskValue"));
	}
	return Z_Registration_Info_UScriptStruct_StaticComponentMaskValue.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStaticComponentMaskValue>()
{
	return FStaticComponentMaskValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaterialTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticComponentMaskValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_R_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_R_SetBit(void* Obj)
	{
		((FStaticComponentMaskValue*)Obj)->R = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStaticComponentMaskValue), &Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_R_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_R_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_G_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_G_SetBit(void* Obj)
	{
		((FStaticComponentMaskValue*)Obj)->G = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_G = { "G", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStaticComponentMaskValue), &Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_G_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_G_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_G_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_B_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_B_SetBit(void* Obj)
	{
		((FStaticComponentMaskValue*)Obj)->B = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStaticComponentMaskValue), &Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_B_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_A_SetBit(void* Obj)
	{
		((FStaticComponentMaskValue*)Obj)->A = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStaticComponentMaskValue), &Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_A_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_A_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_R,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_G,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_A,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StaticComponentMaskValue",
		sizeof(FStaticComponentMaskValue),
		alignof(FStaticComponentMaskValue),
		Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticComponentMaskValue()
	{
		if (!Z_Registration_Info_UScriptStruct_StaticComponentMaskValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaticComponentMaskValue.InnerSingleton, Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StaticComponentMaskValue.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialTypes_h_Statics::ScriptStructInfo[] = {
		{ FParameterChannelNames::StaticStruct, Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewStructOps, TEXT("ParameterChannelNames"), &Z_Registration_Info_UScriptStruct_ParameterChannelNames, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParameterChannelNames), 3477369234U) },
		{ FStaticComponentMaskValue::StaticStruct, Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewStructOps, TEXT("StaticComponentMaskValue"), &Z_Registration_Info_UScriptStruct_StaticComponentMaskValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticComponentMaskValue), 4274143420U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialTypes_h_389084110(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
