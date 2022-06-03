// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_Noise_generated_h
#error "RigUnit_Noise.generated.h already included, missing '#pragma once' in RigUnit_Noise.h"
#endif
#define CONTROLRIG_RigUnit_Noise_generated_h


#define FRigUnit_NoiseFloat_Execute() \
	void FRigUnit_NoiseFloat::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const float Value, \
		const float Speed, \
		const float Frequency, \
		const float Minimum, \
		const float Maximum, \
		float& Result, \
		float& Time, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_Noise_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_NoiseFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const float Value, \
		const float Speed, \
		const float Frequency, \
		const float Minimum, \
		const float Maximum, \
		float& Result, \
		float& Time, \
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
		const float Speed = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float Frequency = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float Minimum = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Maximum = *(float*)RigVMMemoryHandles[4].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[5].GetData(false); \
		float& Time = *(float*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			Speed, \
			Frequency, \
			Minimum, \
			Maximum, \
			Result, \
			Time, \
			Context \
		); \
	} \
	typedef FRigUnit_MathBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_NoiseFloat>();


#define FRigUnit_NoiseVector_Execute() \
	void FRigUnit_NoiseVector::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Position, \
		const FVector& Speed, \
		const FVector& Frequency, \
		const float Minimum, \
		const float Maximum, \
		FVector& Result, \
		FVector& Time, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_Noise_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_NoiseVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Position, \
		const FVector& Speed, \
		const FVector& Frequency, \
		const float Minimum, \
		const float Maximum, \
		FVector& Result, \
		FVector& Time, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FVector& Position = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Speed = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& Frequency = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const float Minimum = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Maximum = *(float*)RigVMMemoryHandles[4].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[5].GetData(false); \
		FVector& Time = *(FVector*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Position, \
			Speed, \
			Frequency, \
			Minimum, \
			Maximum, \
			Result, \
			Time, \
			Context \
		); \
	} \
	typedef FRigUnit_MathBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_NoiseVector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_Noise_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
