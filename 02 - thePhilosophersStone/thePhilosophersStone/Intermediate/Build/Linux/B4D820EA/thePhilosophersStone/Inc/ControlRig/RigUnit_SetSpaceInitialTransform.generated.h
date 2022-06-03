// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_SetSpaceInitialTransform_generated_h
#error "RigUnit_SetSpaceInitialTransform.generated.h already included, missing '#pragma once' in RigUnit_SetSpaceInitialTransform.h"
#endif
#define CONTROLRIG_RigUnit_SetSpaceInitialTransform_generated_h


#define FRigUnit_SetSpaceInitialTransform_Execute() \
	void FRigUnit_SetSpaceInitialTransform::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& SpaceName, \
		const FTransform& Transform, \
		FTransform& Result, \
		const EBoneGetterSetterMode Space, \
		FCachedRigElement& CachedSpaceIndex, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetSpaceInitialTransform_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetSpaceInitialTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& SpaceName, \
		const FTransform& Transform, \
		FTransform& Result, \
		const EBoneGetterSetterMode Space, \
		FCachedRigElement& CachedSpaceIndex, \
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
		const FName& SpaceName = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		const EBoneGetterSetterMode Space = *(EBoneGetterSetterMode*)RigVMMemoryHandles[3].GetData(false); \
		FCachedRigElement& CachedSpaceIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			SpaceName, \
			Transform, \
			Result, \
			Space, \
			CachedSpaceIndex, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetSpaceInitialTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetSpaceInitialTransform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
