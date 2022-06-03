// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Animation/RigUnit_GetDeltaTime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_GetDeltaTime() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetDeltaTime();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimBase();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_GetDeltaTime>() == std::is_polymorphic<FRigUnit_AnimBase>(), "USTRUCT FRigUnit_GetDeltaTime cannot be polymorphic unless super FRigUnit_AnimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetDeltaTime;
class UScriptStruct* FRigUnit_GetDeltaTime::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetDeltaTime.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetDeltaTime.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetDeltaTime, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetDeltaTime"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetDeltaTime::Execute"), &FRigUnit_GetDeltaTime::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetDeltaTime.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetDeltaTime.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetDeltaTime>()
{
	return FRigUnit_GetDeltaTime::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_GetDeltaTime_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetDeltaTime_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the time gone by from the previous evaluation\n */" },
		{ "DisplayName", "Delta Time" },
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_GetDeltaTime.h" },
		{ "ToolTip", "Returns the time gone by from the previous evaluation" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_GetDeltaTime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetDeltaTime>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetDeltaTime_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_GetDeltaTime.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetDeltaTime_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_GetDeltaTime, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetDeltaTime_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetDeltaTime_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetDeltaTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetDeltaTime_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetDeltaTime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_AnimBase,
		&NewStructOps,
		"RigUnit_GetDeltaTime",
		sizeof(FRigUnit_GetDeltaTime),
		alignof(FRigUnit_GetDeltaTime),
		Z_Construct_UScriptStruct_FRigUnit_GetDeltaTime_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetDeltaTime_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetDeltaTime_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetDeltaTime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetDeltaTime()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_GetDeltaTime.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetDeltaTime.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetDeltaTime_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_GetDeltaTime.InnerSingleton;
	}

void FRigUnit_GetDeltaTime::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Result,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_GetDeltaTime_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_GetDeltaTime_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_GetDeltaTime::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetDeltaTime_Statics::NewStructOps, TEXT("RigUnit_GetDeltaTime"), &Z_Registration_Info_UScriptStruct_RigUnit_GetDeltaTime, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetDeltaTime), 3668835867U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_GetDeltaTime_h_35893572(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_GetDeltaTime_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_GetDeltaTime_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
