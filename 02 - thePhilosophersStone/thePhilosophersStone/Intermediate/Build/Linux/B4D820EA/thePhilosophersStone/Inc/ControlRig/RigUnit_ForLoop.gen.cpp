// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Execution/RigUnit_ForLoop.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_ForLoop() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ForLoopCount();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigExecuteContext();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_ForLoopCount>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_ForLoopCount cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ForLoopCount;
class UScriptStruct* FRigUnit_ForLoopCount::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ForLoopCount.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ForLoopCount.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ForLoopCount, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ForLoopCount"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ForLoopCount::Execute"), &FRigUnit_ForLoopCount::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ForLoopCount.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ForLoopCount.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ForLoopCount>()
{
	return FRigUnit_ForLoopCount::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Ratio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Continue_MetaData[];
#endif
		static void NewProp_Continue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Continue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Completed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Execution" },
		{ "Comment", "/**\n * Given a count, execute iteratively until the count is up\n */" },
		{ "DisplayName", "For Loop" },
		{ "Icon", "EditorStyle|GraphEditor.Macro.Loop_16x" },
		{ "Keywords", "Iterate" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_ForLoop.h" },
		{ "NodeColor", "1 1 1" },
		{ "TitleColor", "1 0 0" },
		{ "ToolTip", "Given a count, execute iteratively until the count is up" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ForLoopCount>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::NewProp_Count_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_ForLoop.h" },
		{ "Singleton", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ForLoopCount, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_ForLoop.h" },
		{ "Output", "" },
		{ "Singleton", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ForLoopCount, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::NewProp_Ratio_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_ForLoop.h" },
		{ "Output", "" },
		{ "Singleton", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ForLoopCount, Ratio), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::NewProp_Ratio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::NewProp_Ratio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::NewProp_Continue_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_ForLoop.h" },
		{ "Singleton", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::NewProp_Continue_SetBit(void* Obj)
	{
		((FRigUnit_ForLoopCount*)Obj)->Continue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::NewProp_Continue = { "Continue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_ForLoopCount), &Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::NewProp_Continue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::NewProp_Continue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::NewProp_Continue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::NewProp_Completed_MetaData[] = {
		{ "Category", "ForLoop" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_ForLoop.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ForLoopCount, Completed), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::NewProp_Completed_MetaData)) }; // 1688564855
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::NewProp_Ratio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::NewProp_Continue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::NewProp_Completed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_ForLoopCount",
		sizeof(FRigUnit_ForLoopCount),
		alignof(FRigUnit_ForLoopCount),
		Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ForLoopCount()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ForLoopCount.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ForLoopCount.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ForLoopCount.InnerSingleton;
	}

void FRigUnit_ForLoopCount::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Count,
		Index,
		Ratio,
		Continue,
		Completed,
		ExecuteContext,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_ForLoop_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_ForLoop_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_ForLoopCount::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics::NewStructOps, TEXT("RigUnit_ForLoopCount"), &Z_Registration_Info_UScriptStruct_RigUnit_ForLoopCount, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ForLoopCount), 2386718310U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_ForLoop_h_3999876638(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_ForLoop_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_ForLoop_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
