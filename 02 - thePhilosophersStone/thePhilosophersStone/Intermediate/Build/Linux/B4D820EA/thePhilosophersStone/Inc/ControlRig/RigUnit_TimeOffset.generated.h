// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_TimeOffset_generated_h
#error "RigUnit_TimeOffset.generated.h already included, missing '#pragma once' in RigUnit_TimeOffset.h"
#endif
#define CONTROLRIG_RigUnit_TimeOffset_generated_h


#define FRigUnit_TimeOffsetFloat_Execute() \
	void FRigUnit_TimeOffsetFloat::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const float Value, \
		const float SecondsAgo, \
		const int32 BufferSize, \
		const float TimeRange, \
		float& Result, \
		TArray<float>& Buffer, \
		TArray<float>& DeltaTimes, \
		int32& LastInsertIndex, \
		int32& UpperBound, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_TimeOffset_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_TimeOffsetFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const float Value, \
		const float SecondsAgo, \
		const int32 BufferSize, \
		const float TimeRange, \
		float& Result, \
		TArray<float>& Buffer, \
		TArray<float>& DeltaTimes, \
		int32& LastInsertIndex, \
		int32& UpperBound, \
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
		const float SecondsAgo = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const int32 BufferSize = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		const float TimeRange = *(float*)RigVMMemoryHandles[3].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[4].GetData(false); \
		TArray<float>& Buffer = *(TArray<float>*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		TArray<float>& DeltaTimes = *(TArray<float>*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& LastInsertIndex = *(int32*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& UpperBound = *(int32*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			SecondsAgo, \
			BufferSize, \
			TimeRange, \
			Result, \
			Buffer, \
			DeltaTimes, \
			LastInsertIndex, \
			UpperBound, \
			Context \
		); \
	} \
	typedef FRigUnit_SimBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_TimeOffsetFloat>();


#define FRigUnit_TimeOffsetVector_Execute() \
	void FRigUnit_TimeOffsetVector::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Value, \
		const float SecondsAgo, \
		const int32 BufferSize, \
		const float TimeRange, \
		FVector& Result, \
		TArray<FVector>& Buffer, \
		TArray<float>& DeltaTimes, \
		int32& LastInsertIndex, \
		int32& UpperBound, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_TimeOffset_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_TimeOffsetVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Value, \
		const float SecondsAgo, \
		const int32 BufferSize, \
		const float TimeRange, \
		FVector& Result, \
		TArray<FVector>& Buffer, \
		TArray<float>& DeltaTimes, \
		int32& LastInsertIndex, \
		int32& UpperBound, \
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
		const float SecondsAgo = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const int32 BufferSize = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		const float TimeRange = *(float*)RigVMMemoryHandles[3].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[4].GetData(false); \
		TArray<FVector>& Buffer = *(TArray<FVector>*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		TArray<float>& DeltaTimes = *(TArray<float>*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& LastInsertIndex = *(int32*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& UpperBound = *(int32*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			SecondsAgo, \
			BufferSize, \
			TimeRange, \
			Result, \
			Buffer, \
			DeltaTimes, \
			LastInsertIndex, \
			UpperBound, \
			Context \
		); \
	} \
	typedef FRigUnit_SimBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_TimeOffsetVector>();


#define FRigUnit_TimeOffsetTransform_Execute() \
	void FRigUnit_TimeOffsetTransform::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Value, \
		const float SecondsAgo, \
		const int32 BufferSize, \
		const float TimeRange, \
		FTransform& Result, \
		TArray<FTransform>& Buffer, \
		TArray<float>& DeltaTimes, \
		int32& LastInsertIndex, \
		int32& UpperBound, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_TimeOffset_h_120_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_TimeOffsetTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Value, \
		const float SecondsAgo, \
		const int32 BufferSize, \
		const float TimeRange, \
		FTransform& Result, \
		TArray<FTransform>& Buffer, \
		TArray<float>& DeltaTimes, \
		int32& LastInsertIndex, \
		int32& UpperBound, \
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
		const float SecondsAgo = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const int32 BufferSize = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		const float TimeRange = *(float*)RigVMMemoryHandles[3].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[4].GetData(false); \
		TArray<FTransform>& Buffer = *(TArray<FTransform>*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		TArray<float>& DeltaTimes = *(TArray<float>*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& LastInsertIndex = *(int32*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& UpperBound = *(int32*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			SecondsAgo, \
			BufferSize, \
			TimeRange, \
			Result, \
			Buffer, \
			DeltaTimes, \
			LastInsertIndex, \
			UpperBound, \
			Context \
		); \
	} \
	typedef FRigUnit_SimBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_TimeOffsetTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_TimeOffset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
