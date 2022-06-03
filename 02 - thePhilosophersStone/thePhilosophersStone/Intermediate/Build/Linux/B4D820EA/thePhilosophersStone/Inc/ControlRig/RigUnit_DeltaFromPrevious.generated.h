// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_DeltaFromPrevious_generated_h
#error "RigUnit_DeltaFromPrevious.generated.h already included, missing '#pragma once' in RigUnit_DeltaFromPrevious.h"
#endif
#define CONTROLRIG_RigUnit_DeltaFromPrevious_generated_h


#define FRigUnit_DeltaFromPreviousFloat_Execute() \
	void FRigUnit_DeltaFromPreviousFloat::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const float Value, \
		float& Delta, \
		float& PreviousValue, \
		float& Cache, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_DeltaFromPrevious_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const float Value, \
		float& Delta, \
		float& PreviousValue, \
		float& Cache, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		float& Delta = *(float*)RigVMMemoryHandles[1].GetData(false); \
		float& PreviousValue = *(float*)RigVMMemoryHandles[2].GetData(false); \
		float& Cache = *(float*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			Delta, \
			PreviousValue, \
			Cache, \
			Context \
		); \
	} \
	typedef FRigUnit_SimBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DeltaFromPreviousFloat>();


#define FRigUnit_DeltaFromPreviousVector_Execute() \
	void FRigUnit_DeltaFromPreviousVector::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Value, \
		FVector& Delta, \
		FVector& PreviousValue, \
		FVector& Cache, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_DeltaFromPrevious_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Value, \
		FVector& Delta, \
		FVector& PreviousValue, \
		FVector& Cache, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Delta = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& PreviousValue = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		FVector& Cache = *(FVector*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			Delta, \
			PreviousValue, \
			Cache, \
			Context \
		); \
	} \
	typedef FRigUnit_SimBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DeltaFromPreviousVector>();


#define FRigUnit_DeltaFromPreviousQuat_Execute() \
	void FRigUnit_DeltaFromPreviousQuat::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Value, \
		FQuat& Delta, \
		FQuat& PreviousValue, \
		FQuat& Cache, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_DeltaFromPrevious_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousQuat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Value, \
		FQuat& Delta, \
		FQuat& PreviousValue, \
		FQuat& Cache, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		FQuat& Delta = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		FQuat& PreviousValue = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		FQuat& Cache = *(FQuat*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			Delta, \
			PreviousValue, \
			Cache, \
			Context \
		); \
	} \
	typedef FRigUnit_SimBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DeltaFromPreviousQuat>();


#define FRigUnit_DeltaFromPreviousTransform_Execute() \
	void FRigUnit_DeltaFromPreviousTransform::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Value, \
		FTransform& Delta, \
		FTransform& PreviousValue, \
		FTransform& Cache, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_DeltaFromPrevious_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DeltaFromPreviousTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Value, \
		FTransform& Delta, \
		FTransform& PreviousValue, \
		FTransform& Cache, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		FTransform& Delta = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		FTransform& PreviousValue = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		FTransform& Cache = *(FTransform*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			Delta, \
			PreviousValue, \
			Cache, \
			Context \
		); \
	} \
	typedef FRigUnit_SimBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DeltaFromPreviousTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_DeltaFromPrevious_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
