// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_SlideChain_generated_h
#error "RigUnit_SlideChain.generated.h already included, missing '#pragma once' in RigUnit_SlideChain.h"
#endif
#define CONTROLRIG_RigUnit_SlideChain_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SlideChain_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SlideChain_WorkData>();


#define FRigUnit_SlideChain_Execute() \
	void FRigUnit_SlideChain::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& StartBone, \
		const FName& EndBone, \
		const float SlideAmount, \
		const bool bPropagateToChildren, \
		FRigUnit_SlideChain_WorkData& WorkData, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SlideChain_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& StartBone, \
		const FName& EndBone, \
		const float SlideAmount, \
		const bool bPropagateToChildren, \
		FRigUnit_SlideChain_WorkData& WorkData, \
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
		const FName& StartBone = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FName& EndBone = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const float SlideAmount = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FRigUnit_SlideChain_WorkData& WorkData = *(FRigUnit_SlideChain_WorkData*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			StartBone, \
			EndBone, \
			SlideAmount, \
			bPropagateToChildren, \
			WorkData, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SlideChain>();


#define FRigUnit_SlideChainPerItem_Execute() \
	void FRigUnit_SlideChainPerItem::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const float SlideAmount, \
		const bool bPropagateToChildren, \
		FRigUnit_SlideChain_WorkData& WorkData, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SlideChain_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const float SlideAmount, \
		const bool bPropagateToChildren, \
		FRigUnit_SlideChain_WorkData& WorkData, \
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
		const FRigElementKeyCollection& Items = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		const float SlideAmount = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		FRigUnit_SlideChain_WorkData& WorkData = *(FRigUnit_SlideChain_WorkData*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Items, \
			SlideAmount, \
			bPropagateToChildren, \
			WorkData, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SlideChainPerItem>();


#define FRigUnit_SlideChainItemArray_Execute() \
	void FRigUnit_SlideChainItemArray::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const float SlideAmount, \
		const bool bPropagateToChildren, \
		FRigUnit_SlideChain_WorkData& WorkData, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SlideChain_h_130_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const float SlideAmount, \
		const bool bPropagateToChildren, \
		FRigUnit_SlideChain_WorkData& WorkData, \
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
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetData(false); \
		const float SlideAmount = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		FRigUnit_SlideChain_WorkData& WorkData = *(FRigUnit_SlideChain_WorkData*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Items, \
			SlideAmount, \
			bPropagateToChildren, \
			WorkData, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SlideChainItemArray>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SlideChain_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
