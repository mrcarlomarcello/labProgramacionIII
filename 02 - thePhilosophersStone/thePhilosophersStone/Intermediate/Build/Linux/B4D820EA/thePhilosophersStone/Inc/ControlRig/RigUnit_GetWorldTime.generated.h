// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_GetWorldTime_generated_h
#error "RigUnit_GetWorldTime.generated.h already included, missing '#pragma once' in RigUnit_GetWorldTime.h"
#endif
#define CONTROLRIG_RigUnit_GetWorldTime_generated_h


#define FRigUnit_GetWorldTime_Execute() \
	void FRigUnit_GetWorldTime::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		float& Year, \
		float& Month, \
		float& Day, \
		float& WeekDay, \
		float& Hours, \
		float& Minutes, \
		float& Seconds, \
		float& OverallSeconds, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_GetWorldTime_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetWorldTime_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		float& Year, \
		float& Month, \
		float& Day, \
		float& WeekDay, \
		float& Hours, \
		float& Minutes, \
		float& Seconds, \
		float& OverallSeconds, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		float& Year = *(float*)RigVMMemoryHandles[0].GetData(false); \
		float& Month = *(float*)RigVMMemoryHandles[1].GetData(false); \
		float& Day = *(float*)RigVMMemoryHandles[2].GetData(false); \
		float& WeekDay = *(float*)RigVMMemoryHandles[3].GetData(false); \
		float& Hours = *(float*)RigVMMemoryHandles[4].GetData(false); \
		float& Minutes = *(float*)RigVMMemoryHandles[5].GetData(false); \
		float& Seconds = *(float*)RigVMMemoryHandles[6].GetData(false); \
		float& OverallSeconds = *(float*)RigVMMemoryHandles[7].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Year, \
			Month, \
			Day, \
			WeekDay, \
			Hours, \
			Minutes, \
			Seconds, \
			OverallSeconds, \
			Context \
		); \
	} \
	typedef FRigUnit_AnimBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetWorldTime>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_GetWorldTime_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
