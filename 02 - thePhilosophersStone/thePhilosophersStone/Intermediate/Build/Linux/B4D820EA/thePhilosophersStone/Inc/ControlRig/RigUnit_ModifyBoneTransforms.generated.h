// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_ModifyBoneTransforms_generated_h
#error "RigUnit_ModifyBoneTransforms.generated.h already included, missing '#pragma once' in RigUnit_ModifyBoneTransforms.h"
#endif
#define CONTROLRIG_RigUnit_ModifyBoneTransforms_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_ModifyBoneTransforms_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_PerBone_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ModifyBoneTransforms_PerBone>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_ModifyBoneTransforms_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_WorkData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_ModifyTransforms_WorkData Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ModifyBoneTransforms_WorkData>();


#define FRigUnit_ModifyBoneTransforms_Execute() \
	void FRigUnit_ModifyBoneTransforms::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigUnit_ModifyBoneTransforms_PerBone>& BoneToModify, \
		const float Weight, \
		const float WeightMinimum, \
		const float WeightMaximum, \
		const EControlRigModifyBoneMode Mode, \
		FRigUnit_ModifyBoneTransforms_WorkData& WorkData, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_ModifyBoneTransforms_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ModifyBoneTransforms_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigUnit_ModifyBoneTransforms_PerBone>& BoneToModify, \
		const float Weight, \
		const float WeightMinimum, \
		const float WeightMaximum, \
		const EControlRigModifyBoneMode Mode, \
		FRigUnit_ModifyBoneTransforms_WorkData& WorkData, \
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
		TArray<FRigUnit_ModifyBoneTransforms_PerBone>& BoneToModify = *(TArray<FRigUnit_ModifyBoneTransforms_PerBone>*)RigVMMemoryHandles[0].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float WeightMinimum = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float WeightMaximum = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const EControlRigModifyBoneMode Mode = *(EControlRigModifyBoneMode*)RigVMMemoryHandles[4].GetData(false); \
		FRigUnit_ModifyBoneTransforms_WorkData& WorkData = *(FRigUnit_ModifyBoneTransforms_WorkData*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			BoneToModify, \
			Weight, \
			WeightMinimum, \
			WeightMaximum, \
			Mode, \
			WorkData, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ModifyBoneTransforms>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_ModifyBoneTransforms_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
