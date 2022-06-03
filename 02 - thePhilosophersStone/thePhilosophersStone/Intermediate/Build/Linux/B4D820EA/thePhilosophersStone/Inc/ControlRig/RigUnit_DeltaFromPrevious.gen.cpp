// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Simulation/RigUnit_DeltaFromPrevious.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_DeltaFromPrevious() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SimBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_DeltaFromPreviousFloat>() == std::is_polymorphic<FRigUnit_SimBase>(), "USTRUCT FRigUnit_DeltaFromPreviousFloat cannot be polymorphic unless super FRigUnit_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousFloat;
class UScriptStruct* FRigUnit_DeltaFromPreviousFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DeltaFromPreviousFloat"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_DeltaFromPreviousFloat::Execute"), &FRigUnit_DeltaFromPreviousFloat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousFloat.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousFloat.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DeltaFromPreviousFloat>()
{
	return FRigUnit_DeltaFromPreviousFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Delta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cache_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Cache;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Simulation|Time" },
		{ "Comment", "/**\n * Computes the difference from the previous value going through the node\n */" },
		{ "DisplayName", "DeltaFromPrevious (Float)" },
		{ "Keywords", "Difference,Velocity,Acceleration" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_DeltaFromPrevious.h" },
		{ "PrototypeName", "DeltaFromPrevious" },
		{ "ToolTip", "Computes the difference from the previous value going through the node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DeltaFromPreviousFloat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_DeltaFromPrevious.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_DeltaFromPreviousFloat, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics::NewProp_Delta_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_DeltaFromPrevious.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_DeltaFromPreviousFloat, Delta), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics::NewProp_Delta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics::NewProp_Delta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics::NewProp_PreviousValue_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_DeltaFromPrevious.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics::NewProp_PreviousValue = { "PreviousValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_DeltaFromPreviousFloat, PreviousValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics::NewProp_PreviousValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics::NewProp_PreviousValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics::NewProp_Cache_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_DeltaFromPrevious.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics::NewProp_Cache = { "Cache", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_DeltaFromPreviousFloat, Cache), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics::NewProp_Cache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics::NewProp_Cache_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics::NewProp_Delta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics::NewProp_PreviousValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics::NewProp_Cache,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_SimBase,
		&NewStructOps,
		"RigUnit_DeltaFromPreviousFloat",
		sizeof(FRigUnit_DeltaFromPreviousFloat),
		alignof(FRigUnit_DeltaFromPreviousFloat),
		Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousFloat.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousFloat.InnerSingleton;
	}

void FRigUnit_DeltaFromPreviousFloat::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		Delta,
		PreviousValue,
		Cache,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_DeltaFromPreviousVector>() == std::is_polymorphic<FRigUnit_SimBase>(), "USTRUCT FRigUnit_DeltaFromPreviousVector cannot be polymorphic unless super FRigUnit_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousVector;
class UScriptStruct* FRigUnit_DeltaFromPreviousVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DeltaFromPreviousVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_DeltaFromPreviousVector::Execute"), &FRigUnit_DeltaFromPreviousVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousVector.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousVector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DeltaFromPreviousVector>()
{
	return FRigUnit_DeltaFromPreviousVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Delta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cache;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Simulation|Time" },
		{ "Comment", "/**\n * Computes the difference from the previous value going through the node\n */" },
		{ "DisplayName", "DeltaFromPrevious (Vector)" },
		{ "Keywords", "Difference,Velocity,Acceleration" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_DeltaFromPrevious.h" },
		{ "PrototypeName", "DeltaFromPrevious" },
		{ "ToolTip", "Computes the difference from the previous value going through the node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DeltaFromPreviousVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_DeltaFromPrevious.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_DeltaFromPreviousVector, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics::NewProp_Delta_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_DeltaFromPrevious.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_DeltaFromPreviousVector, Delta), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics::NewProp_Delta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics::NewProp_Delta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics::NewProp_PreviousValue_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_DeltaFromPrevious.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics::NewProp_PreviousValue = { "PreviousValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_DeltaFromPreviousVector, PreviousValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics::NewProp_PreviousValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics::NewProp_PreviousValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics::NewProp_Cache_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_DeltaFromPrevious.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics::NewProp_Cache = { "Cache", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_DeltaFromPreviousVector, Cache), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics::NewProp_Cache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics::NewProp_Cache_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics::NewProp_Delta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics::NewProp_PreviousValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics::NewProp_Cache,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_SimBase,
		&NewStructOps,
		"RigUnit_DeltaFromPreviousVector",
		sizeof(FRigUnit_DeltaFromPreviousVector),
		alignof(FRigUnit_DeltaFromPreviousVector),
		Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousVector.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousVector.InnerSingleton;
	}

void FRigUnit_DeltaFromPreviousVector::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		Delta,
		PreviousValue,
		Cache,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_DeltaFromPreviousQuat>() == std::is_polymorphic<FRigUnit_SimBase>(), "USTRUCT FRigUnit_DeltaFromPreviousQuat cannot be polymorphic unless super FRigUnit_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousQuat;
class UScriptStruct* FRigUnit_DeltaFromPreviousQuat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousQuat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousQuat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DeltaFromPreviousQuat"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_DeltaFromPreviousQuat::Execute"), &FRigUnit_DeltaFromPreviousQuat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousQuat.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousQuat.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DeltaFromPreviousQuat>()
{
	return FRigUnit_DeltaFromPreviousQuat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Delta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cache;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Simulation|Time" },
		{ "Comment", "/**\n * Computes the difference from the previous value going through the node\n */" },
		{ "DisplayName", "DeltaFromPrevious (Quaternion)" },
		{ "Keywords", "Difference,Velocity,Acceleration" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_DeltaFromPrevious.h" },
		{ "PrototypeName", "DeltaFromPrevious" },
		{ "ToolTip", "Computes the difference from the previous value going through the node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DeltaFromPreviousQuat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_DeltaFromPrevious.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_DeltaFromPreviousQuat, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics::NewProp_Delta_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_DeltaFromPrevious.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_DeltaFromPreviousQuat, Delta), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics::NewProp_Delta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics::NewProp_Delta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics::NewProp_PreviousValue_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_DeltaFromPrevious.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics::NewProp_PreviousValue = { "PreviousValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_DeltaFromPreviousQuat, PreviousValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics::NewProp_PreviousValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics::NewProp_PreviousValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics::NewProp_Cache_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_DeltaFromPrevious.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics::NewProp_Cache = { "Cache", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_DeltaFromPreviousQuat, Cache), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics::NewProp_Cache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics::NewProp_Cache_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics::NewProp_Delta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics::NewProp_PreviousValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics::NewProp_Cache,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_SimBase,
		&NewStructOps,
		"RigUnit_DeltaFromPreviousQuat",
		sizeof(FRigUnit_DeltaFromPreviousQuat),
		alignof(FRigUnit_DeltaFromPreviousQuat),
		Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousQuat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousQuat.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousQuat.InnerSingleton;
	}

void FRigUnit_DeltaFromPreviousQuat::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		Delta,
		PreviousValue,
		Cache,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_DeltaFromPreviousTransform>() == std::is_polymorphic<FRigUnit_SimBase>(), "USTRUCT FRigUnit_DeltaFromPreviousTransform cannot be polymorphic unless super FRigUnit_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousTransform;
class UScriptStruct* FRigUnit_DeltaFromPreviousTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DeltaFromPreviousTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_DeltaFromPreviousTransform::Execute"), &FRigUnit_DeltaFromPreviousTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousTransform.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DeltaFromPreviousTransform>()
{
	return FRigUnit_DeltaFromPreviousTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Delta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cache;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Simulation|Time" },
		{ "Comment", "/**\n * Computes the difference from the previous value going through the node\n */" },
		{ "DisplayName", "DeltaFromPrevious (Transform)" },
		{ "Keywords", "Difference,Velocity,Acceleration" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_DeltaFromPrevious.h" },
		{ "PrototypeName", "DeltaFromPrevious" },
		{ "ToolTip", "Computes the difference from the previous value going through the node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DeltaFromPreviousTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_DeltaFromPrevious.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_DeltaFromPreviousTransform, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics::NewProp_Delta_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_DeltaFromPrevious.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_DeltaFromPreviousTransform, Delta), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics::NewProp_Delta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics::NewProp_Delta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics::NewProp_PreviousValue_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_DeltaFromPrevious.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics::NewProp_PreviousValue = { "PreviousValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_DeltaFromPreviousTransform, PreviousValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics::NewProp_PreviousValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics::NewProp_PreviousValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics::NewProp_Cache_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_DeltaFromPrevious.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics::NewProp_Cache = { "Cache", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_DeltaFromPreviousTransform, Cache), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics::NewProp_Cache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics::NewProp_Cache_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics::NewProp_Delta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics::NewProp_PreviousValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics::NewProp_Cache,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_SimBase,
		&NewStructOps,
		"RigUnit_DeltaFromPreviousTransform",
		sizeof(FRigUnit_DeltaFromPreviousTransform),
		alignof(FRigUnit_DeltaFromPreviousTransform),
		Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousTransform.InnerSingleton;
	}

void FRigUnit_DeltaFromPreviousTransform::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		Delta,
		PreviousValue,
		Cache,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_DeltaFromPrevious_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_DeltaFromPrevious_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_DeltaFromPreviousFloat::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics::NewStructOps, TEXT("RigUnit_DeltaFromPreviousFloat"), &Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DeltaFromPreviousFloat), 337917058U) },
		{ FRigUnit_DeltaFromPreviousVector::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics::NewStructOps, TEXT("RigUnit_DeltaFromPreviousVector"), &Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DeltaFromPreviousVector), 3849205030U) },
		{ FRigUnit_DeltaFromPreviousQuat::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics::NewStructOps, TEXT("RigUnit_DeltaFromPreviousQuat"), &Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousQuat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DeltaFromPreviousQuat), 838961144U) },
		{ FRigUnit_DeltaFromPreviousTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics::NewStructOps, TEXT("RigUnit_DeltaFromPreviousTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_DeltaFromPreviousTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DeltaFromPreviousTransform), 3038291901U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_DeltaFromPrevious_h_1440108554(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_DeltaFromPrevious_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_DeltaFromPrevious_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
