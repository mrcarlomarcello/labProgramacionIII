// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Core/RigUnit_Name.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_Name() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_NameBase();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_NameConcat();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_NameTruncate();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_NameReplace();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_EndsWith();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StartsWith();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Contains();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_NameBase>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_NameBase cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_NameBase;
class UScriptStruct* FRigUnit_NameBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_NameBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_NameBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_NameBase, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_NameBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_NameBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_NameBase>()
{
	return FRigUnit_NameBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_NameBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NameBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Core|Name" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_Name.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_NameBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_NameBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_NameBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_NameBase",
		sizeof(FRigUnit_NameBase),
		alignof(FRigUnit_NameBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NameBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NameBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_NameBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_NameBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_NameBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_NameBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_NameBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_NameConcat>() == std::is_polymorphic<FRigUnit_NameBase>(), "USTRUCT FRigUnit_NameConcat cannot be polymorphic unless super FRigUnit_NameBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_NameConcat;
class UScriptStruct* FRigUnit_NameConcat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_NameConcat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_NameConcat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_NameConcat, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_NameConcat"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_NameConcat::Execute"), &FRigUnit_NameConcat::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_NameConcat.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_NameConcat.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_NameConcat>()
{
	return FRigUnit_NameConcat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_NameConcat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NameConcat_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Concatenates two strings together to make a new string\n */" },
		{ "DisplayName", "Concat" },
		{ "Keywords", "Add,+,Combine,Merge,Append" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_Name.h" },
		{ "ToolTip", "Concatenates two strings together to make a new string" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_NameConcat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_NameConcat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NameConcat_Statics::NewProp_A_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_Name.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_NameConcat_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_NameConcat, A), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NameConcat_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NameConcat_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NameConcat_Statics::NewProp_B_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_Name.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_NameConcat_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_NameConcat, B), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NameConcat_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NameConcat_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NameConcat_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_Name.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_NameConcat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_NameConcat, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NameConcat_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NameConcat_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_NameConcat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NameConcat_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NameConcat_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NameConcat_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_NameConcat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_NameBase,
		&NewStructOps,
		"RigUnit_NameConcat",
		sizeof(FRigUnit_NameConcat),
		alignof(FRigUnit_NameConcat),
		Z_Construct_UScriptStruct_FRigUnit_NameConcat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NameConcat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NameConcat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NameConcat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_NameConcat()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_NameConcat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_NameConcat.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_NameConcat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_NameConcat.InnerSingleton;
	}

void FRigUnit_NameConcat::Execute(const FRigUnitContext & Context)
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


static_assert(std::is_polymorphic<FRigUnit_NameTruncate>() == std::is_polymorphic<FRigUnit_NameBase>(), "USTRUCT FRigUnit_NameTruncate cannot be polymorphic unless super FRigUnit_NameBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_NameTruncate;
class UScriptStruct* FRigUnit_NameTruncate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_NameTruncate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_NameTruncate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_NameTruncate, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_NameTruncate"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_NameTruncate::Execute"), &FRigUnit_NameTruncate::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_NameTruncate.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_NameTruncate.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_NameTruncate>()
{
	return FRigUnit_NameTruncate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromEnd_MetaData[];
#endif
		static void NewProp_FromEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FromEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Remainder_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Remainder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Chopped_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Chopped;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the left or right most characters from the string chopping the given number of characters from the start or the end\n */" },
		{ "DisplayName", "Chop" },
		{ "Keywords", "Truncate,-,Remove,Subtract,Split" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_Name.h" },
		{ "ToolTip", "Returns the left or right most characters from the string chopping the given number of characters from the start or the end" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_NameTruncate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::NewProp_Name_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_Name.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_NameTruncate, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::NewProp_Count_MetaData[] = {
		{ "Comment", "// Number of characters to remove from left or right\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_Name.h" },
		{ "ToolTip", "Number of characters to remove from left or right" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_NameTruncate, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::NewProp_FromEnd_MetaData[] = {
		{ "Comment", "// if set to true the characters will be removed from the end\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_Name.h" },
		{ "ToolTip", "if set to true the characters will be removed from the end" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::NewProp_FromEnd_SetBit(void* Obj)
	{
		((FRigUnit_NameTruncate*)Obj)->FromEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::NewProp_FromEnd = { "FromEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_NameTruncate), &Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::NewProp_FromEnd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::NewProp_FromEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::NewProp_FromEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::NewProp_Remainder_MetaData[] = {
		{ "Comment", "// the part of the string without the chopped characters\n" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_Name.h" },
		{ "Output", "" },
		{ "ToolTip", "the part of the string without the chopped characters" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::NewProp_Remainder = { "Remainder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_NameTruncate, Remainder), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::NewProp_Remainder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::NewProp_Remainder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::NewProp_Chopped_MetaData[] = {
		{ "Comment", "// the part of the name that has been chopped off\n" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_Name.h" },
		{ "Output", "" },
		{ "ToolTip", "the part of the name that has been chopped off" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::NewProp_Chopped = { "Chopped", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_NameTruncate, Chopped), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::NewProp_Chopped_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::NewProp_Chopped_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::NewProp_FromEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::NewProp_Remainder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::NewProp_Chopped,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_NameBase,
		&NewStructOps,
		"RigUnit_NameTruncate",
		sizeof(FRigUnit_NameTruncate),
		alignof(FRigUnit_NameTruncate),
		Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_NameTruncate()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_NameTruncate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_NameTruncate.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_NameTruncate.InnerSingleton;
	}

void FRigUnit_NameTruncate::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Name,
		Count,
		FromEnd,
		Remainder,
		Chopped,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_NameReplace>() == std::is_polymorphic<FRigUnit_NameBase>(), "USTRUCT FRigUnit_NameReplace cannot be polymorphic unless super FRigUnit_NameBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_NameReplace;
class UScriptStruct* FRigUnit_NameReplace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_NameReplace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_NameReplace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_NameReplace, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_NameReplace"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_NameReplace::Execute"), &FRigUnit_NameReplace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_NameReplace.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_NameReplace.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_NameReplace>()
{
	return FRigUnit_NameReplace::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Old_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Old;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_New_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_New;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Replace all occurrences of a substring in this string\n */" },
		{ "DisplayName", "Replace" },
		{ "Keywords", "Search,Emplace,Find" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_Name.h" },
		{ "ToolTip", "Replace all occurrences of a substring in this string" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_NameReplace>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics::NewProp_Name_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_Name.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_NameReplace, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics::NewProp_Old_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_Name.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics::NewProp_Old = { "Old", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_NameReplace, Old), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics::NewProp_Old_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics::NewProp_Old_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics::NewProp_New_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_Name.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics::NewProp_New = { "New", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_NameReplace, New), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics::NewProp_New_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics::NewProp_New_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_Name.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_NameReplace, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics::NewProp_Old,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics::NewProp_New,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_NameBase,
		&NewStructOps,
		"RigUnit_NameReplace",
		sizeof(FRigUnit_NameReplace),
		alignof(FRigUnit_NameReplace),
		Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_NameReplace()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_NameReplace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_NameReplace.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_NameReplace.InnerSingleton;
	}

void FRigUnit_NameReplace::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Name,
		Old,
		New,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_EndsWith>() == std::is_polymorphic<FRigUnit_NameBase>(), "USTRUCT FRigUnit_EndsWith cannot be polymorphic unless super FRigUnit_NameBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_EndsWith;
class UScriptStruct* FRigUnit_EndsWith::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_EndsWith.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_EndsWith.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_EndsWith, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_EndsWith"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_EndsWith::Execute"), &FRigUnit_EndsWith::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_EndsWith.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_EndsWith.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_EndsWith>()
{
	return FRigUnit_EndsWith::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_EndsWith_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ending_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Ending;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_EndsWith_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Tests whether this string ends with given string\n */" },
		{ "DisplayName", "Ends With" },
		{ "Keywords", "Right" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_Name.h" },
		{ "ToolTip", "Tests whether this string ends with given string" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_EndsWith_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_EndsWith>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_EndsWith_Statics::NewProp_Name_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_Name.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_EndsWith_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_EndsWith, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_EndsWith_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_EndsWith_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_EndsWith_Statics::NewProp_Ending_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_Name.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_EndsWith_Statics::NewProp_Ending = { "Ending", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_EndsWith, Ending), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_EndsWith_Statics::NewProp_Ending_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_EndsWith_Statics::NewProp_Ending_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_EndsWith_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_Name.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_EndsWith_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigUnit_EndsWith*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_EndsWith_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_EndsWith), &Z_Construct_UScriptStruct_FRigUnit_EndsWith_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_EndsWith_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_EndsWith_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_EndsWith_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_EndsWith_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_EndsWith_Statics::NewProp_Ending,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_EndsWith_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_EndsWith_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_NameBase,
		&NewStructOps,
		"RigUnit_EndsWith",
		sizeof(FRigUnit_EndsWith),
		alignof(FRigUnit_EndsWith),
		Z_Construct_UScriptStruct_FRigUnit_EndsWith_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_EndsWith_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_EndsWith_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_EndsWith_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_EndsWith()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_EndsWith.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_EndsWith.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_EndsWith_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_EndsWith.InnerSingleton;
	}

void FRigUnit_EndsWith::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Name,
		Ending,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_StartsWith>() == std::is_polymorphic<FRigUnit_NameBase>(), "USTRUCT FRigUnit_StartsWith cannot be polymorphic unless super FRigUnit_NameBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_StartsWith;
class UScriptStruct* FRigUnit_StartsWith::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_StartsWith.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_StartsWith.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_StartsWith, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_StartsWith"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_StartsWith::Execute"), &FRigUnit_StartsWith::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_StartsWith.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_StartsWith.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_StartsWith>()
{
	return FRigUnit_StartsWith::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_StartsWith_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StartsWith_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Tests whether this string starts with given string\n */" },
		{ "DisplayName", "Starts With" },
		{ "Keywords", "Left" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_Name.h" },
		{ "ToolTip", "Tests whether this string starts with given string" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_StartsWith_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_StartsWith>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StartsWith_Statics::NewProp_Name_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_Name.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_StartsWith_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_StartsWith, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StartsWith_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StartsWith_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StartsWith_Statics::NewProp_Start_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_Name.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_StartsWith_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_StartsWith, Start), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StartsWith_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StartsWith_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_StartsWith_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_Name.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_StartsWith_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigUnit_StartsWith*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_StartsWith_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_StartsWith), &Z_Construct_UScriptStruct_FRigUnit_StartsWith_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StartsWith_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StartsWith_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_StartsWith_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StartsWith_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StartsWith_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_StartsWith_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_StartsWith_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_NameBase,
		&NewStructOps,
		"RigUnit_StartsWith",
		sizeof(FRigUnit_StartsWith),
		alignof(FRigUnit_StartsWith),
		Z_Construct_UScriptStruct_FRigUnit_StartsWith_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StartsWith_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_StartsWith_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_StartsWith_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_StartsWith()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_StartsWith.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_StartsWith.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_StartsWith_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_StartsWith.InnerSingleton;
	}

void FRigUnit_StartsWith::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Name,
		Start,
		Result,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_Contains>() == std::is_polymorphic<FRigUnit_NameBase>(), "USTRUCT FRigUnit_Contains cannot be polymorphic unless super FRigUnit_NameBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_Contains;
class UScriptStruct* FRigUnit_Contains::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_Contains.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_Contains.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_Contains, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_Contains"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_Contains::Execute"), &FRigUnit_Contains::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_Contains.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_Contains.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_Contains>()
{
	return FRigUnit_Contains::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_Contains_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Search_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Search;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Contains_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns true or false if a given name exists in another given name\n */" },
		{ "DisplayName", "Contains" },
		{ "Keywords", "Contains,Find,Has,Search" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_Name.h" },
		{ "ToolTip", "Returns true or false if a given name exists in another given name" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_Contains_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_Contains>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Contains_Statics::NewProp_Name_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_Name.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_Contains_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_Contains, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Contains_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Contains_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Contains_Statics::NewProp_Search_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_Name.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_Contains_Statics::NewProp_Search = { "Search", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_Contains, Search), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Contains_Statics::NewProp_Search_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Contains_Statics::NewProp_Search_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Contains_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Core/RigUnit_Name.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_Contains_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigUnit_Contains*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_Contains_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_Contains), &Z_Construct_UScriptStruct_FRigUnit_Contains_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Contains_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Contains_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_Contains_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Contains_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Contains_Statics::NewProp_Search,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Contains_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_Contains_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_NameBase,
		&NewStructOps,
		"RigUnit_Contains",
		sizeof(FRigUnit_Contains),
		alignof(FRigUnit_Contains),
		Z_Construct_UScriptStruct_FRigUnit_Contains_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Contains_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Contains_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Contains_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Contains()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_Contains.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_Contains.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_Contains_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_Contains.InnerSingleton;
	}

void FRigUnit_Contains::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Name,
		Search,
		Result,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_Name_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_Name_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_NameBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_NameBase_Statics::NewStructOps, TEXT("RigUnit_NameBase"), &Z_Registration_Info_UScriptStruct_RigUnit_NameBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_NameBase), 565908932U) },
		{ FRigUnit_NameConcat::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_NameConcat_Statics::NewStructOps, TEXT("RigUnit_NameConcat"), &Z_Registration_Info_UScriptStruct_RigUnit_NameConcat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_NameConcat), 494937125U) },
		{ FRigUnit_NameTruncate::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics::NewStructOps, TEXT("RigUnit_NameTruncate"), &Z_Registration_Info_UScriptStruct_RigUnit_NameTruncate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_NameTruncate), 1898390169U) },
		{ FRigUnit_NameReplace::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics::NewStructOps, TEXT("RigUnit_NameReplace"), &Z_Registration_Info_UScriptStruct_RigUnit_NameReplace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_NameReplace), 90918018U) },
		{ FRigUnit_EndsWith::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_EndsWith_Statics::NewStructOps, TEXT("RigUnit_EndsWith"), &Z_Registration_Info_UScriptStruct_RigUnit_EndsWith, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_EndsWith), 791726054U) },
		{ FRigUnit_StartsWith::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_StartsWith_Statics::NewStructOps, TEXT("RigUnit_StartsWith"), &Z_Registration_Info_UScriptStruct_RigUnit_StartsWith, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_StartsWith), 1119334582U) },
		{ FRigUnit_Contains::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_Contains_Statics::NewStructOps, TEXT("RigUnit_Contains"), &Z_Registration_Info_UScriptStruct_RigUnit_Contains, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_Contains), 4004980548U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_Name_h_383219219(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_Name_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_Name_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
