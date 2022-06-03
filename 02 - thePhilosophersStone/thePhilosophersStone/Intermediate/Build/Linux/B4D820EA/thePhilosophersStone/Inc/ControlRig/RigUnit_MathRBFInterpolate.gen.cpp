// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Math/RigUnit_MathRBFInterpolate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_MathRBFInterpolate() {}
// Cross Module References
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERBFKernelType();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERBFQuatDistanceType();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERBFVectorDistanceType();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatWorkData();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorWorkData();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatFloat();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatVector();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatColor();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatQuat();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatXform();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorFloat();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorVector();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorColor();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorQuat();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorXform();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERBFKernelType;
	static UEnum* ERBFKernelType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERBFKernelType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERBFKernelType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERBFKernelType, Z_Construct_UPackage__Script_ControlRig(), TEXT("ERBFKernelType"));
		}
		return Z_Registration_Info_UEnum_ERBFKernelType.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<ERBFKernelType>()
	{
		return ERBFKernelType_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_ERBFKernelType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_ERBFKernelType_Statics::Enumerators[] = {
		{ "ERBFKernelType::Gaussian", (int64)ERBFKernelType::Gaussian },
		{ "ERBFKernelType::Exponential", (int64)ERBFKernelType::Exponential },
		{ "ERBFKernelType::Linear", (int64)ERBFKernelType::Linear },
		{ "ERBFKernelType::Cubic", (int64)ERBFKernelType::Cubic },
		{ "ERBFKernelType::Quintic", (int64)ERBFKernelType::Quintic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_ERBFKernelType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Function to use for each target falloff */" },
		{ "Cubic.Name", "ERBFKernelType::Cubic" },
		{ "Exponential.Name", "ERBFKernelType::Exponential" },
		{ "Gaussian.Name", "ERBFKernelType::Gaussian" },
		{ "Linear.Name", "ERBFKernelType::Linear" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
		{ "Quintic.Name", "ERBFKernelType::Quintic" },
		{ "ToolTip", "Function to use for each target falloff" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERBFKernelType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"ERBFKernelType",
		"ERBFKernelType",
		Z_Construct_UEnum_ControlRig_ERBFKernelType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERBFKernelType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_ERBFKernelType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERBFKernelType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_ERBFKernelType()
	{
		if (!Z_Registration_Info_UEnum_ERBFKernelType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERBFKernelType.InnerSingleton, Z_Construct_UEnum_ControlRig_ERBFKernelType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERBFKernelType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERBFQuatDistanceType;
	static UEnum* ERBFQuatDistanceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERBFQuatDistanceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERBFQuatDistanceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERBFQuatDistanceType, Z_Construct_UPackage__Script_ControlRig(), TEXT("ERBFQuatDistanceType"));
		}
		return Z_Registration_Info_UEnum_ERBFQuatDistanceType.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<ERBFQuatDistanceType>()
	{
		return ERBFQuatDistanceType_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_ERBFQuatDistanceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_ERBFQuatDistanceType_Statics::Enumerators[] = {
		{ "ERBFQuatDistanceType::Euclidean", (int64)ERBFQuatDistanceType::Euclidean },
		{ "ERBFQuatDistanceType::ArcLength", (int64)ERBFQuatDistanceType::ArcLength },
		{ "ERBFQuatDistanceType::SwingAngle", (int64)ERBFQuatDistanceType::SwingAngle },
		{ "ERBFQuatDistanceType::TwistAngle", (int64)ERBFQuatDistanceType::TwistAngle },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_ERBFQuatDistanceType_Statics::Enum_MetaDataParams[] = {
		{ "ArcLength.Name", "ERBFQuatDistanceType::ArcLength" },
		{ "Comment", "/** Function to use for computing distance between the input and target \n\x09quaternions. */" },
		{ "Euclidean.Name", "ERBFQuatDistanceType::Euclidean" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
		{ "SwingAngle.Name", "ERBFQuatDistanceType::SwingAngle" },
		{ "ToolTip", "Function to use for computing distance between the input and target\n      quaternions." },
		{ "TwistAngle.Name", "ERBFQuatDistanceType::TwistAngle" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERBFQuatDistanceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"ERBFQuatDistanceType",
		"ERBFQuatDistanceType",
		Z_Construct_UEnum_ControlRig_ERBFQuatDistanceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERBFQuatDistanceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_ERBFQuatDistanceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERBFQuatDistanceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_ERBFQuatDistanceType()
	{
		if (!Z_Registration_Info_UEnum_ERBFQuatDistanceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERBFQuatDistanceType.InnerSingleton, Z_Construct_UEnum_ControlRig_ERBFQuatDistanceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERBFQuatDistanceType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERBFVectorDistanceType;
	static UEnum* ERBFVectorDistanceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERBFVectorDistanceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERBFVectorDistanceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERBFVectorDistanceType, Z_Construct_UPackage__Script_ControlRig(), TEXT("ERBFVectorDistanceType"));
		}
		return Z_Registration_Info_UEnum_ERBFVectorDistanceType.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<ERBFVectorDistanceType>()
	{
		return ERBFVectorDistanceType_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_ERBFVectorDistanceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_ERBFVectorDistanceType_Statics::Enumerators[] = {
		{ "ERBFVectorDistanceType::Euclidean", (int64)ERBFVectorDistanceType::Euclidean },
		{ "ERBFVectorDistanceType::Manhattan", (int64)ERBFVectorDistanceType::Manhattan },
		{ "ERBFVectorDistanceType::ArcLength", (int64)ERBFVectorDistanceType::ArcLength },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_ERBFVectorDistanceType_Statics::Enum_MetaDataParams[] = {
		{ "ArcLength.Name", "ERBFVectorDistanceType::ArcLength" },
		{ "Comment", "/** Function to use for computing distance between the input and target \n\x09quaternions. */" },
		{ "Euclidean.Name", "ERBFVectorDistanceType::Euclidean" },
		{ "Manhattan.Name", "ERBFVectorDistanceType::Manhattan" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
		{ "ToolTip", "Function to use for computing distance between the input and target\n      quaternions." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERBFVectorDistanceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"ERBFVectorDistanceType",
		"ERBFVectorDistanceType",
		Z_Construct_UEnum_ControlRig_ERBFVectorDistanceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERBFVectorDistanceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_ERBFVectorDistanceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERBFVectorDistanceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_ERBFVectorDistanceType()
	{
		if (!Z_Registration_Info_UEnum_ERBFVectorDistanceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERBFVectorDistanceType.InnerSingleton, Z_Construct_UEnum_ControlRig_ERBFVectorDistanceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERBFVectorDistanceType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatWorkData;
class UScriptStruct* FRigUnit_MathRBFInterpolateQuatWorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatWorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatWorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatWorkData, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathRBFInterpolateQuatWorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatWorkData.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathRBFInterpolateQuatWorkData>()
{
	return FRigUnit_MathRBFInterpolateQuatWorkData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatWorkData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatWorkData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatWorkData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathRBFInterpolateQuatWorkData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatWorkData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_MathRBFInterpolateQuatWorkData",
		sizeof(FRigUnit_MathRBFInterpolateQuatWorkData),
		alignof(FRigUnit_MathRBFInterpolateQuatWorkData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatWorkData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatWorkData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatWorkData()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatWorkData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatWorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatWorkData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatWorkData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorWorkData;
class UScriptStruct* FRigUnit_MathRBFInterpolateVectorWorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorWorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorWorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorWorkData, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathRBFInterpolateVectorWorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorWorkData.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathRBFInterpolateVectorWorkData>()
{
	return FRigUnit_MathRBFInterpolateVectorWorkData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorWorkData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorWorkData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorWorkData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathRBFInterpolateVectorWorkData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorWorkData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_MathRBFInterpolateVectorWorkData",
		sizeof(FRigUnit_MathRBFInterpolateVectorWorkData),
		alignof(FRigUnit_MathRBFInterpolateVectorWorkData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorWorkData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorWorkData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorWorkData()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorWorkData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorWorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorWorkData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorWorkData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathRBFInterpolateBase>() == std::is_polymorphic<FRigUnit_MathBase>(), "USTRUCT FRigUnit_MathRBFInterpolateBase cannot be polymorphic unless super FRigUnit_MathBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateBase;
class UScriptStruct* FRigUnit_MathRBFInterpolateBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateBase, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathRBFInterpolateBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathRBFInterpolateBase>()
{
	return FRigUnit_MathRBFInterpolateBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Math|RBF Interpolation" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathRBFInterpolateBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathBase,
		&NewStructOps,
		"RigUnit_MathRBFInterpolateBase",
		sizeof(FRigUnit_MathRBFInterpolateBase),
		alignof(FRigUnit_MathRBFInterpolateBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathRBFInterpolateQuatBase>() == std::is_polymorphic<FRigUnit_MathRBFInterpolateBase>(), "USTRUCT FRigUnit_MathRBFInterpolateQuatBase cannot be polymorphic unless super FRigUnit_MathRBFInterpolateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatBase;
class UScriptStruct* FRigUnit_MathRBFInterpolateQuatBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathRBFInterpolateQuatBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathRBFInterpolateQuatBase>()
{
	return FRigUnit_MathRBFInterpolateQuatBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DistanceFunction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFunction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DistanceFunction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SmoothingFunction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingFunction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SmoothingFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothingAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNormalizeOutput_MetaData[];
#endif
		static void NewProp_bNormalizeOutput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalizeOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwistAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TwistAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Keywords", "RBF,Interpolate,Quaternion" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathRBFInterpolateQuatBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_Input_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathRBFInterpolateQuatBase, Input), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_Input_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_DistanceFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_DistanceFunction_MetaData[] = {
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_DistanceFunction = { "DistanceFunction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathRBFInterpolateQuatBase, DistanceFunction), Z_Construct_UEnum_ControlRig_ERBFQuatDistanceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_DistanceFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_DistanceFunction_MetaData)) }; // 2276325039
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_SmoothingFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_SmoothingFunction_MetaData[] = {
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_SmoothingFunction = { "SmoothingFunction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathRBFInterpolateQuatBase, SmoothingFunction), Z_Construct_UEnum_ControlRig_ERBFKernelType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_SmoothingFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_SmoothingFunction_MetaData)) }; // 1688275808
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_SmoothingAngle_MetaData[] = {
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_SmoothingAngle = { "SmoothingAngle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathRBFInterpolateQuatBase, SmoothingAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_SmoothingAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_SmoothingAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_bNormalizeOutput_MetaData[] = {
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_bNormalizeOutput_SetBit(void* Obj)
	{
		((FRigUnit_MathRBFInterpolateQuatBase*)Obj)->bNormalizeOutput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_bNormalizeOutput = { "bNormalizeOutput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_MathRBFInterpolateQuatBase), &Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_bNormalizeOutput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_bNormalizeOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_bNormalizeOutput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_TwistAxis_MetaData[] = {
		{ "EditCondition", "DistanceFunction == ERBFQuatDistanceType::SwingAngle || DistanceFunction == ERBFQuatDistanceType::TwistAngle" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_TwistAxis = { "TwistAxis", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathRBFInterpolateQuatBase, TwistAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_TwistAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_TwistAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathRBFInterpolateQuatBase, WorkData), Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatWorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_WorkData_MetaData)) }; // 4285328265
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_DistanceFunction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_DistanceFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_SmoothingFunction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_SmoothingFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_SmoothingAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_bNormalizeOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_TwistAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewProp_WorkData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateBase,
		&NewStructOps,
		"RigUnit_MathRBFInterpolateQuatBase",
		sizeof(FRigUnit_MathRBFInterpolateQuatBase),
		alignof(FRigUnit_MathRBFInterpolateQuatBase),
		Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathRBFInterpolateVectorBase>() == std::is_polymorphic<FRigUnit_MathRBFInterpolateBase>(), "USTRUCT FRigUnit_MathRBFInterpolateVectorBase cannot be polymorphic unless super FRigUnit_MathRBFInterpolateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorBase;
class UScriptStruct* FRigUnit_MathRBFInterpolateVectorBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathRBFInterpolateVectorBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathRBFInterpolateVectorBase>()
{
	return FRigUnit_MathRBFInterpolateVectorBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DistanceFunction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFunction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DistanceFunction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SmoothingFunction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingFunction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SmoothingFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothingRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNormalizeOutput_MetaData[];
#endif
		static void NewProp_bNormalizeOutput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalizeOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Keywords", "RBF,Interpolate,Vector" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathRBFInterpolateVectorBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_Input_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathRBFInterpolateVectorBase, Input), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_Input_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_DistanceFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_DistanceFunction_MetaData[] = {
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_DistanceFunction = { "DistanceFunction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathRBFInterpolateVectorBase, DistanceFunction), Z_Construct_UEnum_ControlRig_ERBFVectorDistanceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_DistanceFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_DistanceFunction_MetaData)) }; // 822805529
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_SmoothingFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_SmoothingFunction_MetaData[] = {
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_SmoothingFunction = { "SmoothingFunction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathRBFInterpolateVectorBase, SmoothingFunction), Z_Construct_UEnum_ControlRig_ERBFKernelType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_SmoothingFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_SmoothingFunction_MetaData)) }; // 1688275808
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_SmoothingRadius_MetaData[] = {
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_SmoothingRadius = { "SmoothingRadius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathRBFInterpolateVectorBase, SmoothingRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_SmoothingRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_SmoothingRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_bNormalizeOutput_MetaData[] = {
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_bNormalizeOutput_SetBit(void* Obj)
	{
		((FRigUnit_MathRBFInterpolateVectorBase*)Obj)->bNormalizeOutput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_bNormalizeOutput = { "bNormalizeOutput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_MathRBFInterpolateVectorBase), &Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_bNormalizeOutput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_bNormalizeOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_bNormalizeOutput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathRBFInterpolateVectorBase, WorkData), Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorWorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_WorkData_MetaData)) }; // 1080716986
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_DistanceFunction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_DistanceFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_SmoothingFunction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_SmoothingFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_SmoothingRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_bNormalizeOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewProp_WorkData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateBase,
		&NewStructOps,
		"RigUnit_MathRBFInterpolateVectorBase",
		sizeof(FRigUnit_MathRBFInterpolateVectorBase),
		alignof(FRigUnit_MathRBFInterpolateVectorBase),
		Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorBase.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatFloat_Target;
class UScriptStruct* FMathRBFInterpolateQuatFloat_Target::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatFloat_Target.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatFloat_Target.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target, Z_Construct_UPackage__Script_ControlRig(), TEXT("MathRBFInterpolateQuatFloat_Target"));
	}
	return Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatFloat_Target.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FMathRBFInterpolateQuatFloat_Target>()
{
	return FMathRBFInterpolateQuatFloat_Target::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Quat -> T\n" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
		{ "ToolTip", "Quat -> T" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMathRBFInterpolateQuatFloat_Target>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::NewProp_Target_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMathRBFInterpolateQuatFloat_Target, Target), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMathRBFInterpolateQuatFloat_Target, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"MathRBFInterpolateQuatFloat_Target",
		sizeof(FMathRBFInterpolateQuatFloat_Target),
		alignof(FMathRBFInterpolateQuatFloat_Target),
		Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target()
	{
		if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatFloat_Target.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatFloat_Target.InnerSingleton, Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatFloat_Target.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathRBFInterpolateQuatFloat>() == std::is_polymorphic<FRigUnit_MathRBFInterpolateQuatBase>(), "USTRUCT FRigUnit_MathRBFInterpolateQuatFloat cannot be polymorphic unless super FRigUnit_MathRBFInterpolateQuatBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatFloat;
class UScriptStruct* FRigUnit_MathRBFInterpolateQuatFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatFloat, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathRBFInterpolateQuatFloat"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathRBFInterpolateQuatFloat::Execute"), &FRigUnit_MathRBFInterpolateQuatFloat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatFloat.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatFloat.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathRBFInterpolateQuatFloat>()
{
	return FRigUnit_MathRBFInterpolateQuatFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatFloat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatFloat_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "DisplayName", "RBF Quaternion to Float" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
		{ "PrototypeName", "RBFInterpolateQuatToFloat" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathRBFInterpolateQuatFloat>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatFloat_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target, METADATA_PARAMS(nullptr, 0) }; // 3088496717
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatFloat_Statics::NewProp_Targets_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatFloat_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathRBFInterpolateQuatFloat, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatFloat_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatFloat_Statics::NewProp_Targets_MetaData)) }; // 3088496717
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatFloat_Statics::NewProp_Output_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatFloat_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathRBFInterpolateQuatFloat, Output), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatFloat_Statics::NewProp_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatFloat_Statics::NewProp_Output_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatFloat_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatFloat_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatFloat_Statics::NewProp_Output,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase,
		&NewStructOps,
		"RigUnit_MathRBFInterpolateQuatFloat",
		sizeof(FRigUnit_MathRBFInterpolateQuatFloat),
		alignof(FRigUnit_MathRBFInterpolateQuatFloat),
		Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatFloat.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatFloat.InnerSingleton;
	}

void FRigUnit_MathRBFInterpolateQuatFloat::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	TArrayView<const FMathRBFInterpolateQuatFloat_Target> Targets_0_Array(Targets);
	
    StaticExecute(
		RigVMExecuteContext,
		Targets_0_Array,
		Output,
		Input,
		DistanceFunction,
		SmoothingFunction,
		SmoothingAngle,
		bNormalizeOutput,
		TwistAxis,
		WorkData,
		Context
	);
}

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatVector_Target;
class UScriptStruct* FMathRBFInterpolateQuatVector_Target::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatVector_Target.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatVector_Target.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target, Z_Construct_UPackage__Script_ControlRig(), TEXT("MathRBFInterpolateQuatVector_Target"));
	}
	return Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatVector_Target.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FMathRBFInterpolateQuatVector_Target>()
{
	return FMathRBFInterpolateQuatVector_Target::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMathRBFInterpolateQuatVector_Target>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::NewProp_Target_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMathRBFInterpolateQuatVector_Target, Target), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMathRBFInterpolateQuatVector_Target, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"MathRBFInterpolateQuatVector_Target",
		sizeof(FMathRBFInterpolateQuatVector_Target),
		alignof(FMathRBFInterpolateQuatVector_Target),
		Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target()
	{
		if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatVector_Target.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatVector_Target.InnerSingleton, Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatVector_Target.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathRBFInterpolateQuatVector>() == std::is_polymorphic<FRigUnit_MathRBFInterpolateQuatBase>(), "USTRUCT FRigUnit_MathRBFInterpolateQuatVector cannot be polymorphic unless super FRigUnit_MathRBFInterpolateQuatBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatVector;
class UScriptStruct* FRigUnit_MathRBFInterpolateQuatVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatVector, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathRBFInterpolateQuatVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathRBFInterpolateQuatVector::Execute"), &FRigUnit_MathRBFInterpolateQuatVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatVector.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatVector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathRBFInterpolateQuatVector>()
{
	return FRigUnit_MathRBFInterpolateQuatVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatVector_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "DisplayName", "RBF Quaternion to Vector" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
		{ "PrototypeName", "RBFInterpolateQuatToVector" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathRBFInterpolateQuatVector>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatVector_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target, METADATA_PARAMS(nullptr, 0) }; // 3459902173
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatVector_Statics::NewProp_Targets_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatVector_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathRBFInterpolateQuatVector, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatVector_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatVector_Statics::NewProp_Targets_MetaData)) }; // 3459902173
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatVector_Statics::NewProp_Output_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatVector_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathRBFInterpolateQuatVector, Output), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatVector_Statics::NewProp_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatVector_Statics::NewProp_Output_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatVector_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatVector_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatVector_Statics::NewProp_Output,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase,
		&NewStructOps,
		"RigUnit_MathRBFInterpolateQuatVector",
		sizeof(FRigUnit_MathRBFInterpolateQuatVector),
		alignof(FRigUnit_MathRBFInterpolateQuatVector),
		Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatVector.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatVector.InnerSingleton;
	}

void FRigUnit_MathRBFInterpolateQuatVector::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	TArrayView<const FMathRBFInterpolateQuatVector_Target> Targets_0_Array(Targets);
	
    StaticExecute(
		RigVMExecuteContext,
		Targets_0_Array,
		Output,
		Input,
		DistanceFunction,
		SmoothingFunction,
		SmoothingAngle,
		bNormalizeOutput,
		TwistAxis,
		WorkData,
		Context
	);
}

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatColor_Target;
class UScriptStruct* FMathRBFInterpolateQuatColor_Target::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatColor_Target.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatColor_Target.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target, Z_Construct_UPackage__Script_ControlRig(), TEXT("MathRBFInterpolateQuatColor_Target"));
	}
	return Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatColor_Target.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FMathRBFInterpolateQuatColor_Target>()
{
	return FMathRBFInterpolateQuatColor_Target::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMathRBFInterpolateQuatColor_Target>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::NewProp_Target_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMathRBFInterpolateQuatColor_Target, Target), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMathRBFInterpolateQuatColor_Target, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"MathRBFInterpolateQuatColor_Target",
		sizeof(FMathRBFInterpolateQuatColor_Target),
		alignof(FMathRBFInterpolateQuatColor_Target),
		Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target()
	{
		if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatColor_Target.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatColor_Target.InnerSingleton, Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatColor_Target.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathRBFInterpolateQuatColor>() == std::is_polymorphic<FRigUnit_MathRBFInterpolateQuatBase>(), "USTRUCT FRigUnit_MathRBFInterpolateQuatColor cannot be polymorphic unless super FRigUnit_MathRBFInterpolateQuatBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatColor;
class UScriptStruct* FRigUnit_MathRBFInterpolateQuatColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatColor, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathRBFInterpolateQuatColor"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathRBFInterpolateQuatColor::Execute"), &FRigUnit_MathRBFInterpolateQuatColor::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatColor.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatColor.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathRBFInterpolateQuatColor>()
{
	return FRigUnit_MathRBFInterpolateQuatColor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatColor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatColor_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "DisplayName", "RBF Quaternion to Color" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
		{ "PrototypeName", "RBFInterpolateQuatToColor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatColor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathRBFInterpolateQuatColor>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatColor_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target, METADATA_PARAMS(nullptr, 0) }; // 852902028
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatColor_Statics::NewProp_Targets_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatColor_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathRBFInterpolateQuatColor, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatColor_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatColor_Statics::NewProp_Targets_MetaData)) }; // 852902028
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatColor_Statics::NewProp_Output_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatColor_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathRBFInterpolateQuatColor, Output), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatColor_Statics::NewProp_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatColor_Statics::NewProp_Output_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatColor_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatColor_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatColor_Statics::NewProp_Output,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatColor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase,
		&NewStructOps,
		"RigUnit_MathRBFInterpolateQuatColor",
		sizeof(FRigUnit_MathRBFInterpolateQuatColor),
		alignof(FRigUnit_MathRBFInterpolateQuatColor),
		Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatColor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatColor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatColor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatColor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatColor()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatColor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatColor.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatColor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatColor.InnerSingleton;
	}

void FRigUnit_MathRBFInterpolateQuatColor::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	TArrayView<const FMathRBFInterpolateQuatColor_Target> Targets_0_Array(Targets);
	
    StaticExecute(
		RigVMExecuteContext,
		Targets_0_Array,
		Output,
		Input,
		DistanceFunction,
		SmoothingFunction,
		SmoothingAngle,
		bNormalizeOutput,
		TwistAxis,
		WorkData,
		Context
	);
}

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatQuat_Target;
class UScriptStruct* FMathRBFInterpolateQuatQuat_Target::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatQuat_Target.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatQuat_Target.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target, Z_Construct_UPackage__Script_ControlRig(), TEXT("MathRBFInterpolateQuatQuat_Target"));
	}
	return Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatQuat_Target.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FMathRBFInterpolateQuatQuat_Target>()
{
	return FMathRBFInterpolateQuatQuat_Target::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMathRBFInterpolateQuatQuat_Target>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::NewProp_Target_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMathRBFInterpolateQuatQuat_Target, Target), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMathRBFInterpolateQuatQuat_Target, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"MathRBFInterpolateQuatQuat_Target",
		sizeof(FMathRBFInterpolateQuatQuat_Target),
		alignof(FMathRBFInterpolateQuatQuat_Target),
		Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target()
	{
		if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatQuat_Target.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatQuat_Target.InnerSingleton, Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatQuat_Target.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathRBFInterpolateQuatQuat>() == std::is_polymorphic<FRigUnit_MathRBFInterpolateQuatBase>(), "USTRUCT FRigUnit_MathRBFInterpolateQuatQuat cannot be polymorphic unless super FRigUnit_MathRBFInterpolateQuatBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatQuat;
class UScriptStruct* FRigUnit_MathRBFInterpolateQuatQuat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatQuat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatQuat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatQuat, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathRBFInterpolateQuatQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathRBFInterpolateQuatQuat::Execute"), &FRigUnit_MathRBFInterpolateQuatQuat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatQuat.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatQuat.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathRBFInterpolateQuatQuat>()
{
	return FRigUnit_MathRBFInterpolateQuatQuat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatQuat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatQuat_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "DisplayName", "RBF Quaternion to Quaternion" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
		{ "PrototypeName", "RBFInterpolateQuatToQuat" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatQuat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathRBFInterpolateQuatQuat>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatQuat_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target, METADATA_PARAMS(nullptr, 0) }; // 345876383
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatQuat_Statics::NewProp_Targets_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatQuat_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathRBFInterpolateQuatQuat, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatQuat_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatQuat_Statics::NewProp_Targets_MetaData)) }; // 345876383
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatQuat_Statics::NewProp_Output_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatQuat_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathRBFInterpolateQuatQuat, Output), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatQuat_Statics::NewProp_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatQuat_Statics::NewProp_Output_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatQuat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatQuat_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatQuat_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatQuat_Statics::NewProp_Output,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatQuat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase,
		&NewStructOps,
		"RigUnit_MathRBFInterpolateQuatQuat",
		sizeof(FRigUnit_MathRBFInterpolateQuatQuat),
		alignof(FRigUnit_MathRBFInterpolateQuatQuat),
		Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatQuat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatQuat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatQuat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatQuat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatQuat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatQuat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatQuat.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatQuat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatQuat.InnerSingleton;
	}

void FRigUnit_MathRBFInterpolateQuatQuat::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	TArrayView<const FMathRBFInterpolateQuatQuat_Target> Targets_0_Array(Targets);
	
    StaticExecute(
		RigVMExecuteContext,
		Targets_0_Array,
		Output,
		Input,
		DistanceFunction,
		SmoothingFunction,
		SmoothingAngle,
		bNormalizeOutput,
		TwistAxis,
		WorkData,
		Context
	);
}

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatXform_Target;
class UScriptStruct* FMathRBFInterpolateQuatXform_Target::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatXform_Target.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatXform_Target.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target, Z_Construct_UPackage__Script_ControlRig(), TEXT("MathRBFInterpolateQuatXform_Target"));
	}
	return Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatXform_Target.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FMathRBFInterpolateQuatXform_Target>()
{
	return FMathRBFInterpolateQuatXform_Target::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMathRBFInterpolateQuatXform_Target>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::NewProp_Target_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMathRBFInterpolateQuatXform_Target, Target), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMathRBFInterpolateQuatXform_Target, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"MathRBFInterpolateQuatXform_Target",
		sizeof(FMathRBFInterpolateQuatXform_Target),
		alignof(FMathRBFInterpolateQuatXform_Target),
		Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target()
	{
		if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatXform_Target.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatXform_Target.InnerSingleton, Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatXform_Target.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathRBFInterpolateQuatXform>() == std::is_polymorphic<FRigUnit_MathRBFInterpolateQuatBase>(), "USTRUCT FRigUnit_MathRBFInterpolateQuatXform cannot be polymorphic unless super FRigUnit_MathRBFInterpolateQuatBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatXform;
class UScriptStruct* FRigUnit_MathRBFInterpolateQuatXform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatXform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatXform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatXform, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathRBFInterpolateQuatXform"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathRBFInterpolateQuatXform::Execute"), &FRigUnit_MathRBFInterpolateQuatXform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatXform.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatXform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathRBFInterpolateQuatXform>()
{
	return FRigUnit_MathRBFInterpolateQuatXform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatXform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatXform_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "DisplayName", "RBF Quaternion to Transform" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
		{ "PrototypeName", "RBFInterpolateQuatToXform" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatXform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathRBFInterpolateQuatXform>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatXform_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target, METADATA_PARAMS(nullptr, 0) }; // 1287060637
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatXform_Statics::NewProp_Targets_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatXform_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathRBFInterpolateQuatXform, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatXform_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatXform_Statics::NewProp_Targets_MetaData)) }; // 1287060637
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatXform_Statics::NewProp_Output_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatXform_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathRBFInterpolateQuatXform, Output), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatXform_Statics::NewProp_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatXform_Statics::NewProp_Output_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatXform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatXform_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatXform_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatXform_Statics::NewProp_Output,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatXform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase,
		&NewStructOps,
		"RigUnit_MathRBFInterpolateQuatXform",
		sizeof(FRigUnit_MathRBFInterpolateQuatXform),
		alignof(FRigUnit_MathRBFInterpolateQuatXform),
		Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatXform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatXform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatXform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatXform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatXform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatXform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatXform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatXform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatXform.InnerSingleton;
	}

void FRigUnit_MathRBFInterpolateQuatXform::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	TArrayView<const FMathRBFInterpolateQuatXform_Target> Targets_0_Array(Targets);
	
    StaticExecute(
		RigVMExecuteContext,
		Targets_0_Array,
		Output,
		Input,
		DistanceFunction,
		SmoothingFunction,
		SmoothingAngle,
		bNormalizeOutput,
		TwistAxis,
		WorkData,
		Context
	);
}

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorFloat_Target;
class UScriptStruct* FMathRBFInterpolateVectorFloat_Target::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorFloat_Target.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorFloat_Target.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target, Z_Construct_UPackage__Script_ControlRig(), TEXT("MathRBFInterpolateVectorFloat_Target"));
	}
	return Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorFloat_Target.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FMathRBFInterpolateVectorFloat_Target>()
{
	return FMathRBFInterpolateVectorFloat_Target::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/// Vector->T\n" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
		{ "ToolTip", "Vector->T" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMathRBFInterpolateVectorFloat_Target>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::NewProp_Target_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMathRBFInterpolateVectorFloat_Target, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMathRBFInterpolateVectorFloat_Target, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"MathRBFInterpolateVectorFloat_Target",
		sizeof(FMathRBFInterpolateVectorFloat_Target),
		alignof(FMathRBFInterpolateVectorFloat_Target),
		Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target()
	{
		if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorFloat_Target.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorFloat_Target.InnerSingleton, Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorFloat_Target.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathRBFInterpolateVectorFloat>() == std::is_polymorphic<FRigUnit_MathRBFInterpolateVectorBase>(), "USTRUCT FRigUnit_MathRBFInterpolateVectorFloat cannot be polymorphic unless super FRigUnit_MathRBFInterpolateVectorBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorFloat;
class UScriptStruct* FRigUnit_MathRBFInterpolateVectorFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorFloat, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathRBFInterpolateVectorFloat"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathRBFInterpolateVectorFloat::Execute"), &FRigUnit_MathRBFInterpolateVectorFloat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorFloat.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorFloat.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathRBFInterpolateVectorFloat>()
{
	return FRigUnit_MathRBFInterpolateVectorFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorFloat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorFloat_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "DisplayName", "RBF Vector to Float" },
		{ "Keywords", "RBF,Interpolate,Vector" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
		{ "PrototypeName", "RBFInterpolateVectorToFloat" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathRBFInterpolateVectorFloat>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorFloat_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target, METADATA_PARAMS(nullptr, 0) }; // 58228726
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorFloat_Statics::NewProp_Targets_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorFloat_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathRBFInterpolateVectorFloat, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorFloat_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorFloat_Statics::NewProp_Targets_MetaData)) }; // 58228726
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorFloat_Statics::NewProp_Output_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorFloat_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathRBFInterpolateVectorFloat, Output), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorFloat_Statics::NewProp_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorFloat_Statics::NewProp_Output_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorFloat_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorFloat_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorFloat_Statics::NewProp_Output,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase,
		&NewStructOps,
		"RigUnit_MathRBFInterpolateVectorFloat",
		sizeof(FRigUnit_MathRBFInterpolateVectorFloat),
		alignof(FRigUnit_MathRBFInterpolateVectorFloat),
		Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorFloat.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorFloat.InnerSingleton;
	}

void FRigUnit_MathRBFInterpolateVectorFloat::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	TArrayView<const FMathRBFInterpolateVectorFloat_Target> Targets_0_Array(Targets);
	
    StaticExecute(
		RigVMExecuteContext,
		Targets_0_Array,
		Output,
		Input,
		DistanceFunction,
		SmoothingFunction,
		SmoothingRadius,
		bNormalizeOutput,
		WorkData,
		Context
	);
}

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorVector_Target;
class UScriptStruct* FMathRBFInterpolateVectorVector_Target::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorVector_Target.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorVector_Target.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target, Z_Construct_UPackage__Script_ControlRig(), TEXT("MathRBFInterpolateVectorVector_Target"));
	}
	return Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorVector_Target.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FMathRBFInterpolateVectorVector_Target>()
{
	return FMathRBFInterpolateVectorVector_Target::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMathRBFInterpolateVectorVector_Target>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::NewProp_Target_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMathRBFInterpolateVectorVector_Target, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMathRBFInterpolateVectorVector_Target, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"MathRBFInterpolateVectorVector_Target",
		sizeof(FMathRBFInterpolateVectorVector_Target),
		alignof(FMathRBFInterpolateVectorVector_Target),
		Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target()
	{
		if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorVector_Target.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorVector_Target.InnerSingleton, Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorVector_Target.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathRBFInterpolateVectorVector>() == std::is_polymorphic<FRigUnit_MathRBFInterpolateVectorBase>(), "USTRUCT FRigUnit_MathRBFInterpolateVectorVector cannot be polymorphic unless super FRigUnit_MathRBFInterpolateVectorBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorVector;
class UScriptStruct* FRigUnit_MathRBFInterpolateVectorVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorVector, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathRBFInterpolateVectorVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathRBFInterpolateVectorVector::Execute"), &FRigUnit_MathRBFInterpolateVectorVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorVector.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorVector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathRBFInterpolateVectorVector>()
{
	return FRigUnit_MathRBFInterpolateVectorVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorVector_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "DisplayName", "RBF Vector to Vector" },
		{ "Keywords", "RBF,Interpolate,Vector" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
		{ "PrototypeName", "RBFInterpolateVectorToVector" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathRBFInterpolateVectorVector>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorVector_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target, METADATA_PARAMS(nullptr, 0) }; // 3171660009
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorVector_Statics::NewProp_Targets_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorVector_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathRBFInterpolateVectorVector, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorVector_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorVector_Statics::NewProp_Targets_MetaData)) }; // 3171660009
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorVector_Statics::NewProp_Output_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorVector_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathRBFInterpolateVectorVector, Output), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorVector_Statics::NewProp_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorVector_Statics::NewProp_Output_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorVector_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorVector_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorVector_Statics::NewProp_Output,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase,
		&NewStructOps,
		"RigUnit_MathRBFInterpolateVectorVector",
		sizeof(FRigUnit_MathRBFInterpolateVectorVector),
		alignof(FRigUnit_MathRBFInterpolateVectorVector),
		Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorVector.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorVector.InnerSingleton;
	}

