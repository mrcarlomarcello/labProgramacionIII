// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_IsInteracting_generated_h
#error "RigUnit_IsInteracting.generated.h already included, missing '#pragma once' in RigUnit_IsInteracting.h"
#endif
#define CONTROLRIG_RigUnit_IsInteracting_generated_h


#define FRigUnit_IsInteracting_Execute() \
	void FRigUnit_IsInteracting::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		bool& bIsInteracting, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_IsInteracting_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_IsInteracting_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		bool& bIsInteracting, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		bool& bIsInteracting = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			bIsInteracting, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_IsInteracting>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_IsInteracting_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
