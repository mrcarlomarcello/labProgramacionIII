// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_DrawContainer_generated_h
#error "RigUnit_DrawContainer.generated.h already included, missing '#pragma once' in RigUnit_DrawContainer.h"
#endif
#define CONTROLRIG_RigUnit_DrawContainer_generated_h


#define FRigUnit_DrawContainerGetInstruction_Execute() \
	void FRigUnit_DrawContainerGetInstruction::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& InstructionName, \
		FLinearColor& Color, \
		FTransform& Transform, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Drawing_RigUnit_DrawContainer_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DrawContainerGetInstruction_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& InstructionName, \
		FLinearColor& Color, \
		FTransform& Transform, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FName& InstructionName = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			InstructionName, \
			Color, \
			Transform, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DrawContainerGetInstruction>();


#define FRigUnit_DrawContainerSetColor_Execute() \
	void FRigUnit_DrawContainerSetColor::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& InstructionName, \
		const FLinearColor& Color, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Drawing_RigUnit_DrawContainer_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetColor_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& InstructionName, \
		const FLinearColor& Color, \
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
		const FName& InstructionName = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			InstructionName, \
			Color, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DrawContainerSetColor>();


#define FRigUnit_DrawContainerSetThickness_Execute() \
	void FRigUnit_DrawContainerSetThickness::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& InstructionName, \
		const float Thickness, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Drawing_RigUnit_DrawContainer_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetThickness_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& InstructionName, \
		const float Thickness, \
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
		const FName& InstructionName = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[1].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			InstructionName, \
			Thickness, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DrawContainerSetThickness>();


#define FRigUnit_DrawContainerSetTransform_Execute() \
	void FRigUnit_DrawContainerSetTransform::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& InstructionName, \
		const FTransform& Transform, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Drawing_RigUnit_DrawContainer_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DrawContainerSetTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& InstructionName, \
		const FTransform& Transform, \
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
		const FName& InstructionName = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			InstructionName, \
			Transform, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DrawContainerSetTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Drawing_RigUnit_DrawContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