void FRigUnit_MathRBFInterpolateVectorVector::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	TArrayView<const FMathRBFInterpolateVectorVector_Target> Targets_0_Array(Targets);
	
    StaticExecute(
		RigVMExecuteContext,
		Targets_0_Array,
		Output,
		Input,
		DistanceFunction,
		SmoothingFunction,
		SmoothingRadius,
		bNormalizeOutput,
		WorkData,
		Context
	);
}

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorColor_Target;
class UScriptStruct* FMathRBFInterpolateVectorColor_Target::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorColor_Target.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorColor_Target.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target, Z_Construct_UPackage__Script_ControlRig(), TEXT("MathRBFInterpolateVectorColor_Target"));
	}
	return Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorColor_Target.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FMathRBFInterpolateVectorColor_Target>()
{
	return FMathRBFInterpolateVectorColor_Target::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMathRBFInterpolateVectorColor_Target>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::NewProp_Target_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMathRBFInterpolateVectorColor_Target, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMathRBFInterpolateVectorColor_Target, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"MathRBFInterpolateVectorColor_Target",
		sizeof(FMathRBFInterpolateVectorColor_Target),
		alignof(FMathRBFInterpolateVectorColor_Target),
		Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target()
	{
		if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorColor_Target.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorColor_Target.InnerSingleton, Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorColor_Target.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathRBFInterpolateVectorColor>() == std::is_polymorphic<FRigUnit_MathRBFInterpolateVectorBase>(), "USTRUCT FRigUnit_MathRBFInterpolateVectorColor cannot be polymorphic unless super FRigUnit_MathRBFInterpolateVectorBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorColor;
class UScriptStruct* FRigUnit_MathRBFInterpolateVectorColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorColor, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathRBFInterpolateVectorColor"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathRBFInterpolateVectorColor::Execute"), &FRigUnit_MathRBFInterpolateVectorColor::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorColor.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorColor.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathRBFInterpolateVectorColor>()
{
	return FRigUnit_MathRBFInterpolateVectorColor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorColor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorColor_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "DisplayName", "RBF Vector to Color" },
		{ "Keywords", "RBF,Interpolate,Vector" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
		{ "PrototypeName", "RBFInterpolateVectorToColor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorColor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathRBFInterpolateVectorColor>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorColor_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target, METADATA_PARAMS(nullptr, 0) }; // 2293946182
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorColor_Statics::NewProp_Targets_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorColor_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathRBFInterpolateVectorColor, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorColor_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorColor_Statics::NewProp_Targets_MetaData)) }; // 2293946182
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorColor_Statics::NewProp_Output_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorColor_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathRBFInterpolateVectorColor, Output), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorColor_Statics::NewProp_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorColor_Statics::NewProp_Output_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorColor_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorColor_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorColor_Statics::NewProp_Output,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorColor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase,
		&NewStructOps,
		"RigUnit_MathRBFInterpolateVectorColor",
		sizeof(FRigUnit_MathRBFInterpolateVectorColor),
		alignof(FRigUnit_MathRBFInterpolateVectorColor),
		Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorColor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorColor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorColor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorColor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorColor()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorColor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorColor.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorColor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorColor.InnerSingleton;
	}

