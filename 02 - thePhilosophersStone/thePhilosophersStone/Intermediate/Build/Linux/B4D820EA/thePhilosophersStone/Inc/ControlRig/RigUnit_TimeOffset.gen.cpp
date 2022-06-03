// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Simulation/RigUnit_TimeOffset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_TimeOffset() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SimBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_TimeOffsetFloat>() == std::is_polymorphic<FRigUnit_SimBase>(), "USTRUCT FRigUnit_TimeOffsetFloat cannot be polymorphic unless super FRigUnit_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_TimeOffsetFloat;
class UScriptStruct* FRigUnit_TimeOffsetFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TimeOffsetFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_TimeOffsetFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_TimeOffsetFloat"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_TimeOffsetFloat::Execute"), &FRigUnit_TimeOffsetFloat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_TimeOffsetFloat.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TimeOffsetFloat.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_TimeOffsetFloat>()
{
	return FRigUnit_TimeOffsetFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondsAgo_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondsAgo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BufferSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Buffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTimes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTimes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DeltaTimes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastInsertIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastInsertIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpperBound_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UpperBound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Simulation|Time" },
		{ "Comment", "/**\n * Records a value over time and can access the value from the past\n */" },
		{ "DisplayName", "Value Over Time (Float)" },
		{ "Keywords", "Buffer,Delta,History,Previous,TimeOffset,Delay" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_TimeOffset.h" },
		{ "PrototypeName", "TimeOffset" },
		{ "ToolTip", "Records a value over time and can access the value from the past" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_TimeOffsetFloat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_Value_MetaData[] = {
		{ "Comment", "/** The value to record */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_TimeOffset.h" },
		{ "ToolTip", "The value to record" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_TimeOffsetFloat, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_SecondsAgo_MetaData[] = {
		{ "Comment", "/** Seconds of time in the past you want to query the value for */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_TimeOffset.h" },
		{ "ToolTip", "Seconds of time in the past you want to query the value for" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_SecondsAgo = { "SecondsAgo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_TimeOffsetFloat, SecondsAgo), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_SecondsAgo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_SecondsAgo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_BufferSize_MetaData[] = {
		{ "Comment", "/** The sampling precision of the buffer. The higher the more precise - the more memory usage. */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_TimeOffset.h" },
		{ "ToolTip", "The sampling precision of the buffer. The higher the more precise - the more memory usage." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_BufferSize = { "BufferSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_TimeOffsetFloat, BufferSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_BufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_BufferSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_TimeRange_MetaData[] = {
		{ "Comment", "/** The maximum time required for offsetting in seconds. */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_TimeOffset.h" },
		{ "ToolTip", "The maximum time required for offsetting in seconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_TimeRange = { "TimeRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_TimeOffsetFloat, TimeRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_TimeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_TimeRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_TimeOffset.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_TimeOffsetFloat, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_Buffer_MetaData[] = {
		{ "ArraySize", "FMath::Clamp<int32>(BufferSize, 2, 512)" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_TimeOffset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_TimeOffsetFloat, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_Buffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_Buffer_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_DeltaTimes_Inner = { "DeltaTimes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_DeltaTimes_MetaData[] = {
		{ "ArraySize", "FMath::Clamp<int32>(BufferSize, 2, 512)" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_TimeOffset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_DeltaTimes = { "DeltaTimes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_TimeOffsetFloat, DeltaTimes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_DeltaTimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_DeltaTimes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_LastInsertIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_TimeOffset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_LastInsertIndex = { "LastInsertIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_TimeOffsetFloat, LastInsertIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_LastInsertIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_LastInsertIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_UpperBound_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_TimeOffset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_UpperBound = { "UpperBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_TimeOffsetFloat, UpperBound), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_UpperBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_UpperBound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_SecondsAgo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_BufferSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_TimeRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_Buffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_Buffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_DeltaTimes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_DeltaTimes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_LastInsertIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewProp_UpperBound,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_SimBase,
		&NewStructOps,
		"RigUnit_TimeOffsetFloat",
		sizeof(FRigUnit_TimeOffsetFloat),
		alignof(FRigUnit_TimeOffsetFloat),
		Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_TimeOffsetFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_TimeOffsetFloat.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_TimeOffsetFloat.InnerSingleton;
	}

void FRigUnit_TimeOffsetFloat::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		SecondsAgo,
		BufferSize,
		TimeRange,
		Result,
		Buffer,
		DeltaTimes,
		LastInsertIndex,
		UpperBound,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_TimeOffsetVector>() == std::is_polymorphic<FRigUnit_SimBase>(), "USTRUCT FRigUnit_TimeOffsetVector cannot be polymorphic unless super FRigUnit_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_TimeOffsetVector;
class UScriptStruct* FRigUnit_TimeOffsetVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TimeOffsetVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_TimeOffsetVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_TimeOffsetVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_TimeOffsetVector::Execute"), &FRigUnit_TimeOffsetVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_TimeOffsetVector.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TimeOffsetVector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_TimeOffsetVector>()
{
	return FRigUnit_TimeOffsetVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondsAgo_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondsAgo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BufferSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Buffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTimes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTimes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DeltaTimes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastInsertIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastInsertIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpperBound_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UpperBound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Simulation|Time" },
		{ "Comment", "/**\n * Records a value over time and can access the value from the past\n */" },
		{ "DisplayName", "Value Over Time (Vector)" },
		{ "Keywords", "Buffer,Delta,History,Previous,TimeOffset,Delay" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_TimeOffset.h" },
		{ "PrototypeName", "TimeOffset" },
		{ "ToolTip", "Records a value over time and can access the value from the past" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_TimeOffsetVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_Value_MetaData[] = {
		{ "Comment", "/** The value to record */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_TimeOffset.h" },
		{ "ToolTip", "The value to record" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_TimeOffsetVector, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_SecondsAgo_MetaData[] = {
		{ "Comment", "/** Seconds of time in the past you want to query the value for */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_TimeOffset.h" },
		{ "ToolTip", "Seconds of time in the past you want to query the value for" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_SecondsAgo = { "SecondsAgo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_TimeOffsetVector, SecondsAgo), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_SecondsAgo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_SecondsAgo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_BufferSize_MetaData[] = {
		{ "Comment", "/** The sampling precision of the buffer. The higher the more precise - the more memory usage. */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_TimeOffset.h" },
		{ "ToolTip", "The sampling precision of the buffer. The higher the more precise - the more memory usage." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_BufferSize = { "BufferSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_TimeOffsetVector, BufferSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_BufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_BufferSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_TimeRange_MetaData[] = {
		{ "Comment", "/** The maximum time required for offsetting in seconds. */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_TimeOffset.h" },
		{ "ToolTip", "The maximum time required for offsetting in seconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_TimeRange = { "TimeRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_TimeOffsetVector, TimeRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_TimeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_TimeRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_TimeOffset.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_TimeOffsetVector, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_Buffer_MetaData[] = {
		{ "ArraySize", "FMath::Clamp<int32>(BufferSize, 2, 512)" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_TimeOffset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_TimeOffsetVector, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_Buffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_Buffer_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_DeltaTimes_Inner = { "DeltaTimes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_DeltaTimes_MetaData[] = {
		{ "ArraySize", "FMath::Clamp<int32>(BufferSize, 2, 512)" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_TimeOffset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_DeltaTimes = { "DeltaTimes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_TimeOffsetVector, DeltaTimes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_DeltaTimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_DeltaTimes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_LastInsertIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_TimeOffset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_LastInsertIndex = { "LastInsertIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_TimeOffsetVector, LastInsertIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_LastInsertIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_LastInsertIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_UpperBound_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_TimeOffset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_UpperBound = { "UpperBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_TimeOffsetVector, UpperBound), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_UpperBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_UpperBound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_SecondsAgo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_BufferSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_TimeRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_Buffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_Buffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_DeltaTimes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_DeltaTimes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_LastInsertIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewProp_UpperBound,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_SimBase,
		&NewStructOps,
		"RigUnit_TimeOffsetVector",
		sizeof(FRigUnit_TimeOffsetVector),
		alignof(FRigUnit_TimeOffsetVector),
		Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_TimeOffsetVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_TimeOffsetVector.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_TimeOffsetVector.InnerSingleton;
	}

void FRigUnit_TimeOffsetVector::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		SecondsAgo,
		BufferSize,
		TimeRange,
		Result,
		Buffer,
		DeltaTimes,
		LastInsertIndex,
		UpperBound,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_TimeOffsetTransform>() == std::is_polymorphic<FRigUnit_SimBase>(), "USTRUCT FRigUnit_TimeOffsetTransform cannot be polymorphic unless super FRigUnit_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_TimeOffsetTransform;
class UScriptStruct* FRigUnit_TimeOffsetTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TimeOffsetTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_TimeOffsetTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_TimeOffsetTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_TimeOffsetTransform::Execute"), &FRigUnit_TimeOffsetTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_TimeOffsetTransform.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TimeOffsetTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_TimeOffsetTransform>()
{
	return FRigUnit_TimeOffsetTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondsAgo_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondsAgo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BufferSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Buffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTimes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTimes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DeltaTimes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastInsertIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastInsertIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpperBound_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UpperBound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Simulation|Time" },
		{ "Comment", "/**\n * Records a value over time and can access the value from the past\n */" },
		{ "DisplayName", "Value Over Time (Transform)" },
		{ "Keywords", "Buffer,Delta,History,Previous,TimeOffset,Delay" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_TimeOffset.h" },
		{ "PrototypeName", "TimeOffset" },
		{ "ToolTip", "Records a value over time and can access the value from the past" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_TimeOffsetTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_Value_MetaData[] = {
		{ "Comment", "/** The value to record */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_TimeOffset.h" },
		{ "ToolTip", "The value to record" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_TimeOffsetTransform, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_SecondsAgo_MetaData[] = {
		{ "Comment", "/** Seconds of time in the past you want to query the value for */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_TimeOffset.h" },
		{ "ToolTip", "Seconds of time in the past you want to query the value for" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_SecondsAgo = { "SecondsAgo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_TimeOffsetTransform, SecondsAgo), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_SecondsAgo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_SecondsAgo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_BufferSize_MetaData[] = {
		{ "Comment", "/** The sampling precision of the buffer. The higher the more precise - the more memory usage. */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_TimeOffset.h" },
		{ "ToolTip", "The sampling precision of the buffer. The higher the more precise - the more memory usage." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_BufferSize = { "BufferSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_TimeOffsetTransform, BufferSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_BufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_BufferSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_TimeRange_MetaData[] = {
		{ "Comment", "/** The maximum time required for offsetting in seconds. */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_TimeOffset.h" },
		{ "ToolTip", "The maximum time required for offsetting in seconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_TimeRange = { "TimeRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_TimeOffsetTransform, TimeRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_TimeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_TimeRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_TimeOffset.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_TimeOffsetTransform, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_Buffer_MetaData[] = {
		{ "ArraySize", "FMath::Clamp<int32>(BufferSize, 2, 512)" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_TimeOffset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_TimeOffsetTransform, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_Buffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_Buffer_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_DeltaTimes_Inner = { "DeltaTimes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_DeltaTimes_MetaData[] = {
		{ "ArraySize", "FMath::Clamp<int32>(BufferSize, 2, 512)" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_TimeOffset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_DeltaTimes = { "DeltaTimes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_TimeOffsetTransform, DeltaTimes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_DeltaTimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_DeltaTimes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_LastInsertIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_TimeOffset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_LastInsertIndex = { "LastInsertIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_TimeOffsetTransform, LastInsertIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_LastInsertIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_LastInsertIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_UpperBound_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_TimeOffset.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_UpperBound = { "UpperBound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_TimeOffsetTransform, UpperBound), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_UpperBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_UpperBound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_SecondsAgo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_BufferSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_TimeRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_Buffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_Buffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_DeltaTimes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_DeltaTimes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_LastInsertIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewProp_UpperBound,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_SimBase,
		&NewStructOps,
		"RigUnit_TimeOffsetTransform",
		sizeof(FRigUnit_TimeOffsetTransform),
		alignof(FRigUnit_TimeOffsetTransform),
		Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_TimeOffsetTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_TimeOffsetTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_TimeOffsetTransform.InnerSingleton;
	}

void FRigUnit_TimeOffsetTransform::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		SecondsAgo,
		BufferSize,
		TimeRange,
		Result,
		Buffer,
		DeltaTimes,
		LastInsertIndex,
		UpperBound,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_TimeOffset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_TimeOffset_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_TimeOffsetFloat::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics::NewStructOps, TEXT("RigUnit_TimeOffsetFloat"), &Z_Registration_Info_UScriptStruct_RigUnit_TimeOffsetFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_TimeOffsetFloat), 835778036U) },
		{ FRigUnit_TimeOffsetVector::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics::NewStructOps, TEXT("RigUnit_TimeOffsetVector"), &Z_Registration_Info_UScriptStruct_RigUnit_TimeOffsetVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_TimeOffsetVector), 2551241373U) },
		{ FRigUnit_TimeOffsetTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics::NewStructOps, TEXT("RigUnit_TimeOffsetTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_TimeOffsetTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_TimeOffsetTransform), 2711110847U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_TimeOffset_h_3087004134(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_TimeOffset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_TimeOffset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
