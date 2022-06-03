// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Execution/RigUnit_IsInteracting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_IsInteracting() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_IsInteracting();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_IsInteracting>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_IsInteracting cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_IsInteracting;
class UScriptStruct* FRigUnit_IsInteracting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_IsInteracting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_IsInteracting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_IsInteracting, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_IsInteracting"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_IsInteracting::Execute"), &FRigUnit_IsInteracting::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_IsInteracting.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_IsInteracting.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_IsInteracting>()
{
	return FRigUnit_IsInteracting::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInteracting_MetaData[];
#endif
		static void NewProp_bIsInteracting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInteracting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Execution" },
		{ "Comment", "/**\n * Returns true if the Control Rig is being interacted\n */" },
		{ "DisplayName", "Is Interacting" },
		{ "Keywords", "Gizmo,Manipulation,Interaction" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_IsInteracting.h" },
		{ "NodeColor", "1 1 1" },
		{ "TitleColor", "1 0 0" },
		{ "ToolTip", "Returns true if the Control Rig is being interacted" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_IsInteracting>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsInteracting_MetaData[] = {
		{ "Category", "Execution" },
		{ "Comment", "// The execution result\n" },
		{ "DisplayName", "Interacting" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_IsInteracting.h" },
		{ "Output", "" },
		{ "ToolTip", "The execution result" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsInteracting_SetBit(void* Obj)
	{
		((FRigUnit_IsInteracting*)Obj)->bIsInteracting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsInteracting = { "bIsInteracting", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_IsInteracting), &Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsInteracting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsInteracting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsInteracting_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewProp_bIsInteracting,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_IsInteracting",
		sizeof(FRigUnit_IsInteracting),
		alignof(FRigUnit_IsInteracting),
		Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_IsInteracting()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_IsInteracting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_IsInteracting.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_IsInteracting.InnerSingleton;
	}

void FRigUnit_IsInteracting::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		bIsInteracting,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_IsInteracting_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_IsInteracting_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_IsInteracting::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics::NewStructOps, TEXT("RigUnit_IsInteracting"), &Z_Registration_Info_UScriptStruct_RigUnit_IsInteracting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_IsInteracting), 3384699832U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_IsInteracting_h_3496469875(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_IsInteracting_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_IsInteracting_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
