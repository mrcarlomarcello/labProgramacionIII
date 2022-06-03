// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Animation/RigUnit_AnimRichCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_AnimRichCurve() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimRichCurve();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_AnimRichCurve>() == std::is_polymorphic<FRigUnit_AnimBase>(), "USTRUCT FRigUnit_AnimRichCurve cannot be polymorphic unless super FRigUnit_AnimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AnimRichCurve;
class UScriptStruct* FRigUnit_AnimRichCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimRichCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AnimRichCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AnimRichCurve, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AnimRichCurve"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AnimRichCurve::Execute"), &FRigUnit_AnimRichCurve::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AnimRichCurve.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AnimRichCurve.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AnimRichCurve>()
{
	return FRigUnit_AnimRichCurve::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AnimRichCurve_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Curve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimRichCurve_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Provides a constant curve to be used for multiple curve evaluations\n */" },
		{ "DisplayName", "Curve" },
		{ "Keywords", "Curve,Profile" },
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_AnimRichCurve.h" },
		{ "ToolTip", "Provides a constant curve to be used for multiple curve evaluations" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AnimRichCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AnimRichCurve>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimRichCurve_Statics::NewProp_Curve_MetaData[] = {
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_AnimRichCurve.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimRichCurve_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AnimRichCurve, Curve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimRichCurve_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimRichCurve_Statics::NewProp_Curve_MetaData)) }; // 1196190759
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AnimRichCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimRichCurve_Statics::NewProp_Curve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AnimRichCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_AnimBase,
		&NewStructOps,
		"RigUnit_AnimRichCurve",
		sizeof(FRigUnit_AnimRichCurve),
		alignof(FRigUnit_AnimRichCurve),
		Z_Construct_UScriptStruct_FRigUnit_AnimRichCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimRichCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimRichCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimRichCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimRichCurve()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimRichCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AnimRichCurve.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AnimRichCurve_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AnimRichCurve.InnerSingleton;
	}

void FRigUnit_AnimRichCurve::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Curve,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_AnimRichCurve_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_AnimRichCurve_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_AnimRichCurve::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AnimRichCurve_Statics::NewStructOps, TEXT("RigUnit_AnimRichCurve"), &Z_Registration_Info_UScriptStruct_RigUnit_AnimRichCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AnimRichCurve), 2550810310U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_AnimRichCurve_h_2700883523(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_AnimRichCurve_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_AnimRichCurve_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
