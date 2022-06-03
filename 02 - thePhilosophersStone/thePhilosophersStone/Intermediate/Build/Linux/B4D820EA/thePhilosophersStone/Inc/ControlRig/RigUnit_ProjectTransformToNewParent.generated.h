// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_ProjectTransformToNewParent_generated_h
#error "RigUnit_ProjectTransformToNewParent.generated.h already included, missing '#pragma once' in RigUnit_ProjectTransformToNewParent.h"
#endif
#define CONTROLRIG_RigUnit_ProjectTransformToNewParent_generated_h


#define FRigUnit_ProjectTransformToNewParent_Execute() \
	void FRigUnit_ProjectTransformToNewParent::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		const bool bChildInitial, \
		const FRigElementKey& OldParent, \
		const bool bOldParentInitial, \
		const FRigElementKey& NewParent, \
		const bool bNewParentInitial, \
		FTransform& Transform, \
		FCachedRigElement& CachedChild, \
		FCachedRigElement& CachedOldParent, \
		FCachedRigElement& CachedNewParent, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ProjectTransformToNewParent_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		const bool bChildInitial, \
		const FRigElementKey& OldParent, \
		const bool bOldParentInitial, \
		const FRigElementKey& NewParent, \
		const bool bNewParentInitial, \
		FTransform& Transform, \
		FCachedRigElement& CachedChild, \
		FCachedRigElement& CachedOldParent, \
		FCachedRigElement& CachedNewParent, \
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
		const FRigElementKey& OldParent = *(FRigElementKey*)RigVMMemoryHandles[2].GetData(false); \
		const bool bOldParentInitial = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		const FRigElementKey& NewParent = *(FRigElementKey*)RigVMMemoryHandles[4].GetData(false); \
		const bool bNewParentInitial = *(bool*)RigVMMemoryHandles[5].GetData(false); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[6].GetData(false); \
		FCachedRigElement& CachedChild = *(FCachedRigElement*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedOldParent = *(FCachedRigElement*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedNewParent = *(FCachedRigElement*)RigVMMemoryHandles[9].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Child, \
			bChildInitial, \
			OldParent, \
			bOldParentInitial, \
			NewParent, \
			bNewParentInitial, \
			Transform, \
			CachedChild, \
			CachedOldParent, \
			CachedNewParent, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ProjectTransformToNewParent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ProjectTransformToNewParent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
