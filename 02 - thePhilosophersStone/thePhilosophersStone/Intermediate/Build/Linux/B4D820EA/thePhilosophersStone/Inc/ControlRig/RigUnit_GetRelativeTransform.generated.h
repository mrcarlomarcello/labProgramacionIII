// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_GetRelativeTransform_generated_h
#error "RigUnit_GetRelativeTransform.generated.h already included, missing '#pragma once' in RigUnit_GetRelativeTransform.h"
#endif
#define CONTROLRIG_RigUnit_GetRelativeTransform_generated_h


#define FRigUnit_GetRelativeTransformForItem_Execute() \
	void FRigUnit_GetRelativeTransformForItem::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		const bool bChildInitial, \
		const FRigElementKey& Parent, \
		const bool bParentInitial, \
		FTransform& RelativeTransform, \
		FCachedRigElement& CachedChild, \
		FCachedRigElement& CachedParent, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetRelativeTransform_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetRelativeTransformForItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		const bool bChildInitial, \
		const FRigElementKey& Parent, \
		const bool bParentInitial, \
		FTransform& RelativeTransform, \
		FCachedRigElement& CachedChild, \
		FCachedRigElement& CachedParent, \
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
		const bool bChildInitial = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[2].GetData(false); \
		const bool bParentInitial = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FTransform& RelativeTransform = *(FTransform*)RigVMMemoryHandles[4].GetData(false); \
		FCachedRigElement& CachedChild = *(FCachedRigElement*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedParent = *(FCachedRigElement*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Child, \
			bChildInitial, \
			Parent, \
			bParentInitial, \
			RelativeTransform, \
			CachedChild, \
			CachedParent, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetRelativeTransformForItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetRelativeTransform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
