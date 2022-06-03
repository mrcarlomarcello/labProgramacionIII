// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_MultiFABRIK_generated_h
#error "RigUnit_MultiFABRIK.generated.h already included, missing '#pragma once' in RigUnit_MultiFABRIK.h"
#endif
#define CONTROLRIG_RigUnit_MultiFABRIK_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_MultiFABRIK_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_WorkData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MultiFABRIK_WorkData>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_MultiFABRIK_h_103_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_EndEffector_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MultiFABRIK_EndEffector>();


#define FRigUnit_MultiFABRIK_Execute() \
	void FRigUnit_MultiFABRIK::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& RootBone, \
		const TArrayView<const FRigUnit_MultiFABRIK_EndEffector>& Effectors, \
		const float Precision, \
		const bool bPropagateToChildren, \
		const int32 MaxIterations, \
		FRigUnit_MultiFABRIK_WorkData& WorkData, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_MultiFABRIK_h_124_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& RootBone, \
		const TArrayView<const FRigUnit_MultiFABRIK_EndEffector>& Effectors, \
		const float Precision, \
		const bool bPropagateToChildren, \
		const int32 MaxIterations, \
		FRigUnit_MultiFABRIK_WorkData& WorkData, \
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
		const FName& RootBone = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FRigUnit_MultiFABRIK_EndEffector>& Effectors = *(TArray<FRigUnit_MultiFABRIK_EndEffector>*)RigVMMemoryHandles[1].GetData(false); \
		const float Precision = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		const int32 MaxIterations = *(int32*)RigVMMemoryHandles[4].GetData(false); \
		FRigUnit_MultiFABRIK_WorkData& WorkData = *(FRigUnit_MultiFABRIK_WorkData*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			RootBone, \
			Effectors, \
			Precision, \
			bPropagateToChildren, \
			MaxIterations, \
			WorkData, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MultiFABRIK>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_MultiFABRIK_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
