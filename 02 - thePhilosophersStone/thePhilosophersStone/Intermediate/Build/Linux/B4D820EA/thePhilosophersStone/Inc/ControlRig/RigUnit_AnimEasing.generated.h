// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_AnimEasing_generated_h
#error "RigUnit_AnimEasing.generated.h already included, missing '#pragma once' in RigUnit_AnimEasing.h"
#endif
#define CONTROLRIG_RigUnit_AnimEasing_generated_h


#define FRigUnit_AnimEasingType_Execute() \
	void FRigUnit_AnimEasingType::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		EControlRigAnimEasingType& Type, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_AnimEasing_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AnimEasingType_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		EControlRigAnimEasingType& Type, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		EControlRigAnimEasingType& Type = *(EControlRigAnimEasingType*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Type, \
			Context \
		); \
	} \
	typedef FRigUnit_AnimBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AnimEasingType>();


#define FRigUnit_AnimEasing_Execute() \
	void FRigUnit_AnimEasing::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const float Value, \
		const EControlRigAnimEasingType Type, \
		const float SourceMinimum, \
		const float SourceMaximum, \
		const float TargetMinimum, \
		const float TargetMaximum, \
		float& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_AnimEasing_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AnimEasing_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const float Value, \
		const EControlRigAnimEasingType Type, \
		const float SourceMinimum, \
		const float SourceMaximum, \
		const float TargetMinimum, \
		const float TargetMaximum, \
		float& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const float Value = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const EControlRigAnimEasingType Type = *(EControlRigAnimEasingType*)RigVMMemoryHandles[1].GetData(false); \
		const float SourceMinimum = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float SourceMaximum = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float TargetMinimum = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const float TargetMaximum = *(float*)RigVMMemoryHandles[5].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[6].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			Type, \
			SourceMinimum, \
			SourceMaximum, \
			TargetMinimum, \
			TargetMaximum, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_AnimBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AnimEasing>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Animation_RigUnit_AnimEasing_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
