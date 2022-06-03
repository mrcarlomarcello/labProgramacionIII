// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Simulation/RigUnit_Verlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_Verlet() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SimBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimPoint();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_VerletIntegrateVector>() == std::is_polymorphic<FRigUnit_SimBase>(), "USTRUCT FRigUnit_VerletIntegrateVector cannot be polymorphic unless super FRigUnit_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_VerletIntegrateVector;
class UScriptStruct* FRigUnit_VerletIntegrateVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_VerletIntegrateVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_VerletIntegrateVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_VerletIntegrateVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_VerletIntegrateVector::Execute"), &FRigUnit_VerletIntegrateVector::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_VerletIntegrateVector.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_VerletIntegrateVector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_VerletIntegrateVector>()
{
	return FRigUnit_VerletIntegrateVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Blend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Force;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Acceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitialized_MetaData[];
#endif
		static void NewProp_bInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Simulation|Springs" },
		{ "Comment", "/**\n * Simulates a single position over time using Verlet integration. It is recommended to use SpringInterp instead as it\n * is more accurate and stable, and has more meaningful parameters.\n */" },
		{ "DisplayName", "Verlet (Vector)" },
		{ "Keywords", "Simulate,Integrate" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Verlet.h" },
		{ "PrototypeName", "Verlet" },
		{ "ToolTip", "Simulates a single position over time using Verlet integration. It is recommended to use SpringInterp instead as it\nis more accurate and stable, and has more meaningful parameters." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_VerletIntegrateVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Target_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Verlet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VerletIntegrateVector, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Strength_MetaData[] = {
		{ "Comment", "/** The strength of the verlet spring */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Verlet.h" },
		{ "ToolTip", "The strength of the verlet spring" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VerletIntegrateVector, Strength), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Damp_MetaData[] = {
		{ "Comment", "/** The amount of damping to apply ( 0.0 to 1.0, but usually really low like 0.005 )*/" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Verlet.h" },
		{ "ToolTip", "The amount of damping to apply ( 0.0 to 1.0, but usually really low like 0.005 )" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Damp = { "Damp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VerletIntegrateVector, Damp), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Damp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Damp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Blend_MetaData[] = {
		{ "Comment", "/** The amount of blending to apply per second */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Verlet.h" },
		{ "ToolTip", "The amount of blending to apply per second" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Blend = { "Blend", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VerletIntegrateVector, Blend), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Blend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Blend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Force_MetaData[] = {
		{ "Comment", "/** The force feeding into the solver. Can be used for gravity. */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Verlet.h" },
		{ "ToolTip", "The force feeding into the solver. Can be used for gravity." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VerletIntegrateVector, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Force_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Force_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Verlet.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VerletIntegrateVector, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Velocity_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Verlet.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VerletIntegrateVector, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Acceleration_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Verlet.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VerletIntegrateVector, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Acceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Acceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Point_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Verlet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_VerletIntegrateVector, Point), Z_Construct_UScriptStruct_FCRSimPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Point_MetaData)) }; // 3211597404
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_bInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_Verlet.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_bInitialized_SetBit(void* Obj)
	{
		((FRigUnit_VerletIntegrateVector*)Obj)->bInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_bInitialized = { "bInitialized", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_VerletIntegrateVector), &Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_bInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_bInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_bInitialized_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Damp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Blend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Force,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Acceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewProp_bInitialized,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_SimBase,
		&NewStructOps,
		"RigUnit_VerletIntegrateVector",
		sizeof(FRigUnit_VerletIntegrateVector),
		alignof(FRigUnit_VerletIntegrateVector),
		Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_VerletIntegrateVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_VerletIntegrateVector.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_VerletIntegrateVector.InnerSingleton;
	}

void FRigUnit_VerletIntegrateVector::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Target,
		Strength,
		Damp,
		Blend,
		Force,
		Position,
		Velocity,
		Acceleration,
		Point,
		bInitialized,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Verlet_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Verlet_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_VerletIntegrateVector::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics::NewStructOps, TEXT("RigUnit_VerletIntegrateVector"), &Z_Registration_Info_UScriptStruct_RigUnit_VerletIntegrateVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_VerletIntegrateVector), 2721616276U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Verlet_h_1522655480(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Verlet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Verlet_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
