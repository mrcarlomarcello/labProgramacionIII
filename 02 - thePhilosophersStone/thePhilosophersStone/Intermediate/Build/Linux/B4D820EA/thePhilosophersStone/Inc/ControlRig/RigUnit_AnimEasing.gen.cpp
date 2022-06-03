// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Animation/RigUnit_AnimEasing.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_AnimEasing() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimEasingType();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimBase();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigAnimEasingType();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimEasing();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_AnimEasingType>() == std::is_polymorphic<FRigUnit_AnimBase>(), "USTRUCT FRigUnit_AnimEasingType cannot be polymorphic unless super FRigUnit_AnimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AnimEasingType;
class UScriptStruct* FRigUnit_AnimEasingType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimEasingType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AnimEasingType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AnimEasingType, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AnimEasingType"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AnimEasingType::Execute"), &FRigUnit_AnimEasingType::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AnimEasingType.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AnimEasingType.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AnimEasingType>()
{
	return FRigUnit_AnimEasingType::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AnimEasingType_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimEasingType_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A constant value of an easing type\n */" },
		{ "DisplayName", "EaseType" },
		{ "Keywords", "Constant" },
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_AnimEasing.h" },
		{ "ToolTip", "A constant value of an easing type" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AnimEasingType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AnimEasingType>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimEasingType_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimEasingType_Statics::NewProp_Type_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_AnimEasing.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimEasingType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AnimEasingType, Type), Z_Construct_UEnum_ControlRig_EControlRigAnimEasingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimEasingType_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimEasingType_Statics::NewProp_Type_MetaData)) }; // 3463141811
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AnimEasingType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimEasingType_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimEasingType_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AnimEasingType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_AnimBase,
		&NewStructOps,
		"RigUnit_AnimEasingType",
		sizeof(FRigUnit_AnimEasingType),
		alignof(FRigUnit_AnimEasingType),
		Z_Construct_UScriptStruct_FRigUnit_AnimEasingType_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimEasingType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimEasingType_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimEasingType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimEasingType()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimEasingType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AnimEasingType.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AnimEasingType_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AnimEasingType.InnerSingleton;
	}

void FRigUnit_AnimEasingType::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Type,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_AnimEasing>() == std::is_polymorphic<FRigUnit_AnimBase>(), "USTRUCT FRigUnit_AnimEasing cannot be polymorphic unless super FRigUnit_AnimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AnimEasing;
class UScriptStruct* FRigUnit_AnimEasing::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimEasing.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AnimEasing.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AnimEasing, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AnimEasing"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AnimEasing::Execute"), &FRigUnit_AnimEasing::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AnimEasing.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AnimEasing.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AnimEasing>()
{
	return FRigUnit_AnimEasing::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMinimum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceMinimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMaximum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceMaximum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMinimum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetMinimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMaximum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetMaximum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the eased version of the input value\n */" },
		{ "DisplayName", "Ease" },
		{ "Keywords", "Easing,Profile,Smooth,Cubic" },
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_AnimEasing.h" },
		{ "ToolTip", "Returns the eased version of the input value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AnimEasing>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_Value_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_AnimEasing.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AnimEasing, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_Type_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_AnimEasing.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AnimEasing, Type), Z_Construct_UEnum_ControlRig_EControlRigAnimEasingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_Type_MetaData)) }; // 3463141811
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_SourceMinimum_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_AnimEasing.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_SourceMinimum = { "SourceMinimum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AnimEasing, SourceMinimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_SourceMinimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_SourceMinimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_SourceMaximum_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_AnimEasing.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_SourceMaximum = { "SourceMaximum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AnimEasing, SourceMaximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_SourceMaximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_SourceMaximum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_TargetMinimum_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_AnimEasing.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_TargetMinimum = { "TargetMinimum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AnimEasing, TargetMinimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_TargetMinimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_TargetMinimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_TargetMaximum_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_AnimEasing.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_TargetMaximum = { "TargetMaximum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AnimEasing, TargetMaximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_TargetMaximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_TargetMaximum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_AnimEasing.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AnimEasing, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_SourceMinimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_SourceMaximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_TargetMinimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_TargetMaximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_AnimBase,
		&NewStructOps,
		"RigUnit_AnimEasing",
		sizeof(FRigUnit_AnimEasing),
		alignof(FRigUnit_AnimEasing),
		Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimEasing()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimEasing.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AnimEasing.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AnimEasing.InnerSingleton;
	}

void FRigUnit_AnimEasing::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Value,
		Type,
		SourceMinimum,
		SourceMaximum,
		TargetMinimum,
		TargetMaximum,
		Result,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_AnimEasing_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_AnimEasing_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_AnimEasingType::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AnimEasingType_Statics::NewStructOps, TEXT("RigUnit_AnimEasingType"), &Z_Registration_Info_UScriptStruct_RigUnit_AnimEasingType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AnimEasingType), 1033415797U) },
		{ FRigUnit_AnimEasing::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics::NewStructOps, TEXT("RigUnit_AnimEasing"), &Z_Registration_Info_UScriptStruct_RigUnit_AnimEasing, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AnimEasing), 299428430U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_AnimEasing_h_778836249(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_AnimEasing_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_AnimEasing_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
