// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Animation/RigUnit_TimeConversion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_TimeConversion() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FramesToSeconds();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SecondsToFrames();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_FramesToSeconds>() == std::is_polymorphic<FRigUnit_AnimBase>(), "USTRUCT FRigUnit_FramesToSeconds cannot be polymorphic unless super FRigUnit_AnimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_FramesToSeconds;
class UScriptStruct* FRigUnit_FramesToSeconds::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FramesToSeconds.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_FramesToSeconds.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FramesToSeconds, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_FramesToSeconds"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_FramesToSeconds::Execute"), &FRigUnit_FramesToSeconds::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_FramesToSeconds.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FramesToSeconds.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_FramesToSeconds>()
{
	return FRigUnit_FramesToSeconds::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_FramesToSeconds_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Seconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FramesToSeconds_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Converts frames to seconds based on the current frame rate\n */" },
		{ "DisplayName", "Frames to Seconds" },
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_TimeConversion.h" },
		{ "ToolTip", "Converts frames to seconds based on the current frame rate" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_FramesToSeconds_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_FramesToSeconds>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FramesToSeconds_Statics::NewProp_Frames_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_TimeConversion.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FramesToSeconds_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_FramesToSeconds, Frames), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FramesToSeconds_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FramesToSeconds_Statics::NewProp_Frames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FramesToSeconds_Statics::NewProp_Seconds_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_TimeConversion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FramesToSeconds_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_FramesToSeconds, Seconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FramesToSeconds_Statics::NewProp_Seconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FramesToSeconds_Statics::NewProp_Seconds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_FramesToSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FramesToSeconds_Statics::NewProp_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FramesToSeconds_Statics::NewProp_Seconds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_FramesToSeconds_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_AnimBase,
		&NewStructOps,
		"RigUnit_FramesToSeconds",
		sizeof(FRigUnit_FramesToSeconds),
		alignof(FRigUnit_FramesToSeconds),
		Z_Construct_UScriptStruct_FRigUnit_FramesToSeconds_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FramesToSeconds_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FramesToSeconds_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FramesToSeconds_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FramesToSeconds()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_FramesToSeconds.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_FramesToSeconds.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_FramesToSeconds_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_FramesToSeconds.InnerSingleton;
	}

void FRigUnit_FramesToSeconds::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Frames,
		Seconds,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_SecondsToFrames>() == std::is_polymorphic<FRigUnit_AnimBase>(), "USTRUCT FRigUnit_SecondsToFrames cannot be polymorphic unless super FRigUnit_AnimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SecondsToFrames;
class UScriptStruct* FRigUnit_SecondsToFrames::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SecondsToFrames.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SecondsToFrames.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SecondsToFrames, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SecondsToFrames"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SecondsToFrames::Execute"), &FRigUnit_SecondsToFrames::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SecondsToFrames.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SecondsToFrames.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SecondsToFrames>()
{
	return FRigUnit_SecondsToFrames::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SecondsToFrames_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Seconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SecondsToFrames_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Converts seconds to frames based on the current frame rate\n */" },
		{ "DisplayName", "Seconds to Frames" },
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_TimeConversion.h" },
		{ "ToolTip", "Converts seconds to frames based on the current frame rate" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SecondsToFrames_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SecondsToFrames>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SecondsToFrames_Statics::NewProp_Seconds_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_TimeConversion.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SecondsToFrames_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_SecondsToFrames, Seconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SecondsToFrames_Statics::NewProp_Seconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SecondsToFrames_Statics::NewProp_Seconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SecondsToFrames_Statics::NewProp_Frames_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Animation/RigUnit_TimeConversion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SecondsToFrames_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_SecondsToFrames, Frames), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SecondsToFrames_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SecondsToFrames_Statics::NewProp_Frames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SecondsToFrames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SecondsToFrames_Statics::NewProp_Seconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SecondsToFrames_Statics::NewProp_Frames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SecondsToFrames_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_AnimBase,
		&NewStructOps,
		"RigUnit_SecondsToFrames",
		sizeof(FRigUnit_SecondsToFrames),
		alignof(FRigUnit_SecondsToFrames),
		Z_Construct_UScriptStruct_FRigUnit_SecondsToFrames_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SecondsToFrames_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SecondsToFrames_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SecondsToFrames_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SecondsToFrames()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SecondsToFrames.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SecondsToFrames.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SecondsToFrames_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SecondsToFrames.InnerSingleton;
	}

void FRigUnit_SecondsToFrames::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Seconds,
		Frames,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_TimeConversion_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_TimeConversion_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_FramesToSeconds::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_FramesToSeconds_Statics::NewStructOps, TEXT("RigUnit_FramesToSeconds"), &Z_Registration_Info_UScriptStruct_RigUnit_FramesToSeconds, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_FramesToSeconds), 2244711757U) },
		{ FRigUnit_SecondsToFrames::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SecondsToFrames_Statics::NewStructOps, TEXT("RigUnit_SecondsToFrames"), &Z_Registration_Info_UScriptStruct_RigUnit_SecondsToFrames, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SecondsToFrames), 2675226764U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_TimeConversion_h_2802748303(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_TimeConversion_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_TimeConversion_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
