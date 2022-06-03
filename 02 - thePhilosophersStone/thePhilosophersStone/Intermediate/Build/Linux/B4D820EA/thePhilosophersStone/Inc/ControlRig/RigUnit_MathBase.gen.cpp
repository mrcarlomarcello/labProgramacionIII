// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Math/RigUnit_MathBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_MathBase() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBase();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathMutableBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_MathBase>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_MathBase cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathBase;
class UScriptStruct* FRigUnit_MathBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathBase, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathBase>()
{
	return FRigUnit_MathBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathBase.h" },
		{ "NodeColor", "0.05 0.25 0.05" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_MathBase",
		sizeof(FRigUnit_MathBase),
		alignof(FRigUnit_MathBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathMutableBase>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_MathMutableBase cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathMutableBase;
class UScriptStruct* FRigUnit_MathMutableBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathMutableBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathMutableBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathMutableBase, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathMutableBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathMutableBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathMutableBase>()
{
	return FRigUnit_MathMutableBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathMutableBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathMutableBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathBase.h" },
		{ "NodeColor", "0.05 0.25 0.05" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathMutableBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathMutableBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathMutableBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_MathMutableBase",
		sizeof(FRigUnit_MathMutableBase),
		alignof(FRigUnit_MathMutableBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathMutableBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathMutableBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathMutableBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathMutableBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathMutableBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathMutableBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathMutableBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBase_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_MathBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathBase_Statics::NewStructOps, TEXT("RigUnit_MathBase"), &Z_Registration_Info_UScriptStruct_RigUnit_MathBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathBase), 2524273082U) },
		{ FRigUnit_MathMutableBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathMutableBase_Statics::NewStructOps, TEXT("RigUnit_MathMutableBase"), &Z_Registration_Info_UScriptStruct_RigUnit_MathMutableBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathMutableBase), 3837416376U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBase_h_2883288341(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
