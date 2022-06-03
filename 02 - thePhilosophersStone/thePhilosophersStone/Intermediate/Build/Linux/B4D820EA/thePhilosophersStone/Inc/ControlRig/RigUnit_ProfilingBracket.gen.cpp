// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Debug/RigUnit_ProfilingBracket.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_ProfilingBracket() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StartProfilingTimer();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DebugBaseMutable();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_StartProfilingTimer>() == std::is_polymorphic<FRigUnit_DebugBaseMutable>(), "USTRUCT FRigUnit_StartProfilingTimer cannot be polymorphic unless super FRigUnit_DebugBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_StartProfilingTimer;
class UScriptStruct* FRigUnit_StartProfilingTimer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_StartProfilingTimer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_StartProfilingTimer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_StartProfilingTimer, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_StartProfilingTimer"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_StartProfilingTimer::Execute"), &FRigUnit_StartProfilingTimer::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_StartProfilingTimer.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_StartProfilingTimer.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_StartProfilingTimer>()
{
	return FRigUnit_StartProfilingTimer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_StartProfilingTimer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StartProfilingTimer_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Starts a profiling timer for debugging, used in conjunction with End Profiling Timer\n */" },
		{ "DisplayName", "Start Profiling Timer" },
		{ "Keywords", "Measure,BeginProfiling,Profile" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_ProfilingBracket.h" },
		{ "NodeColor", "0.25, 0.25, 0.05000000074505806" },
		{ "ToolTip", "Starts a profiling timer for debugging, used in conjunction with End Profiling Timer" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_StartProfilingTimer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_StartProfilingTimer>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_StartProfilingTimer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_DebugBaseMutable,
		&NewStructOps,
		"RigUnit_StartProfilingTimer",
		sizeof(FRigUnit_StartProfilingTimer),
		alignof(FRigUnit_StartProfilingTimer),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StartProfilingTimer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StartProfilingTimer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StartProfilingTimer()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_StartProfilingTimer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_StartProfilingTimer.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_StartProfilingTimer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_StartProfilingTimer.InnerSingleton;
	}

void FRigUnit_StartProfilingTimer::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		ExecuteContext,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_EndProfilingTimer>() == std::is_polymorphic<FRigUnit_DebugBaseMutable>(), "USTRUCT FRigUnit_EndProfilingTimer cannot be polymorphic unless super FRigUnit_DebugBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_EndProfilingTimer;
class UScriptStruct* FRigUnit_EndProfilingTimer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_EndProfilingTimer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_EndProfilingTimer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_EndProfilingTimer"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_EndProfilingTimer::Execute"), &FRigUnit_EndProfilingTimer::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_EndProfilingTimer.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_EndProfilingTimer.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_EndProfilingTimer>()
{
	return FRigUnit_EndProfilingTimer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfMeasurements_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfMeasurements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AccumulatedTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeasurementsLeft_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MeasurementsLeft;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Ends an existing profiling timer for debugging, used in conjunction with Start Profiling Timer\n */" },
		{ "DisplayName", "End Profiling Timer" },
		{ "Keywords", "Measure,StopProfiling,Meter,Profile" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_ProfilingBracket.h" },
		{ "NodeColor", "0.25, 0.25, 0.05000000074505806" },
		{ "ToolTip", "Ends an existing profiling timer for debugging, used in conjunction with Start Profiling Timer" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_EndProfilingTimer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics::NewProp_NumberOfMeasurements_MetaData[] = {
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_ProfilingBracket.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics::NewProp_NumberOfMeasurements = { "NumberOfMeasurements", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_EndProfilingTimer, NumberOfMeasurements), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics::NewProp_NumberOfMeasurements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics::NewProp_NumberOfMeasurements_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics::NewProp_Prefix_MetaData[] = {
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_ProfilingBracket.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_EndProfilingTimer, Prefix), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics::NewProp_Prefix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics::NewProp_AccumulatedTime_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_ProfilingBracket.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics::NewProp_AccumulatedTime = { "AccumulatedTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_EndProfilingTimer, AccumulatedTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics::NewProp_AccumulatedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics::NewProp_AccumulatedTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics::NewProp_MeasurementsLeft_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_ProfilingBracket.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics::NewProp_MeasurementsLeft = { "MeasurementsLeft", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_EndProfilingTimer, MeasurementsLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics::NewProp_MeasurementsLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics::NewProp_MeasurementsLeft_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics::NewProp_NumberOfMeasurements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics::NewProp_Prefix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics::NewProp_AccumulatedTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics::NewProp_MeasurementsLeft,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_DebugBaseMutable,
		&NewStructOps,
		"RigUnit_EndProfilingTimer",
		sizeof(FRigUnit_EndProfilingTimer),
		alignof(FRigUnit_EndProfilingTimer),
		Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_EndProfilingTimer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_EndProfilingTimer.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_EndProfilingTimer.InnerSingleton;
	}

void FRigUnit_EndProfilingTimer::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		NumberOfMeasurements,
		Prefix,
		AccumulatedTime,
		MeasurementsLeft,
		ExecuteContext,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_ProfilingBracket_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_ProfilingBracket_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_StartProfilingTimer::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_StartProfilingTimer_Statics::NewStructOps, TEXT("RigUnit_StartProfilingTimer"), &Z_Registration_Info_UScriptStruct_RigUnit_StartProfilingTimer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_StartProfilingTimer), 790094740U) },
		{ FRigUnit_EndProfilingTimer::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_EndProfilingTimer_Statics::NewStructOps, TEXT("RigUnit_EndProfilingTimer"), &Z_Registration_Info_UScriptStruct_RigUnit_EndProfilingTimer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_EndProfilingTimer), 826168999U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_ProfilingBracket_h_448078975(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_ProfilingBracket_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_ProfilingBracket_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
