// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_GetRelativeBoneTransform_generated_h
#error "RigUnit_GetRelativeBoneTransform.generated.h already included, missing '#pragma once' in RigUnit_GetRelativeBoneTransform.h"
#endif
#define CONTROLRIG_RigUnit_GetRelativeBoneTransform_generated_h


#define FRigUnit_GetRelativeBoneTransform_Execute() \
	void FRigUnit_GetRelativeBoneTransform::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Bone, \
		const FName& Space, \
		FTransform& Transform, \
		FCachedRigElement& CachedBone, \
		FCachedRigElement& CachedSpace, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetRelativeBoneTransform_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Bone, \
		const FName& Space, \
		FTransform& Transform, \
		FCachedRigElement& CachedBone, \
		FCachedRigElement& CachedSpace, \
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
		const FName& Space = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		FCachedRigElement& CachedBone = *(FCachedRigElement*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedSpace = *(FCachedRigElement*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Bone, \
			Space, \
			Transform, \
			CachedBone, \
			CachedSpace, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetRelativeBoneTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetRelativeBoneTransform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
