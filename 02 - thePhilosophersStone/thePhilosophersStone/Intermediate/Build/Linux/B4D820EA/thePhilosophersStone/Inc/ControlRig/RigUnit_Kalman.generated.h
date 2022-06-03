// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_Kalman_generated_h
#error "RigUnit_Kalman.generated.h already included, missing '#pragma once' in RigUnit_Kalman.h"
#endif
#define CONTROLRIG_RigUnit_Kalman_generated_h


#define FRigUnit_KalmanFloat_Execute() \
	void FRigUnit_KalmanFloat::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const float Value, \
		const int32 BufferSize, \
		float& Result, \
		TArray<float>& Buffer, \
		int32& LastInsertIndex, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Kalman_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_KalmanFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const float Value, \
		const int32 BufferSize, \
		float& Result, \
		TArray<float>& Buffer, \
		int32& LastInsertIndex, \
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
		const int32 BufferSize = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetData(false); \
		TArray<float>& Buffer = *(TArray<float>*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& LastInsertIndex = *(int32*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			BufferSize, \
			Result, \
			Buffer, \
			LastInsertIndex, \
			Context \
		); \
	} \
	typedef FRigUnit_SimBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_KalmanFloat>();


#define FRigUnit_KalmanVector_Execute() \
	void FRigUnit_KalmanVector::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Value, \
		const int32 BufferSize, \
		FVector& Result, \
		TArray<FVector>& Buffer, \
		int32& LastInsertIndex, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Kalman_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_KalmanVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Value, \
		const int32 BufferSize, \
		FVector& Result, \
		TArray<FVector>& Buffer, \
		int32& LastInsertIndex, \
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
		const int32 BufferSize = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		TArray<FVector>& Buffer = *(TArray<FVector>*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& LastInsertIndex = *(int32*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			BufferSize, \
			Result, \
			Buffer, \
			LastInsertIndex, \
			Context \
		); \
	} \
	typedef FRigUnit_SimBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_KalmanVector>();


#define FRigUnit_KalmanTransform_Execute() \
	void FRigUnit_KalmanTransform::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Value, \
		const int32 BufferSize, \
		FTransform& Result, \
		TArray<FTransform>& Buffer, \
		int32& LastInsertIndex, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Kalman_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_KalmanTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Value, \
		const int32 BufferSize, \
		FTransform& Result, \
		TArray<FTransform>& Buffer, \
		int32& LastInsertIndex, \
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
		const int32 BufferSize = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		TArray<FTransform>& Buffer = *(TArray<FTransform>*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& LastInsertIndex = *(int32*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			BufferSize, \
			Result, \
			Buffer, \
			LastInsertIndex, \
			Context \
		); \
	} \
	typedef FRigUnit_SimBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_KalmanTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Kalman_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
