// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_AimBone_generated_h
#error "RigUnit_AimBone.generated.h already included, missing '#pragma once' in RigUnit_AimBone.h"
#endif
#define CONTROLRIG_RigUnit_AimBone_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AimBone_Target>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AimItem_Target>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AimBone_DebugSettings>();


#define FRigUnit_AimBoneMath_Execute() \
	void FRigUnit_AimBoneMath::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& InputTransform, \
		const FRigUnit_AimItem_Target& Primary, \
		const FRigUnit_AimItem_Target& Secondary, \
		const float Weight, \
		FTransform& Result, \
		const FRigUnit_AimBone_DebugSettings& DebugSettings, \
		FCachedRigElement& PrimaryCachedSpace, \
		FCachedRigElement& SecondaryCachedSpace, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_136_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& InputTransform, \
		const FRigUnit_AimItem_Target& Primary, \
		const FRigUnit_AimItem_Target& Secondary, \
		const float Weight, \
		FTransform& Result, \
		const FRigUnit_AimBone_DebugSettings& DebugSettings, \
		FCachedRigElement& PrimaryCachedSpace, \
		FCachedRigElement& SecondaryCachedSpace, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FTransform& InputTransform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FRigUnit_AimItem_Target& Primary = *(FRigUnit_AimItem_Target*)RigVMMemoryHandles[1].GetData(false); \
		const FRigUnit_AimItem_Target& Secondary = *(FRigUnit_AimItem_Target*)RigVMMemoryHandles[2].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[3].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[4].GetData(false); \
		const FRigUnit_AimBone_DebugSettings& DebugSettings = *(FRigUnit_AimBone_DebugSettings*)RigVMMemoryHandles[5].GetData(false); \
		FCachedRigElement& PrimaryCachedSpace = *(FCachedRigElement*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& SecondaryCachedSpace = *(FCachedRigElement*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			InputTransform, \
			Primary, \
			Secondary, \
			Weight, \
			Result, \
			DebugSettings, \
			PrimaryCachedSpace, \
			SecondaryCachedSpace, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AimBoneMath>();


#define FRigUnit_AimBone_Execute() \
	void FRigUnit_AimBone::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Bone, \
		const FRigUnit_AimBone_Target& Primary, \
		const FRigUnit_AimBone_Target& Secondary, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const FRigUnit_AimBone_DebugSettings& DebugSettings, \
		FCachedRigElement& CachedBoneIndex, \
		FCachedRigElement& PrimaryCachedSpace, \
		FCachedRigElement& SecondaryCachedSpace, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_202_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Bone, \
		const FRigUnit_AimBone_Target& Primary, \
		const FRigUnit_AimBone_Target& Secondary, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const FRigUnit_AimBone_DebugSettings& DebugSettings, \
		FCachedRigElement& CachedBoneIndex, \
		FCachedRigElement& PrimaryCachedSpace, \
		FCachedRigElement& SecondaryCachedSpace, \
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
		const FRigUnit_AimBone_Target& Primary = *(FRigUnit_AimBone_Target*)RigVMMemoryHandles[1].GetData(false); \
		const FRigUnit_AimBone_Target& Secondary = *(FRigUnit_AimBone_Target*)RigVMMemoryHandles[2].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[4].GetData(false); \
		const FRigUnit_AimBone_DebugSettings& DebugSettings = *(FRigUnit_AimBone_DebugSettings*)RigVMMemoryHandles[5].GetData(false); \
		FCachedRigElement& CachedBoneIndex = *(FCachedRigElement*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& PrimaryCachedSpace = *(FCachedRigElement*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& SecondaryCachedSpace = *(FCachedRigElement*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[9].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Bone, \
			Primary, \
			Secondary, \
			Weight, \
			bPropagateToChildren, \
			DebugSettings, \
			CachedBoneIndex, \
			PrimaryCachedSpace, \
			SecondaryCachedSpace, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AimBone>();


#define FRigUnit_AimItem_Execute() \
	void FRigUnit_AimItem::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		const FRigUnit_AimItem_Target& Primary, \
		const FRigUnit_AimItem_Target& Secondary, \
		const float Weight, \
		const FRigUnit_AimBone_DebugSettings& DebugSettings, \
		FCachedRigElement& CachedItem, \
		FCachedRigElement& PrimaryCachedSpace, \
		FCachedRigElement& SecondaryCachedSpace, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_288_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		const FRigUnit_AimItem_Target& Primary, \
		const FRigUnit_AimItem_Target& Secondary, \
		const float Weight, \
		const FRigUnit_AimBone_DebugSettings& DebugSettings, \
		FCachedRigElement& CachedItem, \
		FCachedRigElement& PrimaryCachedSpace, \
		FCachedRigElement& SecondaryCachedSpace, \
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
		const FRigUnit_AimItem_Target& Primary = *(FRigUnit_AimItem_Target*)RigVMMemoryHandles[1].GetData(false); \
		const FRigUnit_AimItem_Target& Secondary = *(FRigUnit_AimItem_Target*)RigVMMemoryHandles[2].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const FRigUnit_AimBone_DebugSettings& DebugSettings = *(FRigUnit_AimBone_DebugSettings*)RigVMMemoryHandles[4].GetData(false); \
		FCachedRigElement& CachedItem = *(FCachedRigElement*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& PrimaryCachedSpace = *(FCachedRigElement*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& SecondaryCachedSpace = *(FCachedRigElement*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[8].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Item, \
			Primary, \
			Secondary, \
			Weight, \
			DebugSettings, \
			CachedItem, \
			PrimaryCachedSpace, \
			SecondaryCachedSpace, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AimItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_AimBone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
