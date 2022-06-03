// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_PropagateTransform_generated_h
#error "RigUnit_PropagateTransform.generated.h already included, missing '#pragma once' in RigUnit_PropagateTransform.h"
#endif
#define CONTROLRIG_RigUnit_PropagateTransform_generated_h


#define FRigUnit_PropagateTransform_Execute() \
	void FRigUnit_PropagateTransform::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		const bool bRecomputeGlobal, \
		const bool bApplyToChildren, \
		const bool bRecursive, \
		FCachedRigElement& CachedIndex, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_PropagateTransform_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		const bool bRecomputeGlobal, \
		const bool bApplyToChildren, \
		const bool bRecursive, \
		FCachedRigElement& CachedIndex, \
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
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const bool bRecomputeGlobal = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const bool bApplyToChildren = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		const bool bRecursive = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Item, \
			bRecomputeGlobal, \
			bApplyToChildren, \
			bRecursive, \
			CachedIndex, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_PropagateTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_PropagateTransform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
