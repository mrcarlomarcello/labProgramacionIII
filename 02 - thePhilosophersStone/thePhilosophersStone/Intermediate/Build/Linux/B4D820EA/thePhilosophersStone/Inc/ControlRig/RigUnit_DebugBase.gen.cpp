// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Debug/RigUnit_DebugBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_DebugBase() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DebugBase();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DebugBaseMutable();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_DebugBase>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_DebugBase cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DebugBase;
class UScriptStruct* FRigUnit_DebugBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DebugBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DebugBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DebugBase, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DebugBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DebugBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DebugBase>()
{
	return FRigUnit_DebugBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_DebugBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DebugBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugBase.h" },
		{ "NodeColor", "0.83077 0.846873 0.049707" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_DebugBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DebugBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DebugBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_DebugBase",
		sizeof(FRigUnit_DebugBase),
		alignof(FRigUnit_DebugBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DebugBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DebugBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_DebugBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DebugBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DebugBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_DebugBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_DebugBaseMutable>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_DebugBaseMutable cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DebugBaseMutable;
class UScriptStruct* FRigUnit_DebugBaseMutable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DebugBaseMutable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DebugBaseMutable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DebugBaseMutable, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DebugBaseMutable"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DebugBaseMutable.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DebugBaseMutable>()
{
	return FRigUnit_DebugBaseMutable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_DebugBaseMutable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DebugBaseMutable_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugBase.h" },
		{ "NodeColor", "0.83077 0.846873 0.049707" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_DebugBaseMutable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DebugBaseMutable>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DebugBaseMutable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_DebugBaseMutable",
		sizeof(FRigUnit_DebugBaseMutable),
		alignof(FRigUnit_DebugBaseMutable),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DebugBaseMutable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugBaseMutable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DebugBaseMutable()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_DebugBaseMutable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DebugBaseMutable.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DebugBaseMutable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_DebugBaseMutable.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugBase_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_DebugBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DebugBase_Statics::NewStructOps, TEXT("RigUnit_DebugBase"), &Z_Registration_Info_UScriptStruct_RigUnit_DebugBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DebugBase), 1029399781U) },
		{ FRigUnit_DebugBaseMutable::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DebugBaseMutable_Statics::NewStructOps, TEXT("RigUnit_DebugBaseMutable"), &Z_Registration_Info_UScriptStruct_RigUnit_DebugBaseMutable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DebugBaseMutable), 2819124383U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugBase_h_2532053324(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
