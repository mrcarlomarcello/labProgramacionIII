// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Simulation/RigUnit_AlphaInterp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_AlphaInterp() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AlphaInterp();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SimBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputRange();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_AlphaInterp>() == std::is_polymorphic<FRigUnit_SimBase>(), "USTRUCT FRigUnit_AlphaInterp cannot be polymorphic unless super FRigUnit_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AlphaInterp;
class UScriptStruct* FRigUnit_AlphaInterp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AlphaInterp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AlphaInterp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AlphaInterp"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AlphaInterp::Execute"), &FRigUnit_AlphaInterp::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AlphaInterp.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AlphaInterp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AlphaInterp>()
{
	return FRigUnit_AlphaInterp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMapRange_MetaData[];
#endif
		static void NewProp_bMapRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMapRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClampResult_MetaData[];
#endif
		static void NewProp_bClampResult_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClampMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClampMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInterpResult_MetaData[];
#endif
		static void NewProp_bInterpResult_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeedIncreasing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedIncreasing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeedDecreasing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedDecreasing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleBiasClamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleBiasClamp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Simulation|Time" },
		{ "Comment", "/**\n * Takes in a float value and outputs an accumulated value with a customized scale and clamp\n */" },
		{ "DisplayName", "Alpha Interpolate" },
		{ "Keywords", "Alpha,Lerp,LinearInterpolate" },
		{ "MenuDescSuffix", "(Float)" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_AlphaInterp.h" },
		{ "PrototypeName", "AlphaInterp" },
		{ "ToolTip", "Takes in a float value and outputs an accumulated value with a customized scale and clamp" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AlphaInterp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AlphaInterp, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_Scale_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AlphaInterp, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_Bias_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_Bias = { "Bias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AlphaInterp, Bias), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_Bias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_Bias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_bMapRange_MetaData[] = {
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_AlphaInterp.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_bMapRange_SetBit(void* Obj)
	{
		((FRigUnit_AlphaInterp*)Obj)->bMapRange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_bMapRange = { "bMapRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_AlphaInterp), &Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_bMapRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_bMapRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_bMapRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_InRange_MetaData[] = {
		{ "EditCondition", "bMapRange" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_InRange = { "InRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AlphaInterp, InRange), Z_Construct_UScriptStruct_FInputRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_InRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_InRange_MetaData)) }; // 213438500
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_OutRange_MetaData[] = {
		{ "EditCondition", "bMapRange" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_OutRange = { "OutRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AlphaInterp, OutRange), Z_Construct_UScriptStruct_FInputRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_OutRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_OutRange_MetaData)) }; // 213438500
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_bClampResult_MetaData[] = {
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_AlphaInterp.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_bClampResult_SetBit(void* Obj)
	{
		((FRigUnit_AlphaInterp*)Obj)->bClampResult = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_bClampResult = { "bClampResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_AlphaInterp), &Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_bClampResult_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_bClampResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_bClampResult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_ClampMin_MetaData[] = {
		{ "EditCondition", "bClampResult" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_ClampMin = { "ClampMin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AlphaInterp, ClampMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_ClampMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_ClampMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_ClampMax_MetaData[] = {
		{ "EditCondition", "bClampResult" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_ClampMax = { "ClampMax", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AlphaInterp, ClampMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_ClampMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_ClampMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_bInterpResult_MetaData[] = {
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_AlphaInterp.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_bInterpResult_SetBit(void* Obj)
	{
		((FRigUnit_AlphaInterp*)Obj)->bInterpResult = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_bInterpResult = { "bInterpResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_AlphaInterp), &Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_bInterpResult_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_bInterpResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_bInterpResult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_InterpSpeedIncreasing_MetaData[] = {
		{ "EditCondition", "bInterpResult" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_InterpSpeedIncreasing = { "InterpSpeedIncreasing", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AlphaInterp, InterpSpeedIncreasing), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_InterpSpeedIncreasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_InterpSpeedIncreasing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_InterpSpeedDecreasing_MetaData[] = {
		{ "EditCondition", "bInterpResult" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_InterpSpeedDecreasing = { "InterpSpeedDecreasing", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AlphaInterp, InterpSpeedDecreasing), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_InterpSpeedDecreasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_InterpSpeedDecreasing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_AlphaInterp.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AlphaInterp, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_ScaleBiasClamp_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_ScaleBiasClamp = { "ScaleBiasClamp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AlphaInterp, ScaleBiasClamp), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_ScaleBiasClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_ScaleBiasClamp_MetaData)) }; // 3749118956
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_Bias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_bMapRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_InRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_OutRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_bClampResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_ClampMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_ClampMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_bInterpResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_InterpSpeedIncreasing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_InterpSpeedDecreasing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewProp_ScaleBiasClamp,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_SimBase,
		&NewStructOps,
		"RigUnit_AlphaInterp",
		sizeof(FRigUnit_AlphaInterp),
		alignof(FRigUnit_AlphaInterp),
		Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AlphaInterp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AlphaInterp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AlphaInterp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AlphaInterp.InnerSingleton;
	}

void FRigUnit_AlphaInterp::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		Scale,
		Bias,
		bMapRange,
		InRange,
		OutRange,
		bClampResult,
		ClampMin,
		ClampMax,
		bInterpResult,
		InterpSpeedIncreasing,
		InterpSpeedDecreasing,
		Result,
		ScaleBiasClamp,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_AlphaInterpVector>() == std::is_polymorphic<FRigUnit_SimBase>(), "USTRUCT FRigUnit_AlphaInterpVector cannot be polymorphic unless super FRigUnit_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AlphaInterpVector;
class UScriptStruct* FRigUnit_AlphaInterpVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AlphaInterpVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AlphaInterpVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AlphaInterpVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AlphaInterpVector::Execute"), &FRigUnit_AlphaInterpVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AlphaInterpVector.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AlphaInterpVector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AlphaInterpVector>()
{
	return FRigUnit_AlphaInterpVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMapRange_MetaData[];
#endif
		static void NewProp_bMapRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMapRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClampResult_MetaData[];
#endif
		static void NewProp_bClampResult_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClampMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClampMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInterpResult_MetaData[];
#endif
		static void NewProp_bInterpResult_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeedIncreasing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedIncreasing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeedDecreasing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedDecreasing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleBiasClamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleBiasClamp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Simulation|Time" },
		{ "Comment", "/**\n * Takes in a vector value and outputs an accumulated value with a customized scale and clamp\n */" },
		{ "DisplayName", "Alpha Interpolate" },
		{ "Keywords", "Alpha,Lerp,LinearInterpolate" },
		{ "MenuDescSuffix", "(Vector)" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_AlphaInterp.h" },
		{ "PrototypeName", "AlphaInterp" },
		{ "ToolTip", "Takes in a vector value and outputs an accumulated value with a customized scale and clamp" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AlphaInterpVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AlphaInterpVector, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_Scale_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AlphaInterpVector, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_Bias_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_Bias = { "Bias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AlphaInterpVector, Bias), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_Bias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_Bias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_bMapRange_MetaData[] = {
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_AlphaInterp.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_bMapRange_SetBit(void* Obj)
	{
		((FRigUnit_AlphaInterpVector*)Obj)->bMapRange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_bMapRange = { "bMapRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_AlphaInterpVector), &Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_bMapRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_bMapRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_bMapRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_InRange_MetaData[] = {
		{ "EditCondition", "bMapRange" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_InRange = { "InRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AlphaInterpVector, InRange), Z_Construct_UScriptStruct_FInputRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_InRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_InRange_MetaData)) }; // 213438500
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_OutRange_MetaData[] = {
		{ "EditCondition", "bMapRange" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_OutRange = { "OutRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AlphaInterpVector, OutRange), Z_Construct_UScriptStruct_FInputRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_OutRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_OutRange_MetaData)) }; // 213438500
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_bClampResult_MetaData[] = {
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_AlphaInterp.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_bClampResult_SetBit(void* Obj)
	{
		((FRigUnit_AlphaInterpVector*)Obj)->bClampResult = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_bClampResult = { "bClampResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_AlphaInterpVector), &Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_bClampResult_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_bClampResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_bClampResult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_ClampMin_MetaData[] = {
		{ "EditCondition", "bClampResult" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_ClampMin = { "ClampMin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AlphaInterpVector, ClampMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_ClampMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_ClampMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_ClampMax_MetaData[] = {
		{ "EditCondition", "bClampResult" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_ClampMax = { "ClampMax", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AlphaInterpVector, ClampMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_ClampMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_ClampMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_bInterpResult_MetaData[] = {
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_AlphaInterp.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_bInterpResult_SetBit(void* Obj)
	{
		((FRigUnit_AlphaInterpVector*)Obj)->bInterpResult = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_bInterpResult = { "bInterpResult", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_AlphaInterpVector), &Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_bInterpResult_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_bInterpResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_bInterpResult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_InterpSpeedIncreasing_MetaData[] = {
		{ "EditCondition", "bInterpResult" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_InterpSpeedIncreasing = { "InterpSpeedIncreasing", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AlphaInterpVector, InterpSpeedIncreasing), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_InterpSpeedIncreasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_InterpSpeedIncreasing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_InterpSpeedDecreasing_MetaData[] = {
		{ "EditCondition", "bInterpResult" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_InterpSpeedDecreasing = { "InterpSpeedDecreasing", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AlphaInterpVector, InterpSpeedDecreasing), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_InterpSpeedDecreasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_InterpSpeedDecreasing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_AlphaInterp.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AlphaInterpVector, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_ScaleBiasClamp_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_AlphaInterp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_ScaleBiasClamp = { "ScaleBiasClamp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AlphaInterpVector, ScaleBiasClamp), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_ScaleBiasClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_ScaleBiasClamp_MetaData)) }; // 3749118956
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_Bias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_bMapRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_InRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_OutRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_bClampResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_ClampMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_ClampMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_bInterpResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_InterpSpeedIncreasing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_InterpSpeedDecreasing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewProp_ScaleBiasClamp,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_SimBase,
		&NewStructOps,
		"RigUnit_AlphaInterpVector",
		sizeof(FRigUnit_AlphaInterpVector),
		alignof(FRigUnit_AlphaInterpVector),
		Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AlphaInterpVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AlphaInterpVector.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AlphaInterpVector.InnerSingleton;
	}

void FRigUnit_AlphaInterpVector::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		Scale,
		Bias,
		bMapRange,
		InRange,
		OutRange,
		bClampResult,
		ClampMin,
		ClampMax,
		bInterpResult,
		InterpSpeedIncreasing,
		InterpSpeedDecreasing,
		Result,
		ScaleBiasClamp,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_AlphaInterp_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_AlphaInterp_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_AlphaInterp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics::NewStructOps, TEXT("RigUnit_AlphaInterp"), &Z_Registration_Info_UScriptStruct_RigUnit_AlphaInterp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AlphaInterp), 3521549784U) },
		{ FRigUnit_AlphaInterpVector::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics::NewStructOps, TEXT("RigUnit_AlphaInterpVector"), &Z_Registration_Info_UScriptStruct_RigUnit_AlphaInterpVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AlphaInterpVector), 833693032U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_AlphaInterp_h_904560034(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_AlphaInterp_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_AlphaInterp_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