void FRigUnit_MathRBFInterpolateVectorColor::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	TArrayView<const FMathRBFInterpolateVectorColor_Target> Targets_0_Array(Targets);
	
    StaticExecute(
		RigVMExecuteContext,
		Targets_0_Array,
		Output,
		Input,
		DistanceFunction,
		SmoothingFunction,
		SmoothingRadius,
		bNormalizeOutput,
		WorkData,
		Context
	);
}

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorQuat_Target;
class UScriptStruct* FMathRBFInterpolateVectorQuat_Target::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorQuat_Target.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorQuat_Target.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target, Z_Construct_UPackage__Script_ControlRig(), TEXT("MathRBFInterpolateVectorQuat_Target"));
	}
	return Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorQuat_Target.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FMathRBFInterpolateVectorQuat_Target>()
{
	return FMathRBFInterpolateVectorQuat_Target::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMathRBFInterpolateVectorQuat_Target>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::NewProp_Target_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMathRBFInterpolateVectorQuat_Target, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMathRBFInterpolateVectorQuat_Target, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"MathRBFInterpolateVectorQuat_Target",
		sizeof(FMathRBFInterpolateVectorQuat_Target),
		alignof(FMathRBFInterpolateVectorQuat_Target),
		Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target()
	{
		if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorQuat_Target.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorQuat_Target.InnerSingleton, Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorQuat_Target.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathRBFInterpolateVectorQuat>() == std::is_polymorphic<FRigUnit_MathRBFInterpolateVectorBase>(), "USTRUCT FRigUnit_MathRBFInterpolateVectorQuat cannot be polymorphic unless super FRigUnit_MathRBFInterpolateVectorBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorQuat;
class UScriptStruct* FRigUnit_MathRBFInterpolateVectorQuat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorQuat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorQuat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorQuat, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathRBFInterpolateVectorQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathRBFInterpolateVectorQuat::Execute"), &FRigUnit_MathRBFInterpolateVectorQuat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorQuat.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorQuat.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathRBFInterpolateVectorQuat>()
{
	return FRigUnit_MathRBFInterpolateVectorQuat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorQuat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorQuat_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "DisplayName", "RBF Vector to Quat" },
		{ "Keywords", "RBF,Interpolate,Vector" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
		{ "PrototypeName", "RBFInterpolateVectorToQuat" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorQuat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathRBFInterpolateVectorQuat>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorQuat_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target, METADATA_PARAMS(nullptr, 0) }; // 135932108
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorQuat_Statics::NewProp_Targets_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorQuat_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathRBFInterpolateVectorQuat, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorQuat_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorQuat_Statics::NewProp_Targets_MetaData)) }; // 135932108
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorQuat_Statics::NewProp_Output_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorQuat_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathRBFInterpolateVectorQuat, Output), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorQuat_Statics::NewProp_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorQuat_Statics::NewProp_Output_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorQuat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorQuat_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorQuat_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorQuat_Statics::NewProp_Output,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorQuat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase,
		&NewStructOps,
		"RigUnit_MathRBFInterpolateVectorQuat",
		sizeof(FRigUnit_MathRBFInterpolateVectorQuat),
		alignof(FRigUnit_MathRBFInterpolateVectorQuat),
		Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorQuat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorQuat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorQuat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorQuat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorQuat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorQuat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorQuat.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorQuat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorQuat.InnerSingleton;
	}

