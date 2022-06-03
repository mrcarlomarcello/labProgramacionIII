// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_SetBoneRotation_generated_h
#error "RigUnit_SetBoneRotation.generated.h already included, missing '#pragma once' in RigUnit_SetBoneRotation.h"
#endif
#define CONTROLRIG_RigUnit_SetBoneRotation_generated_h


#define FRigUnit_SetBoneRotation_Execute() \
	void FRigUnit_SetBoneRotation::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Bone, \
		const FQuat& Rotation, \
		const EBoneGetterSetterMode Space, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedBone, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetBoneRotation_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Bone, \
		const FQuat& Rotation, \
		const EBoneGetterSetterMode Space, \
		const float Weight, \
		const bool bPropagateToChildren, \
		FCachedRigElement& CachedBone, \
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
		const FName& Bone = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& Rotation = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		const EBoneGetterSetterMode Space = *(EBoneGetterSetterMode*)RigVMMemoryHandles[2].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[4].GetData(false); \
		FCachedRigElement& CachedBone = *(FCachedRigElement*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Bone, \
			Rotation, \
			Space, \
			Weight, \
			bPropagateToChildren, \
			CachedBone, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetBoneRotation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetBoneRotation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
