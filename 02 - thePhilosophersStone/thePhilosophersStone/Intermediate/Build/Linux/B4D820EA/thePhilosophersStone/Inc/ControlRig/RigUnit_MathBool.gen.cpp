// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Math/RigUnit_MathBool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_MathBool() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBoolBase();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBoolConstant();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBoolUnaryOp();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBoolConstTrue();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBoolConstFalse();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBoolNot();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBoolAnd();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBoolNand();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBoolOr();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_MathBoolBase>() == std::is_polymorphic<FRigUnit_MathBase>(), "USTRUCT FRigUnit_MathBoolBase cannot be polymorphic unless super FRigUnit_MathBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathBoolBase;
class UScriptStruct* FRigUnit_MathBoolBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathBoolBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathBoolBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathBoolBase, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathBoolBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathBoolBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathBoolBase>()
{
	return FRigUnit_MathBoolBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathBoolBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathBoolBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Math|Boolean" },
		{ "MenuDescSuffix", "(Bool)" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathBool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathBoolBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathBoolBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathBoolBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathBase,
		&NewStructOps,
		"RigUnit_MathBoolBase",
		sizeof(FRigUnit_MathBoolBase),
		alignof(FRigUnit_MathBoolBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathBoolBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBoolBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathBoolBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathBoolBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathBoolBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathBoolBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathBoolConstant>() == std::is_polymorphic<FRigUnit_MathBoolBase>(), "USTRUCT FRigUnit_MathBoolConstant cannot be polymorphic unless super FRigUnit_MathBoolBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathBoolConstant;
class UScriptStruct* FRigUnit_MathBoolConstant::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathBoolConstant.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathBoolConstant.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathBoolConstant, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathBoolConstant"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathBoolConstant.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathBoolConstant>()
{
	return FRigUnit_MathBoolConstant::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathBoolConstant_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathBoolConstant_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathBool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathBoolConstant_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathBoolConstant>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathBoolConstant_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathBool.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_MathBoolConstant_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((FRigUnit_MathBoolConstant*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathBoolConstant_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_MathBoolConstant), &Z_Construct_UScriptStruct_FRigUnit_MathBoolConstant_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathBoolConstant_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolConstant_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathBoolConstant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathBoolConstant_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathBoolConstant_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathBoolBase,
		&NewStructOps,
		"RigUnit_MathBoolConstant",
		sizeof(FRigUnit_MathBoolConstant),
		alignof(FRigUnit_MathBoolConstant),
		Z_Construct_UScriptStruct_FRigUnit_MathBoolConstant_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolConstant_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathBoolConstant_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolConstant_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBoolConstant()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathBoolConstant.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathBoolConstant.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathBoolConstant_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathBoolConstant.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathBoolUnaryOp>() == std::is_polymorphic<FRigUnit_MathBoolBase>(), "USTRUCT FRigUnit_MathBoolUnaryOp cannot be polymorphic unless super FRigUnit_MathBoolBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathBoolUnaryOp;
class UScriptStruct* FRigUnit_MathBoolUnaryOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathBoolUnaryOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathBoolUnaryOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathBoolUnaryOp, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathBoolUnaryOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathBoolUnaryOp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathBoolUnaryOp>()
{
	return FRigUnit_MathBoolUnaryOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathBoolUnaryOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathBoolUnaryOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathBool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathBoolUnaryOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathBoolUnaryOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathBoolUnaryOp_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathBool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_MathBoolUnaryOp_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((FRigUnit_MathBoolUnaryOp*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathBoolUnaryOp_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_MathBoolUnaryOp), &Z_Construct_UScriptStruct_FRigUnit_MathBoolUnaryOp_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathBoolUnaryOp_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolUnaryOp_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathBoolUnaryOp_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathBool.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_MathBoolUnaryOp_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigUnit_MathBoolUnaryOp*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathBoolUnaryOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_MathBoolUnaryOp), &Z_Construct_UScriptStruct_FRigUnit_MathBoolUnaryOp_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathBoolUnaryOp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolUnaryOp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathBoolUnaryOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathBoolUnaryOp_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathBoolUnaryOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathBoolUnaryOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathBoolBase,
		&NewStructOps,
		"RigUnit_MathBoolUnaryOp",
		sizeof(FRigUnit_MathBoolUnaryOp),
		alignof(FRigUnit_MathBoolUnaryOp),
		Z_Construct_UScriptStruct_FRigUnit_MathBoolUnaryOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolUnaryOp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathBoolUnaryOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolUnaryOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBoolUnaryOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathBoolUnaryOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathBoolUnaryOp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathBoolUnaryOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathBoolUnaryOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathBoolBinaryOp>() == std::is_polymorphic<FRigUnit_MathBoolBase>(), "USTRUCT FRigUnit_MathBoolBinaryOp cannot be polymorphic unless super FRigUnit_MathBoolBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathBoolBinaryOp;
class UScriptStruct* FRigUnit_MathBoolBinaryOp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathBoolBinaryOp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathBoolBinaryOp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathBoolBinaryOp"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathBoolBinaryOp.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathBoolBinaryOp>()
{
	return FRigUnit_MathBoolBinaryOp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static void NewProp_A_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static void NewProp_B_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathBool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathBoolBinaryOp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics::NewProp_A_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathBool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics::NewProp_A_SetBit(void* Obj)
	{
		((FRigUnit_MathBoolBinaryOp*)Obj)->A = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_MathBoolBinaryOp), &Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics::NewProp_A_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics::NewProp_B_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathBool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics::NewProp_B_SetBit(void* Obj)
	{
		((FRigUnit_MathBoolBinaryOp*)Obj)->B = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_MathBoolBinaryOp), &Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics::NewProp_B_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathBool.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigUnit_MathBoolBinaryOp*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_MathBoolBinaryOp), &Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathBoolBase,
		&NewStructOps,
		"RigUnit_MathBoolBinaryOp",
		sizeof(FRigUnit_MathBoolBinaryOp),
		alignof(FRigUnit_MathBoolBinaryOp),
		Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathBoolBinaryOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathBoolBinaryOp.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathBoolBinaryOp.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MathBoolConstTrue>() == std::is_polymorphic<FRigUnit_MathBoolConstant>(), "USTRUCT FRigUnit_MathBoolConstTrue cannot be polymorphic unless super FRigUnit_MathBoolConstant is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathBoolConstTrue;
class UScriptStruct* FRigUnit_MathBoolConstTrue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathBoolConstTrue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathBoolConstTrue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathBoolConstTrue, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathBoolConstTrue"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathBoolConstTrue::Execute"), &FRigUnit_MathBoolConstTrue::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathBoolConstTrue.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathBoolConstTrue.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathBoolConstTrue>()
{
	return FRigUnit_MathBoolConstTrue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathBoolConstTrue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathBoolConstTrue_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns true\n */" },
		{ "DisplayName", "True" },
		{ "Keywords", "Yes" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathBool.h" },
		{ "ToolTip", "Returns true" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathBoolConstTrue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathBoolConstTrue>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathBoolConstTrue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathBoolConstant,
		&NewStructOps,
		"RigUnit_MathBoolConstTrue",
		sizeof(FRigUnit_MathBoolConstTrue),
		alignof(FRigUnit_MathBoolConstTrue),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathBoolConstTrue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolConstTrue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBoolConstTrue()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathBoolConstTrue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathBoolConstTrue.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathBoolConstTrue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathBoolConstTrue.InnerSingleton;
	}

void FRigUnit_MathBoolConstTrue::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathBoolConstFalse>() == std::is_polymorphic<FRigUnit_MathBoolConstant>(), "USTRUCT FRigUnit_MathBoolConstFalse cannot be polymorphic unless super FRigUnit_MathBoolConstant is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathBoolConstFalse;
class UScriptStruct* FRigUnit_MathBoolConstFalse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathBoolConstFalse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathBoolConstFalse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathBoolConstFalse, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathBoolConstFalse"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathBoolConstFalse::Execute"), &FRigUnit_MathBoolConstFalse::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathBoolConstFalse.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathBoolConstFalse.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathBoolConstFalse>()
{
	return FRigUnit_MathBoolConstFalse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathBoolConstFalse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathBoolConstFalse_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns false\n */" },
		{ "DisplayName", "False" },
		{ "Keywords", "No" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathBool.h" },
		{ "ToolTip", "Returns false" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathBoolConstFalse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathBoolConstFalse>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathBoolConstFalse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathBoolConstant,
		&NewStructOps,
		"RigUnit_MathBoolConstFalse",
		sizeof(FRigUnit_MathBoolConstFalse),
		alignof(FRigUnit_MathBoolConstFalse),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathBoolConstFalse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolConstFalse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBoolConstFalse()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathBoolConstFalse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathBoolConstFalse.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathBoolConstFalse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathBoolConstFalse.InnerSingleton;
	}

void FRigUnit_MathBoolConstFalse::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathBoolNot>() == std::is_polymorphic<FRigUnit_MathBoolUnaryOp>(), "USTRUCT FRigUnit_MathBoolNot cannot be polymorphic unless super FRigUnit_MathBoolUnaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathBoolNot;
class UScriptStruct* FRigUnit_MathBoolNot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathBoolNot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathBoolNot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathBoolNot, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathBoolNot"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathBoolNot::Execute"), &FRigUnit_MathBoolNot::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathBoolNot.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathBoolNot.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathBoolNot>()
{
	return FRigUnit_MathBoolNot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathBoolNot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathBoolNot_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns true if the condition is false\n */" },
		{ "DisplayName", "Not" },
		{ "Keywords", "!" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathBool.h" },
		{ "PrototypeName", "Not" },
		{ "ToolTip", "Returns true if the condition is false" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathBoolNot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathBoolNot>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathBoolNot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathBoolUnaryOp,
		&NewStructOps,
		"RigUnit_MathBoolNot",
		sizeof(FRigUnit_MathBoolNot),
		alignof(FRigUnit_MathBoolNot),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathBoolNot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolNot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBoolNot()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathBoolNot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathBoolNot.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathBoolNot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathBoolNot.InnerSingleton;
	}

void FRigUnit_MathBoolNot::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_MathBoolAnd>() == std::is_polymorphic<FRigUnit_MathBoolBinaryOp>(), "USTRUCT FRigUnit_MathBoolAnd cannot be polymorphic unless super FRigUnit_MathBoolBinaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathBoolAnd;
class UScriptStruct* FRigUnit_MathBoolAnd::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathBoolAnd.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathBoolAnd.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathBoolAnd, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathBoolAnd"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathBoolAnd::Execute"), &FRigUnit_MathBoolAnd::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathBoolAnd.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathBoolAnd.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathBoolAnd>()
{
	return FRigUnit_MathBoolAnd::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathBoolAnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathBoolAnd_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns true if both conditions are true\n */" },
		{ "DisplayName", "And" },
		{ "Keywords", "&&" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathBool.h" },
		{ "PrototypeName", "And" },
		{ "ToolTip", "Returns true if both conditions are true" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathBoolAnd_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathBoolAnd>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathBoolAnd_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp,
		&NewStructOps,
		"RigUnit_MathBoolAnd",
		sizeof(FRigUnit_MathBoolAnd),
		alignof(FRigUnit_MathBoolAnd),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathBoolAnd_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolAnd_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBoolAnd()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathBoolAnd.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathBoolAnd.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathBoolAnd_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathBoolAnd.InnerSingleton;
	}

void FRigUnit_MathBoolAnd::Execute(const FRigUnitContext & Context)
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


static_assert(std::is_polymorphic<FRigUnit_MathBoolNand>() == std::is_polymorphic<FRigUnit_MathBoolBinaryOp>(), "USTRUCT FRigUnit_MathBoolNand cannot be polymorphic unless super FRigUnit_MathBoolBinaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathBoolNand;
class UScriptStruct* FRigUnit_MathBoolNand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathBoolNand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathBoolNand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathBoolNand, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathBoolNand"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathBoolNand::Execute"), &FRigUnit_MathBoolNand::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathBoolNand.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathBoolNand.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathBoolNand>()
{
	return FRigUnit_MathBoolNand::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathBoolNand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathBoolNand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns true if both conditions are false\n */" },
		{ "DisplayName", "Nand" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathBool.h" },
		{ "PrototypeName", "Nand" },
		{ "ToolTip", "Returns true if both conditions are false" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathBoolNand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathBoolNand>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathBoolNand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp,
		&NewStructOps,
		"RigUnit_MathBoolNand",
		sizeof(FRigUnit_MathBoolNand),
		alignof(FRigUnit_MathBoolNand),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathBoolNand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolNand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBoolNand()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathBoolNand.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathBoolNand.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathBoolNand_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathBoolNand.InnerSingleton;
	}

void FRigUnit_MathBoolNand::Execute(const FRigUnitContext & Context)
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


static_assert(std::is_polymorphic<FRigUnit_MathBoolOr>() == std::is_polymorphic<FRigUnit_MathBoolBinaryOp>(), "USTRUCT FRigUnit_MathBoolOr cannot be polymorphic unless super FRigUnit_MathBoolBinaryOp is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathBoolOr;
class UScriptStruct* FRigUnit_MathBoolOr::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathBoolOr.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathBoolOr.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathBoolOr, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathBoolOr"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathBoolOr::Execute"), &FRigUnit_MathBoolOr::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathBoolOr.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathBoolOr.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathBoolOr>()
{
	return FRigUnit_MathBoolOr::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathBoolOr_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathBoolOr_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns true if one of the conditions is true\n */" },
		{ "DisplayName", "Or" },
		{ "Keywords", "||" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathBool.h" },
		{ "PrototypeName", "Or" },
		{ "ToolTip", "Returns true if one of the conditions is true" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathBoolOr_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathBoolOr>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathBoolOr_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp,
		&NewStructOps,
		"RigUnit_MathBoolOr",
		sizeof(FRigUnit_MathBoolOr),
		alignof(FRigUnit_MathBoolOr),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathBoolOr_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolOr_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBoolOr()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathBoolOr.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathBoolOr.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathBoolOr_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathBoolOr.InnerSingleton;
	}

void FRigUnit_MathBoolOr::Execute(const FRigUnitContext & Context)
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


static_assert(std::is_polymorphic<FRigUnit_MathBoolEquals>() == std::is_polymorphic<FRigUnit_MathBoolBase>(), "USTRUCT FRigUnit_MathBoolEquals cannot be polymorphic unless super FRigUnit_MathBoolBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathBoolEquals;
class UScriptStruct* FRigUnit_MathBoolEquals::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathBoolEquals.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathBoolEquals.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathBoolEquals"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathBoolEquals::Execute"), &FRigUnit_MathBoolEquals::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathBoolEquals.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathBoolEquals.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathBoolEquals>()
{
	return FRigUnit_MathBoolEquals::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static void NewProp_A_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static void NewProp_B_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns true if the value A equals B\n */" },
		{ "DisplayName", "Equals" },
		{ "Keywords", "Same,==" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathBool.h" },
		{ "PrototypeName", "Equals" },
		{ "ToolTip", "Returns true if the value A equals B" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathBoolEquals>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics::NewProp_A_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathBool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics::NewProp_A_SetBit(void* Obj)
	{
		((FRigUnit_MathBoolEquals*)Obj)->A = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_MathBoolEquals), &Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics::NewProp_A_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics::NewProp_B_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathBool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics::NewProp_B_SetBit(void* Obj)
	{
		((FRigUnit_MathBoolEquals*)Obj)->B = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_MathBoolEquals), &Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics::NewProp_B_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathBool.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigUnit_MathBoolEquals*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_MathBoolEquals), &Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathBoolBase,
		&NewStructOps,
		"RigUnit_MathBoolEquals",
		sizeof(FRigUnit_MathBoolEquals),
		alignof(FRigUnit_MathBoolEquals),
		Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathBoolEquals.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathBoolEquals.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathBoolEquals.InnerSingleton;
	}

void FRigUnit_MathBoolEquals::Execute(const FRigUnitContext & Context)
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


static_assert(std::is_polymorphic<FRigUnit_MathBoolNotEquals>() == std::is_polymorphic<FRigUnit_MathBoolBase>(), "USTRUCT FRigUnit_MathBoolNotEquals cannot be polymorphic unless super FRigUnit_MathBoolBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathBoolNotEquals;
class UScriptStruct* FRigUnit_MathBoolNotEquals::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathBoolNotEquals.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathBoolNotEquals.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathBoolNotEquals"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathBoolNotEquals::Execute"), &FRigUnit_MathBoolNotEquals::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathBoolNotEquals.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathBoolNotEquals.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathBoolNotEquals>()
{
	return FRigUnit_MathBoolNotEquals::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static void NewProp_A_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static void NewProp_B_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns true if the value A does not equal B\n */" },
		{ "DisplayName", "Not Equals" },
		{ "Keywords", "Different,!=,Xor" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathBool.h" },
		{ "PrototypeName", "NotEquals" },
		{ "ToolTip", "Returns true if the value A does not equal B" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathBoolNotEquals>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics::NewProp_A_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathBool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics::NewProp_A_SetBit(void* Obj)
	{
		((FRigUnit_MathBoolNotEquals*)Obj)->A = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_MathBoolNotEquals), &Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics::NewProp_A_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics::NewProp_B_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathBool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics::NewProp_B_SetBit(void* Obj)
	{
		((FRigUnit_MathBoolNotEquals*)Obj)->B = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_MathBoolNotEquals), &Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics::NewProp_B_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathBool.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigUnit_MathBoolNotEquals*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_MathBoolNotEquals), &Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathBoolBase,
		&NewStructOps,
		"RigUnit_MathBoolNotEquals",
		sizeof(FRigUnit_MathBoolNotEquals),
		alignof(FRigUnit_MathBoolNotEquals),
		Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathBoolNotEquals.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathBoolNotEquals.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathBoolNotEquals.InnerSingleton;
	}

void FRigUnit_MathBoolNotEquals::Execute(const FRigUnitContext & Context)
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


static_assert(std::is_polymorphic<FRigUnit_MathBoolToggled>() == std::is_polymorphic<FRigUnit_MathBoolBase>(), "USTRUCT FRigUnit_MathBoolToggled cannot be polymorphic unless super FRigUnit_MathBoolBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MathBoolToggled;
class UScriptStruct* FRigUnit_MathBoolToggled::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MathBoolToggled.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MathBoolToggled.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MathBoolToggled"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MathBoolToggled::Execute"), &FRigUnit_MathBoolToggled::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MathBoolToggled.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MathBoolToggled.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MathBoolToggled>()
{
	return FRigUnit_MathBoolToggled::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Toggled_MetaData[];
#endif
		static void NewProp_Toggled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Toggled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Initialized_MetaData[];
#endif
		static void NewProp_Initialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Initialized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastValue_MetaData[];
#endif
		static void NewProp_LastValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LastValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Returns true if the value has changed from the last run\n*/" },
		{ "DisplayName", "Toggled" },
		{ "Keywords", "Changed,Different" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathBool.h" },
		{ "PrototypeName", "Toggled" },
		{ "ToolTip", "Returns true if the value has changed from the last run" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MathBoolToggled>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathBool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((FRigUnit_MathBoolToggled*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_MathBoolToggled), &Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::NewProp_Toggled_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathBool.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::NewProp_Toggled_SetBit(void* Obj)
	{
		((FRigUnit_MathBoolToggled*)Obj)->Toggled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::NewProp_Toggled = { "Toggled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_MathBoolToggled), &Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::NewProp_Toggled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::NewProp_Toggled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::NewProp_Toggled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::NewProp_Initialized_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathBool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::NewProp_Initialized_SetBit(void* Obj)
	{
		((FRigUnit_MathBoolToggled*)Obj)->Initialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::NewProp_Initialized = { "Initialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_MathBoolToggled), &Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::NewProp_Initialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::NewProp_Initialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::NewProp_Initialized_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::NewProp_LastValue_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Math/RigUnit_MathBool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::NewProp_LastValue_SetBit(void* Obj)
	{
		((FRigUnit_MathBoolToggled*)Obj)->LastValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::NewProp_LastValue = { "LastValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_MathBoolToggled), &Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::NewProp_LastValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::NewProp_LastValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::NewProp_LastValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::NewProp_Toggled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::NewProp_Initialized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::NewProp_LastValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_MathBoolBase,
		&NewStructOps,
		"RigUnit_MathBoolToggled",
		sizeof(FRigUnit_MathBoolToggled),
		alignof(FRigUnit_MathBoolToggled),
		Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MathBoolToggled.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MathBoolToggled.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MathBoolToggled.InnerSingleton;
	}

void FRigUnit_MathBoolToggled::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		Toggled,
		Initialized,
		LastValue,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_MathBoolBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathBoolBase_Statics::NewStructOps, TEXT("RigUnit_MathBoolBase"), &Z_Registration_Info_UScriptStruct_RigUnit_MathBoolBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathBoolBase), 283564884U) },
		{ FRigUnit_MathBoolConstant::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathBoolConstant_Statics::NewStructOps, TEXT("RigUnit_MathBoolConstant"), &Z_Registration_Info_UScriptStruct_RigUnit_MathBoolConstant, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathBoolConstant), 903816472U) },
		{ FRigUnit_MathBoolUnaryOp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathBoolUnaryOp_Statics::NewStructOps, TEXT("RigUnit_MathBoolUnaryOp"), &Z_Registration_Info_UScriptStruct_RigUnit_MathBoolUnaryOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathBoolUnaryOp), 3798451566U) },
		{ FRigUnit_MathBoolBinaryOp::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics::NewStructOps, TEXT("RigUnit_MathBoolBinaryOp"), &Z_Registration_Info_UScriptStruct_RigUnit_MathBoolBinaryOp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathBoolBinaryOp), 2129670003U) },
		{ FRigUnit_MathBoolConstTrue::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathBoolConstTrue_Statics::NewStructOps, TEXT("RigUnit_MathBoolConstTrue"), &Z_Registration_Info_UScriptStruct_RigUnit_MathBoolConstTrue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathBoolConstTrue), 399831458U) },
		{ FRigUnit_MathBoolConstFalse::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathBoolConstFalse_Statics::NewStructOps, TEXT("RigUnit_MathBoolConstFalse"), &Z_Registration_Info_UScriptStruct_RigUnit_MathBoolConstFalse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathBoolConstFalse), 2606940139U) },
		{ FRigUnit_MathBoolNot::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathBoolNot_Statics::NewStructOps, TEXT("RigUnit_MathBoolNot"), &Z_Registration_Info_UScriptStruct_RigUnit_MathBoolNot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathBoolNot), 3947517146U) },
		{ FRigUnit_MathBoolAnd::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathBoolAnd_Statics::NewStructOps, TEXT("RigUnit_MathBoolAnd"), &Z_Registration_Info_UScriptStruct_RigUnit_MathBoolAnd, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathBoolAnd), 3417079502U) },
		{ FRigUnit_MathBoolNand::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathBoolNand_Statics::NewStructOps, TEXT("RigUnit_MathBoolNand"), &Z_Registration_Info_UScriptStruct_RigUnit_MathBoolNand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathBoolNand), 3551744867U) },
		{ FRigUnit_MathBoolOr::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathBoolOr_Statics::NewStructOps, TEXT("RigUnit_MathBoolOr"), &Z_Registration_Info_UScriptStruct_RigUnit_MathBoolOr, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathBoolOr), 4242603327U) },
		{ FRigUnit_MathBoolEquals::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics::NewStructOps, TEXT("RigUnit_MathBoolEquals"), &Z_Registration_Info_UScriptStruct_RigUnit_MathBoolEquals, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathBoolEquals), 1505832423U) },
		{ FRigUnit_MathBoolNotEquals::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics::NewStructOps, TEXT("RigUnit_MathBoolNotEquals"), &Z_Registration_Info_UScriptStruct_RigUnit_MathBoolNotEquals, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathBoolNotEquals), 2010954189U) },
		{ FRigUnit_MathBoolToggled::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics::NewStructOps, TEXT("RigUnit_MathBoolToggled"), &Z_Registration_Info_UScriptStruct_RigUnit_MathBoolToggled, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MathBoolToggled), 3241855489U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_434736891(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
