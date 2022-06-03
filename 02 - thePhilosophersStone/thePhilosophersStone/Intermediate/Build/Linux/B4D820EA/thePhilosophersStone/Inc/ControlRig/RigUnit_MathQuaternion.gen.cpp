// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Math/RigUnit_MathQuaternion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_MathQuaternion() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBase();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnaryOp();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromAxisAndAngle();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler();
	ANIMATIONCORE_API UEnum* Z_Construct_UEnum_AnimationCore_EEulerRotationOrder();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromTwoVectors();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToAxisAndAngle();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionScale();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToRotator();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionMul();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionInverse();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionDot();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotateVector();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionGetAxis();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotationOrder();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_MathQuaternionBase>() == std::is_polymorphic<FRigUnit_MathBase>(), "USTRUCT FRigUnit_MathQuaternionBase cannot be polymorphic unless super FRigUnit_MathBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionBase;
class UScriptStruct* FRigUnit_MathQuaternionBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBase, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathQuaternionBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathQuaternionBase>()
{
	return FRigUnit_MathQuaternionBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Math|Quaternion" },
		{ "MenuDescSuffix", "(Quaternion)" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathQuaternionBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathBase,
		&NewStructOps,
		"RigUnit_MathQuaternionBase",
		sizeof(FRigUnit_MathQuaternionBase),
		alignof(FRigUnit_MathQuaternionBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathQuaternionUnaryOp>() == std::is_polymorphic<FRigUnit_MathQuaternionBase>(), "USTRUCT FRigUnit_MathQuaternionUnaryOp cannot be polymorphic unless super FRigUnit_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionUnaryOp;
class UScriptStruct* FRigUnit_MathQuaternionUnaryOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionUnaryOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionUnaryOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnaryOp, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathQuaternionUnaryOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionUnaryOp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathQuaternionUnaryOp>()
{
	return FRigUnit_MathQuaternionUnaryOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnaryOp_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnaryOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnaryOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathQuaternionUnaryOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnaryOp_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnaryOp_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionUnaryOp, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnaryOp_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnaryOp_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnaryOp_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnaryOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionUnaryOp, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnaryOp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnaryOp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnaryOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnaryOp_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnaryOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnaryOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBase,
		&NewStructOps,
		"RigUnit_MathQuaternionUnaryOp",
		sizeof(FRigUnit_MathQuaternionUnaryOp),
		alignof(FRigUnit_MathQuaternionUnaryOp),
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnaryOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnaryOp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnaryOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnaryOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnaryOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionUnaryOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionUnaryOp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnaryOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionUnaryOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathQuaternionBinaryOp>() == std::is_polymorphic<FRigUnit_MathQuaternionBase>(), "USTRUCT FRigUnit_MathQuaternionBinaryOp cannot be polymorphic unless super FRigUnit_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionBinaryOp;
class UScriptStruct* FRigUnit_MathQuaternionBinaryOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionBinaryOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionBinaryOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathQuaternionBinaryOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionBinaryOp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathQuaternionBinaryOp>()
{
	return FRigUnit_MathQuaternionBinaryOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathQuaternionBinaryOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp_Statics::NewProp_A_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionBinaryOp, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp_Statics::NewProp_B_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionBinaryOp, B), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionBinaryOp, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBase,
		&NewStructOps,
		"RigUnit_MathQuaternionBinaryOp",
		sizeof(FRigUnit_MathQuaternionBinaryOp),
		alignof(FRigUnit_MathQuaternionBinaryOp),
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionBinaryOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionBinaryOp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionBinaryOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathQuaternionFromAxisAndAngle>() == std::is_polymorphic<FRigUnit_MathQuaternionBase>(), "USTRUCT FRigUnit_MathQuaternionFromAxisAndAngle cannot be polymorphic unless super FRigUnit_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromAxisAndAngle;
class UScriptStruct* FRigUnit_MathQuaternionFromAxisAndAngle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromAxisAndAngle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromAxisAndAngle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromAxisAndAngle, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathQuaternionFromAxisAndAngle"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathQuaternionFromAxisAndAngle::Execute"), &FRigUnit_MathQuaternionFromAxisAndAngle::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromAxisAndAngle.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromAxisAndAngle.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathQuaternionFromAxisAndAngle>()
{
	return FRigUnit_MathQuaternionFromAxisAndAngle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromAxisAndAngle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromAxisAndAngle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Makes a quaternion from an axis and an angle in radians\n */" },
		{ "DisplayName", "From Axis And Angle" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "PrototypeName", "FromAxisAndAngle" },
		{ "ToolTip", "Makes a quaternion from an axis and an angle in radians" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromAxisAndAngle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathQuaternionFromAxisAndAngle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromAxisAndAngle_Statics::NewProp_Axis_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromAxisAndAngle_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionFromAxisAndAngle, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromAxisAndAngle_Statics::NewProp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromAxisAndAngle_Statics::NewProp_Axis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromAxisAndAngle_Statics::NewProp_Angle_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromAxisAndAngle_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionFromAxisAndAngle, Angle), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromAxisAndAngle_Statics::NewProp_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromAxisAndAngle_Statics::NewProp_Angle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromAxisAndAngle_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromAxisAndAngle_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionFromAxisAndAngle, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromAxisAndAngle_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromAxisAndAngle_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromAxisAndAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromAxisAndAngle_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromAxisAndAngle_Statics::NewProp_Angle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromAxisAndAngle_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromAxisAndAngle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBase,
		&NewStructOps,
		"RigUnit_MathQuaternionFromAxisAndAngle",
		sizeof(FRigUnit_MathQuaternionFromAxisAndAngle),
		alignof(FRigUnit_MathQuaternionFromAxisAndAngle),
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromAxisAndAngle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromAxisAndAngle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromAxisAndAngle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromAxisAndAngle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromAxisAndAngle()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromAxisAndAngle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromAxisAndAngle.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromAxisAndAngle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromAxisAndAngle.InnerSingleton;
	}

void FRigUnit_MathQuaternionFromAxisAndAngle::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Axis,
		Angle,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathQuaternionFromEuler>() == std::is_polymorphic<FRigUnit_MathQuaternionBase>(), "USTRUCT FRigUnit_MathQuaternionFromEuler cannot be polymorphic unless super FRigUnit_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromEuler;
class UScriptStruct* FRigUnit_MathQuaternionFromEuler::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromEuler.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromEuler.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathQuaternionFromEuler"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathQuaternionFromEuler::Execute"), &FRigUnit_MathQuaternionFromEuler::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromEuler.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromEuler.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathQuaternionFromEuler>()
{
	return FRigUnit_MathQuaternionFromEuler::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Euler_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Euler;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationOrder_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOrder_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Makes a quaternion from euler values in degrees\n */" },
		{ "DisplayName", "From Euler" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "PrototypeName", "FromEuler" },
		{ "ToolTip", "Makes a quaternion from euler values in degrees" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathQuaternionFromEuler>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler_Statics::NewProp_Euler_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler_Statics::NewProp_Euler = { "Euler", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionFromEuler, Euler), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler_Statics::NewProp_Euler_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler_Statics::NewProp_Euler_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler_Statics::NewProp_RotationOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler_Statics::NewProp_RotationOrder_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler_Statics::NewProp_RotationOrder = { "RotationOrder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionFromEuler, RotationOrder), Z_Construct_UEnum_AnimationCore_EEulerRotationOrder, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler_Statics::NewProp_RotationOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler_Statics::NewProp_RotationOrder_MetaData)) }; // 2684869264
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionFromEuler, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler_Statics::NewProp_Euler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler_Statics::NewProp_RotationOrder_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler_Statics::NewProp_RotationOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBase,
		&NewStructOps,
		"RigUnit_MathQuaternionFromEuler",
		sizeof(FRigUnit_MathQuaternionFromEuler),
		alignof(FRigUnit_MathQuaternionFromEuler),
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromEuler.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromEuler.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromEuler.InnerSingleton;
	}

void FRigUnit_MathQuaternionFromEuler::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Euler,
		RotationOrder,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathQuaternionFromRotator>() == std::is_polymorphic<FRigUnit_MathQuaternionBase>(), "USTRUCT FRigUnit_MathQuaternionFromRotator cannot be polymorphic unless super FRigUnit_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromRotator;
class UScriptStruct* FRigUnit_MathQuaternionFromRotator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromRotator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromRotator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromRotator, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathQuaternionFromRotator"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathQuaternionFromRotator::Execute"), &FRigUnit_MathQuaternionFromRotator::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromRotator.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromRotator.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathQuaternionFromRotator>()
{
	return FRigUnit_MathQuaternionFromRotator::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromRotator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromRotator_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Makes a quaternion from a rotator\n */" },
		{ "DisplayName", "From Rotator" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "PrototypeName", "FromRotator" },
		{ "ToolTip", "Makes a quaternion from a rotator" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromRotator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathQuaternionFromRotator>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromRotator_Statics::NewProp_Rotator_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromRotator_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionFromRotator, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromRotator_Statics::NewProp_Rotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromRotator_Statics::NewProp_Rotator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromRotator_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromRotator_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionFromRotator, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromRotator_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromRotator_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromRotator_Statics::NewProp_Rotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromRotator_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromRotator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBase,
		&NewStructOps,
		"RigUnit_MathQuaternionFromRotator",
		sizeof(FRigUnit_MathQuaternionFromRotator),
		alignof(FRigUnit_MathQuaternionFromRotator),
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromRotator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromRotator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromRotator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromRotator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromRotator()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromRotator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromRotator.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromRotator_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromRotator.InnerSingleton;
	}

void FRigUnit_MathQuaternionFromRotator::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Rotator,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathQuaternionFromTwoVectors>() == std::is_polymorphic<FRigUnit_MathQuaternionBase>(), "USTRUCT FRigUnit_MathQuaternionFromTwoVectors cannot be polymorphic unless super FRigUnit_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromTwoVectors;
class UScriptStruct* FRigUnit_MathQuaternionFromTwoVectors::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromTwoVectors.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromTwoVectors.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromTwoVectors, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathQuaternionFromTwoVectors"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathQuaternionFromTwoVectors::Execute"), &FRigUnit_MathQuaternionFromTwoVectors::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromTwoVectors.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromTwoVectors.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathQuaternionFromTwoVectors>()
{
	return FRigUnit_MathQuaternionFromTwoVectors::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromTwoVectors_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromTwoVectors_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Makes a quaternion from two vectors, representing the shortest rotation between the two vectors.\n */" },
		{ "DisplayName", "From Two Vectors" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "PrototypeName", "FromTwoVectors" },
		{ "ToolTip", "Makes a quaternion from two vectors, representing the shortest rotation between the two vectors." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromTwoVectors_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathQuaternionFromTwoVectors>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromTwoVectors_Statics::NewProp_A_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromTwoVectors_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionFromTwoVectors, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromTwoVectors_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromTwoVectors_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromTwoVectors_Statics::NewProp_B_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromTwoVectors_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionFromTwoVectors, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromTwoVectors_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromTwoVectors_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromTwoVectors_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromTwoVectors_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionFromTwoVectors, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromTwoVectors_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromTwoVectors_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromTwoVectors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromTwoVectors_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromTwoVectors_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromTwoVectors_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromTwoVectors_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBase,
		&NewStructOps,
		"RigUnit_MathQuaternionFromTwoVectors",
		sizeof(FRigUnit_MathQuaternionFromTwoVectors),
		alignof(FRigUnit_MathQuaternionFromTwoVectors),
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromTwoVectors_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromTwoVectors_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromTwoVectors_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromTwoVectors_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromTwoVectors()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromTwoVectors.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromTwoVectors.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromTwoVectors_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromTwoVectors.InnerSingleton;
	}

void FRigUnit_MathQuaternionFromTwoVectors::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		A,
		B,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathQuaternionToAxisAndAngle>() == std::is_polymorphic<FRigUnit_MathQuaternionBase>(), "USTRUCT FRigUnit_MathQuaternionToAxisAndAngle cannot be polymorphic unless super FRigUnit_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionToAxisAndAngle;
class UScriptStruct* FRigUnit_MathQuaternionToAxisAndAngle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionToAxisAndAngle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionToAxisAndAngle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToAxisAndAngle, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathQuaternionToAxisAndAngle"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathQuaternionToAxisAndAngle::Execute"), &FRigUnit_MathQuaternionToAxisAndAngle::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionToAxisAndAngle.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionToAxisAndAngle.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathQuaternionToAxisAndAngle>()
{
	return FRigUnit_MathQuaternionToAxisAndAngle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToAxisAndAngle_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToAxisAndAngle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Retrieves the axis and angle of a quaternion in radians\n */" },
		{ "DisplayName", "To Axis And Angle" },
		{ "Keywords", "Make,Construct,GetAxis,GetAngle" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "PrototypeName", "ToAxisAndAngle" },
		{ "ToolTip", "Retrieves the axis and angle of a quaternion in radians" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToAxisAndAngle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathQuaternionToAxisAndAngle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToAxisAndAngle_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToAxisAndAngle_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionToAxisAndAngle, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToAxisAndAngle_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToAxisAndAngle_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToAxisAndAngle_Statics::NewProp_Axis_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToAxisAndAngle_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionToAxisAndAngle, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToAxisAndAngle_Statics::NewProp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToAxisAndAngle_Statics::NewProp_Axis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToAxisAndAngle_Statics::NewProp_Angle_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToAxisAndAngle_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionToAxisAndAngle, Angle), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToAxisAndAngle_Statics::NewProp_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToAxisAndAngle_Statics::NewProp_Angle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToAxisAndAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToAxisAndAngle_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToAxisAndAngle_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToAxisAndAngle_Statics::NewProp_Angle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToAxisAndAngle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBase,
		&NewStructOps,
		"RigUnit_MathQuaternionToAxisAndAngle",
		sizeof(FRigUnit_MathQuaternionToAxisAndAngle),
		alignof(FRigUnit_MathQuaternionToAxisAndAngle),
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToAxisAndAngle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToAxisAndAngle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToAxisAndAngle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToAxisAndAngle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToAxisAndAngle()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionToAxisAndAngle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionToAxisAndAngle.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToAxisAndAngle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionToAxisAndAngle.InnerSingleton;
	}

void FRigUnit_MathQuaternionToAxisAndAngle::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		Axis,
		Angle,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathQuaternionScale>() == std::is_polymorphic<FRigUnit_MathQuaternionBase>(), "USTRUCT FRigUnit_MathQuaternionScale cannot be polymorphic unless super FRigUnit_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionScale;
class UScriptStruct* FRigUnit_MathQuaternionScale::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionScale.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionScale.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionScale, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathQuaternionScale"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathQuaternionScale::Execute"), &FRigUnit_MathQuaternionScale::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionScale.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionScale.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathQuaternionScale>()
{
	return FRigUnit_MathQuaternionScale::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionScale_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionScale_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Scales a quaternion's angle\n */" },
		{ "Constant", "" },
		{ "DisplayName", "Scale" },
		{ "Keywords", "Multiply,Angle,Scale" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "PrototypeName", "Scale" },
		{ "ToolTip", "Scales a quaternion's angle" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionScale_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathQuaternionScale>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionScale_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionScale_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionScale, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionScale_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionScale_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionScale_Statics::NewProp_Scale_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionScale_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionScale, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionScale_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionScale_Statics::NewProp_Scale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathQuaternionScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionScale_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionScale_Statics::NewProp_Scale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionScale_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBase,
		&NewStructOps,
		"RigUnit_MathQuaternionScale",
		sizeof(FRigUnit_MathQuaternionScale),
		alignof(FRigUnit_MathQuaternionScale),
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionScale_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionScale_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionScale_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionScale_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionScale()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionScale.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionScale.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionScale_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionScale.InnerSingleton;
	}

void FRigUnit_MathQuaternionScale::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		Scale,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathQuaternionToEuler>() == std::is_polymorphic<FRigUnit_MathQuaternionBase>(), "USTRUCT FRigUnit_MathQuaternionToEuler cannot be polymorphic unless super FRigUnit_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionToEuler;
class UScriptStruct* FRigUnit_MathQuaternionToEuler::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionToEuler.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionToEuler.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathQuaternionToEuler"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathQuaternionToEuler::Execute"), &FRigUnit_MathQuaternionToEuler::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionToEuler.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionToEuler.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathQuaternionToEuler>()
{
	return FRigUnit_MathQuaternionToEuler::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationOrder_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOrder_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Retrieves the euler angles in degrees\n */" },
		{ "DisplayName", "To Euler" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "PrototypeName", "ToEuler" },
		{ "ToolTip", "Retrieves the euler angles in degrees" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathQuaternionToEuler>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionToEuler, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler_Statics::NewProp_RotationOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler_Statics::NewProp_RotationOrder_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler_Statics::NewProp_RotationOrder = { "RotationOrder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionToEuler, RotationOrder), Z_Construct_UEnum_AnimationCore_EEulerRotationOrder, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler_Statics::NewProp_RotationOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler_Statics::NewProp_RotationOrder_MetaData)) }; // 2684869264
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionToEuler, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler_Statics::NewProp_RotationOrder_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler_Statics::NewProp_RotationOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBase,
		&NewStructOps,
		"RigUnit_MathQuaternionToEuler",
		sizeof(FRigUnit_MathQuaternionToEuler),
		alignof(FRigUnit_MathQuaternionToEuler),
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionToEuler.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionToEuler.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionToEuler.InnerSingleton;
	}

void FRigUnit_MathQuaternionToEuler::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		RotationOrder,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathQuaternionToRotator>() == std::is_polymorphic<FRigUnit_MathQuaternionBase>(), "USTRUCT FRigUnit_MathQuaternionToRotator cannot be polymorphic unless super FRigUnit_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionToRotator;
class UScriptStruct* FRigUnit_MathQuaternionToRotator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionToRotator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionToRotator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToRotator, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathQuaternionToRotator"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathQuaternionToRotator::Execute"), &FRigUnit_MathQuaternionToRotator::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionToRotator.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionToRotator.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathQuaternionToRotator>()
{
	return FRigUnit_MathQuaternionToRotator::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToRotator_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToRotator_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Retrieves the rotator\n */" },
		{ "DisplayName", "To Rotator" },
		{ "Keywords", "Make,Construct" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "PrototypeName", "ToRotator" },
		{ "ToolTip", "Retrieves the rotator" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToRotator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathQuaternionToRotator>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToRotator_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToRotator_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionToRotator, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToRotator_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToRotator_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToRotator_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToRotator_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionToRotator, Result), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToRotator_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToRotator_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToRotator_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToRotator_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToRotator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBase,
		&NewStructOps,
		"RigUnit_MathQuaternionToRotator",
		sizeof(FRigUnit_MathQuaternionToRotator),
		alignof(FRigUnit_MathQuaternionToRotator),
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToRotator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToRotator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToRotator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToRotator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToRotator()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionToRotator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionToRotator.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToRotator_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionToRotator.InnerSingleton;
	}

void FRigUnit_MathQuaternionToRotator::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathQuaternionMul>() == std::is_polymorphic<FRigUnit_MathQuaternionBinaryOp>(), "USTRUCT FRigUnit_MathQuaternionMul cannot be polymorphic unless super FRigUnit_MathQuaternionBinaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionMul;
class UScriptStruct* FRigUnit_MathQuaternionMul::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionMul.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionMul.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionMul, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathQuaternionMul"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathQuaternionMul::Execute"), &FRigUnit_MathQuaternionMul::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionMul.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionMul.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathQuaternionMul>()
{
	return FRigUnit_MathQuaternionMul::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionMul_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionMul_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the product of the two values\n */" },
		{ "DisplayName", "Multiply" },
		{ "Keywords", "Product,*" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "PrototypeName", "Multiply" },
		{ "ToolTip", "Returns the product of the two values" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionMul_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathQuaternionMul>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionMul_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp,
		&NewStructOps,
		"RigUnit_MathQuaternionMul",
		sizeof(FRigUnit_MathQuaternionMul),
		alignof(FRigUnit_MathQuaternionMul),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionMul_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionMul_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionMul()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionMul.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionMul.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionMul_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionMul.InnerSingleton;
	}

void FRigUnit_MathQuaternionMul::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		A,
		B,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathQuaternionInverse>() == std::is_polymorphic<FRigUnit_MathQuaternionUnaryOp>(), "USTRUCT FRigUnit_MathQuaternionInverse cannot be polymorphic unless super FRigUnit_MathQuaternionUnaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionInverse;
class UScriptStruct* FRigUnit_MathQuaternionInverse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionInverse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionInverse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionInverse, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathQuaternionInverse"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathQuaternionInverse::Execute"), &FRigUnit_MathQuaternionInverse::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionInverse.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionInverse.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathQuaternionInverse>()
{
	return FRigUnit_MathQuaternionInverse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionInverse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionInverse_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the negative value\n */" },
		{ "DisplayName", "Inverse" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "PrototypeName", "Inverse" },
		{ "ToolTip", "Returns the negative value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionInverse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathQuaternionInverse>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionInverse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnaryOp,
		&NewStructOps,
		"RigUnit_MathQuaternionInverse",
		sizeof(FRigUnit_MathQuaternionInverse),
		alignof(FRigUnit_MathQuaternionInverse),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionInverse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionInverse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionInverse()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionInverse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionInverse.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionInverse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionInverse.InnerSingleton;
	}

void FRigUnit_MathQuaternionInverse::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathQuaternionSlerp>() == std::is_polymorphic<FRigUnit_MathQuaternionBase>(), "USTRUCT FRigUnit_MathQuaternionSlerp cannot be polymorphic unless super FRigUnit_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionSlerp;
class UScriptStruct* FRigUnit_MathQuaternionSlerp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionSlerp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionSlerp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathQuaternionSlerp"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathQuaternionSlerp::Execute"), &FRigUnit_MathQuaternionSlerp::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionSlerp.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionSlerp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathQuaternionSlerp>()
{
	return FRigUnit_MathQuaternionSlerp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_T_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_T;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Linearly interpolates between A and B using the ratio T\n */" },
		{ "DisplayName", "Interpolate" },
		{ "Keywords", "Lerp,Mix,Blend,Slerp,SphericalInterpolate" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "PrototypeName", "Interpolate" },
		{ "ToolTip", "Linearly interpolates between A and B using the ratio T" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathQuaternionSlerp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics::NewProp_A_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionSlerp, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics::NewProp_B_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionSlerp, B), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics::NewProp_T_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics::NewProp_T = { "T", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionSlerp, T), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics::NewProp_T_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics::NewProp_T_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionSlerp, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics::NewProp_T,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBase,
		&NewStructOps,
		"RigUnit_MathQuaternionSlerp",
		sizeof(FRigUnit_MathQuaternionSlerp),
		alignof(FRigUnit_MathQuaternionSlerp),
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionSlerp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionSlerp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionSlerp.InnerSingleton;
	}

void FRigUnit_MathQuaternionSlerp::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		A,
		B,
		T,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathQuaternionEquals>() == std::is_polymorphic<FRigUnit_MathQuaternionBase>(), "USTRUCT FRigUnit_MathQuaternionEquals cannot be polymorphic unless super FRigUnit_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionEquals;
class UScriptStruct* FRigUnit_MathQuaternionEquals::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionEquals.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionEquals.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathQuaternionEquals"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathQuaternionEquals::Execute"), &FRigUnit_MathQuaternionEquals::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionEquals.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionEquals.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathQuaternionEquals>()
{
	return FRigUnit_MathQuaternionEquals::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns true if the value A equals B\n */" },
		{ "DisplayName", "Equals" },
		{ "Keywords", "Same,==" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "PrototypeName", "Equals" },
		{ "ToolTip", "Returns true if the value A equals B" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathQuaternionEquals>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals_Statics::NewProp_A_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionEquals, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals_Statics::NewProp_B_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionEquals, B), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigUnit_MathQuaternionEquals*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_MathQuaternionEquals), &Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBase,
		&NewStructOps,
		"RigUnit_MathQuaternionEquals",
		sizeof(FRigUnit_MathQuaternionEquals),
		alignof(FRigUnit_MathQuaternionEquals),
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionEquals.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionEquals.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionEquals.InnerSingleton;
	}

