// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Simulation/RigUnit_Timeline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_Timeline() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Timeline();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SimBase();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_Timeline>() == std::is_polymorphic<FRigUnit_SimBase>(), "USTRUCT FRigUnit_Timeline cannot be polymorphic unless super FRigUnit_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_Timeline;
class UScriptStruct* FRigUnit_Timeline::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_Timeline.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_Timeline.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_Timeline, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_Timeline"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_Timeline::Execute"), &FRigUnit_Timeline::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_Timeline.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_Timeline.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_Timeline>()
{
	return FRigUnit_Timeline::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AccumulatedValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Simulation|Accumulate" },
		{ "Comment", "/**\n * Simulates a time value - can act as a timeline playing back\n */" },
		{ "DisplayName", "Accumulated Time" },
		{ "Keywords", "Playback,Pause,Timeline" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Timeline.h" },
		{ "ToolTip", "Simulates a time value - can act as a timeline playing back" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_Timeline>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewProp_Speed_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Timeline.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_Timeline, Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Timeline.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_Timeline, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewProp_AccumulatedValue_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Timeline.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewProp_AccumulatedValue = { "AccumulatedValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_Timeline, AccumulatedValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewProp_AccumulatedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewProp_AccumulatedValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewProp_AccumulatedValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_SimBase,
		&NewStructOps,
		"RigUnit_Timeline",
		sizeof(FRigUnit_Timeline),
		alignof(FRigUnit_Timeline),
		Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Timeline()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_Timeline.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_Timeline.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_Timeline.InnerSingleton;
	}

void FRigUnit_Timeline::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Speed,
		Time,
		AccumulatedValue,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Timeline_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Timeline_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_Timeline::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_Timeline_Statics::NewStructOps, TEXT("RigUnit_Timeline"), &Z_Registration_Info_UScriptStruct_RigUnit_Timeline, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_Timeline), 509219273U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Timeline_h_1351749646(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Timeline_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Timeline_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
