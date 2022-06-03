// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_SetRelativeTransform_generated_h
#error "RigUnit_SetRelativeTransform.generated.h already included, missing '#pragma once' in RigUnit_SetRelativeTransform.h"
#endif
#define CONTROLRIG_RigUnit_SetRelativeTransform_generated_h


#define FRigUnit_SetRelativeTransformForItem_Execute() \
	void FRigUnit_SetRelativeTransformForItem::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent, \
		const bool bParentInitial, \
		const FTransform& RelativeTransform, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedChild, \
		FCachedRigElement& CachedParent, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetRelativeTransform_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent, \
		const bool bParentInitial, \
		const FTransform& RelativeTransform, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedChild, \
		FCachedRigElement& CachedParent, \
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
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const bool bParentInitial = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		const FTransform& RelativeTransform = *(FTransform*)RigVMMemoryHandles[3].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[5].GetData(false); \
		FCachedRigElement& CachedChild = *(FCachedRigElement*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedParent = *(FCachedRigElement*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[8].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Child, \
			Parent, \
			bParentInitial, \
			RelativeTransform, \
			Weight, \
			bPropagateToChildren, \
			CachedChild, \
			CachedParent, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetRelativeTransformForItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetRelativeTransform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
