// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Math/RigUnit_MathInt.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_MathInt() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntBase();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntUnaryOp();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntAdd();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntSub();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntMul();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntDiv();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntMod();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntMin();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntMax();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntPow();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntNegate();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntAbs();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntToFloat();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntSign();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntClamp();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntEquals();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntGreater();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntLess();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_MathIntBase>() == std::is_polymorphic<FRigUnit_MathBase>(), "USTRUCT FRigUnit_MathIntBase cannot be polymorphic unless super FRigUnit_MathBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathIntBase;
class UScriptStruct* FRigUnit_MathIntBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathIntBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathIntBase, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathIntBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathIntBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathIntBase>()
{
	return FRigUnit_MathIntBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathIntBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Math|Int" },
		{ "MenuDescSuffix", "(Int)" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathIntBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathIntBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathIntBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathBase,
		&NewStructOps,
		"RigUnit_MathIntBase",
		sizeof(FRigUnit_MathIntBase),
		alignof(FRigUnit_MathIntBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathIntBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathIntBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathIntBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathIntUnaryOp>() == std::is_polymorphic<FRigUnit_MathIntBase>(), "USTRUCT FRigUnit_MathIntUnaryOp cannot be polymorphic unless super FRigUnit_MathIntBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathIntUnaryOp;
class UScriptStruct* FRigUnit_MathIntUnaryOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntUnaryOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathIntUnaryOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathIntUnaryOp, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathIntUnaryOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathIntUnaryOp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathIntUnaryOp>()
{
	return FRigUnit_MathIntUnaryOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathIntUnaryOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntUnaryOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathIntUnaryOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathIntUnaryOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntUnaryOp_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathIntUnaryOp_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathIntUnaryOp, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntUnaryOp_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntUnaryOp_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntUnaryOp_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathIntUnaryOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathIntUnaryOp, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntUnaryOp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntUnaryOp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathIntUnaryOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathIntUnaryOp_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathIntUnaryOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathIntUnaryOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathIntBase,
		&NewStructOps,
		"RigUnit_MathIntUnaryOp",
		sizeof(FRigUnit_MathIntUnaryOp),
		alignof(FRigUnit_MathIntUnaryOp),
		Z_Construct_UScriptStruct_FRigUnit_MathIntUnaryOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntUnaryOp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntUnaryOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntUnaryOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntUnaryOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntUnaryOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathIntUnaryOp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathIntUnaryOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathIntUnaryOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathIntBinaryOp>() == std::is_polymorphic<FRigUnit_MathIntBase>(), "USTRUCT FRigUnit_MathIntBinaryOp cannot be polymorphic unless super FRigUnit_MathIntBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathIntBinaryOp;
class UScriptStruct* FRigUnit_MathIntBinaryOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntBinaryOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathIntBinaryOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathIntBinaryOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathIntBinaryOp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathIntBinaryOp>()
{
	return FRigUnit_MathIntBinaryOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathIntBinaryOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp_Statics::NewProp_A_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathIntBinaryOp, A), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp_Statics::NewProp_B_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathIntBinaryOp, B), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathIntBinaryOp, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathIntBase,
		&NewStructOps,
		"RigUnit_MathIntBinaryOp",
		sizeof(FRigUnit_MathIntBinaryOp),
		alignof(FRigUnit_MathIntBinaryOp),
		Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntBinaryOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathIntBinaryOp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathIntBinaryOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathIntAdd>() == std::is_polymorphic<FRigUnit_MathIntBinaryOp>(), "USTRUCT FRigUnit_MathIntAdd cannot be polymorphic unless super FRigUnit_MathIntBinaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathIntAdd;
class UScriptStruct* FRigUnit_MathIntAdd::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntAdd.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathIntAdd.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathIntAdd, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathIntAdd"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathIntAdd::Execute"), &FRigUnit_MathIntAdd::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathIntAdd.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathIntAdd.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathIntAdd>()
{
	return FRigUnit_MathIntAdd::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathIntAdd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntAdd_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the sum of the two values\n */" },
		{ "DisplayName", "Add" },
		{ "Keywords", "Sum,+" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
		{ "PrototypeName", "Add" },
		{ "ToolTip", "Returns the sum of the two values" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathIntAdd_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathIntAdd>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathIntAdd_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp,
		&NewStructOps,
		"RigUnit_MathIntAdd",
		sizeof(FRigUnit_MathIntAdd),
		alignof(FRigUnit_MathIntAdd),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntAdd_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntAdd_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntAdd()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntAdd.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathIntAdd.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathIntAdd_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathIntAdd.InnerSingleton;
	}

void FRigUnit_MathIntAdd::Execute(const FRigUnitContext & Context)
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


static_assert(std::is_polymorphic<FRigUnit_MathIntSub>() == std::is_polymorphic<FRigUnit_MathIntBinaryOp>(), "USTRUCT FRigUnit_MathIntSub cannot be polymorphic unless super FRigUnit_MathIntBinaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathIntSub;
class UScriptStruct* FRigUnit_MathIntSub::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntSub.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathIntSub.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathIntSub, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathIntSub"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathIntSub::Execute"), &FRigUnit_MathIntSub::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathIntSub.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathIntSub.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathIntSub>()
{
	return FRigUnit_MathIntSub::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathIntSub_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntSub_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the difference of the two values\n */" },
		{ "DisplayName", "Subtract" },
		{ "Keywords", "-" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
		{ "PrototypeName", "Subtract" },
		{ "ToolTip", "Returns the difference of the two values" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathIntSub_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathIntSub>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathIntSub_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp,
		&NewStructOps,
		"RigUnit_MathIntSub",
		sizeof(FRigUnit_MathIntSub),
		alignof(FRigUnit_MathIntSub),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntSub_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntSub_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntSub()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntSub.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathIntSub.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathIntSub_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathIntSub.InnerSingleton;
	}

void FRigUnit_MathIntSub::Execute(const FRigUnitContext & Context)
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


static_assert(std::is_polymorphic<FRigUnit_MathIntMul>() == std::is_polymorphic<FRigUnit_MathIntBinaryOp>(), "USTRUCT FRigUnit_MathIntMul cannot be polymorphic unless super FRigUnit_MathIntBinaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathIntMul;
class UScriptStruct* FRigUnit_MathIntMul::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntMul.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathIntMul.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathIntMul, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathIntMul"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathIntMul::Execute"), &FRigUnit_MathIntMul::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathIntMul.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathIntMul.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathIntMul>()
{
	return FRigUnit_MathIntMul::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathIntMul_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntMul_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the product of the two values\n */" },
		{ "DisplayName", "Multiply" },
		{ "Keywords", "Product,*" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
		{ "PrototypeName", "Multiply" },
		{ "ToolTip", "Returns the product of the two values" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathIntMul_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathIntMul>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathIntMul_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp,
		&NewStructOps,
		"RigUnit_MathIntMul",
		sizeof(FRigUnit_MathIntMul),
		alignof(FRigUnit_MathIntMul),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntMul_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntMul_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntMul()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntMul.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathIntMul.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathIntMul_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathIntMul.InnerSingleton;
	}

void FRigUnit_MathIntMul::Execute(const FRigUnitContext & Context)
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


static_assert(std::is_polymorphic<FRigUnit_MathIntDiv>() == std::is_polymorphic<FRigUnit_MathIntBinaryOp>(), "USTRUCT FRigUnit_MathIntDiv cannot be polymorphic unless super FRigUnit_MathIntBinaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathIntDiv;
class UScriptStruct* FRigUnit_MathIntDiv::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntDiv.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathIntDiv.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathIntDiv, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathIntDiv"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathIntDiv::Execute"), &FRigUnit_MathIntDiv::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathIntDiv.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathIntDiv.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathIntDiv>()
{
	return FRigUnit_MathIntDiv::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathIntDiv_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntDiv_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the division of the two values\n */" },
		{ "DisplayName", "Divide" },
		{ "Keywords", "Division,Divisor,/" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
		{ "PrototypeName", "Divide" },
		{ "ToolTip", "Returns the division of the two values" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathIntDiv_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathIntDiv>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathIntDiv_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp,
		&NewStructOps,
		"RigUnit_MathIntDiv",
		sizeof(FRigUnit_MathIntDiv),
		alignof(FRigUnit_MathIntDiv),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntDiv_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntDiv_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntDiv()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntDiv.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathIntDiv.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathIntDiv_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathIntDiv.InnerSingleton;
	}

void FRigUnit_MathIntDiv::Execute(const FRigUnitContext & Context)
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


static_assert(std::is_polymorphic<FRigUnit_MathIntMod>() == std::is_polymorphic<FRigUnit_MathIntBinaryOp>(), "USTRUCT FRigUnit_MathIntMod cannot be polymorphic unless super FRigUnit_MathIntBinaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathIntMod;
class UScriptStruct* FRigUnit_MathIntMod::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntMod.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathIntMod.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathIntMod, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathIntMod"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathIntMod::Execute"), &FRigUnit_MathIntMod::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathIntMod.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathIntMod.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathIntMod>()
{
	return FRigUnit_MathIntMod::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathIntMod_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntMod_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the modulo of the two values\n */" },
		{ "DisplayName", "Modulo" },
		{ "Keywords", "%,fmod" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
		{ "PrototypeName", "Modulo" },
		{ "ToolTip", "Returns the modulo of the two values" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathIntMod_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathIntMod>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathIntMod_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp,
		&NewStructOps,
		"RigUnit_MathIntMod",
		sizeof(FRigUnit_MathIntMod),
		alignof(FRigUnit_MathIntMod),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntMod_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntMod_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntMod()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntMod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathIntMod.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathIntMod_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathIntMod.InnerSingleton;
	}

void FRigUnit_MathIntMod::Execute(const FRigUnitContext & Context)
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


static_assert(std::is_polymorphic<FRigUnit_MathIntMin>() == std::is_polymorphic<FRigUnit_MathIntBinaryOp>(), "USTRUCT FRigUnit_MathIntMin cannot be polymorphic unless super FRigUnit_MathIntBinaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathIntMin;
class UScriptStruct* FRigUnit_MathIntMin::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntMin.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathIntMin.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathIntMin, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathIntMin"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathIntMin::Execute"), &FRigUnit_MathIntMin::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathIntMin.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathIntMin.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathIntMin>()
{
	return FRigUnit_MathIntMin::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathIntMin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntMin_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the smaller of the two values\n */" },
		{ "DisplayName", "Minimum" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
		{ "PrototypeName", "Minimum" },
		{ "ToolTip", "Returns the smaller of the two values" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathIntMin_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathIntMin>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathIntMin_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp,
		&NewStructOps,
		"RigUnit_MathIntMin",
		sizeof(FRigUnit_MathIntMin),
		alignof(FRigUnit_MathIntMin),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntMin_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntMin_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntMin()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntMin.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathIntMin.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathIntMin_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathIntMin.InnerSingleton;
	}

void FRigUnit_MathIntMin::Execute(const FRigUnitContext & Context)
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


static_assert(std::is_polymorphic<FRigUnit_MathIntMax>() == std::is_polymorphic<FRigUnit_MathIntBinaryOp>(), "USTRUCT FRigUnit_MathIntMax cannot be polymorphic unless super FRigUnit_MathIntBinaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathIntMax;
class UScriptStruct* FRigUnit_MathIntMax::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntMax.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathIntMax.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathIntMax, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathIntMax"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathIntMax::Execute"), &FRigUnit_MathIntMax::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathIntMax.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathIntMax.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathIntMax>()
{
	return FRigUnit_MathIntMax::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathIntMax_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntMax_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the larger of the two values\n */" },
		{ "DisplayName", "Maximum" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
		{ "PrototypeName", "Maximum" },
		{ "ToolTip", "Returns the larger of the two values" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathIntMax_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathIntMax>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathIntMax_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp,
		&NewStructOps,
		"RigUnit_MathIntMax",
		sizeof(FRigUnit_MathIntMax),
		alignof(FRigUnit_MathIntMax),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntMax_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntMax_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntMax()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntMax.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathIntMax.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathIntMax_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathIntMax.InnerSingleton;
	}

void FRigUnit_MathIntMax::Execute(const FRigUnitContext & Context)
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


static_assert(std::is_polymorphic<FRigUnit_MathIntPow>() == std::is_polymorphic<FRigUnit_MathIntBinaryOp>(), "USTRUCT FRigUnit_MathIntPow cannot be polymorphic unless super FRigUnit_MathIntBinaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathIntPow;
class UScriptStruct* FRigUnit_MathIntPow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntPow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathIntPow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathIntPow, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathIntPow"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathIntPow::Execute"), &FRigUnit_MathIntPow::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathIntPow.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathIntPow.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathIntPow>()
{
	return FRigUnit_MathIntPow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathIntPow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntPow_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the value of A raised to the power of B.\n */" },
		{ "DisplayName", "Power" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
		{ "PrototypeName", "Power" },
		{ "ToolTip", "Returns the value of A raised to the power of B." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathIntPow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathIntPow>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathIntPow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp,
		&NewStructOps,
		"RigUnit_MathIntPow",
		sizeof(FRigUnit_MathIntPow),
		alignof(FRigUnit_MathIntPow),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntPow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntPow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntPow()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntPow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathIntPow.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathIntPow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathIntPow.InnerSingleton;
	}

void FRigUnit_MathIntPow::Execute(const FRigUnitContext & Context)
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


static_assert(std::is_polymorphic<FRigUnit_MathIntNegate>() == std::is_polymorphic<FRigUnit_MathIntUnaryOp>(), "USTRUCT FRigUnit_MathIntNegate cannot be polymorphic unless super FRigUnit_MathIntUnaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathIntNegate;
class UScriptStruct* FRigUnit_MathIntNegate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntNegate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathIntNegate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathIntNegate, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathIntNegate"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathIntNegate::Execute"), &FRigUnit_MathIntNegate::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathIntNegate.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathIntNegate.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathIntNegate>()
{
	return FRigUnit_MathIntNegate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathIntNegate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntNegate_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the negative value\n */" },
		{ "DisplayName", "Negate" },
		{ "Keywords", "-,Abs" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
		{ "PrototypeName", "Negate" },
		{ "ToolTip", "Returns the negative value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathIntNegate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathIntNegate>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathIntNegate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathIntUnaryOp,
		&NewStructOps,
		"RigUnit_MathIntNegate",
		sizeof(FRigUnit_MathIntNegate),
		alignof(FRigUnit_MathIntNegate),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntNegate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntNegate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntNegate()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntNegate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathIntNegate.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathIntNegate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathIntNegate.InnerSingleton;
	}

void FRigUnit_MathIntNegate::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathIntAbs>() == std::is_polymorphic<FRigUnit_MathIntUnaryOp>(), "USTRUCT FRigUnit_MathIntAbs cannot be polymorphic unless super FRigUnit_MathIntUnaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathIntAbs;
class UScriptStruct* FRigUnit_MathIntAbs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntAbs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathIntAbs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathIntAbs, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathIntAbs"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathIntAbs::Execute"), &FRigUnit_MathIntAbs::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathIntAbs.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathIntAbs.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathIntAbs>()
{
	return FRigUnit_MathIntAbs::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathIntAbs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntAbs_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the absolute (positive) value\n */" },
		{ "DisplayName", "Absolute" },
		{ "Keywords", "Abs,Neg" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
		{ "PrototypeName", "Absolute" },
		{ "ToolTip", "Returns the absolute (positive) value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathIntAbs_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathIntAbs>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathIntAbs_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathIntUnaryOp,
		&NewStructOps,
		"RigUnit_MathIntAbs",
		sizeof(FRigUnit_MathIntAbs),
		alignof(FRigUnit_MathIntAbs),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntAbs_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntAbs_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntAbs()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntAbs.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathIntAbs.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathIntAbs_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathIntAbs.InnerSingleton;
	}

void FRigUnit_MathIntAbs::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathIntToFloat>() == std::is_polymorphic<FRigUnit_MathIntBase>(), "USTRUCT FRigUnit_MathIntToFloat cannot be polymorphic unless super FRigUnit_MathIntBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathIntToFloat;
class UScriptStruct* FRigUnit_MathIntToFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntToFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathIntToFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathIntToFloat, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathIntToFloat"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathIntToFloat::Execute"), &FRigUnit_MathIntToFloat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathIntToFloat.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathIntToFloat.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathIntToFloat>()
{
	return FRigUnit_MathIntToFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathIntToFloat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntToFloat_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the int cast to a float\n */" },
		{ "DisplayName", "To Float" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
		{ "PrototypeName", "Convert" },
		{ "ToolTip", "Returns the int cast to a float" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathIntToFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathIntToFloat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntToFloat_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathIntToFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathIntToFloat, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntToFloat_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntToFloat_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntToFloat_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathIntToFloat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathIntToFloat, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntToFloat_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntToFloat_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathIntToFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathIntToFloat_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathIntToFloat_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathIntToFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathIntBase,
		&NewStructOps,
		"RigUnit_MathIntToFloat",
		sizeof(FRigUnit_MathIntToFloat),
		alignof(FRigUnit_MathIntToFloat),
		Z_Construct_UScriptStruct_FRigUnit_MathIntToFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntToFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntToFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntToFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntToFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntToFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathIntToFloat.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathIntToFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathIntToFloat.InnerSingleton;
	}

void FRigUnit_MathIntToFloat::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathIntSign>() == std::is_polymorphic<FRigUnit_MathIntUnaryOp>(), "USTRUCT FRigUnit_MathIntSign cannot be polymorphic unless super FRigUnit_MathIntUnaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathIntSign;
class UScriptStruct* FRigUnit_MathIntSign::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntSign.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathIntSign.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathIntSign, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathIntSign"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathIntSign::Execute"), &FRigUnit_MathIntSign::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathIntSign.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathIntSign.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathIntSign>()
{
	return FRigUnit_MathIntSign::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathIntSign_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntSign_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the sign of the value (+1 for >= 0, -1 for < 0)\n */" },
		{ "DisplayName", "Sign" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
		{ "PrototypeName", "Sign" },
		{ "ToolTip", "Returns the sign of the value (+1 for >= 0, -1 for < 0)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathIntSign_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathIntSign>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathIntSign_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathIntUnaryOp,
		&NewStructOps,
		"RigUnit_MathIntSign",
		sizeof(FRigUnit_MathIntSign),
		alignof(FRigUnit_MathIntSign),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntSign_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntSign_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntSign()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntSign.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathIntSign.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathIntSign_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathIntSign.InnerSingleton;
	}

void FRigUnit_MathIntSign::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathIntClamp>() == std::is_polymorphic<FRigUnit_MathIntBase>(), "USTRUCT FRigUnit_MathIntClamp cannot be polymorphic unless super FRigUnit_MathIntBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathIntClamp;
class UScriptStruct* FRigUnit_MathIntClamp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntClamp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathIntClamp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathIntClamp, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathIntClamp"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathIntClamp::Execute"), &FRigUnit_MathIntClamp::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathIntClamp.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathIntClamp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathIntClamp>()
{
	return FRigUnit_MathIntClamp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Minimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Maximum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Clamps the given value within the range provided by minimum and maximum\n */" },
		{ "DisplayName", "Clamp" },
		{ "Keywords", "Range,Remap" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
		{ "PrototypeName", "Clamp" },
		{ "ToolTip", "Clamps the given value within the range provided by minimum and maximum" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathIntClamp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathIntClamp, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics::NewProp_Minimum_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathIntClamp, Minimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics::NewProp_Minimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics::NewProp_Minimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics::NewProp_Maximum_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathIntClamp, Maximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics::NewProp_Maximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics::NewProp_Maximum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathIntClamp, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics::NewProp_Minimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics::NewProp_Maximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathIntBase,
		&NewStructOps,
		"RigUnit_MathIntClamp",
		sizeof(FRigUnit_MathIntClamp),
		alignof(FRigUnit_MathIntClamp),
		Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntClamp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntClamp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathIntClamp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathIntClamp.InnerSingleton;
	}

void FRigUnit_MathIntClamp::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		Minimum,
		Maximum,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathIntEquals>() == std::is_polymorphic<FRigUnit_MathIntBase>(), "USTRUCT FRigUnit_MathIntEquals cannot be polymorphic unless super FRigUnit_MathIntBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathIntEquals;
class UScriptStruct* FRigUnit_MathIntEquals::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntEquals.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathIntEquals.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathIntEquals, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathIntEquals"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathIntEquals::Execute"), &FRigUnit_MathIntEquals::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathIntEquals.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathIntEquals.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathIntEquals>()
{
	return FRigUnit_MathIntEquals::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathIntEquals_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntEquals_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns true if the value A equals B\n */" },
		{ "DisplayName", "Equals" },
		{ "Keywords", "Same,==" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
		{ "PrototypeName", "Equals" },
		{ "ToolTip", "Returns true if the value A equals B" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathIntEquals_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathIntEquals>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntEquals_Statics::NewProp_A_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathIntEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathIntEquals, A), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntEquals_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntEquals_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntEquals_Statics::NewProp_B_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathIntEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathIntEquals, B), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntEquals_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntEquals_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntEquals_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_MathIntEquals_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigUnit_MathIntEquals*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathIntEquals_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_MathIntEquals), &Z_Construct_UScriptStruct_FRigUnit_MathIntEquals_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntEquals_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntEquals_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathIntEquals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathIntEquals_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathIntEquals_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathIntEquals_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathIntEquals_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathIntBase,
		&NewStructOps,
		"RigUnit_MathIntEquals",
		sizeof(FRigUnit_MathIntEquals),
		alignof(FRigUnit_MathIntEquals),
		Z_Construct_UScriptStruct_FRigUnit_MathIntEquals_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntEquals_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntEquals_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntEquals_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntEquals()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntEquals.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathIntEquals.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathIntEquals_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathIntEquals.InnerSingleton;
	}

void FRigUnit_MathIntEquals::Execute(const FRigUnitContext & Context)
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


static_assert(std::is_polymorphic<FRigUnit_MathIntNotEquals>() == std::is_polymorphic<FRigUnit_MathIntBase>(), "USTRUCT FRigUnit_MathIntNotEquals cannot be polymorphic unless super FRigUnit_MathIntBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathIntNotEquals;
class UScriptStruct* FRigUnit_MathIntNotEquals::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntNotEquals.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathIntNotEquals.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathIntNotEquals"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathIntNotEquals::Execute"), &FRigUnit_MathIntNotEquals::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathIntNotEquals.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathIntNotEquals.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathIntNotEquals>()
{
	return FRigUnit_MathIntNotEquals::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns true if the value A does not equal B\n */" },
		{ "DisplayName", "Not Equals" },
		{ "Keywords", "Different,!=" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
		{ "PrototypeName", "NotEquals" },
		{ "ToolTip", "Returns true if the value A does not equal B" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathIntNotEquals>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals_Statics::NewProp_A_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathIntNotEquals, A), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals_Statics::NewProp_B_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathIntNotEquals, B), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigUnit_MathIntNotEquals*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_MathIntNotEquals), &Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathIntBase,
		&NewStructOps,
		"RigUnit_MathIntNotEquals",
		sizeof(FRigUnit_MathIntNotEquals),
		alignof(FRigUnit_MathIntNotEquals),
		Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntNotEquals.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathIntNotEquals.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathIntNotEquals.InnerSingleton;
	}

void FRigUnit_MathIntNotEquals::Execute(const FRigUnitContext & Context)
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


static_assert(std::is_polymorphic<FRigUnit_MathIntGreater>() == std::is_polymorphic<FRigUnit_MathIntBase>(), "USTRUCT FRigUnit_MathIntGreater cannot be polymorphic unless super FRigUnit_MathIntBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathIntGreater;
class UScriptStruct* FRigUnit_MathIntGreater::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntGreater.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathIntGreater.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathIntGreater, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathIntGreater"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathIntGreater::Execute"), &FRigUnit_MathIntGreater::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathIntGreater.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathIntGreater.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathIntGreater>()
{
	return FRigUnit_MathIntGreater::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathIntGreater_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntGreater_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns true if the value A is greater than B\n */" },
		{ "DisplayName", "Greater" },
		{ "Keywords", "Larger,Bigger,>" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
		{ "PrototypeName", "Greater" },
		{ "ToolTip", "Returns true if the value A is greater than B" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathIntGreater_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathIntGreater>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntGreater_Statics::NewProp_A_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathIntGreater_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathIntGreater, A), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntGreater_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntGreater_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntGreater_Statics::NewProp_B_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathIntGreater_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathIntGreater, B), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntGreater_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntGreater_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntGreater_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_MathIntGreater_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigUnit_MathIntGreater*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathIntGreater_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_MathIntGreater), &Z_Construct_UScriptStruct_FRigUnit_MathIntGreater_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntGreater_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntGreater_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathIntGreater_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathIntGreater_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathIntGreater_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathIntGreater_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathIntGreater_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathIntBase,
		&NewStructOps,
		"RigUnit_MathIntGreater",
		sizeof(FRigUnit_MathIntGreater),
		alignof(FRigUnit_MathIntGreater),
		Z_Construct_UScriptStruct_FRigUnit_MathIntGreater_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntGreater_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntGreater_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntGreater_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntGreater()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntGreater.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathIntGreater.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathIntGreater_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathIntGreater.InnerSingleton;
	}

void FRigUnit_MathIntGreater::Execute(const FRigUnitContext & Context)
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


static_assert(std::is_polymorphic<FRigUnit_MathIntLess>() == std::is_polymorphic<FRigUnit_MathIntBase>(), "USTRUCT FRigUnit_MathIntLess cannot be polymorphic unless super FRigUnit_MathIntBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathIntLess;
class UScriptStruct* FRigUnit_MathIntLess::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntLess.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathIntLess.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathIntLess, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathIntLess"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathIntLess::Execute"), &FRigUnit_MathIntLess::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathIntLess.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathIntLess.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathIntLess>()
{
	return FRigUnit_MathIntLess::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathIntLess_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntLess_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns true if the value A is less than B\n */" },
		{ "DisplayName", "Less" },
		{ "Keywords", "Smaller,<" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
		{ "PrototypeName", "Less" },
		{ "ToolTip", "Returns true if the value A is less than B" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathIntLess_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathIntLess>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntLess_Statics::NewProp_A_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathIntLess_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathIntLess, A), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntLess_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntLess_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntLess_Statics::NewProp_B_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathIntLess_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathIntLess, B), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntLess_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntLess_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntLess_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_MathIntLess_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigUnit_MathIntLess*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathIntLess_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_MathIntLess), &Z_Construct_UScriptStruct_FRigUnit_MathIntLess_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntLess_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntLess_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathIntLess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathIntLess_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathIntLess_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathIntLess_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathIntLess_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathIntBase,
		&NewStructOps,
		"RigUnit_MathIntLess",
		sizeof(FRigUnit_MathIntLess),
		alignof(FRigUnit_MathIntLess),
		Z_Construct_UScriptStruct_FRigUnit_MathIntLess_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntLess_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntLess_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntLess_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntLess()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntLess.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathIntLess.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathIntLess_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathIntLess.InnerSingleton;
	}

void FRigUnit_MathIntLess::Execute(const FRigUnitContext & Context)
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


static_assert(std::is_polymorphic<FRigUnit_MathIntGreaterEqual>() == std::is_polymorphic<FRigUnit_MathIntBase>(), "USTRUCT FRigUnit_MathIntGreaterEqual cannot be polymorphic unless super FRigUnit_MathIntBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathIntGreaterEqual;
class UScriptStruct* FRigUnit_MathIntGreaterEqual::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntGreaterEqual.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathIntGreaterEqual.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathIntGreaterEqual"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathIntGreaterEqual::Execute"), &FRigUnit_MathIntGreaterEqual::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathIntGreaterEqual.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathIntGreaterEqual.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathIntGreaterEqual>()
{
	return FRigUnit_MathIntGreaterEqual::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns true if the value A is greater than or equal to B\n */" },
		{ "DisplayName", "Greater Equal" },
		{ "Keywords", "Larger,Bigger,>=" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
		{ "PrototypeName", "GreaterEqual" },
		{ "ToolTip", "Returns true if the value A is greater than or equal to B" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathIntGreaterEqual>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual_Statics::NewProp_A_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathIntGreaterEqual, A), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual_Statics::NewProp_B_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathIntGreaterEqual, B), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigUnit_MathIntGreaterEqual*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_MathIntGreaterEqual), &Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathIntBase,
		&NewStructOps,
		"RigUnit_MathIntGreaterEqual",
		sizeof(FRigUnit_MathIntGreaterEqual),
		alignof(FRigUnit_MathIntGreaterEqual),
		Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntGreaterEqual.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathIntGreaterEqual.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathIntGreaterEqual.InnerSingleton;
	}

void FRigUnit_MathIntGreaterEqual::Execute(const FRigUnitContext & Context)
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


static_assert(std::is_polymorphic<FRigUnit_MathIntLessEqual>() == std::is_polymorphic<FRigUnit_MathIntBase>(), "USTRUCT FRigUnit_MathIntLessEqual cannot be polymorphic unless super FRigUnit_MathIntBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathIntLessEqual;
class UScriptStruct* FRigUnit_MathIntLessEqual::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntLessEqual.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathIntLessEqual.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathIntLessEqual"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathIntLessEqual::Execute"), &FRigUnit_MathIntLessEqual::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathIntLessEqual.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathIntLessEqual.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathIntLessEqual>()
{
	return FRigUnit_MathIntLessEqual::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns true if the value A is less than or equal to B\n */" },
		{ "DisplayName", "Less Equal" },
		{ "Keywords", "Smaller,<=" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
		{ "PrototypeName", "LessEqual" },
		{ "ToolTip", "Returns true if the value A is less than or equal to B" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathIntLessEqual>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual_Statics::NewProp_A_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathIntLessEqual, A), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual_Statics::NewProp_B_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_MathIntLessEqual, B), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathInt.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigUnit_MathIntLessEqual*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_MathIntLessEqual), &Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathIntBase,
		&NewStructOps,
		"RigUnit_MathIntLessEqual",
		sizeof(FRigUnit_MathIntLessEqual),
		alignof(FRigUnit_MathIntLessEqual),
		Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathIntLessEqual.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathIntLessEqual.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathIntLessEqual.InnerSingleton;
	}

void FRigUnit_MathIntLessEqual::Execute(const FRigUnitContext & Context)
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

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathInt_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathInt_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_MathIntBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathIntBase_Statics::NewStructOps, TEXT("RigUnit_MathIntBase"), &Z_Registration_Info_UScriptStruct_RigUnit_MathIntBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathIntBase), 1212119700U) },
		{ FRigUnit_MathIntUnaryOp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathIntUnaryOp_Statics::NewStructOps, TEXT("RigUnit_MathIntUnaryOp"), &Z_Registration_Info_UScriptStruct_RigUnit_MathIntUnaryOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathIntUnaryOp), 3275558359U) },
		{ FRigUnit_MathIntBinaryOp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp_Statics::NewStructOps, TEXT("RigUnit_MathIntBinaryOp"), &Z_Registration_Info_UScriptStruct_RigUnit_MathIntBinaryOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathIntBinaryOp), 750912450U) },
		{ FRigUnit_MathIntAdd::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathIntAdd_Statics::NewStructOps, TEXT("RigUnit_MathIntAdd"), &Z_Registration_Info_UScriptStruct_RigUnit_MathIntAdd, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathIntAdd), 3857828113U) },
		{ FRigUnit_MathIntSub::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathIntSub_Statics::NewStructOps, TEXT("RigUnit_MathIntSub"), &Z_Registration_Info_UScriptStruct_RigUnit_MathIntSub, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathIntSub), 4789041U) },
		{ FRigUnit_MathIntMul::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathIntMul_Statics::NewStructOps, TEXT("RigUnit_MathIntMul"), &Z_Registration_Info_UScriptStruct_RigUnit_MathIntMul, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathIntMul), 204746869U) },
		{ FRigUnit_MathIntDiv::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathIntDiv_Statics::NewStructOps, TEXT("RigUnit_MathIntDiv"), &Z_Registration_Info_UScriptStruct_RigUnit_MathIntDiv, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathIntDiv), 3932672118U) },
		{ FRigUnit_MathIntMod::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathIntMod_Statics::NewStructOps, TEXT("RigUnit_MathIntMod"), &Z_Registration_Info_UScriptStruct_RigUnit_MathIntMod, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathIntMod), 1695139003U) },
		{ FRigUnit_MathIntMin::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathIntMin_Statics::NewStructOps, TEXT("RigUnit_MathIntMin"), &Z_Registration_Info_UScriptStruct_RigUnit_MathIntMin, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathIntMin), 1960589789U) },
		{ FRigUnit_MathIntMax::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathIntMax_Statics::NewStructOps, TEXT("RigUnit_MathIntMax"), &Z_Registration_Info_UScriptStruct_RigUnit_MathIntMax, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathIntMax), 4072636439U) },
		{ FRigUnit_MathIntPow::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathIntPow_Statics::NewStructOps, TEXT("RigUnit_MathIntPow"), &Z_Registration_Info_UScriptStruct_RigUnit_MathIntPow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathIntPow), 328183746U) },
		{ FRigUnit_MathIntNegate::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathIntNegate_Statics::NewStructOps, TEXT("RigUnit_MathIntNegate"), &Z_Registration_Info_UScriptStruct_RigUnit_MathIntNegate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathIntNegate), 3891761752U) },
		{ FRigUnit_MathIntAbs::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathIntAbs_Statics::NewStructOps, TEXT("RigUnit_MathIntAbs"), &Z_Registration_Info_UScriptStruct_RigUnit_MathIntAbs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathIntAbs), 2075277017U) },
		{ FRigUnit_MathIntToFloat::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathIntToFloat_Statics::NewStructOps, TEXT("RigUnit_MathIntToFloat"), &Z_Registration_Info_UScriptStruct_RigUnit_MathIntToFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathIntToFloat), 441311681U) },
		{ FRigUnit_MathIntSign::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathIntSign_Statics::NewStructOps, TEXT("RigUnit_MathIntSign"), &Z_Registration_Info_UScriptStruct_RigUnit_MathIntSign, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathIntSign), 35092457U) },
		{ FRigUnit_MathIntClamp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics::NewStructOps, TEXT("RigUnit_MathIntClamp"), &Z_Registration_Info_UScriptStruct_RigUnit_MathIntClamp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathIntClamp), 1104155258U) },
		{ FRigUnit_MathIntEquals::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathIntEquals_Statics::NewStructOps, TEXT("RigUnit_MathIntEquals"), &Z_Registration_Info_UScriptStruct_RigUnit_MathIntEquals, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathIntEquals), 1841931267U) },
		{ FRigUnit_MathIntNotEquals::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals_Statics::NewStructOps, TEXT("RigUnit_MathIntNotEquals"), &Z_Registration_Info_UScriptStruct_RigUnit_MathIntNotEquals, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathIntNotEquals), 1731875039U) },
		{ FRigUnit_MathIntGreater::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathIntGreater_Statics::NewStructOps, TEXT("RigUnit_MathIntGreater"), &Z_Registration_Info_UScriptStruct_RigUnit_MathIntGreater, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathIntGreater), 1029524545U) },
		{ FRigUnit_MathIntLess::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathIntLess_Statics::NewStructOps, TEXT("RigUnit_MathIntLess"), &Z_Registration_Info_UScriptStruct_RigUnit_MathIntLess, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathIntLess), 1608284557U) },
		{ FRigUnit_MathIntGreaterEqual::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual_Statics::NewStructOps, TEXT("RigUnit_MathIntGreaterEqual"), &Z_Registration_Info_UScriptStruct_RigUnit_MathIntGreaterEqual, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathIntGreaterEqual), 1707770455U) },
		{ FRigUnit_MathIntLessEqual::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual_Statics::NewStructOps, TEXT("RigUnit_MathIntLessEqual"), &Z_Registration_Info_UScriptStruct_RigUnit_MathIntLessEqual, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathIntLessEqual), 77236116U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathInt_h_2702656467(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathInt_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathInt_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
