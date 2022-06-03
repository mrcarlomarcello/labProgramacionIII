// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_SequenceExecution_generated_h
#error "RigUnit_SequenceExecution.generated.h already included, missing '#pragma once' in RigUnit_SequenceExecution.h"
#endif
#define CONTROLRIG_RigUnit_SequenceExecution_generated_h


#define FRigUnit_SequenceExecution_Execute() \
	void FRigUnit_SequenceExecution::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FControlRigExecuteContext& ExecuteContext, \
		FControlRigExecuteContext& A, \
		FControlRigExecuteContext& B, \
		FControlRigExecuteContext& C, \
		FControlRigExecuteContext& D, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_SequenceExecution_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FControlRigExecuteContext& ExecuteContext, \
		FControlRigExecuteContext& A, \
		FControlRigExecuteContext& B, \
		FControlRigExecuteContext& C, \
		FControlRigExecuteContext& D, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[0].GetData(false); \
		FControlRigExecuteContext& A = *(FControlRigExecuteContext*)RigVMMemoryHandles[1].GetData(false); \
		FControlRigExecuteContext& B = *(FControlRigExecuteContext*)RigVMMemoryHandles[2].GetData(false); \
		FControlRigExecuteContext& C = *(FControlRigExecuteContext*)RigVMMemoryHandles[3].GetData(false); \
		FControlRigExecuteContext& D = *(FControlRigExecuteContext*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			ExecuteContext, \
			A, \
			B, \
			C, \
			D, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SequenceExecution>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_SequenceExecution_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
