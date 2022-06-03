// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Animation/RigUnit_AnimBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_AnimBase() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimBase();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_AnimBase>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_AnimBase cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AnimBase;
class UScriptStruct* FRigUnit_AnimBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AnimBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AnimBase, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AnimBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AnimBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AnimBase>()
{
	return FRigUnit_AnimBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AnimBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_AnimBase.h" },
		{ "NodeColor", "0.05 0.05 0.25" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AnimBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AnimBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AnimBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_AnimBase",
		sizeof(FRigUnit_AnimBase),
		alignof(FRigUnit_AnimBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AnimBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AnimBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AnimBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_AnimBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_AnimBase_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_AnimBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AnimBase_Statics::NewStructOps, TEXT("RigUnit_AnimBase"), &Z_Registration_Info_UScriptStruct_RigUnit_AnimBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AnimBase), 1380672732U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_AnimBase_h_1810299845(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_AnimBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_AnimBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