void FRigUnit_MathRBFInterpolateVectorQuat::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	TArrayView<const FMathRBFInterpolateVectorQuat_Target> Targets_0_Array(Targets);
	
    StaticExecute(
		RigVMExecuteContext,
		Targets_0_Array,
		Output,
		Input,
		DistanceFunction,
		SmoothingFunction,
		SmoothingRadius,
		bNormalizeOutput,
		WorkData,
		Context
	);
}

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorXform_Target;
class UScriptStruct* FMathRBFInterpolateVectorXform_Target::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorXform_Target.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorXform_Target.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target, Z_Construct_UPackage__Script_ControlRig(), TEXT("MathRBFInterpolateVectorXform_Target"));
	}
	return Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorXform_Target.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FMathRBFInterpolateVectorXform_Target>()
{
	return FMathRBFInterpolateVectorXform_Target::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMathRBFInterpolateVectorXform_Target>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::NewProp_Target_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMathRBFInterpolateVectorXform_Target, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMathRBFInterpolateVectorXform_Target, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"MathRBFInterpolateVectorXform_Target",
		sizeof(FMathRBFInterpolateVectorXform_Target),
		alignof(FMathRBFInterpolateVectorXform_Target),
		Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target()
	{
		if (!Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorXform_Target.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorXform_Target.InnerSingleton, Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorXform_Target.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathRBFInterpolateVectorXform>() == std::is_polymorphic<FRigUnit_MathRBFInterpolateVectorBase>(), "USTRUCT FRigUnit_MathRBFInterpolateVectorXform cannot be polymorphic unless super FRigUnit_MathRBFInterpolateVectorBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorXform;
class UScriptStruct* FRigUnit_MathRBFInterpolateVectorXform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorXform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorXform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorXform, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathRBFInterpolateVectorXform"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathRBFInterpolateVectorXform::Execute"), &FRigUnit_MathRBFInterpolateVectorXform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorXform.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorXform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathRBFInterpolateVectorXform>()
{
	return FRigUnit_MathRBFInterpolateVectorXform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorXform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorXform_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "DisplayName", "RBF Vector to Transform" },
		{ "Keywords", "RBF,Interpolate,Vector" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
		{ "PrototypeName", "RBFInterpolateVectorToXform" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorXform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathRBFInterpolateVectorXform>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorXform_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target, METADATA_PARAMS(nullptr, 0) }; // 155859141
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorXform_Statics::NewProp_Targets_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorXform_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathRBFInterpolateVectorXform, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorXform_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorXform_Statics::NewProp_Targets_MetaData)) }; // 155859141
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorXform_Statics::NewProp_Output_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathRBFInterpolate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorXform_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathRBFInterpolateVectorXform, Output), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorXform_Statics::NewProp_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorXform_Statics::NewProp_Output_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorXform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorXform_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorXform_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorXform_Statics::NewProp_Output,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorXform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase,
		&NewStructOps,
		"RigUnit_MathRBFInterpolateVectorXform",
		sizeof(FRigUnit_MathRBFInterpolateVectorXform),
		alignof(FRigUnit_MathRBFInterpolateVectorXform),
		Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorXform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorXform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorXform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorXform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorXform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorXform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorXform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorXform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorXform.InnerSingleton;
	}

