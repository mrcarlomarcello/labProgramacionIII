// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Simulation/RigUnit_Accumulate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_Accumulate() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AccumulateBase();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SimBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_AccumulateBase>() == std::is_polymorphic<FRigUnit_SimBase>(), "USTRUCT FRigUnit_AccumulateBase cannot be polymorphic unless super FRigUnit_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AccumulateBase;
class UScriptStruct* FRigUnit_AccumulateBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AccumulateBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AccumulateBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AccumulateBase, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AccumulateBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AccumulateBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AccumulateBase>()
{
	return FRigUnit_AccumulateBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AccumulateBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateBase_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Simulation|Accumulate" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AccumulateBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AccumulateBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AccumulateBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_SimBase,
		&NewStructOps,
		"RigUnit_AccumulateBase",
		sizeof(FRigUnit_AccumulateBase),
		alignof(FRigUnit_AccumulateBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AccumulateBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AccumulateBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AccumulateBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AccumulateBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AccumulateBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_AccumulateFloatAdd>() == std::is_polymorphic<FRigUnit_AccumulateBase>(), "USTRUCT FRigUnit_AccumulateFloatAdd cannot be polymorphic unless super FRigUnit_AccumulateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatAdd;
class UScriptStruct* FRigUnit_AccumulateFloatAdd::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatAdd.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatAdd.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AccumulateFloatAdd"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AccumulateFloatAdd::Execute"), &FRigUnit_AccumulateFloatAdd::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatAdd.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatAdd.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AccumulateFloatAdd>()
{
	return FRigUnit_AccumulateFloatAdd::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Increment_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Increment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIntegrateDeltaTime_MetaData[];
#endif
		static void NewProp_bIntegrateDeltaTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIntegrateDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AccumulatedValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Adds a value over time over and over again\n */" },
		{ "DisplayName", "Accumulate Add (Float)" },
		{ "Keywords", "Simulate,++" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
		{ "PrototypeName", "AccumulateAdd" },
		{ "ToolTip", "Adds a value over time over and over again" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AccumulateFloatAdd>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::NewProp_Increment_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::NewProp_Increment = { "Increment", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateFloatAdd, Increment), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::NewProp_Increment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::NewProp_Increment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::NewProp_InitialValue_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateFloatAdd, InitialValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::NewProp_InitialValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::NewProp_InitialValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::NewProp_bIntegrateDeltaTime_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::NewProp_bIntegrateDeltaTime_SetBit(void* Obj)
	{
		((FRigUnit_AccumulateFloatAdd*)Obj)->bIntegrateDeltaTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::NewProp_bIntegrateDeltaTime = { "bIntegrateDeltaTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_AccumulateFloatAdd), &Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::NewProp_bIntegrateDeltaTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::NewProp_bIntegrateDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::NewProp_bIntegrateDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateFloatAdd, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::NewProp_AccumulatedValue_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::NewProp_AccumulatedValue = { "AccumulatedValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateFloatAdd, AccumulatedValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::NewProp_AccumulatedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::NewProp_AccumulatedValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::NewProp_Increment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::NewProp_InitialValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::NewProp_bIntegrateDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::NewProp_AccumulatedValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_AccumulateBase,
		&NewStructOps,
		"RigUnit_AccumulateFloatAdd",
		sizeof(FRigUnit_AccumulateFloatAdd),
		alignof(FRigUnit_AccumulateFloatAdd),
		Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatAdd.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatAdd.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatAdd.InnerSingleton;
	}

void FRigUnit_AccumulateFloatAdd::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Increment,
		InitialValue,
		bIntegrateDeltaTime,
		Result,
		AccumulatedValue,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_AccumulateVectorAdd>() == std::is_polymorphic<FRigUnit_AccumulateBase>(), "USTRUCT FRigUnit_AccumulateVectorAdd cannot be polymorphic unless super FRigUnit_AccumulateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorAdd;
class UScriptStruct* FRigUnit_AccumulateVectorAdd::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorAdd.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorAdd.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AccumulateVectorAdd"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AccumulateVectorAdd::Execute"), &FRigUnit_AccumulateVectorAdd::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorAdd.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorAdd.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AccumulateVectorAdd>()
{
	return FRigUnit_AccumulateVectorAdd::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Increment_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Increment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIntegrateDeltaTime_MetaData[];
#endif
		static void NewProp_bIntegrateDeltaTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIntegrateDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccumulatedValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Adds a vector over time over and over again\n */" },
		{ "DisplayName", "Accumulate Add (Vector)" },
		{ "Keywords", "Simulate,++" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
		{ "PrototypeName", "AccumulateAdd" },
		{ "ToolTip", "Adds a vector over time over and over again" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AccumulateVectorAdd>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::NewProp_Increment_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::NewProp_Increment = { "Increment", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateVectorAdd, Increment), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::NewProp_Increment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::NewProp_Increment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::NewProp_InitialValue_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateVectorAdd, InitialValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::NewProp_InitialValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::NewProp_InitialValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::NewProp_bIntegrateDeltaTime_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::NewProp_bIntegrateDeltaTime_SetBit(void* Obj)
	{
		((FRigUnit_AccumulateVectorAdd*)Obj)->bIntegrateDeltaTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::NewProp_bIntegrateDeltaTime = { "bIntegrateDeltaTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_AccumulateVectorAdd), &Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::NewProp_bIntegrateDeltaTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::NewProp_bIntegrateDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::NewProp_bIntegrateDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateVectorAdd, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::NewProp_AccumulatedValue_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::NewProp_AccumulatedValue = { "AccumulatedValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateVectorAdd, AccumulatedValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::NewProp_AccumulatedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::NewProp_AccumulatedValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::NewProp_Increment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::NewProp_InitialValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::NewProp_bIntegrateDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::NewProp_AccumulatedValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_AccumulateBase,
		&NewStructOps,
		"RigUnit_AccumulateVectorAdd",
		sizeof(FRigUnit_AccumulateVectorAdd),
		alignof(FRigUnit_AccumulateVectorAdd),
		Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorAdd.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorAdd.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorAdd.InnerSingleton;
	}

void FRigUnit_AccumulateVectorAdd::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Increment,
		InitialValue,
		bIntegrateDeltaTime,
		Result,
		AccumulatedValue,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_AccumulateFloatMul>() == std::is_polymorphic<FRigUnit_AccumulateBase>(), "USTRUCT FRigUnit_AccumulateFloatMul cannot be polymorphic unless super FRigUnit_AccumulateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatMul;
class UScriptStruct* FRigUnit_AccumulateFloatMul::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatMul.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatMul.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AccumulateFloatMul"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AccumulateFloatMul::Execute"), &FRigUnit_AccumulateFloatMul::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatMul.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatMul.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AccumulateFloatMul>()
{
	return FRigUnit_AccumulateFloatMul::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIntegrateDeltaTime_MetaData[];
#endif
		static void NewProp_bIntegrateDeltaTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIntegrateDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AccumulatedValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Multiplies a value over time over and over again\n */" },
		{ "DisplayName", "Accumulate Mul (Float)" },
		{ "Keywords", "Simulate,**" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
		{ "PrototypeName", "AccumulateMul" },
		{ "ToolTip", "Multiplies a value over time over and over again" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AccumulateFloatMul>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::NewProp_Multiplier_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateFloatMul, Multiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::NewProp_Multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::NewProp_Multiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::NewProp_InitialValue_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateFloatMul, InitialValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::NewProp_InitialValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::NewProp_InitialValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::NewProp_bIntegrateDeltaTime_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::NewProp_bIntegrateDeltaTime_SetBit(void* Obj)
	{
		((FRigUnit_AccumulateFloatMul*)Obj)->bIntegrateDeltaTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::NewProp_bIntegrateDeltaTime = { "bIntegrateDeltaTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_AccumulateFloatMul), &Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::NewProp_bIntegrateDeltaTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::NewProp_bIntegrateDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::NewProp_bIntegrateDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateFloatMul, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::NewProp_AccumulatedValue_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::NewProp_AccumulatedValue = { "AccumulatedValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateFloatMul, AccumulatedValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::NewProp_AccumulatedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::NewProp_AccumulatedValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::NewProp_Multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::NewProp_InitialValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::NewProp_bIntegrateDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::NewProp_AccumulatedValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_AccumulateBase,
		&NewStructOps,
		"RigUnit_AccumulateFloatMul",
		sizeof(FRigUnit_AccumulateFloatMul),
		alignof(FRigUnit_AccumulateFloatMul),
		Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatMul.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatMul.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatMul.InnerSingleton;
	}

void FRigUnit_AccumulateFloatMul::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Multiplier,
		InitialValue,
		bIntegrateDeltaTime,
		Result,
		AccumulatedValue,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_AccumulateVectorMul>() == std::is_polymorphic<FRigUnit_AccumulateBase>(), "USTRUCT FRigUnit_AccumulateVectorMul cannot be polymorphic unless super FRigUnit_AccumulateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorMul;
class UScriptStruct* FRigUnit_AccumulateVectorMul::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorMul.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorMul.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AccumulateVectorMul"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AccumulateVectorMul::Execute"), &FRigUnit_AccumulateVectorMul::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorMul.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorMul.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AccumulateVectorMul>()
{
	return FRigUnit_AccumulateVectorMul::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Multiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIntegrateDeltaTime_MetaData[];
#endif
		static void NewProp_bIntegrateDeltaTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIntegrateDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccumulatedValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Multiplies a vector over time over and over again\n */" },
		{ "DisplayName", "Accumulate Mul (Vector)" },
		{ "Keywords", "Simulate,**" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
		{ "PrototypeName", "AccumulateMul" },
		{ "ToolTip", "Multiplies a vector over time over and over again" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AccumulateVectorMul>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::NewProp_Multiplier_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateVectorMul, Multiplier), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::NewProp_Multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::NewProp_Multiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::NewProp_InitialValue_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateVectorMul, InitialValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::NewProp_InitialValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::NewProp_InitialValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::NewProp_bIntegrateDeltaTime_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::NewProp_bIntegrateDeltaTime_SetBit(void* Obj)
	{
		((FRigUnit_AccumulateVectorMul*)Obj)->bIntegrateDeltaTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::NewProp_bIntegrateDeltaTime = { "bIntegrateDeltaTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_AccumulateVectorMul), &Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::NewProp_bIntegrateDeltaTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::NewProp_bIntegrateDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::NewProp_bIntegrateDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateVectorMul, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::NewProp_AccumulatedValue_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::NewProp_AccumulatedValue = { "AccumulatedValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateVectorMul, AccumulatedValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::NewProp_AccumulatedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::NewProp_AccumulatedValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::NewProp_Multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::NewProp_InitialValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::NewProp_bIntegrateDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::NewProp_AccumulatedValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_AccumulateBase,
		&NewStructOps,
		"RigUnit_AccumulateVectorMul",
		sizeof(FRigUnit_AccumulateVectorMul),
		alignof(FRigUnit_AccumulateVectorMul),
		Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorMul.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorMul.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorMul.InnerSingleton;
	}

void FRigUnit_AccumulateVectorMul::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Multiplier,
		InitialValue,
		bIntegrateDeltaTime,
		Result,
		AccumulatedValue,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_AccumulateQuatMul>() == std::is_polymorphic<FRigUnit_AccumulateBase>(), "USTRUCT FRigUnit_AccumulateQuatMul cannot be polymorphic unless super FRigUnit_AccumulateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AccumulateQuatMul;
class UScriptStruct* FRigUnit_AccumulateQuatMul::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AccumulateQuatMul.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AccumulateQuatMul.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AccumulateQuatMul"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AccumulateQuatMul::Execute"), &FRigUnit_AccumulateQuatMul::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AccumulateQuatMul.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AccumulateQuatMul.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AccumulateQuatMul>()
{
	return FRigUnit_AccumulateQuatMul::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Multiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlipOrder_MetaData[];
#endif
		static void NewProp_bFlipOrder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIntegrateDeltaTime_MetaData[];
#endif
		static void NewProp_bIntegrateDeltaTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIntegrateDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccumulatedValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Multiplies a quaternion over time over and over again\n */" },
		{ "DisplayName", "Accumulate Mul (Quaternion)" },
		{ "Keywords", "Simulate,**" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
		{ "PrototypeName", "AccumulateMul" },
		{ "ToolTip", "Multiplies a quaternion over time over and over again" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AccumulateQuatMul>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_Multiplier_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateQuatMul, Multiplier), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_Multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_Multiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_InitialValue_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateQuatMul, InitialValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_InitialValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_InitialValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_bFlipOrder_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_bFlipOrder_SetBit(void* Obj)
	{
		((FRigUnit_AccumulateQuatMul*)Obj)->bFlipOrder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_bFlipOrder = { "bFlipOrder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_AccumulateQuatMul), &Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_bFlipOrder_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_bFlipOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_bFlipOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_bIntegrateDeltaTime_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_bIntegrateDeltaTime_SetBit(void* Obj)
	{
		((FRigUnit_AccumulateQuatMul*)Obj)->bIntegrateDeltaTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_bIntegrateDeltaTime = { "bIntegrateDeltaTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_AccumulateQuatMul), &Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_bIntegrateDeltaTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_bIntegrateDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_bIntegrateDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateQuatMul, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_AccumulatedValue_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_AccumulatedValue = { "AccumulatedValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateQuatMul, AccumulatedValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_AccumulatedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_AccumulatedValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_Multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_InitialValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_bFlipOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_bIntegrateDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewProp_AccumulatedValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_AccumulateBase,
		&NewStructOps,
		"RigUnit_AccumulateQuatMul",
		sizeof(FRigUnit_AccumulateQuatMul),
		alignof(FRigUnit_AccumulateQuatMul),
		Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AccumulateQuatMul.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AccumulateQuatMul.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AccumulateQuatMul.InnerSingleton;
	}

void FRigUnit_AccumulateQuatMul::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Multiplier,
		InitialValue,
		bFlipOrder,
		bIntegrateDeltaTime,
		Result,
		AccumulatedValue,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_AccumulateTransformMul>() == std::is_polymorphic<FRigUnit_AccumulateBase>(), "USTRUCT FRigUnit_AccumulateTransformMul cannot be polymorphic unless super FRigUnit_AccumulateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AccumulateTransformMul;
class UScriptStruct* FRigUnit_AccumulateTransformMul::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AccumulateTransformMul.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AccumulateTransformMul.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AccumulateTransformMul"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AccumulateTransformMul::Execute"), &FRigUnit_AccumulateTransformMul::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AccumulateTransformMul.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AccumulateTransformMul.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AccumulateTransformMul>()
{
	return FRigUnit_AccumulateTransformMul::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Multiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlipOrder_MetaData[];
#endif
		static void NewProp_bFlipOrder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIntegrateDeltaTime_MetaData[];
#endif
		static void NewProp_bIntegrateDeltaTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIntegrateDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccumulatedValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Multiplies a transform over time over and over again\n */" },
		{ "DisplayName", "Accumulate Mul (Transform)" },
		{ "Keywords", "Simulate,**" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
		{ "PrototypeName", "AccumulateMul" },
		{ "ToolTip", "Multiplies a transform over time over and over again" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AccumulateTransformMul>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_Multiplier_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateTransformMul, Multiplier), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_Multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_Multiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_InitialValue_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateTransformMul, InitialValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_InitialValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_InitialValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_bFlipOrder_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_bFlipOrder_SetBit(void* Obj)
	{
		((FRigUnit_AccumulateTransformMul*)Obj)->bFlipOrder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_bFlipOrder = { "bFlipOrder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_AccumulateTransformMul), &Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_bFlipOrder_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_bFlipOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_bFlipOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_bIntegrateDeltaTime_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_bIntegrateDeltaTime_SetBit(void* Obj)
	{
		((FRigUnit_AccumulateTransformMul*)Obj)->bIntegrateDeltaTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_bIntegrateDeltaTime = { "bIntegrateDeltaTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_AccumulateTransformMul), &Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_bIntegrateDeltaTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_bIntegrateDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_bIntegrateDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateTransformMul, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_AccumulatedValue_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_AccumulatedValue = { "AccumulatedValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateTransformMul, AccumulatedValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_AccumulatedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_AccumulatedValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_Multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_InitialValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_bFlipOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_bIntegrateDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewProp_AccumulatedValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_AccumulateBase,
		&NewStructOps,
		"RigUnit_AccumulateTransformMul",
		sizeof(FRigUnit_AccumulateTransformMul),
		alignof(FRigUnit_AccumulateTransformMul),
		Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AccumulateTransformMul.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AccumulateTransformMul.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AccumulateTransformMul.InnerSingleton;
	}

void FRigUnit_AccumulateTransformMul::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Multiplier,
		InitialValue,
		bFlipOrder,
		bIntegrateDeltaTime,
		Result,
		AccumulatedValue,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_AccumulateFloatLerp>() == std::is_polymorphic<FRigUnit_AccumulateBase>(), "USTRUCT FRigUnit_AccumulateFloatLerp cannot be polymorphic unless super FRigUnit_AccumulateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatLerp;
class UScriptStruct* FRigUnit_AccumulateFloatLerp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatLerp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatLerp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AccumulateFloatLerp"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AccumulateFloatLerp::Execute"), &FRigUnit_AccumulateFloatLerp::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatLerp.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatLerp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AccumulateFloatLerp>()
{
	return FRigUnit_AccumulateFloatLerp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Blend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIntegrateDeltaTime_MetaData[];
#endif
		static void NewProp_bIntegrateDeltaTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIntegrateDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AccumulatedValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Interpolates two values over time over and over again\n */" },
		{ "DisplayName", "Accumulate Lerp (Float)" },
		{ "Keywords", "Simulate,Ramp" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
		{ "PrototypeName", "AccumulateLerp" },
		{ "ToolTip", "Interpolates two values over time over and over again" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AccumulateFloatLerp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_TargetValue_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_TargetValue = { "TargetValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateFloatLerp, TargetValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_TargetValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_TargetValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_InitialValue_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateFloatLerp, InitialValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_InitialValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_InitialValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_Blend_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_Blend = { "Blend", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateFloatLerp, Blend), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_Blend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_Blend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_bIntegrateDeltaTime_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_bIntegrateDeltaTime_SetBit(void* Obj)
	{
		((FRigUnit_AccumulateFloatLerp*)Obj)->bIntegrateDeltaTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_bIntegrateDeltaTime = { "bIntegrateDeltaTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_AccumulateFloatLerp), &Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_bIntegrateDeltaTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_bIntegrateDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_bIntegrateDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateFloatLerp, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_AccumulatedValue_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_AccumulatedValue = { "AccumulatedValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateFloatLerp, AccumulatedValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_AccumulatedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_AccumulatedValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_TargetValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_InitialValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_Blend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_bIntegrateDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewProp_AccumulatedValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_AccumulateBase,
		&NewStructOps,
		"RigUnit_AccumulateFloatLerp",
		sizeof(FRigUnit_AccumulateFloatLerp),
		alignof(FRigUnit_AccumulateFloatLerp),
		Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatLerp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatLerp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatLerp.InnerSingleton;
	}

void FRigUnit_AccumulateFloatLerp::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		TargetValue,
		InitialValue,
		Blend,
		bIntegrateDeltaTime,
		Result,
		AccumulatedValue,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_AccumulateVectorLerp>() == std::is_polymorphic<FRigUnit_AccumulateBase>(), "USTRUCT FRigUnit_AccumulateVectorLerp cannot be polymorphic unless super FRigUnit_AccumulateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorLerp;
class UScriptStruct* FRigUnit_AccumulateVectorLerp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorLerp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorLerp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AccumulateVectorLerp"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AccumulateVectorLerp::Execute"), &FRigUnit_AccumulateVectorLerp::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorLerp.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorLerp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AccumulateVectorLerp>()
{
	return FRigUnit_AccumulateVectorLerp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Blend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIntegrateDeltaTime_MetaData[];
#endif
		static void NewProp_bIntegrateDeltaTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIntegrateDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccumulatedValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Interpolates two vectors over time over and over again\n */" },
		{ "DisplayName", "Accumulate Lerp (Vector)" },
		{ "Keywords", "Simulate,Ramp" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
		{ "PrototypeName", "AccumulateLerp" },
		{ "ToolTip", "Interpolates two vectors over time over and over again" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AccumulateVectorLerp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_TargetValue_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_TargetValue = { "TargetValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateVectorLerp, TargetValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_TargetValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_TargetValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_InitialValue_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateVectorLerp, InitialValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_InitialValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_InitialValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_Blend_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_Blend = { "Blend", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateVectorLerp, Blend), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_Blend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_Blend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_bIntegrateDeltaTime_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_bIntegrateDeltaTime_SetBit(void* Obj)
	{
		((FRigUnit_AccumulateVectorLerp*)Obj)->bIntegrateDeltaTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_bIntegrateDeltaTime = { "bIntegrateDeltaTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_AccumulateVectorLerp), &Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_bIntegrateDeltaTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_bIntegrateDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_bIntegrateDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateVectorLerp, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_AccumulatedValue_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_AccumulatedValue = { "AccumulatedValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateVectorLerp, AccumulatedValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_AccumulatedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_AccumulatedValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_TargetValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_InitialValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_Blend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_bIntegrateDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewProp_AccumulatedValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_AccumulateBase,
		&NewStructOps,
		"RigUnit_AccumulateVectorLerp",
		sizeof(FRigUnit_AccumulateVectorLerp),
		alignof(FRigUnit_AccumulateVectorLerp),
		Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorLerp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorLerp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorLerp.InnerSingleton;
	}

void FRigUnit_AccumulateVectorLerp::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		TargetValue,
		InitialValue,
		Blend,
		bIntegrateDeltaTime,
		Result,
		AccumulatedValue,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_AccumulateQuatLerp>() == std::is_polymorphic<FRigUnit_AccumulateBase>(), "USTRUCT FRigUnit_AccumulateQuatLerp cannot be polymorphic unless super FRigUnit_AccumulateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AccumulateQuatLerp;
class UScriptStruct* FRigUnit_AccumulateQuatLerp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AccumulateQuatLerp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AccumulateQuatLerp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AccumulateQuatLerp"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AccumulateQuatLerp::Execute"), &FRigUnit_AccumulateQuatLerp::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AccumulateQuatLerp.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AccumulateQuatLerp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AccumulateQuatLerp>()
{
	return FRigUnit_AccumulateQuatLerp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Blend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIntegrateDeltaTime_MetaData[];
#endif
		static void NewProp_bIntegrateDeltaTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIntegrateDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccumulatedValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Interpolates two quaternions over time over and over again\n */" },
		{ "DisplayName", "Accumulate Lerp (Quaternion)" },
		{ "Keywords", "Simulate,Ramp" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
		{ "PrototypeName", "AccumulateLerp" },
		{ "ToolTip", "Interpolates two quaternions over time over and over again" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AccumulateQuatLerp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_TargetValue_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_TargetValue = { "TargetValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateQuatLerp, TargetValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_TargetValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_TargetValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_InitialValue_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateQuatLerp, InitialValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_InitialValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_InitialValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_Blend_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_Blend = { "Blend", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateQuatLerp, Blend), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_Blend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_Blend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_bIntegrateDeltaTime_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_bIntegrateDeltaTime_SetBit(void* Obj)
	{
		((FRigUnit_AccumulateQuatLerp*)Obj)->bIntegrateDeltaTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_bIntegrateDeltaTime = { "bIntegrateDeltaTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_AccumulateQuatLerp), &Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_bIntegrateDeltaTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_bIntegrateDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_bIntegrateDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateQuatLerp, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_AccumulatedValue_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_AccumulatedValue = { "AccumulatedValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateQuatLerp, AccumulatedValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_AccumulatedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_AccumulatedValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_TargetValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_InitialValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_Blend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_bIntegrateDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewProp_AccumulatedValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_AccumulateBase,
		&NewStructOps,
		"RigUnit_AccumulateQuatLerp",
		sizeof(FRigUnit_AccumulateQuatLerp),
		alignof(FRigUnit_AccumulateQuatLerp),
		Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AccumulateQuatLerp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AccumulateQuatLerp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AccumulateQuatLerp.InnerSingleton;
	}

void FRigUnit_AccumulateQuatLerp::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		TargetValue,
		InitialValue,
		Blend,
		bIntegrateDeltaTime,
		Result,
		AccumulatedValue,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_AccumulateTransformLerp>() == std::is_polymorphic<FRigUnit_AccumulateBase>(), "USTRUCT FRigUnit_AccumulateTransformLerp cannot be polymorphic unless super FRigUnit_AccumulateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AccumulateTransformLerp;
class UScriptStruct* FRigUnit_AccumulateTransformLerp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AccumulateTransformLerp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AccumulateTransformLerp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AccumulateTransformLerp"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AccumulateTransformLerp::Execute"), &FRigUnit_AccumulateTransformLerp::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AccumulateTransformLerp.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AccumulateTransformLerp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AccumulateTransformLerp>()
{
	return FRigUnit_AccumulateTransformLerp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Blend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIntegrateDeltaTime_MetaData[];
#endif
		static void NewProp_bIntegrateDeltaTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIntegrateDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccumulatedValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Interpolates two transforms over time over and over again\n */" },
		{ "DisplayName", "Accumulate Lerp (Transform)" },
		{ "Keywords", "Simulate,Ramp" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
		{ "PrototypeName", "AccumulateLerp" },
		{ "ToolTip", "Interpolates two transforms over time over and over again" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AccumulateTransformLerp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_TargetValue_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_TargetValue = { "TargetValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateTransformLerp, TargetValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_TargetValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_TargetValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_InitialValue_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateTransformLerp, InitialValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_InitialValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_InitialValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_Blend_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_Blend = { "Blend", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateTransformLerp, Blend), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_Blend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_Blend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_bIntegrateDeltaTime_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_bIntegrateDeltaTime_SetBit(void* Obj)
	{
		((FRigUnit_AccumulateTransformLerp*)Obj)->bIntegrateDeltaTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_bIntegrateDeltaTime = { "bIntegrateDeltaTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_AccumulateTransformLerp), &Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_bIntegrateDeltaTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_bIntegrateDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_bIntegrateDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateTransformLerp, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_AccumulatedValue_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_AccumulatedValue = { "AccumulatedValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateTransformLerp, AccumulatedValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_AccumulatedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_AccumulatedValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_TargetValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_InitialValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_Blend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_bIntegrateDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewProp_AccumulatedValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_AccumulateBase,
		&NewStructOps,
		"RigUnit_AccumulateTransformLerp",
		sizeof(FRigUnit_AccumulateTransformLerp),
		alignof(FRigUnit_AccumulateTransformLerp),
		Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AccumulateTransformLerp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AccumulateTransformLerp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AccumulateTransformLerp.InnerSingleton;
	}

void FRigUnit_AccumulateTransformLerp::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		TargetValue,
		InitialValue,
		Blend,
		bIntegrateDeltaTime,
		Result,
		AccumulatedValue,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_AccumulateFloatRange>() == std::is_polymorphic<FRigUnit_AccumulateBase>(), "USTRUCT FRigUnit_AccumulateFloatRange cannot be polymorphic unless super FRigUnit_AccumulateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatRange;
class UScriptStruct* FRigUnit_AccumulateFloatRange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatRange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatRange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AccumulateFloatRange"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AccumulateFloatRange::Execute"), &FRigUnit_AccumulateFloatRange::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatRange.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatRange.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AccumulateFloatRange>()
{
	return FRigUnit_AccumulateFloatRange::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Minimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Maximum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedMinimum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AccumulatedMinimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedMaximum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AccumulatedMaximum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Accumulates the min and max values over time\n */" },
		{ "DisplayName", "Accumulate Range (Float)" },
		{ "Keywords", "Range" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
		{ "PrototypeName", "AccumulateRange" },
		{ "ToolTip", "Accumulates the min and max values over time" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AccumulateFloatRange>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateFloatRange, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::NewProp_Minimum_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateFloatRange, Minimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::NewProp_Minimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::NewProp_Minimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::NewProp_Maximum_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateFloatRange, Maximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::NewProp_Maximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::NewProp_Maximum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::NewProp_AccumulatedMinimum_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::NewProp_AccumulatedMinimum = { "AccumulatedMinimum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateFloatRange, AccumulatedMinimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::NewProp_AccumulatedMinimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::NewProp_AccumulatedMinimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::NewProp_AccumulatedMaximum_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::NewProp_AccumulatedMaximum = { "AccumulatedMaximum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateFloatRange, AccumulatedMaximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::NewProp_AccumulatedMaximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::NewProp_AccumulatedMaximum_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::NewProp_Minimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::NewProp_Maximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::NewProp_AccumulatedMinimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::NewProp_AccumulatedMaximum,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_AccumulateBase,
		&NewStructOps,
		"RigUnit_AccumulateFloatRange",
		sizeof(FRigUnit_AccumulateFloatRange),
		alignof(FRigUnit_AccumulateFloatRange),
		Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatRange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatRange.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatRange.InnerSingleton;
	}

void FRigUnit_AccumulateFloatRange::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		Minimum,
		Maximum,
		AccumulatedMinimum,
		AccumulatedMaximum,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_AccumulateVectorRange>() == std::is_polymorphic<FRigUnit_AccumulateBase>(), "USTRUCT FRigUnit_AccumulateVectorRange cannot be polymorphic unless super FRigUnit_AccumulateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorRange;
class UScriptStruct* FRigUnit_AccumulateVectorRange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorRange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorRange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AccumulateVectorRange"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AccumulateVectorRange::Execute"), &FRigUnit_AccumulateVectorRange::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorRange.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorRange.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AccumulateVectorRange>()
{
	return FRigUnit_AccumulateVectorRange::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Minimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Maximum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedMinimum_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccumulatedMinimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedMaximum_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccumulatedMaximum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Accumulates the min and max values over time\n */" },
		{ "DisplayName", "Accumulate Range (Vector)" },
		{ "Keywords", "Range" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
		{ "PrototypeName", "AccumulateRange" },
		{ "ToolTip", "Accumulates the min and max values over time" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AccumulateVectorRange>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateVectorRange, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::NewProp_Minimum_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateVectorRange, Minimum), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::NewProp_Minimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::NewProp_Minimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::NewProp_Maximum_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateVectorRange, Maximum), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::NewProp_Maximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::NewProp_Maximum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::NewProp_AccumulatedMinimum_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::NewProp_AccumulatedMinimum = { "AccumulatedMinimum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateVectorRange, AccumulatedMinimum), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::NewProp_AccumulatedMinimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::NewProp_AccumulatedMinimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::NewProp_AccumulatedMaximum_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::NewProp_AccumulatedMaximum = { "AccumulatedMaximum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AccumulateVectorRange, AccumulatedMaximum), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::NewProp_AccumulatedMaximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::NewProp_AccumulatedMaximum_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::NewProp_Minimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::NewProp_Maximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::NewProp_AccumulatedMinimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::NewProp_AccumulatedMaximum,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_AccumulateBase,
		&NewStructOps,
		"RigUnit_AccumulateVectorRange",
		sizeof(FRigUnit_AccumulateVectorRange),
		alignof(FRigUnit_AccumulateVectorRange),
		Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorRange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorRange.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorRange.InnerSingleton;
	}

void FRigUnit_AccumulateVectorRange::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		Minimum,
		Maximum,
		AccumulatedMinimum,
		AccumulatedMaximum,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Accumulate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Accumulate_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_AccumulateBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AccumulateBase_Statics::NewStructOps, TEXT("RigUnit_AccumulateBase"), &Z_Registration_Info_UScriptStruct_RigUnit_AccumulateBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AccumulateBase), 3007627260U) },
		{ FRigUnit_AccumulateFloatAdd::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics::NewStructOps, TEXT("RigUnit_AccumulateFloatAdd"), &Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatAdd, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AccumulateFloatAdd), 2193083700U) },
		{ FRigUnit_AccumulateVectorAdd::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics::NewStructOps, TEXT("RigUnit_AccumulateVectorAdd"), &Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorAdd, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AccumulateVectorAdd), 1105601727U) },
		{ FRigUnit_AccumulateFloatMul::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics::NewStructOps, TEXT("RigUnit_AccumulateFloatMul"), &Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatMul, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AccumulateFloatMul), 920571333U) },
		{ FRigUnit_AccumulateVectorMul::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics::NewStructOps, TEXT("RigUnit_AccumulateVectorMul"), &Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorMul, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AccumulateVectorMul), 618712284U) },
		{ FRigUnit_AccumulateQuatMul::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics::NewStructOps, TEXT("RigUnit_AccumulateQuatMul"), &Z_Registration_Info_UScriptStruct_RigUnit_AccumulateQuatMul, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AccumulateQuatMul), 3913922353U) },
		{ FRigUnit_AccumulateTransformMul::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics::NewStructOps, TEXT("RigUnit_AccumulateTransformMul"), &Z_Registration_Info_UScriptStruct_RigUnit_AccumulateTransformMul, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AccumulateTransformMul), 1031305563U) },
		{ FRigUnit_AccumulateFloatLerp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics::NewStructOps, TEXT("RigUnit_AccumulateFloatLerp"), &Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatLerp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AccumulateFloatLerp), 2612979991U) },
		{ FRigUnit_AccumulateVectorLerp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics::NewStructOps, TEXT("RigUnit_AccumulateVectorLerp"), &Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorLerp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AccumulateVectorLerp), 3225292627U) },
		{ FRigUnit_AccumulateQuatLerp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics::NewStructOps, TEXT("RigUnit_AccumulateQuatLerp"), &Z_Registration_Info_UScriptStruct_RigUnit_AccumulateQuatLerp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AccumulateQuatLerp), 404670502U) },
		{ FRigUnit_AccumulateTransformLerp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics::NewStructOps, TEXT("RigUnit_AccumulateTransformLerp"), &Z_Registration_Info_UScriptStruct_RigUnit_AccumulateTransformLerp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AccumulateTransformLerp), 1617911215U) },
		{ FRigUnit_AccumulateFloatRange::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics::NewStructOps, TEXT("RigUnit_AccumulateFloatRange"), &Z_Registration_Info_UScriptStruct_RigUnit_AccumulateFloatRange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AccumulateFloatRange), 2906301455U) },
		{ FRigUnit_AccumulateVectorRange::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics::NewStructOps, TEXT("RigUnit_AccumulateVectorRange"), &Z_Registration_Info_UScriptStruct_RigUnit_AccumulateVectorRange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AccumulateVectorRange), 2284209519U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Accumulate_h_1216054689(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Accumulate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Accumulate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
