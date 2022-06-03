// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Simulation/RigUnit_Kalman.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_Kalman() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_KalmanFloat();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SimBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_KalmanVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_KalmanTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_KalmanFloat>() == std::is_polymorphic<FRigUnit_SimBase>(), "USTRUCT FRigUnit_KalmanFloat cannot be polymorphic unless super FRigUnit_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_KalmanFloat;
class UScriptStruct* FRigUnit_KalmanFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_KalmanFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_KalmanFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_KalmanFloat, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_KalmanFloat"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_KalmanFloat::Execute"), &FRigUnit_KalmanFloat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_KalmanFloat.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_KalmanFloat.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_KalmanFloat>()
{
	return FRigUnit_KalmanFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BufferSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Buffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastInsertIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastInsertIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Simulation|Time" },
		{ "Comment", "/**\n * Averages a value over time.\n * This uses a Kalman Filter internally.\n */" },
		{ "DisplayName", "Average Over Time (Float)" },
		{ "Keywords", "Average,Smooth,KalmanFilter" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Kalman.h" },
		{ "PrototypeName", "KalmanFilter" },
		{ "ToolTip", "Averages a value over time.\nThis uses a Kalman Filter internally." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_KalmanFloat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Kalman.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_KalmanFloat, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::NewProp_BufferSize_MetaData[] = {
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Kalman.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::NewProp_BufferSize = { "BufferSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_KalmanFloat, BufferSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::NewProp_BufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::NewProp_BufferSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Kalman.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_KalmanFloat, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::NewProp_Buffer_MetaData[] = {
		{ "ArraySize", "FMath::Clamp<int32>(BufferSize, 1, 512)" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Kalman.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_KalmanFloat, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::NewProp_Buffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::NewProp_Buffer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::NewProp_LastInsertIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Kalman.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::NewProp_LastInsertIndex = { "LastInsertIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_KalmanFloat, LastInsertIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::NewProp_LastInsertIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::NewProp_LastInsertIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::NewProp_BufferSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::NewProp_Buffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::NewProp_Buffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::NewProp_LastInsertIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_SimBase,
		&NewStructOps,
		"RigUnit_KalmanFloat",
		sizeof(FRigUnit_KalmanFloat),
		alignof(FRigUnit_KalmanFloat),
		Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_KalmanFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_KalmanFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_KalmanFloat.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_KalmanFloat.InnerSingleton;
	}

void FRigUnit_KalmanFloat::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		BufferSize,
		Result,
		Buffer,
		LastInsertIndex,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_KalmanVector>() == std::is_polymorphic<FRigUnit_SimBase>(), "USTRUCT FRigUnit_KalmanVector cannot be polymorphic unless super FRigUnit_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_KalmanVector;
class UScriptStruct* FRigUnit_KalmanVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_KalmanVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_KalmanVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_KalmanVector, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_KalmanVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_KalmanVector::Execute"), &FRigUnit_KalmanVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_KalmanVector.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_KalmanVector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_KalmanVector>()
{
	return FRigUnit_KalmanVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BufferSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Buffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastInsertIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastInsertIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Simulation|Time" },
		{ "Comment", "/**\n * Averages a value over time.\n * This uses a Kalman Filter internally.\n */" },
		{ "DisplayName", "Average Over Time (Vector)" },
		{ "Keywords", "Average,Smooth,KalmanFilter" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Kalman.h" },
		{ "PrototypeName", "KalmanFilter" },
		{ "ToolTip", "Averages a value over time.\nThis uses a Kalman Filter internally." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_KalmanVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Kalman.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_KalmanVector, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::NewProp_BufferSize_MetaData[] = {
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Kalman.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::NewProp_BufferSize = { "BufferSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_KalmanVector, BufferSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::NewProp_BufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::NewProp_BufferSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Kalman.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_KalmanVector, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::NewProp_Buffer_MetaData[] = {
		{ "ArraySize", "FMath::Clamp<int32>(BufferSize, 1, 512)" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Kalman.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_KalmanVector, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::NewProp_Buffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::NewProp_Buffer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::NewProp_LastInsertIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Kalman.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::NewProp_LastInsertIndex = { "LastInsertIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_KalmanVector, LastInsertIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::NewProp_LastInsertIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::NewProp_LastInsertIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::NewProp_BufferSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::NewProp_Buffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::NewProp_Buffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::NewProp_LastInsertIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_SimBase,
		&NewStructOps,
		"RigUnit_KalmanVector",
		sizeof(FRigUnit_KalmanVector),
		alignof(FRigUnit_KalmanVector),
		Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_KalmanVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_KalmanVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_KalmanVector.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_KalmanVector.InnerSingleton;
	}

void FRigUnit_KalmanVector::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		BufferSize,
		Result,
		Buffer,
		LastInsertIndex,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_KalmanTransform>() == std::is_polymorphic<FRigUnit_SimBase>(), "USTRUCT FRigUnit_KalmanTransform cannot be polymorphic unless super FRigUnit_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_KalmanTransform;
class UScriptStruct* FRigUnit_KalmanTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_KalmanTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_KalmanTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_KalmanTransform, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_KalmanTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_KalmanTransform::Execute"), &FRigUnit_KalmanTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_KalmanTransform.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_KalmanTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_KalmanTransform>()
{
	return FRigUnit_KalmanTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BufferSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Buffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastInsertIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastInsertIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Simulation|Time" },
		{ "Comment", "/**\n * Averages a transform over time.\n * This uses a Kalman Filter internally.\n */" },
		{ "DisplayName", "Average Over Time (Transform)" },
		{ "Keywords", "Average,Smooth,KalmanFilter" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Kalman.h" },
		{ "PrototypeName", "KalmanFilter" },
		{ "ToolTip", "Averages a transform over time.\nThis uses a Kalman Filter internally." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_KalmanTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Kalman.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_KalmanTransform, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::NewProp_BufferSize_MetaData[] = {
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Kalman.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::NewProp_BufferSize = { "BufferSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_KalmanTransform, BufferSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::NewProp_BufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::NewProp_BufferSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Kalman.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_KalmanTransform, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::NewProp_Buffer_MetaData[] = {
		{ "ArraySize", "FMath::Clamp<int32>(BufferSize, 1, 512)" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Kalman.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_KalmanTransform, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::NewProp_Buffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::NewProp_Buffer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::NewProp_LastInsertIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Kalman.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::NewProp_LastInsertIndex = { "LastInsertIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_KalmanTransform, LastInsertIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::NewProp_LastInsertIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::NewProp_LastInsertIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::NewProp_BufferSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::NewProp_Buffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::NewProp_Buffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::NewProp_LastInsertIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_SimBase,
		&NewStructOps,
		"RigUnit_KalmanTransform",
		sizeof(FRigUnit_KalmanTransform),
		alignof(FRigUnit_KalmanTransform),
		Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_KalmanTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_KalmanTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_KalmanTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_KalmanTransform.InnerSingleton;
	}

void FRigUnit_KalmanTransform::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		BufferSize,
		Result,
		Buffer,
		LastInsertIndex,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Kalman_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Kalman_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_KalmanFloat::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics::NewStructOps, TEXT("RigUnit_KalmanFloat"), &Z_Registration_Info_UScriptStruct_RigUnit_KalmanFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_KalmanFloat), 1606328043U) },
		{ FRigUnit_KalmanVector::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics::NewStructOps, TEXT("RigUnit_KalmanVector"), &Z_Registration_Info_UScriptStruct_RigUnit_KalmanVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_KalmanVector), 4069839653U) },
		{ FRigUnit_KalmanTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics::NewStructOps, TEXT("RigUnit_KalmanTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_KalmanTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_KalmanTransform), 4043917268U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Kalman_h_3576212721(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Kalman_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Kalman_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