void FRigUnit_MathQuaternionEquals::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		A,
		B,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathQuaternionNotEquals>() == std::is_polymorphic<FRigUnit_MathQuaternionBase>(), "USTRUCT FRigUnit_MathQuaternionNotEquals cannot be polymorphic unless super FRigUnit_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionNotEquals;
class UScriptStruct* FRigUnit_MathQuaternionNotEquals::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionNotEquals.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionNotEquals.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathQuaternionNotEquals"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathQuaternionNotEquals::Execute"), &FRigUnit_MathQuaternionNotEquals::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionNotEquals.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionNotEquals.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathQuaternionNotEquals>()
{
	return FRigUnit_MathQuaternionNotEquals::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns true if the value A does not equal B\n */" },
		{ "DisplayName", "Not Equals" },
		{ "Keywords", "Different,!=" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "PrototypeName", "NotEquals" },
		{ "ToolTip", "Returns true if the value A does not equal B" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathQuaternionNotEquals>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals_Statics::NewProp_A_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionNotEquals, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals_Statics::NewProp_B_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionNotEquals, B), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigUnit_MathQuaternionNotEquals*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_MathQuaternionNotEquals), &Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBase,
		&NewStructOps,
		"RigUnit_MathQuaternionNotEquals",
		sizeof(FRigUnit_MathQuaternionNotEquals),
		alignof(FRigUnit_MathQuaternionNotEquals),
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionNotEquals.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionNotEquals.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionNotEquals.InnerSingleton;
	}

