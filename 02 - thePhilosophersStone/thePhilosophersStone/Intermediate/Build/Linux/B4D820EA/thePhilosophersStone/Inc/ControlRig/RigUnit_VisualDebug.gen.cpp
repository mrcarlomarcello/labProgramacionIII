// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Debug/RigUnit_VisualDebug.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_VisualDebug() {}
// Cross Module References
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigUnitVisualDebugPointMode();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DebugBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigUnitVisualDebugPointMode;
	static UEnum* ERigUnitVisualDebugPointMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigUnitVisualDebugPointMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigUnitVisualDebugPointMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigUnitVisualDebugPointMode, Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigUnitVisualDebugPointMode"));
		}
		return Z_Registration_Info_UEnum_ERigUnitVisualDebugPointMode.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<ERigUnitVisualDebugPointMode>()
	{
		return ERigUnitVisualDebugPointMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_ERigUnitVisualDebugPointMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_ERigUnitVisualDebugPointMode_Statics::Enumerators[] = {
		{ "ERigUnitVisualDebugPointMode::Point", (int64)ERigUnitVisualDebugPointMode::Point },
		{ "ERigUnitVisualDebugPointMode::Vector", (int64)ERigUnitVisualDebugPointMode::Vector },
		{ "ERigUnitVisualDebugPointMode::Max", (int64)ERigUnitVisualDebugPointMode::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_ERigUnitVisualDebugPointMode_Statics::Enum_MetaDataParams[] = {
		{ "Max.Comment", "/** MAX - invalid */" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "ERigUnitVisualDebugPointMode::Max" },
		{ "Max.ToolTip", "MAX - invalid" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
		{ "Point.Comment", "/** Draw as point */" },
		{ "Point.Name", "ERigUnitVisualDebugPointMode::Point" },
		{ "Point.ToolTip", "Draw as point" },
		{ "Vector.Comment", "/** Draw as vector */" },
		{ "Vector.Name", "ERigUnitVisualDebugPointMode::Vector" },
		{ "Vector.ToolTip", "Draw as vector" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigUnitVisualDebugPointMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"ERigUnitVisualDebugPointMode",
		"ERigUnitVisualDebugPointMode",
		Z_Construct_UEnum_ControlRig_ERigUnitVisualDebugPointMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigUnitVisualDebugPointMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_ERigUnitVisualDebugPointMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigUnitVisualDebugPointMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_ERigUnitVisualDebugPointMode()
	{
		if (!Z_Registration_Info_UEnum_ERigUnitVisualDebugPointMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigUnitVisualDebugPointMode.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigUnitVisualDebugPointMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigUnitVisualDebugPointMode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_VisualDebugVector>() == std::is_polymorphic<FRigUnit_DebugBase>(), "USTRUCT FRigUnit_VisualDebugVector cannot be polymorphic unless super FRigUnit_DebugBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVector;
class UScriptStruct* FRigUnit_VisualDebugVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_VisualDebugVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_VisualDebugVector::Execute"), &FRigUnit_VisualDebugVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVector.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_VisualDebugVector>()
{
	return FRigUnit_VisualDebugVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneSpace_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::Struct_MetaDataParams[] = {
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Visual Debug Vector" },
		{ "Keywords", "Draw,Point" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
		{ "PrototypeName", "VisualDebug" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_VisualDebugVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VisualDebugVector, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigUnit_VisualDebugVector*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_VisualDebugVector), &Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Mode_MetaData[] = {
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VisualDebugVector, Mode), Z_Construct_UEnum_ControlRig_ERigUnitVisualDebugPointMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Mode_MetaData)) }; // 259708670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Color_MetaData[] = {
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VisualDebugVector, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Thickness_MetaData[] = {
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VisualDebugVector, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Scale_MetaData[] = {
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VisualDebugVector, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_BoneSpace_MetaData[] = {
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_BoneSpace = { "BoneSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VisualDebugVector, BoneSpace), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_BoneSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_BoneSpace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewProp_BoneSpace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_DebugBase,
		&NewStructOps,
		"RigUnit_VisualDebugVector",
		sizeof(FRigUnit_VisualDebugVector),
		alignof(FRigUnit_VisualDebugVector),
		Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVector.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVector.InnerSingleton;
	}

void FRigUnit_VisualDebugVector::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		bEnabled,
		Mode,
		Color,
		Thickness,
		Scale,
		BoneSpace,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_VisualDebugVectorItemSpace>() == std::is_polymorphic<FRigUnit_DebugBase>(), "USTRUCT FRigUnit_VisualDebugVectorItemSpace cannot be polymorphic unless super FRigUnit_DebugBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVectorItemSpace;
class UScriptStruct* FRigUnit_VisualDebugVectorItemSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVectorItemSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVectorItemSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_VisualDebugVectorItemSpace"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_VisualDebugVectorItemSpace::Execute"), &FRigUnit_VisualDebugVectorItemSpace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVectorItemSpace.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVectorItemSpace.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_VisualDebugVectorItemSpace>()
{
	return FRigUnit_VisualDebugVectorItemSpace::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Space;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Debug draw parameters for a Point or Vector given a vector\n */" },
		{ "DisplayName", "Visual Debug Vector" },
		{ "Keywords", "Draw,Point" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
		{ "PrototypeName", "VisualDebug" },
		{ "ToolTip", "Debug draw parameters for a Point or Vector given a vector" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_VisualDebugVectorItemSpace>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VisualDebugVectorItemSpace, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigUnit_VisualDebugVectorItemSpace*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_VisualDebugVectorItemSpace), &Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Mode_MetaData[] = {
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VisualDebugVectorItemSpace, Mode), Z_Construct_UEnum_ControlRig_ERigUnitVisualDebugPointMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Mode_MetaData)) }; // 259708670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Color_MetaData[] = {
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VisualDebugVectorItemSpace, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Thickness_MetaData[] = {
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VisualDebugVectorItemSpace, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Scale_MetaData[] = {
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VisualDebugVectorItemSpace, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Space_MetaData[] = {
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VisualDebugVectorItemSpace, Space), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Space_MetaData)) }; // 3202328731
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewProp_Space,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_DebugBase,
		&NewStructOps,
		"RigUnit_VisualDebugVectorItemSpace",
		sizeof(FRigUnit_VisualDebugVectorItemSpace),
		alignof(FRigUnit_VisualDebugVectorItemSpace),
		Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVectorItemSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVectorItemSpace.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVectorItemSpace.InnerSingleton;
	}

void FRigUnit_VisualDebugVectorItemSpace::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		bEnabled,
		Mode,
		Color,
		Thickness,
		Scale,
		Space,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_VisualDebugQuat>() == std::is_polymorphic<FRigUnit_DebugBase>(), "USTRUCT FRigUnit_VisualDebugQuat cannot be polymorphic unless super FRigUnit_DebugBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuat;
class UScriptStruct* FRigUnit_VisualDebugQuat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_VisualDebugQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_VisualDebugQuat::Execute"), &FRigUnit_VisualDebugQuat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuat.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuat.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_VisualDebugQuat>()
{
	return FRigUnit_VisualDebugQuat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneSpace_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::Struct_MetaDataParams[] = {
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Visual Debug Quat" },
		{ "Keywords", "Draw,Rotation" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
		{ "PrototypeName", "VisualDebug" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_VisualDebugQuat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VisualDebugQuat, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigUnit_VisualDebugQuat*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_VisualDebugQuat), &Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_Thickness_MetaData[] = {
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VisualDebugQuat, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_Scale_MetaData[] = {
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VisualDebugQuat, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_BoneSpace_MetaData[] = {
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_BoneSpace = { "BoneSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VisualDebugQuat, BoneSpace), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_BoneSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_BoneSpace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewProp_BoneSpace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_DebugBase,
		&NewStructOps,
		"RigUnit_VisualDebugQuat",
		sizeof(FRigUnit_VisualDebugQuat),
		alignof(FRigUnit_VisualDebugQuat),
		Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuat.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuat.InnerSingleton;
	}

void FRigUnit_VisualDebugQuat::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		bEnabled,
		Thickness,
		Scale,
		BoneSpace,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_VisualDebugQuatItemSpace>() == std::is_polymorphic<FRigUnit_DebugBase>(), "USTRUCT FRigUnit_VisualDebugQuatItemSpace cannot be polymorphic unless super FRigUnit_DebugBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuatItemSpace;
class UScriptStruct* FRigUnit_VisualDebugQuatItemSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuatItemSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuatItemSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_VisualDebugQuatItemSpace"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_VisualDebugQuatItemSpace::Execute"), &FRigUnit_VisualDebugQuatItemSpace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuatItemSpace.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuatItemSpace.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_VisualDebugQuatItemSpace>()
{
	return FRigUnit_VisualDebugQuatItemSpace::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Space;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Debug draw parameters for an Axis given a quaternion\n */" },
		{ "DisplayName", "Visual Debug Quat" },
		{ "Keywords", "Draw,Rotation" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
		{ "PrototypeName", "VisualDebug" },
		{ "ToolTip", "Debug draw parameters for an Axis given a quaternion" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_VisualDebugQuatItemSpace>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VisualDebugQuatItemSpace, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigUnit_VisualDebugQuatItemSpace*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_VisualDebugQuatItemSpace), &Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_Thickness_MetaData[] = {
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VisualDebugQuatItemSpace, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_Scale_MetaData[] = {
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VisualDebugQuatItemSpace, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_Space_MetaData[] = {
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VisualDebugQuatItemSpace, Space), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_Space_MetaData)) }; // 3202328731
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewProp_Space,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_DebugBase,
		&NewStructOps,
		"RigUnit_VisualDebugQuatItemSpace",
		sizeof(FRigUnit_VisualDebugQuatItemSpace),
		alignof(FRigUnit_VisualDebugQuatItemSpace),
		Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuatItemSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuatItemSpace.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuatItemSpace.InnerSingleton;
	}

void FRigUnit_VisualDebugQuatItemSpace::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		bEnabled,
		Thickness,
		Scale,
		Space,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_VisualDebugTransform>() == std::is_polymorphic<FRigUnit_DebugBase>(), "USTRUCT FRigUnit_VisualDebugTransform cannot be polymorphic unless super FRigUnit_DebugBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransform;
class UScriptStruct* FRigUnit_VisualDebugTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_VisualDebugTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_VisualDebugTransform::Execute"), &FRigUnit_VisualDebugTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransform.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_VisualDebugTransform>()
{
	return FRigUnit_VisualDebugTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneSpace_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::Struct_MetaDataParams[] = {
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Visual Debug Transform" },
		{ "Keywords", "Draw,Axes" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
		{ "PrototypeName", "VisualDebug" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_VisualDebugTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VisualDebugTransform, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigUnit_VisualDebugTransform*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_VisualDebugTransform), &Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_Thickness_MetaData[] = {
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VisualDebugTransform, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_Scale_MetaData[] = {
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VisualDebugTransform, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_BoneSpace_MetaData[] = {
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_BoneSpace = { "BoneSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VisualDebugTransform, BoneSpace), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_BoneSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_BoneSpace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewProp_BoneSpace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_DebugBase,
		&NewStructOps,
		"RigUnit_VisualDebugTransform",
		sizeof(FRigUnit_VisualDebugTransform),
		alignof(FRigUnit_VisualDebugTransform),
		Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransform.InnerSingleton;
	}

void FRigUnit_VisualDebugTransform::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		bEnabled,
		Thickness,
		Scale,
		BoneSpace,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_VisualDebugTransformItemSpace>() == std::is_polymorphic<FRigUnit_DebugBase>(), "USTRUCT FRigUnit_VisualDebugTransformItemSpace cannot be polymorphic unless super FRigUnit_DebugBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransformItemSpace;
class UScriptStruct* FRigUnit_VisualDebugTransformItemSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransformItemSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransformItemSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_VisualDebugTransformItemSpace"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_VisualDebugTransformItemSpace::Execute"), &FRigUnit_VisualDebugTransformItemSpace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransformItemSpace.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransformItemSpace.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_VisualDebugTransformItemSpace>()
{
	return FRigUnit_VisualDebugTransformItemSpace::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Space;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Debug draw parameters for an Axis given a transform\n */" },
		{ "DisplayName", "Visual Debug Transform" },
		{ "Keywords", "Draw,Axes" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
		{ "PrototypeName", "VisualDebug" },
		{ "ToolTip", "Debug draw parameters for an Axis given a transform" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_VisualDebugTransformItemSpace>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VisualDebugTransformItemSpace, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigUnit_VisualDebugTransformItemSpace*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_VisualDebugTransformItemSpace), &Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_Thickness_MetaData[] = {
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VisualDebugTransformItemSpace, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_Scale_MetaData[] = {
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VisualDebugTransformItemSpace, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_Space_MetaData[] = {
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_VisualDebug.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VisualDebugTransformItemSpace, Space), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_Space_MetaData)) }; // 3202328731
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewProp_Space,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_DebugBase,
		&NewStructOps,
		"RigUnit_VisualDebugTransformItemSpace",
		sizeof(FRigUnit_VisualDebugTransformItemSpace),
		alignof(FRigUnit_VisualDebugTransformItemSpace),
		Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransformItemSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransformItemSpace.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransformItemSpace.InnerSingleton;
	}

void FRigUnit_VisualDebugTransformItemSpace::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		bEnabled,
		Thickness,
		Scale,
		Space,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_VisualDebug_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_VisualDebug_h_Statics::EnumInfo[] = {
		{ ERigUnitVisualDebugPointMode_StaticEnum, TEXT("ERigUnitVisualDebugPointMode"), &Z_Registration_Info_UEnum_ERigUnitVisualDebugPointMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 259708670U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_VisualDebug_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_VisualDebugVector::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_VisualDebugVector_Statics::NewStructOps, TEXT("RigUnit_VisualDebugVector"), &Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_VisualDebugVector), 1768786867U) },
		{ FRigUnit_VisualDebugVectorItemSpace::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_VisualDebugVectorItemSpace_Statics::NewStructOps, TEXT("RigUnit_VisualDebugVectorItemSpace"), &Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugVectorItemSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_VisualDebugVectorItemSpace), 2049743565U) },
		{ FRigUnit_VisualDebugQuat::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuat_Statics::NewStructOps, TEXT("RigUnit_VisualDebugQuat"), &Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_VisualDebugQuat), 922928637U) },
		{ FRigUnit_VisualDebugQuatItemSpace::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_VisualDebugQuatItemSpace_Statics::NewStructOps, TEXT("RigUnit_VisualDebugQuatItemSpace"), &Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugQuatItemSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_VisualDebugQuatItemSpace), 3979002391U) },
		{ FRigUnit_VisualDebugTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransform_Statics::NewStructOps, TEXT("RigUnit_VisualDebugTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_VisualDebugTransform), 2944902802U) },
		{ FRigUnit_VisualDebugTransformItemSpace::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_VisualDebugTransformItemSpace_Statics::NewStructOps, TEXT("RigUnit_VisualDebugTransformItemSpace"), &Z_Registration_Info_UScriptStruct_RigUnit_VisualDebugTransformItemSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_VisualDebugTransformItemSpace), 3350807550U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_VisualDebug_h_652451640(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_VisualDebug_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_VisualDebug_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_VisualDebug_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_VisualDebug_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
