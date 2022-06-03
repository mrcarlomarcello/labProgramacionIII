// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_Verlet_generated_h
#error "RigUnit_Verlet.generated.h already included, missing '#pragma once' in RigUnit_Verlet.h"
#endif
#define CONTROLRIG_RigUnit_Verlet_generated_h


#define FRigUnit_VerletIntegrateVector_Execute() \
	void FRigUnit_VerletIntegrateVector::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Target, \
		const float Strength, \
		const float Damp, \
		const float Blend, \
		const FVector& Force, \
		FVector& Position, \
		FVector& Velocity, \
		FVector& Acceleration, \
		FCRSimPoint& Point, \
		bool& bInitialized, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Verlet_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_VerletIntegrateVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Target, \
		const float Strength, \
		const float Damp, \
		const float Blend, \
		const FVector& Force, \
		FVector& Position, \
		FVector& Velocity, \
		FVector& Acceleration, \
		FCRSimPoint& Point, \
		bool& bInitialized, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FVector& Target = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const float Strength = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float Damp = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float Blend = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const FVector& Force = *(FVector*)RigVMMemoryHandles[4].GetData(false); \
		FVector& Position = *(FVector*)RigVMMemoryHandles[5].GetData(false); \
		FVector& Velocity = *(FVector*)RigVMMemoryHandles[6].GetData(false); \
		FVector& Acceleration = *(FVector*)RigVMMemoryHandles[7].GetData(false); \
		FCRSimPoint& Point = *(FCRSimPoint*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bInitialized = *(bool*)RigVMMemoryHandles[9].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Target, \
			Strength, \
			Damp, \
			Blend, \
			Force, \
			Position, \
			Velocity, \
			Acceleration, \
			Point, \
			bInitialized, \
			Context \
		); \
	} \
	typedef FRigUnit_SimBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_VerletIntegrateVector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Verlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