void FRigUnit_MathRBFInterpolateVectorXform::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	TArrayView<const FMathRBFInterpolateVectorXform_Target> Targets_0_Array(Targets);
	
    StaticExecute(
		RigVMExecuteContext,
		Targets_0_Array,
		Output,
		Input,
		DistanceFunction,
		SmoothingFunction,
		SmoothingRadius,
		bNormalizeOutput,
		WorkData,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_Statics::EnumInfo[] = {
		{ ERBFKernelType_StaticEnum, TEXT("ERBFKernelType"), &Z_Registration_Info_UEnum_ERBFKernelType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1688275808U) },
		{ ERBFQuatDistanceType_StaticEnum, TEXT("ERBFQuatDistanceType"), &Z_Registration_Info_UEnum_ERBFQuatDistanceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2276325039U) },
		{ ERBFVectorDistanceType_StaticEnum, TEXT("ERBFVectorDistanceType"), &Z_Registration_Info_UEnum_ERBFVectorDistanceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 822805529U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_MathRBFInterpolateQuatWorkData::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatWorkData_Statics::NewStructOps, TEXT("RigUnit_MathRBFInterpolateQuatWorkData"), &Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatWorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathRBFInterpolateQuatWorkData), 4285328265U) },
		{ FRigUnit_MathRBFInterpolateVectorWorkData::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorWorkData_Statics::NewStructOps, TEXT("RigUnit_MathRBFInterpolateVectorWorkData"), &Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorWorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathRBFInterpolateVectorWorkData), 1080716986U) },
		{ FRigUnit_MathRBFInterpolateBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateBase_Statics::NewStructOps, TEXT("RigUnit_MathRBFInterpolateBase"), &Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathRBFInterpolateBase), 1372014005U) },
		{ FRigUnit_MathRBFInterpolateQuatBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics::NewStructOps, TEXT("RigUnit_MathRBFInterpolateQuatBase"), &Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathRBFInterpolateQuatBase), 3093805119U) },
		{ FRigUnit_MathRBFInterpolateVectorBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics::NewStructOps, TEXT("RigUnit_MathRBFInterpolateVectorBase"), &Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathRBFInterpolateVectorBase), 1900509840U) },
		{ FMathRBFInterpolateQuatFloat_Target::StaticStruct, Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics::NewStructOps, TEXT("MathRBFInterpolateQuatFloat_Target"), &Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatFloat_Target, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMathRBFInterpolateQuatFloat_Target), 3088496717U) },
		{ FRigUnit_MathRBFInterpolateQuatFloat::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatFloat_Statics::NewStructOps, TEXT("RigUnit_MathRBFInterpolateQuatFloat"), &Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathRBFInterpolateQuatFloat), 3469510484U) },
		{ FMathRBFInterpolateQuatVector_Target::StaticStruct, Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics::NewStructOps, TEXT("MathRBFInterpolateQuatVector_Target"), &Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatVector_Target, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMathRBFInterpolateQuatVector_Target), 3459902173U) },
		{ FRigUnit_MathRBFInterpolateQuatVector::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatVector_Statics::NewStructOps, TEXT("RigUnit_MathRBFInterpolateQuatVector"), &Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathRBFInterpolateQuatVector), 1668998179U) },
		{ FMathRBFInterpolateQuatColor_Target::StaticStruct, Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics::NewStructOps, TEXT("MathRBFInterpolateQuatColor_Target"), &Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatColor_Target, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMathRBFInterpolateQuatColor_Target), 852902028U) },
		{ FRigUnit_MathRBFInterpolateQuatColor::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatColor_Statics::NewStructOps, TEXT("RigUnit_MathRBFInterpolateQuatColor"), &Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathRBFInterpolateQuatColor), 621433660U) },
		{ FMathRBFInterpolateQuatQuat_Target::StaticStruct, Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics::NewStructOps, TEXT("MathRBFInterpolateQuatQuat_Target"), &Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatQuat_Target, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMathRBFInterpolateQuatQuat_Target), 345876383U) },
		{ FRigUnit_MathRBFInterpolateQuatQuat::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatQuat_Statics::NewStructOps, TEXT("RigUnit_MathRBFInterpolateQuatQuat"), &Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatQuat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathRBFInterpolateQuatQuat), 2565115122U) },
		{ FMathRBFInterpolateQuatXform_Target::StaticStruct, Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics::NewStructOps, TEXT("MathRBFInterpolateQuatXform_Target"), &Z_Registration_Info_UScriptStruct_MathRBFInterpolateQuatXform_Target, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMathRBFInterpolateQuatXform_Target), 1287060637U) },
		{ FRigUnit_MathRBFInterpolateQuatXform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatXform_Statics::NewStructOps, TEXT("RigUnit_MathRBFInterpolateQuatXform"), &Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateQuatXform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathRBFInterpolateQuatXform), 763122396U) },
		{ FMathRBFInterpolateVectorFloat_Target::StaticStruct, Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics::NewStructOps, TEXT("MathRBFInterpolateVectorFloat_Target"), &Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorFloat_Target, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMathRBFInterpolateVectorFloat_Target), 58228726U) },
		{ FRigUnit_MathRBFInterpolateVectorFloat::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorFloat_Statics::NewStructOps, TEXT("RigUnit_MathRBFInterpolateVectorFloat"), &Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathRBFInterpolateVectorFloat), 2746472669U) },
		{ FMathRBFInterpolateVectorVector_Target::StaticStruct, Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics::NewStructOps, TEXT("MathRBFInterpolateVectorVector_Target"), &Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorVector_Target, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMathRBFInterpolateVectorVector_Target), 3171660009U) },
		{ FRigUnit_MathRBFInterpolateVectorVector::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorVector_Statics::NewStructOps, TEXT("RigUnit_MathRBFInterpolateVectorVector"), &Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathRBFInterpolateVectorVector), 738005605U) },
		{ FMathRBFInterpolateVectorColor_Target::StaticStruct, Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics::NewStructOps, TEXT("MathRBFInterpolateVectorColor_Target"), &Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorColor_Target, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMathRBFInterpolateVectorColor_Target), 2293946182U) },
		{ FRigUnit_MathRBFInterpolateVectorColor::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorColor_Statics::NewStructOps, TEXT("RigUnit_MathRBFInterpolateVectorColor"), &Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathRBFInterpolateVectorColor), 2395731723U) },
		{ FMathRBFInterpolateVectorQuat_Target::StaticStruct, Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics::NewStructOps, TEXT("MathRBFInterpolateVectorQuat_Target"), &Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorQuat_Target, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMathRBFInterpolateVectorQuat_Target), 135932108U) },
		{ FRigUnit_MathRBFInterpolateVectorQuat::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorQuat_Statics::NewStructOps, TEXT("RigUnit_MathRBFInterpolateVectorQuat"), &Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorQuat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathRBFInterpolateVectorQuat), 2936096719U) },
		{ FMathRBFInterpolateVectorXform_Target::StaticStruct, Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics::NewStructOps, TEXT("MathRBFInterpolateVectorXform_Target"), &Z_Registration_Info_UScriptStruct_MathRBFInterpolateVectorXform_Target, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMathRBFInterpolateVectorXform_Target), 155859141U) },
		{ FRigUnit_MathRBFInterpolateVectorXform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorXform_Statics::NewStructOps, TEXT("RigUnit_MathRBFInterpolateVectorXform"), &Z_Registration_Info_UScriptStruct_RigUnit_MathRBFInterpolateVectorXform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathRBFInterpolateVectorXform), 3833507174U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_3175422296(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
