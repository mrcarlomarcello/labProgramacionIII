// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_PointSimulation_generated_h
#error "RigUnit_PointSimulation.generated.h already included, missing '#pragma once' in RigUnit_PointSimulation.h"
#endif
#define CONTROLRIG_RigUnit_PointSimulation_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_PointSimulation_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_PointSimulation_DebugSettings>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_PointSimulation_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_PointSimulation_BoneTarget>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_PointSimulation_h_107_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_PointSimulation_WorkData>();


#define FRigUnit_PointSimulation_Execute() \
	void FRigUnit_PointSimulation::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FCRSimPoint>& Points, \
		const TArrayView<const FCRSimLinearSpring>& Links, \
		const TArrayView<const FCRSimPointForce>& Forces, \
		const TArrayView<const FCRSimSoftCollision>& CollisionVolumes, \
		const float SimulatedStepsPerSecond, \
		const ECRSimPointIntegrateType IntegratorType, \
		const float VerletBlend, \
		const TArrayView<const FRigUnit_PointSimulation_BoneTarget>& BoneTargets, \
		const bool bLimitLocalPosition, \
		const bool bPropagateToChildren, \
		const FVector& PrimaryAimAxis, \
		const FVector& SecondaryAimAxis, \
		const FRigUnit_PointSimulation_DebugSettings& DebugSettings, \
		FCRFourPointBezier& Bezier, \
		FRigUnit_PointSimulation_WorkData& WorkData, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_PointSimulation_h_123_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FCRSimPoint>& Points, \
		const TArrayView<const FCRSimLinearSpring>& Links, \
		const TArrayView<const FCRSimPointForce>& Forces, \
		const TArrayView<const FCRSimSoftCollision>& CollisionVolumes, \
		const float SimulatedStepsPerSecond, \
		const ECRSimPointIntegrateType IntegratorType, \
		const float VerletBlend, \
		const TArrayView<const FRigUnit_PointSimulation_BoneTarget>& BoneTargets, \
		const bool bLimitLocalPosition, \
		const bool bPropagateToChildren, \
		const FVector& PrimaryAimAxis, \
		const FVector& SecondaryAimAxis, \
		const FRigUnit_PointSimulation_DebugSettings& DebugSettings, \
		FCRFourPointBezier& Bezier, \
		FRigUnit_PointSimulation_WorkData& WorkData, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		TArray<FCRSimPoint>& Points = *(TArray<FCRSimPoint>*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FCRSimLinearSpring>& Links = *(TArray<FCRSimLinearSpring>*)RigVMMemoryHandles[1].GetData(false); \
		TArray<FCRSimPointForce>& Forces = *(TArray<FCRSimPointForce>*)RigVMMemoryHandles[2].GetData(false); \
		TArray<FCRSimSoftCollision>& CollisionVolumes = *(TArray<FCRSimSoftCollision>*)RigVMMemoryHandles[3].GetData(false); \
		const float SimulatedStepsPerSecond = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const ECRSimPointIntegrateType IntegratorType = *(ECRSimPointIntegrateType*)RigVMMemoryHandles[5].GetData(false); \
		const float VerletBlend = *(float*)RigVMMemoryHandles[6].GetData(false); \
		TArray<FRigUnit_PointSimulation_BoneTarget>& BoneTargets = *(TArray<FRigUnit_PointSimulation_BoneTarget>*)RigVMMemoryHandles[7].GetData(false); \
		const bool bLimitLocalPosition = *(bool*)RigVMMemoryHandles[8].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[9].GetData(false); \
		const FVector& PrimaryAimAxis = *(FVector*)RigVMMemoryHandles[10].GetData(false); \
		const FVector& SecondaryAimAxis = *(FVector*)RigVMMemoryHandles[11].GetData(false); \
		const FRigUnit_PointSimulation_DebugSettings& DebugSettings = *(FRigUnit_PointSimulation_DebugSettings*)RigVMMemoryHandles[12].GetData(false); \
		FCRFourPointBezier& Bezier = *(FCRFourPointBezier*)RigVMMemoryHandles[13].GetData(false); \
		FRigUnit_PointSimulation_WorkData& WorkData = *(FRigUnit_PointSimulation_WorkData*)RigVMMemoryHandles[14].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[15].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Points, \
			Links, \
			Forces, \
			CollisionVolumes, \
			SimulatedStepsPerSecond, \
			IntegratorType, \
			VerletBlend, \
			BoneTargets, \
			bLimitLocalPosition, \
			bPropagateToChildren, \
			PrimaryAimAxis, \
			SecondaryAimAxis, \
			DebugSettings, \
			Bezier, \
			WorkData, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_SimBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_PointSimulation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_PointSimulation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
