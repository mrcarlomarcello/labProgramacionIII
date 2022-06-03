// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_ForLoop_generated_h
#error "RigUnit_ForLoop.generated.h already included, missing '#pragma once' in RigUnit_ForLoop.h"
#endif
#define CONTROLRIG_RigUnit_ForLoop_generated_h


#define FRigUnit_ForLoopCount_Execute() \
	void FRigUnit_ForLoopCount::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 Count, \
		int32& Index, \
		float& Ratio, \
		bool& Continue, \
		FControlRigExecuteContext& Completed, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_ForLoop_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ForLoopCount_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 Count, \
		int32& Index, \
		float& Ratio, \
		bool& Continue, \
		FControlRigExecuteContext& Completed, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const int32 Count = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		int32& Index = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		float& Ratio = *(float*)RigVMMemoryHandles[2].GetData(false); \
		bool& Continue = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FControlRigExecuteContext& Completed = *(FControlRigExecuteContext*)RigVMMemoryHandles[4].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Count, \
			Index, \
			Ratio, \
			Continue, \
			Completed, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ForLoopCount>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_ForLoop_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