void FRigUnit_MathQuaternionNotEquals::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		A,
		B,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathQuaternionSelectBool>() == std::is_polymorphic<FRigUnit_MathQuaternionBase>(), "USTRUCT FRigUnit_MathQuaternionSelectBool cannot be polymorphic unless super FRigUnit_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionSelectBool;
class UScriptStruct* FRigUnit_MathQuaternionSelectBool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionSelectBool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionSelectBool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathQuaternionSelectBool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathQuaternionSelectBool::Execute"), &FRigUnit_MathQuaternionSelectBool::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionSelectBool.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionSelectBool.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathQuaternionSelectBool>()
{
	return FRigUnit_MathQuaternionSelectBool::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[];
#endif
		static void NewProp_Condition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Condition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IfTrue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IfTrue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IfFalse_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IfFalse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Return one of the two values based on the condition\n */" },
		{ "Deprecated", "4.26.0" },
		{ "DisplayName", "Select" },
		{ "Keywords", "Pick,If" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "PrototypeName", "Select" },
		{ "ToolTip", "Return one of the two values based on the condition" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathQuaternionSelectBool>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::NewProp_Condition_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::NewProp_Condition_SetBit(void* Obj)
	{
		((FRigUnit_MathQuaternionSelectBool*)Obj)->Condition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_MathQuaternionSelectBool), &Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::NewProp_Condition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::NewProp_Condition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::NewProp_Condition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::NewProp_IfTrue_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::NewProp_IfTrue = { "IfTrue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionSelectBool, IfTrue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::NewProp_IfTrue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::NewProp_IfTrue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::NewProp_IfFalse_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::NewProp_IfFalse = { "IfFalse", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionSelectBool, IfFalse), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::NewProp_IfFalse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::NewProp_IfFalse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionSelectBool, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::NewProp_Condition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::NewProp_IfTrue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::NewProp_IfFalse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBase,
		&NewStructOps,
		"RigUnit_MathQuaternionSelectBool",
		sizeof(FRigUnit_MathQuaternionSelectBool),
		alignof(FRigUnit_MathQuaternionSelectBool),
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionSelectBool.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionSelectBool.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionSelectBool.InnerSingleton;
	}

void FRigUnit_MathQuaternionSelectBool::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Condition,
		IfTrue,
		IfFalse,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathQuaternionDot>() == std::is_polymorphic<FRigUnit_MathQuaternionBase>(), "USTRUCT FRigUnit_MathQuaternionDot cannot be polymorphic unless super FRigUnit_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionDot;
class UScriptStruct* FRigUnit_MathQuaternionDot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionDot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionDot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionDot, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathQuaternionDot"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathQuaternionDot::Execute"), &FRigUnit_MathQuaternionDot::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionDot.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionDot.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathQuaternionDot>()
{
	return FRigUnit_MathQuaternionDot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionDot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionDot_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the dot product between two quaternions\n */" },
		{ "DisplayName", "Dot" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "PrototypeName", "Dot,|" },
		{ "ToolTip", "Returns the dot product between two quaternions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionDot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathQuaternionDot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionDot_Statics::NewProp_A_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionDot_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionDot, A), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionDot_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionDot_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionDot_Statics::NewProp_B_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionDot_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionDot, B), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionDot_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionDot_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionDot_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionDot_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionDot, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionDot_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionDot_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathQuaternionDot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionDot_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionDot_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionDot_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionDot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBase,
		&NewStructOps,
		"RigUnit_MathQuaternionDot",
		sizeof(FRigUnit_MathQuaternionDot),
		alignof(FRigUnit_MathQuaternionDot),
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionDot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionDot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionDot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionDot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionDot()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionDot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionDot.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionDot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionDot.InnerSingleton;
	}

void FRigUnit_MathQuaternionDot::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		A,
		B,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathQuaternionUnit>() == std::is_polymorphic<FRigUnit_MathQuaternionUnaryOp>(), "USTRUCT FRigUnit_MathQuaternionUnit cannot be polymorphic unless super FRigUnit_MathQuaternionUnaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionUnit;
class UScriptStruct* FRigUnit_MathQuaternionUnit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionUnit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionUnit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnit, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathQuaternionUnit"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathQuaternionUnit::Execute"), &FRigUnit_MathQuaternionUnit::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionUnit.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionUnit.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathQuaternionUnit>()
{
	return FRigUnit_MathQuaternionUnit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnit_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the normalized quaternion\n */" },
		{ "DisplayName", "Unit" },
		{ "Keywords", "Normalize" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "PrototypeName", "Unit" },
		{ "ToolTip", "Returns the normalized quaternion" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathQuaternionUnit>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnaryOp,
		&NewStructOps,
		"RigUnit_MathQuaternionUnit",
		sizeof(FRigUnit_MathQuaternionUnit),
		alignof(FRigUnit_MathQuaternionUnit),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnit()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionUnit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionUnit.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionUnit.InnerSingleton;
	}

void FRigUnit_MathQuaternionUnit::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathQuaternionRotateVector>() == std::is_polymorphic<FRigUnit_MathQuaternionBase>(), "USTRUCT FRigUnit_MathQuaternionRotateVector cannot be polymorphic unless super FRigUnit_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionRotateVector;
class UScriptStruct* FRigUnit_MathQuaternionRotateVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionRotateVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionRotateVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotateVector, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathQuaternionRotateVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathQuaternionRotateVector::Execute"), &FRigUnit_MathQuaternionRotateVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionRotateVector.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionRotateVector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathQuaternionRotateVector>()
{
	return FRigUnit_MathQuaternionRotateVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotateVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quaternion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Quaternion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotateVector_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Rotates a given vector by the quaternion\n */" },
		{ "DisplayName", "Rotate" },
		{ "Keywords", "Transform" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "PrototypeName", "Multiply" },
		{ "ToolTip", "Rotates a given vector by the quaternion" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotateVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathQuaternionRotateVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotateVector_Statics::NewProp_Quaternion_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotateVector_Statics::NewProp_Quaternion = { "Quaternion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionRotateVector, Quaternion), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotateVector_Statics::NewProp_Quaternion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotateVector_Statics::NewProp_Quaternion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotateVector_Statics::NewProp_Vector_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotateVector_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionRotateVector, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotateVector_Statics::NewProp_Vector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotateVector_Statics::NewProp_Vector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotateVector_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotateVector_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionRotateVector, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotateVector_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotateVector_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotateVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotateVector_Statics::NewProp_Quaternion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotateVector_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotateVector_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotateVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBase,
		&NewStructOps,
		"RigUnit_MathQuaternionRotateVector",
		sizeof(FRigUnit_MathQuaternionRotateVector),
		alignof(FRigUnit_MathQuaternionRotateVector),
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotateVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotateVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotateVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotateVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotateVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionRotateVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionRotateVector.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotateVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionRotateVector.InnerSingleton;
	}

void FRigUnit_MathQuaternionRotateVector::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Quaternion,
		Vector,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathQuaternionGetAxis>() == std::is_polymorphic<FRigUnit_MathQuaternionBase>(), "USTRUCT FRigUnit_MathQuaternionGetAxis cannot be polymorphic unless super FRigUnit_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionGetAxis;
class UScriptStruct* FRigUnit_MathQuaternionGetAxis::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionGetAxis.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionGetAxis.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionGetAxis, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathQuaternionGetAxis"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathQuaternionGetAxis::Execute"), &FRigUnit_MathQuaternionGetAxis::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionGetAxis.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionGetAxis.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathQuaternionGetAxis>()
{
	return FRigUnit_MathQuaternionGetAxis::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionGetAxis_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quaternion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Quaternion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionGetAxis_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Rotates a given vector by the quaternion\n */" },
		{ "DisplayName", "Axis" },
		{ "Keywords", "GetAxis,xAxis,yAxis,zAxis" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "PrototypeName", "Axis" },
		{ "ToolTip", "Rotates a given vector by the quaternion" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionGetAxis_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathQuaternionGetAxis>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionGetAxis_Statics::NewProp_Quaternion_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionGetAxis_Statics::NewProp_Quaternion = { "Quaternion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionGetAxis, Quaternion), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionGetAxis_Statics::NewProp_Quaternion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionGetAxis_Statics::NewProp_Quaternion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionGetAxis_Statics::NewProp_Axis_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionGetAxis_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionGetAxis, Axis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionGetAxis_Statics::NewProp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionGetAxis_Statics::NewProp_Axis_MetaData)) }; // 2376982772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionGetAxis_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionGetAxis_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionGetAxis, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionGetAxis_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionGetAxis_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathQuaternionGetAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionGetAxis_Statics::NewProp_Quaternion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionGetAxis_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionGetAxis_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionGetAxis_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBase,
		&NewStructOps,
		"RigUnit_MathQuaternionGetAxis",
		sizeof(FRigUnit_MathQuaternionGetAxis),
		alignof(FRigUnit_MathQuaternionGetAxis),
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionGetAxis_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionGetAxis_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionGetAxis_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionGetAxis_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionGetAxis()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionGetAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionGetAxis.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionGetAxis_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionGetAxis.InnerSingleton;
	}

void FRigUnit_MathQuaternionGetAxis::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Quaternion,
		Axis,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathQuaternionSwingTwist>() == std::is_polymorphic<FRigUnit_MathQuaternionBase>(), "USTRUCT FRigUnit_MathQuaternionSwingTwist cannot be polymorphic unless super FRigUnit_MathQuaternionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionSwingTwist;
class UScriptStruct* FRigUnit_MathQuaternionSwingTwist::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionSwingTwist.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionSwingTwist.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathQuaternionSwingTwist"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathQuaternionSwingTwist::Execute"), &FRigUnit_MathQuaternionSwingTwist::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionSwingTwist.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionSwingTwist.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathQuaternionSwingTwist>()
{
	return FRigUnit_MathQuaternionSwingTwist::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwistAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TwistAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Swing_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Swing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Twist_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Twist;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Computes the swing and twist components of a quaternion\n */" },
		{ "DisplayName", "To Swing & Twist" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "ToolTip", "Computes the swing and twist components of a quaternion" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathQuaternionSwingTwist>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics::NewProp_Input_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionSwingTwist, Input), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics::NewProp_TwistAxis_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics::NewProp_TwistAxis = { "TwistAxis", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionSwingTwist, TwistAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics::NewProp_TwistAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics::NewProp_TwistAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics::NewProp_Swing_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics::NewProp_Swing = { "Swing", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionSwingTwist, Swing), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics::NewProp_Swing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics::NewProp_Swing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics::NewProp_Twist_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics::NewProp_Twist = { "Twist", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionSwingTwist, Twist), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics::NewProp_Twist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics::NewProp_Twist_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics::NewProp_TwistAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics::NewProp_Swing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics::NewProp_Twist,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBase,
		&NewStructOps,
		"RigUnit_MathQuaternionSwingTwist",
		sizeof(FRigUnit_MathQuaternionSwingTwist),
		alignof(FRigUnit_MathQuaternionSwingTwist),
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionSwingTwist.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionSwingTwist.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionSwingTwist.InnerSingleton;
	}

void FRigUnit_MathQuaternionSwingTwist::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Input,
		TwistAxis,
		Swing,
		Twist,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathQuaternionRotationOrder>() == std::is_polymorphic<FRigUnit_MathBase>(), "USTRUCT FRigUnit_MathQuaternionRotationOrder cannot be polymorphic unless super FRigUnit_MathBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionRotationOrder;
class UScriptStruct* FRigUnit_MathQuaternionRotationOrder::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionRotationOrder.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionRotationOrder.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotationOrder, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathQuaternionRotationOrder"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathQuaternionRotationOrder::Execute"), &FRigUnit_MathQuaternionRotationOrder::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionRotationOrder.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionRotationOrder.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathQuaternionRotationOrder>()
{
	return FRigUnit_MathQuaternionRotationOrder::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotationOrder_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationOrder_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOrder_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotationOrder_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Math|Quaternion" },
		{ "Comment", "/**\n * Enum of possible rotation orders\n */" },
		{ "Constant", "" },
		{ "DisplayName", "Rotation Order" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "ToolTip", "Enum of possible rotation orders" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotationOrder_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathQuaternionRotationOrder>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotationOrder_Statics::NewProp_RotationOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotationOrder_Statics::NewProp_RotationOrder_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathQuaternion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotationOrder_Statics::NewProp_RotationOrder = { "RotationOrder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathQuaternionRotationOrder, RotationOrder), Z_Construct_UEnum_AnimationCore_EEulerRotationOrder, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotationOrder_Statics::NewProp_RotationOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotationOrder_Statics::NewProp_RotationOrder_MetaData)) }; // 2684869264
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotationOrder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotationOrder_Statics::NewProp_RotationOrder_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotationOrder_Statics::NewProp_RotationOrder,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotationOrder_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathBase,
		&NewStructOps,
		"RigUnit_MathQuaternionRotationOrder",
		sizeof(FRigUnit_MathQuaternionRotationOrder),
		alignof(FRigUnit_MathQuaternionRotationOrder),
		Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotationOrder_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotationOrder_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotationOrder_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotationOrder_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotationOrder()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionRotationOrder.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionRotationOrder.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotationOrder_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionRotationOrder.InnerSingleton;
	}

void FRigUnit_MathQuaternionRotationOrder::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		RotationOrder,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_MathQuaternionBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBase_Statics::NewStructOps, TEXT("RigUnit_MathQuaternionBase"), &Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathQuaternionBase), 353758175U) },
		{ FRigUnit_MathQuaternionUnaryOp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnaryOp_Statics::NewStructOps, TEXT("RigUnit_MathQuaternionUnaryOp"), &Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionUnaryOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathQuaternionUnaryOp), 3765233858U) },
		{ FRigUnit_MathQuaternionBinaryOp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp_Statics::NewStructOps, TEXT("RigUnit_MathQuaternionBinaryOp"), &Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionBinaryOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathQuaternionBinaryOp), 3500075867U) },
		{ FRigUnit_MathQuaternionFromAxisAndAngle::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromAxisAndAngle_Statics::NewStructOps, TEXT("RigUnit_MathQuaternionFromAxisAndAngle"), &Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromAxisAndAngle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathQuaternionFromAxisAndAngle), 2914462672U) },
		{ FRigUnit_MathQuaternionFromEuler::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler_Statics::NewStructOps, TEXT("RigUnit_MathQuaternionFromEuler"), &Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromEuler, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathQuaternionFromEuler), 2164210657U) },
		{ FRigUnit_MathQuaternionFromRotator::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromRotator_Statics::NewStructOps, TEXT("RigUnit_MathQuaternionFromRotator"), &Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromRotator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathQuaternionFromRotator), 3201671454U) },
		{ FRigUnit_MathQuaternionFromTwoVectors::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromTwoVectors_Statics::NewStructOps, TEXT("RigUnit_MathQuaternionFromTwoVectors"), &Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionFromTwoVectors, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathQuaternionFromTwoVectors), 154631389U) },
		{ FRigUnit_MathQuaternionToAxisAndAngle::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToAxisAndAngle_Statics::NewStructOps, TEXT("RigUnit_MathQuaternionToAxisAndAngle"), &Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionToAxisAndAngle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathQuaternionToAxisAndAngle), 2702373918U) },
		{ FRigUnit_MathQuaternionScale::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionScale_Statics::NewStructOps, TEXT("RigUnit_MathQuaternionScale"), &Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionScale, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathQuaternionScale), 159331390U) },
		{ FRigUnit_MathQuaternionToEuler::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler_Statics::NewStructOps, TEXT("RigUnit_MathQuaternionToEuler"), &Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionToEuler, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathQuaternionToEuler), 505627798U) },
		{ FRigUnit_MathQuaternionToRotator::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToRotator_Statics::NewStructOps, TEXT("RigUnit_MathQuaternionToRotator"), &Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionToRotator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathQuaternionToRotator), 2288785914U) },
		{ FRigUnit_MathQuaternionMul::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionMul_Statics::NewStructOps, TEXT("RigUnit_MathQuaternionMul"), &Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionMul, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathQuaternionMul), 1496338596U) },
		{ FRigUnit_MathQuaternionInverse::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionInverse_Statics::NewStructOps, TEXT("RigUnit_MathQuaternionInverse"), &Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionInverse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathQuaternionInverse), 1863895892U) },
		{ FRigUnit_MathQuaternionSlerp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics::NewStructOps, TEXT("RigUnit_MathQuaternionSlerp"), &Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionSlerp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathQuaternionSlerp), 3371819001U) },
		{ FRigUnit_MathQuaternionEquals::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals_Statics::NewStructOps, TEXT("RigUnit_MathQuaternionEquals"), &Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionEquals, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathQuaternionEquals), 3542620844U) },
		{ FRigUnit_MathQuaternionNotEquals::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals_Statics::NewStructOps, TEXT("RigUnit_MathQuaternionNotEquals"), &Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionNotEquals, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathQuaternionNotEquals), 359388992U) },
		{ FRigUnit_MathQuaternionSelectBool::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics::NewStructOps, TEXT("RigUnit_MathQuaternionSelectBool"), &Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionSelectBool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathQuaternionSelectBool), 4157132313U) },
		{ FRigUnit_MathQuaternionDot::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionDot_Statics::NewStructOps, TEXT("RigUnit_MathQuaternionDot"), &Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionDot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathQuaternionDot), 3545064212U) },
		{ FRigUnit_MathQuaternionUnit::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnit_Statics::NewStructOps, TEXT("RigUnit_MathQuaternionUnit"), &Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionUnit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathQuaternionUnit), 2956303332U) },
		{ FRigUnit_MathQuaternionRotateVector::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotateVector_Statics::NewStructOps, TEXT("RigUnit_MathQuaternionRotateVector"), &Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionRotateVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathQuaternionRotateVector), 3615543469U) },
		{ FRigUnit_MathQuaternionGetAxis::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionGetAxis_Statics::NewStructOps, TEXT("RigUnit_MathQuaternionGetAxis"), &Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionGetAxis, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathQuaternionGetAxis), 2523972193U) },
		{ FRigUnit_MathQuaternionSwingTwist::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics::NewStructOps, TEXT("RigUnit_MathQuaternionSwingTwist"), &Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionSwingTwist, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathQuaternionSwingTwist), 3946963366U) },
		{ FRigUnit_MathQuaternionRotationOrder::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotationOrder_Statics::NewStructOps, TEXT("RigUnit_MathQuaternionRotationOrder"), &Z_Registration_Info_UScriptStruct_RigUnit_MathQuaternionRotationOrder, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathQuaternionRotationOrder), 2062683736U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_3051450473(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
