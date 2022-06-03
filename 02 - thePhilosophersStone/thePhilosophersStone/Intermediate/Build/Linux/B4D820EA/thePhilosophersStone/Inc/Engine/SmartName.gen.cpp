// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/SmartName.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartName() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurveMetaData();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartNameMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartNameContainer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartName();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CurveMetaData;
class UScriptStruct* FCurveMetaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CurveMetaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CurveMetaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveMetaData, Z_Construct_UPackage__Script_Engine(), TEXT("CurveMetaData"));
	}
	return Z_Registration_Info_UScriptStruct_CurveMetaData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCurveMetaData>()
{
	return FCurveMetaData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCurveMetaData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveMetaData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Curve Meta Data for each name\n * Unfortunately this should be linked to FName, but no GUID because we don't have GUID in run-time\n * We only add this if anything changed, by default, it is attribute curve\n */" },
		{ "ModuleRelativePath", "Classes/Animation/SmartName.h" },
		{ "ToolTip", "Curve Meta Data for each name\nUnfortunately this should be linked to FName, but no GUID because we don't have GUID in run-time\nWe only add this if anything changed, by default, it is attribute curve" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurveMetaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveMetaData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurveMetaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CurveMetaData",
		sizeof(FCurveMetaData),
		alignof(FCurveMetaData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveMetaData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveMetaData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCurveMetaData()
	{
		if (!Z_Registration_Info_UScriptStruct_CurveMetaData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CurveMetaData.InnerSingleton, Z_Construct_UScriptStruct_FCurveMetaData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CurveMetaData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartNameMapping;
class UScriptStruct* FSmartNameMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartNameMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartNameMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartNameMapping, Z_Construct_UPackage__Script_Engine(), TEXT("SmartNameMapping"));
	}
	return Z_Registration_Info_UScriptStruct_SmartNameMapping.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSmartNameMapping>()
{
	return FSmartNameMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartNameMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartNameMapping_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/SmartName.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartNameMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartNameMapping>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartNameMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SmartNameMapping",
		sizeof(FSmartNameMapping),
		alignof(FSmartNameMapping),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartNameMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartNameMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartNameMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartNameMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartNameMapping.InnerSingleton, Z_Construct_UScriptStruct_FSmartNameMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartNameMapping.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartNameContainer;
class UScriptStruct* FSmartNameContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartNameContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartNameContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartNameContainer, Z_Construct_UPackage__Script_Engine(), TEXT("SmartNameContainer"));
	}
	return Z_Registration_Info_UScriptStruct_SmartNameContainer.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSmartNameContainer>()
{
	return FSmartNameContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartNameContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartNameContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/SmartName.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartNameContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartNameContainer>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartNameContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SmartNameContainer",
		sizeof(FSmartNameContainer),
		alignof(FSmartNameContainer),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartNameContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartNameContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartNameContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartNameContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartNameContainer.InnerSingleton, Z_Construct_UScriptStruct_FSmartNameContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartNameContainer.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartName;
class UScriptStruct* FSmartName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartName, Z_Construct_UPackage__Script_Engine(), TEXT("SmartName"));
	}
	return Z_Registration_Info_UScriptStruct_SmartName.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSmartName>()
{
	return FSmartName::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartName_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DisplayName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartName_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/SmartName.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartName>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartName_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "FSmartName" },
		{ "Comment", "// name \n" },
		{ "ModuleRelativePath", "Classes/Animation/SmartName.h" },
		{ "ToolTip", "name" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSmartName_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSmartName, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartName_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartName_Statics::NewProp_DisplayName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartName_Statics::NewProp_DisplayName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SmartName",
		sizeof(FSmartName),
		alignof(FSmartName),
		Z_Construct_UScriptStruct_FSmartName_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartName()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartName.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartName.InnerSingleton, Z_Construct_UScriptStruct_FSmartName_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartName.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_SmartName_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_SmartName_h_Statics::ScriptStructInfo[] = {
		{ FCurveMetaData::StaticStruct, Z_Construct_UScriptStruct_FCurveMetaData_Statics::NewStructOps, TEXT("CurveMetaData"), &Z_Registration_Info_UScriptStruct_CurveMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurveMetaData), 934804932U) },
		{ FSmartNameMapping::StaticStruct, Z_Construct_UScriptStruct_FSmartNameMapping_Statics::NewStructOps, TEXT("SmartNameMapping"), &Z_Registration_Info_UScriptStruct_SmartNameMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartNameMapping), 3193803015U) },
		{ FSmartNameContainer::StaticStruct, Z_Construct_UScriptStruct_FSmartNameContainer_Statics::NewStructOps, TEXT("SmartNameContainer"), &Z_Registration_Info_UScriptStruct_SmartNameContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartNameContainer), 3089015253U) },
		{ FSmartName::StaticStruct, Z_Construct_UScriptStruct_FSmartName_Statics::NewStructOps, TEXT("SmartName"), &Z_Registration_Info_UScriptStruct_SmartName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartName), 408268985U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_SmartName_h_930101881(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_SmartName_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_SmartName_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
