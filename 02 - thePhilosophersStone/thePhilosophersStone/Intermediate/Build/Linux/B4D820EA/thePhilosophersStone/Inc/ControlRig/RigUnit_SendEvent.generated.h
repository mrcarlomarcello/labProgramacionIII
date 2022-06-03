// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_SendEvent_generated_h
#error "RigUnit_SendEvent.generated.h already included, missing '#pragma once' in RigUnit_SendEvent.h"
#endif
#define CONTROLRIG_RigUnit_SendEvent_generated_h


#define FRigUnit_SendEvent_Execute() \
	void FRigUnit_SendEvent::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const ERigEvent Event, \
		const FRigElementKey& Item, \
		const float OffsetInSeconds, \
		const bool bEnable, \
		const bool bOnlyDuringInteraction, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SendEvent_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SendEvent_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const ERigEvent Event, \
		const FRigElementKey& Item, \
		const float OffsetInSeconds, \
		const bool bEnable, \
		const bool bOnlyDuringInteraction, \
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
		const ERigEvent Event = *(ERigEvent*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const float OffsetInSeconds = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const bool bEnable = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		const bool bOnlyDuringInteraction = *(bool*)RigVMMemoryHandles[4].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Event, \
			Item, \
			OffsetInSeconds, \
			bEnable, \
			bOnlyDuringInteraction, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SendEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SendEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
