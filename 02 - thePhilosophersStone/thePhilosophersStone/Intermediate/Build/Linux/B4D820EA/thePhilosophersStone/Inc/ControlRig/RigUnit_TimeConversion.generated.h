// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_TimeConversion_generated_h
#error "RigUnit_TimeConversion.generated.h already included, missing '#pragma once' in RigUnit_TimeConversion.h"
#endif
#define CONTROLRIG_RigUnit_TimeConversion_generated_h


#define FRigUnit_FramesToSeconds_Execute() \
	void FRigUnit_FramesToSeconds::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const float Frames, \
		float& Seconds, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_TimeConversion_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FramesToSeconds_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const float Frames, \
		float& Seconds, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const float Frames = *(float*)RigVMMemoryHandles[0].GetData(false); \
		float& Seconds = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Frames, \
			Seconds, \
			Context \
		); \
	} \
	typedef FRigUnit_AnimBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_FramesToSeconds>();


#define FRigUnit_SecondsToFrames_Execute() \
	void FRigUnit_SecondsToFrames::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const float Seconds, \
		float& Frames, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_TimeConversion_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SecondsToFrames_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const float Seconds, \
		float& Frames, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const float Seconds = *(float*)RigVMMemoryHandles[0].GetData(false); \
		float& Frames = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Seconds, \
			Frames, \
			Context \
		); \
	} \
	typedef FRigUnit_AnimBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SecondsToFrames>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_TimeConversion_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
