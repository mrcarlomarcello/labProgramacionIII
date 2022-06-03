// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PBIK/Public/Core/PBIKSolver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePBIKSolver() {}
// Cross Module References
	PBIK_API UEnum* Z_Construct_UEnum_PBIK_EPBIKRootBehavior();
	UPackage* Z_Construct_UPackage__Script_PBIK();
	PBIK_API UScriptStruct* Z_Construct_UScriptStruct_FPBIKSolverSettings();
	PBIK_API UScriptStruct* Z_Construct_UScriptStruct_FPBIKSolver();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPBIKRootBehavior;
	static UEnum* EPBIKRootBehavior_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPBIKRootBehavior.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPBIKRootBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PBIK_EPBIKRootBehavior, Z_Construct_UPackage__Script_PBIK(), TEXT("EPBIKRootBehavior"));
		}
		return Z_Registration_Info_UEnum_EPBIKRootBehavior.OuterSingleton;
	}
	template<> PBIK_API UEnum* StaticEnum<EPBIKRootBehavior>()
	{
		return EPBIKRootBehavior_StaticEnum();
	}
	struct Z_Construct_UEnum_PBIK_EPBIKRootBehavior_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PBIK_EPBIKRootBehavior_Statics::Enumerators[] = {
		{ "EPBIKRootBehavior::PrePull", (int64)EPBIKRootBehavior::PrePull },
		{ "EPBIKRootBehavior::PinToInput", (int64)EPBIKRootBehavior::PinToInput },
		{ "EPBIKRootBehavior::Free", (int64)EPBIKRootBehavior::Free },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PBIK_EPBIKRootBehavior_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// namespace\n" },
		{ "Free.Name", "EPBIKRootBehavior::Free" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
		{ "PinToInput.Name", "EPBIKRootBehavior::PinToInput" },
		{ "PrePull.Name", "EPBIKRootBehavior::PrePull" },
		{ "ToolTip", "namespace" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PBIK_EPBIKRootBehavior_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PBIK,
		nullptr,
		"EPBIKRootBehavior",
		"EPBIKRootBehavior",
		Z_Construct_UEnum_PBIK_EPBIKRootBehavior_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PBIK_EPBIKRootBehavior_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PBIK_EPBIKRootBehavior_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PBIK_EPBIKRootBehavior_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PBIK_EPBIKRootBehavior()
	{
		if (!Z_Registration_Info_UEnum_EPBIKRootBehavior.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPBIKRootBehavior.InnerSingleton, Z_Construct_UEnum_PBIK_EPBIKRootBehavior_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPBIKRootBehavior.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PBIKSolverSettings;
class UScriptStruct* FPBIKSolverSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PBIKSolverSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PBIKSolverSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPBIKSolverSettings, Z_Construct_UPackage__Script_PBIK(), TEXT("PBIKSolverSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PBIKSolverSettings.OuterSingleton;
}
template<> PBIK_API UScriptStruct* StaticStruct<FPBIKSolverSettings>()
{
	return FPBIKSolverSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Iterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Iterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MassMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MassMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinMassMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinMassMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowStretch_MetaData[];
#endif
		static void NewProp_bAllowStretch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowStretch;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RootBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RootBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartSolveFromInputPose_MetaData[];
#endif
		static void NewProp_bStartSolveFromInputPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartSolveFromInputPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPBIKSolverSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_Iterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** High iteration counts can help solve complex joint configurations with competing constraints, but will increase runtime cost. Default is 20. */" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
		{ "ToolTip", "High iteration counts can help solve complex joint configurations with competing constraints, but will increase runtime cost. Default is 20." },
		{ "UIMax", "200.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_Iterations = { "Iterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPBIKSolverSettings, Iterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_Iterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_Iterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_MassMultiplier_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** A global mass multiplier; higher values will make the joints more stiff, but require more iterations. Typical range is 0.0 to 10.0. */" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
		{ "ToolTip", "A global mass multiplier; higher values will make the joints more stiff, but require more iterations. Typical range is 0.0 to 10.0." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_MassMultiplier = { "MassMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPBIKSolverSettings, MassMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_MassMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_MassMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_MinMassMultiplier_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Set this as low as possible while keeping the solve stable. Lower values improve convergence of effector targets. Default is 0.2. */" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
		{ "ToolTip", "Set this as low as possible while keeping the solve stable. Lower values improve convergence of effector targets. Default is 0.2." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_MinMassMultiplier = { "MinMassMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPBIKSolverSettings, MinMassMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_MinMassMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_MinMassMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bAllowStretch_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "Comment", "/** If true, joints will translate to reach the effectors; causing bones to lengthen if necessary. Good for cartoon effects. Default is false. */" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
		{ "ToolTip", "If true, joints will translate to reach the effectors; causing bones to lengthen if necessary. Good for cartoon effects. Default is false." },
	};
#endif
	void Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bAllowStretch_SetBit(void* Obj)
	{
		((FPBIKSolverSettings*)Obj)->bAllowStretch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bAllowStretch = { "bAllowStretch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPBIKSolverSettings), &Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bAllowStretch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bAllowStretch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bAllowStretch_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_RootBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_RootBehavior_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "Comment", "/** (Default is PrePull) Set the behavior of the solver root.\n\x09*Pre Pull: translates the root (and all children) by the average motion of the stretched effectors to help achieve faster convergence when reaching far.\n\x09*Pin to Input: locks the translation and rotation of the root bone to the input pose. Overrides any bone settings applied to the root. Good for partial-body solves.\n\x09*Free: treats the root bone like any other and allows it to move freely or according to any bone settings applied to it. */" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
		{ "ToolTip", "(Default is PrePull) Set the behavior of the solver root.\nPre Pull: translates the root (and all children) by the average motion of the stretched effectors to help achieve faster convergence when reaching far.\nPin to Input: locks the translation and rotation of the root bone to the input pose. Overrides any bone settings applied to the root. Good for partial-body solves.\nFree: treats the root bone like any other and allows it to move freely or according to any bone settings applied to it." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_RootBehavior = { "RootBehavior", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPBIKSolverSettings, RootBehavior), Z_Construct_UEnum_PBIK_EPBIKRootBehavior, METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_RootBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_RootBehavior_MetaData)) }; // 908879924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bStartSolveFromInputPose_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "Comment", "/** When true, the solver is reset each tick to start from the current input pose. If false, incoming animated poses are ignored and the solver starts from the results of the previous solve. Default is true. */" },
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
		{ "ToolTip", "When true, the solver is reset each tick to start from the current input pose. If false, incoming animated poses are ignored and the solver starts from the results of the previous solve. Default is true." },
	};
#endif
	void Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bStartSolveFromInputPose_SetBit(void* Obj)
	{
		((FPBIKSolverSettings*)Obj)->bStartSolveFromInputPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bStartSolveFromInputPose = { "bStartSolveFromInputPose", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPBIKSolverSettings), &Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bStartSolveFromInputPose_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bStartSolveFromInputPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bStartSolveFromInputPose_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_Iterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_MassMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_MinMassMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bAllowStretch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_RootBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_RootBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewProp_bStartSolveFromInputPose,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PBIK,
		nullptr,
		&NewStructOps,
		"PBIKSolverSettings",
		sizeof(FPBIKSolverSettings),
		alignof(FPBIKSolverSettings),
		Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPBIKSolverSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_PBIKSolverSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PBIKSolverSettings.InnerSingleton, Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PBIKSolverSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PBIKSolver;
class UScriptStruct* FPBIKSolver::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PBIKSolver.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PBIKSolver.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPBIKSolver, Z_Construct_UPackage__Script_PBIK(), TEXT("PBIKSolver"));
	}
	return Z_Registration_Info_UScriptStruct_PBIKSolver.OuterSingleton;
}
template<> PBIK_API UScriptStruct* StaticStruct<FPBIKSolver>()
{
	return FPBIKSolver::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPBIKSolver_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKSolver_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/PBIKSolver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPBIKSolver_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPBIKSolver>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPBIKSolver_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PBIK,
		nullptr,
		&NewStructOps,
		"PBIKSolver",
		sizeof(FPBIKSolver),
		alignof(FPBIKSolver),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKSolver_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKSolver_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPBIKSolver()
	{
		if (!Z_Registration_Info_UScriptStruct_PBIKSolver.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PBIKSolver.InnerSingleton, Z_Construct_UScriptStruct_FPBIKSolver_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PBIKSolver.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_Core_PBIKSolver_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_Core_PBIKSolver_h_Statics::EnumInfo[] = {
		{ EPBIKRootBehavior_StaticEnum, TEXT("EPBIKRootBehavior"), &Z_Registration_Info_UEnum_EPBIKRootBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 908879924U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_Core_PBIKSolver_h_Statics::ScriptStructInfo[] = {
		{ FPBIKSolverSettings::StaticStruct, Z_Construct_UScriptStruct_FPBIKSolverSettings_Statics::NewStructOps, TEXT("PBIKSolverSettings"), &Z_Registration_Info_UScriptStruct_PBIKSolverSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPBIKSolverSettings), 859736095U) },
		{ FPBIKSolver::StaticStruct, Z_Construct_UScriptStruct_FPBIKSolver_Statics::NewStructOps, TEXT("PBIKSolver"), &Z_Registration_Info_UScriptStruct_PBIKSolver, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPBIKSolver), 588474320U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_Core_PBIKSolver_h_2260585392(TEXT("/Script/PBIK"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_Core_PBIKSolver_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_Core_PBIKSolver_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_Core_PBIKSolver_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_Core_PBIKSolver_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
