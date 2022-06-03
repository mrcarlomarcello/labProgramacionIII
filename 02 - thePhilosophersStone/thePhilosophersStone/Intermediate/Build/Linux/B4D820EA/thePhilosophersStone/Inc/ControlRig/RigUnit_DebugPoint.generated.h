// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_DebugPoint_generated_h
#error "RigUnit_DebugPoint.generated.h already included, missing '#pragma once' in RigUnit_DebugPoint.h"
#endif
#define CONTROLRIG_RigUnit_DebugPoint_generated_h


#define FRigUnit_DebugPoint_Execute() \
	void FRigUnit_DebugPoint::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FVector& Vector, \
		const ERigUnitDebugPointMode Mode, \
		const FLinearColor& Color, \
		const float Scale, \
		const float Thickness, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugPoint_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DebugPoint_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FVector& Vector, \
		const ERigUnitDebugPointMode Mode, \
		const FLinearColor& Color, \
		const float Scale, \
		const float Thickness, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		FVector& Vector = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const ERigUnitDebugPointMode Mode = *(ERigUnitDebugPointMode*)RigVMMemoryHandles[1].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[2].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const FName& Space = *(FName*)RigVMMemoryHandles[5].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[6].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[7].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Vector, \
			Mode, \
			Color, \
			Scale, \
			Thickness, \
			Space, \
			WorldOffset, \
			bEnabled, \
			Context \
		); \
	} \
	typedef FRigUnit_DebugBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DebugPoint>();


#define FRigUnit_DebugPointMutable_Execute() \
	void FRigUnit_DebugPointMutable::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Vector, \
		const ERigUnitDebugPointMode Mode, \
		const FLinearColor& Color, \
		const float Scale, \
		const float Thickness, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugPoint_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DebugPointMutable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Vector, \
		const ERigUnitDebugPointMode Mode, \
		const FLinearColor& Color, \
		const float Scale, \
		const float Thickness, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
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
		const FVector& Vector = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const ERigUnitDebugPointMode Mode = *(ERigUnitDebugPointMode*)RigVMMemoryHandles[1].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[2].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const FName& Space = *(FName*)RigVMMemoryHandles[5].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[6].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[7].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[8].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Vector, \
			Mode, \
			Color, \
			Scale, \
			Thickness, \
			Space, \
			WorldOffset, \
			bEnabled, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_DebugBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DebugPointMutable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugPoint_h


#define FOREACH_ENUM_ERIGUNITDEBUGPOINTMODE(op) \
	op(ERigUnitDebugPointMode::Point) \
	op(ERigUnitDebugPointMode::Vector) \
	op(ERigUnitDebugPointMode::Max) 

enum class ERigUnitDebugPointMode : uint8;
template<> CONTROLRIG_API UEnum* StaticEnum<ERigUnitDebugPointMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
