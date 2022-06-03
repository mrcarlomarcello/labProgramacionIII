// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Simulation/RigUnit_SimBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_SimBase() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SimBase();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SimBaseMutable();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_SimBase>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_SimBase cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SimBase;
class UScriptStruct* FRigUnit_SimBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SimBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SimBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SimBase, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SimBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SimBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SimBase>()
{
	return FRigUnit_SimBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SimBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SimBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SimBase.h" },
		{ "NodeColor", "0.25 0.05 0.05" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SimBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SimBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SimBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_SimBase",
		sizeof(FRigUnit_SimBase),
		alignof(FRigUnit_SimBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SimBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SimBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SimBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SimBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SimBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SimBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SimBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_SimBaseMutable>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SimBaseMutable cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SimBaseMutable;
class UScriptStruct* FRigUnit_SimBaseMutable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SimBaseMutable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SimBaseMutable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SimBaseMutable, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SimBaseMutable"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SimBaseMutable.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SimBaseMutable>()
{
	return FRigUnit_SimBaseMutable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SimBaseMutable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SimBaseMutable_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Simulation" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_SimBase.h" },
		{ "NodeColor", "0.25 0.05 0.05" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SimBaseMutable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SimBaseMutable>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SimBaseMutable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_SimBaseMutable",
		sizeof(FRigUnit_SimBaseMutable),
		alignof(FRigUnit_SimBaseMutable),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SimBaseMutable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SimBaseMutable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SimBaseMutable()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SimBaseMutable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SimBaseMutable.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SimBaseMutable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SimBaseMutable.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_SimBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_SimBase_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_SimBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SimBase_Statics::NewStructOps, TEXT("RigUnit_SimBase"), &Z_Registration_Info_UScriptStruct_RigUnit_SimBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SimBase), 3849161819U) },
		{ FRigUnit_SimBaseMutable::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SimBaseMutable_Statics::NewStructOps, TEXT("RigUnit_SimBaseMutable"), &Z_Registration_Info_UScriptStruct_RigUnit_SimBaseMutable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SimBaseMutable), 1611241808U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_SimBase_h_3898592444(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_SimBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_SimBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
