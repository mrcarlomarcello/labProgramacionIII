// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Animation/RigUnit_GetWorldTime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_GetWorldTime() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetWorldTime();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimBase();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_GetWorldTime>() == std::is_polymorphic<FRigUnit_AnimBase>(), "USTRUCT FRigUnit_GetWorldTime cannot be polymorphic unless super FRigUnit_AnimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetWorldTime;
class UScriptStruct* FRigUnit_GetWorldTime::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetWorldTime.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetWorldTime.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetWorldTime, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetWorldTime"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetWorldTime::Execute"), &FRigUnit_GetWorldTime::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetWorldTime.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetWorldTime.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetWorldTime>()
{
	return FRigUnit_GetWorldTime::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Year_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Year;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Month_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Month;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Day_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Day;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeekDay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeekDay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hours_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Hours;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minutes_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Minutes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Seconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverallSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverallSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the current time (year, month, day, hour, minute)\n */" },
		{ "DisplayName", "Now" },
		{ "Keywords", "Time,Clock" },
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_GetWorldTime.h" },
		{ "ToolTip", "Returns the current time (year, month, day, hour, minute)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetWorldTime>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_Year_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_GetWorldTime.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_Year = { "Year", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_GetWorldTime, Year), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_Year_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_Year_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_Month_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_GetWorldTime.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_Month = { "Month", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_GetWorldTime, Month), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_Month_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_Month_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_Day_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_GetWorldTime.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_Day = { "Day", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_GetWorldTime, Day), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_Day_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_Day_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_WeekDay_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_GetWorldTime.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_WeekDay = { "WeekDay", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_GetWorldTime, WeekDay), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_WeekDay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_WeekDay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_Hours_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_GetWorldTime.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_Hours = { "Hours", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_GetWorldTime, Hours), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_Hours_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_Hours_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_Minutes_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_GetWorldTime.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_Minutes = { "Minutes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_GetWorldTime, Minutes), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_Minutes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_Minutes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_Seconds_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_GetWorldTime.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_GetWorldTime, Seconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_Seconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_Seconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_OverallSeconds_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_GetWorldTime.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_OverallSeconds = { "OverallSeconds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_GetWorldTime, OverallSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_OverallSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_OverallSeconds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_Year,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_Month,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_Day,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_WeekDay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_Hours,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_Minutes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_Seconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewProp_OverallSeconds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_AnimBase,
		&NewStructOps,
		"RigUnit_GetWorldTime",
		sizeof(FRigUnit_GetWorldTime),
		alignof(FRigUnit_GetWorldTime),
		Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetWorldTime()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_GetWorldTime.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetWorldTime.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_GetWorldTime.InnerSingleton;
	}

void FRigUnit_GetWorldTime::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Year,
		Month,
		Day,
		WeekDay,
		Hours,
		Minutes,
		Seconds,
		OverallSeconds,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_GetWorldTime_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_GetWorldTime_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_GetWorldTime::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics::NewStructOps, TEXT("RigUnit_GetWorldTime"), &Z_Registration_Info_UScriptStruct_RigUnit_GetWorldTime, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetWorldTime), 1112507035U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_GetWorldTime_h_2626887586(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_GetWorldTime_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_GetWorldTime_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
