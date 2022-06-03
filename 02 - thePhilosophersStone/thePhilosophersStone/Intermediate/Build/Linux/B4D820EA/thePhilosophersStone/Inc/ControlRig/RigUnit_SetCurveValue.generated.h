// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_SetCurveValue_generated_h
#error "RigUnit_SetCurveValue.generated.h already included, missing '#pragma once' in RigUnit_SetCurveValue.h"
#endif
#define CONTROLRIG_RigUnit_SetCurveValue_generated_h


#define FRigUnit_SetCurveValue_Execute() \
	void FRigUnit_SetCurveValue::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Curve, \
		const float Value, \
		FCachedRigElement& CachedCurveIndex, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetCurveValue_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetCurveValue_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Curve, \
		const float Value, \
		FCachedRigElement& CachedCurveIndex, \
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
		const FName& Curve = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const float Value = *(float*)RigVMMemoryHandles[1].GetData(false); \
		FCachedRigElement& CachedCurveIndex = *(FCachedRigElement*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Curve, \
			Value, \
			CachedCurveIndex, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetCurveValue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetCurveValue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
