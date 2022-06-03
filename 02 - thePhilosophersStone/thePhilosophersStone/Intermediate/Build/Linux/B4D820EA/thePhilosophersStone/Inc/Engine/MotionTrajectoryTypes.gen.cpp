// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Animation/MotionTrajectoryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionTrajectoryTypes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETrajectorySampleDomain();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTrajectorySample();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTrajectorySampleRange();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETrajectorySampleDomain;
	static UEnum* ETrajectorySampleDomain_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETrajectorySampleDomain.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETrajectorySampleDomain.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETrajectorySampleDomain, Z_Construct_UPackage__Script_Engine(), TEXT("ETrajectorySampleDomain"));
		}
		return Z_Registration_Info_UEnum_ETrajectorySampleDomain.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETrajectorySampleDomain>()
	{
		return ETrajectorySampleDomain_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETrajectorySampleDomain_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETrajectorySampleDomain_Statics::Enumerators[] = {
		{ "ETrajectorySampleDomain::None", (int64)ETrajectorySampleDomain::None },
		{ "ETrajectorySampleDomain::Time", (int64)ETrajectorySampleDomain::Time },
		{ "ETrajectorySampleDomain::Distance", (int64)ETrajectorySampleDomain::Distance },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETrajectorySampleDomain_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Category", "Motion Trajectory" },
		{ "Comment", "// Enumeration for signaling which \"Accumulated\" domain values to respect when determining past and future sampling horizons\n" },
		{ "Distance.Comment", "// Seconds\n" },
		{ "Distance.Name", "ETrajectorySampleDomain::Distance" },
		{ "Distance.ToolTip", "Seconds" },
		{ "ModuleRelativePath", "Public/Animation/MotionTrajectoryTypes.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "ETrajectorySampleDomain::None" },
		{ "Time.Name", "ETrajectorySampleDomain::Time" },
		{ "ToolTip", "Enumeration for signaling which \"Accumulated\" domain values to respect when determining past and future sampling horizons" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETrajectorySampleDomain_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETrajectorySampleDomain",
		"ETrajectorySampleDomain",
		Z_Construct_UEnum_Engine_ETrajectorySampleDomain_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETrajectorySampleDomain_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETrajectorySampleDomain_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETrajectorySampleDomain_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETrajectorySampleDomain()
	{
		if (!Z_Registration_Info_UEnum_ETrajectorySampleDomain.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETrajectorySampleDomain.InnerSingleton, Z_Construct_UEnum_Engine_ETrajectorySampleDomain_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETrajectorySampleDomain.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TrajectorySample;
class UScriptStruct* FTrajectorySample::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TrajectorySample.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TrajectorySample.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrajectorySample, Z_Construct_UPackage__Script_Engine(), TEXT("TrajectorySample"));
	}
	return Z_Registration_Info_UScriptStruct_TrajectorySample.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTrajectorySample>()
{
	return FTrajectorySample::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTrajectorySample_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AccumulatedSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AccumulatedDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalLinearVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalLinearVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalLinearAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalLinearAcceleration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrajectorySample_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Motion Trajectory" },
		{ "Comment", "// A motion trajectory sample associated with a specific time or distance domain value\n" },
		{ "ModuleRelativePath", "Public/Animation/MotionTrajectoryTypes.h" },
		{ "ToolTip", "A motion trajectory sample associated with a specific time or distance domain value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrajectorySample>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_AccumulatedSeconds_MetaData[] = {
		{ "Category", "Motion Trajectory" },
		{ "Comment", "// The relative accumulated time that this sample is associated with\n// Zero value for instantaneous, negative values for the past, and positive values for the future\n" },
		{ "ModuleRelativePath", "Public/Animation/MotionTrajectoryTypes.h" },
		{ "ToolTip", "The relative accumulated time that this sample is associated with\nZero value for instantaneous, negative values for the past, and positive values for the future" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_AccumulatedSeconds = { "AccumulatedSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrajectorySample, AccumulatedSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_AccumulatedSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_AccumulatedSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_AccumulatedDistance_MetaData[] = {
		{ "Category", "Motion Trajectory" },
		{ "Comment", "// The relative accumulated distance that this trajectory sample is associated with\n// Zero value for instantaneous, negative values for the past, and positive values for the future\n" },
		{ "ModuleRelativePath", "Public/Animation/MotionTrajectoryTypes.h" },
		{ "ToolTip", "The relative accumulated distance that this trajectory sample is associated with\nZero value for instantaneous, negative values for the past, and positive values for the future" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_AccumulatedDistance = { "AccumulatedDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrajectorySample, AccumulatedDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_AccumulatedDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_AccumulatedDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Motion Trajectory" },
		{ "Comment", "// Position relative to the sampled in-motion object\n" },
		{ "ModuleRelativePath", "Public/Animation/MotionTrajectoryTypes.h" },
		{ "ToolTip", "Position relative to the sampled in-motion object" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrajectorySample, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_LocalLinearVelocity_MetaData[] = {
		{ "Category", "Motion Trajectory" },
		{ "Comment", "// Linear velocity relative to the sampled in-motion object\n" },
		{ "ModuleRelativePath", "Public/Animation/MotionTrajectoryTypes.h" },
		{ "ToolTip", "Linear velocity relative to the sampled in-motion object" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_LocalLinearVelocity = { "LocalLinearVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrajectorySample, LocalLinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_LocalLinearVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_LocalLinearVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_LocalLinearAcceleration_MetaData[] = {
		{ "Category", "Motion Trajectory" },
		{ "Comment", "// Linear acceleration relative to the sampled in-motion object\n" },
		{ "ModuleRelativePath", "Public/Animation/MotionTrajectoryTypes.h" },
		{ "ToolTip", "Linear acceleration relative to the sampled in-motion object" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_LocalLinearAcceleration = { "LocalLinearAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrajectorySample, LocalLinearAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_LocalLinearAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_LocalLinearAcceleration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrajectorySample_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_AccumulatedSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_AccumulatedDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_LocalLinearVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewProp_LocalLinearAcceleration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrajectorySample_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TrajectorySample",
		sizeof(FTrajectorySample),
		alignof(FTrajectorySample),
		Z_Construct_UScriptStruct_FTrajectorySample_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrajectorySample_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrajectorySample_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrajectorySample_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrajectorySample()
	{
		if (!Z_Registration_Info_UScriptStruct_TrajectorySample.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TrajectorySample.InnerSingleton, Z_Construct_UScriptStruct_FTrajectorySample_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TrajectorySample.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TrajectorySampleRange;
class UScriptStruct* FTrajectorySampleRange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TrajectorySampleRange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TrajectorySampleRange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrajectorySampleRange, Z_Construct_UPackage__Script_Engine(), TEXT("TrajectorySampleRange"));
	}
	return Z_Registration_Info_UScriptStruct_TrajectorySampleRange.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTrajectorySampleRange>()
{
	return FTrajectorySampleRange::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Samples_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Samples_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Samples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Motion Trajectory" },
		{ "Comment", "// A container of ordered trajectory samples and associated sampling rate\n" },
		{ "ModuleRelativePath", "Public/Animation/MotionTrajectoryTypes.h" },
		{ "ToolTip", "A container of ordered trajectory samples and associated sampling rate" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrajectorySampleRange>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::NewProp_Samples_Inner = { "Samples", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTrajectorySample, METADATA_PARAMS(nullptr, 0) }; // 3291457852
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::NewProp_Samples_MetaData[] = {
		{ "Category", "Motion Trajectory" },
		{ "Comment", "// Linearly ordered (Time or Distance domain) container for past, present, and future trajectory samples\n" },
		{ "ModuleRelativePath", "Public/Animation/MotionTrajectoryTypes.h" },
		{ "ToolTip", "Linearly ordered (Time or Distance domain) container for past, present, and future trajectory samples" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::NewProp_Samples = { "Samples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrajectorySampleRange, Samples), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::NewProp_Samples_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::NewProp_Samples_MetaData)) }; // 3291457852
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::NewProp_SampleRate_MetaData[] = {
		{ "Category", "Motion Trajectory" },
		{ "Comment", "// Per-second sample rate of the trajectory sample container\n" },
		{ "ModuleRelativePath", "Public/Animation/MotionTrajectoryTypes.h" },
		{ "ToolTip", "Per-second sample rate of the trajectory sample container" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTrajectorySampleRange, SampleRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::NewProp_SampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::NewProp_SampleRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::NewProp_Samples_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::NewProp_Samples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::NewProp_SampleRate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TrajectorySampleRange",
		sizeof(FTrajectorySampleRange),
		alignof(FTrajectorySampleRange),
		Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrajectorySampleRange()
	{
		if (!Z_Registration_Info_UScriptStruct_TrajectorySampleRange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TrajectorySampleRange.InnerSingleton, Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TrajectorySampleRange.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_MotionTrajectoryTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_MotionTrajectoryTypes_h_Statics::EnumInfo[] = {
		{ ETrajectorySampleDomain_StaticEnum, TEXT("ETrajectorySampleDomain"), &Z_Registration_Info_UEnum_ETrajectorySampleDomain, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2789835990U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_MotionTrajectoryTypes_h_Statics::ScriptStructInfo[] = {
		{ FTrajectorySample::StaticStruct, Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewStructOps, TEXT("TrajectorySample"), &Z_Registration_Info_UScriptStruct_TrajectorySample, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTrajectorySample), 3291457852U) },
		{ FTrajectorySampleRange::StaticStruct, Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics::NewStructOps, TEXT("TrajectorySampleRange"), &Z_Registration_Info_UScriptStruct_TrajectorySampleRange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTrajectorySampleRange), 3259606501U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_MotionTrajectoryTypes_h_90212098(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_MotionTrajectoryTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_MotionTrajectoryTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_MotionTrajectoryTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_MotionTrajectoryTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
