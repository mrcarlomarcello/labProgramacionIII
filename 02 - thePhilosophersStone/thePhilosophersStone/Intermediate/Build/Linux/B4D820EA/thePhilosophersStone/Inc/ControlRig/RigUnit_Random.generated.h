// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_Random_generated_h
#error "RigUnit_Random.generated.h already included, missing '#pragma once' in RigUnit_Random.h"
#endif
#define CONTROLRIG_RigUnit_Random_generated_h


#define FRigUnit_RandomFloat_Execute() \
	void FRigUnit_RandomFloat::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 Seed, \
		const float Minimum, \
		const float Maximum, \
		const float Duration, \
		float& Result, \
		float& LastResult, \
		int32& LastSeed, \
		int32& BaseSeed, \
		float& TimeLeft, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_Random_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_RandomFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 Seed, \
		const float Minimum, \
		const float Maximum, \
		const float Duration, \
		float& Result, \
		float& LastResult, \
		int32& LastSeed, \
		int32& BaseSeed, \
		float& TimeLeft, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const int32 Seed = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const float Minimum = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float Maximum = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float Duration = *(float*)RigVMMemoryHandles[3].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[4].GetData(false); \
		float& LastResult = *(float*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& LastSeed = *(int32*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& BaseSeed = *(int32*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		float& TimeLeft = *(float*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Seed, \
			Minimum, \
			Maximum, \
			Duration, \
			Result, \
			LastResult, \
			LastSeed, \
			BaseSeed, \
			TimeLeft, \
			Context \
		); \
	} \
	typedef FRigUnit_MathBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_RandomFloat>();


#define FRigUnit_RandomVector_Execute() \
	void FRigUnit_RandomVector::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 Seed, \
		const float Minimum, \
		const float Maximum, \
		const float Duration, \
		FVector& Result, \
		FVector& LastResult, \
		int32& LastSeed, \
		int32& BaseSeed, \
		float& TimeLeft, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_Random_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_RandomVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 Seed, \
		const float Minimum, \
		const float Maximum, \
		const float Duration, \
		FVector& Result, \
		FVector& LastResult, \
		int32& LastSeed, \
		int32& BaseSeed, \
		float& TimeLeft, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const int32 Seed = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const float Minimum = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float Maximum = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float Duration = *(float*)RigVMMemoryHandles[3].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[4].GetData(false); \
		FVector& LastResult = *(FVector*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& LastSeed = *(int32*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& BaseSeed = *(int32*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		float& TimeLeft = *(float*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Seed, \
			Minimum, \
			Maximum, \
			Duration, \
			Result, \
			LastResult, \
			LastSeed, \
			BaseSeed, \
			TimeLeft, \
			Context \
		); \
	} \
	typedef FRigUnit_MathBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_RandomVector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_Random_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
