// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Drawing/ControlRigDrawInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigDrawInterface() {}
// Cross Module References
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigDrawInterface();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigDrawContainer();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControlRigDrawHierarchyMode;
	static UEnum* EControlRigDrawHierarchyMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EControlRigDrawHierarchyMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EControlRigDrawHierarchyMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode, Z_Construct_UPackage__Script_ControlRig(), TEXT("EControlRigDrawHierarchyMode"));
		}
		return Z_Registration_Info_UEnum_EControlRigDrawHierarchyMode.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigDrawHierarchyMode::Type>()
	{
		return EControlRigDrawHierarchyMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode_Statics::Enumerators[] = {
		{ "EControlRigDrawHierarchyMode::Axes", (int64)EControlRigDrawHierarchyMode::Axes },
		{ "EControlRigDrawHierarchyMode::Max", (int64)EControlRigDrawHierarchyMode::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode_Statics::Enum_MetaDataParams[] = {
		{ "Axes.Comment", "/** Draw as axes */" },
		{ "Axes.Name", "EControlRigDrawHierarchyMode::Axes" },
		{ "Axes.ToolTip", "Draw as axes" },
		{ "Max.Comment", "/** MAX - invalid */" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "EControlRigDrawHierarchyMode::Max" },
		{ "Max.ToolTip", "MAX - invalid" },
		{ "ModuleRelativePath", "Public/Drawing/ControlRigDrawInterface.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"EControlRigDrawHierarchyMode",
		"EControlRigDrawHierarchyMode::Type",
		Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode()
	{
		if (!Z_Registration_Info_UEnum_EControlRigDrawHierarchyMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControlRigDrawHierarchyMode.InnerSingleton, Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EControlRigDrawHierarchyMode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FControlRigDrawInterface>() == std::is_polymorphic<FControlRigDrawContainer>(), "USTRUCT FControlRigDrawInterface cannot be polymorphic unless super FControlRigDrawContainer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigDrawInterface;
class UScriptStruct* FControlRigDrawInterface::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigDrawInterface.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigDrawInterface.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigDrawInterface, Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlRigDrawInterface"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigDrawInterface.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlRigDrawInterface>()
{
	return FControlRigDrawInterface::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlRigDrawInterface_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigDrawInterface_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Drawing/ControlRigDrawInterface.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlRigDrawInterface_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigDrawInterface>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigDrawInterface_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FControlRigDrawContainer,
		&NewStructOps,
		"ControlRigDrawInterface",
		sizeof(FControlRigDrawInterface),
		alignof(FControlRigDrawInterface),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigDrawInterface_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigDrawInterface_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlRigDrawInterface()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlRigDrawInterface.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigDrawInterface.InnerSingleton, Z_Construct_UScriptStruct_FControlRigDrawInterface_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlRigDrawInterface.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Drawing_ControlRigDrawInterface_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Drawing_ControlRigDrawInterface_h_Statics::EnumInfo[] = {
		{ EControlRigDrawHierarchyMode_StaticEnum, TEXT("EControlRigDrawHierarchyMode"), &Z_Registration_Info_UEnum_EControlRigDrawHierarchyMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1374823800U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Drawing_ControlRigDrawInterface_h_Statics::ScriptStructInfo[] = {
		{ FControlRigDrawInterface::StaticStruct, Z_Construct_UScriptStruct_FControlRigDrawInterface_Statics::NewStructOps, TEXT("ControlRigDrawInterface"), &Z_Registration_Info_UScriptStruct_ControlRigDrawInterface, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigDrawInterface), 3511888813U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Drawing_ControlRigDrawInterface_h_2438511521(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Drawing_ControlRigDrawInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Drawing_ControlRigDrawInterface_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Drawing_ControlRigDrawInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Drawing_ControlRigDrawInterface_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
