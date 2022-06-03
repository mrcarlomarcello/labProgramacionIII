// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_GetDeltaTime_generated_h
#error "RigUnit_GetDeltaTime.generated.h already included, missing '#pragma once' in RigUnit_GetDeltaTime.h"
#endif
#define CONTROLRIG_RigUnit_GetDeltaTime_generated_h


#define FRigUnit_GetDeltaTime_Execute() \
	void FRigUnit_GetDeltaTime::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		float& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_GetDeltaTime_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetDeltaTime_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		float& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		float& Result = *(float*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_AnimBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetDeltaTime>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_GetDeltaTime_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
