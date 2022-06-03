// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_DebugTransform_generated_h
#error "RigUnit_DebugTransform.generated.h already included, missing '#pragma once' in RigUnit_DebugTransform.h"
#endif
#define CONTROLRIG_RigUnit_DebugTransform_generated_h


#define FRigUnit_DebugTransform_Execute() \
	void FRigUnit_DebugTransform::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FTransform& Transform, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugTransform_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DebugTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FTransform& Transform, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
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
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const ERigUnitDebugTransformMode Mode = *(ERigUnitDebugTransformMode*)RigVMMemoryHandles[1].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[2].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const FName& Space = *(FName*)RigVMMemoryHandles[5].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[6].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[7].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Transform, \
			Mode, \
			Color, \
			Thickness, \
			Scale, \
			Space, \
			WorldOffset, \
			bEnabled, \
			Context \
		); \
	} \
	typedef FRigUnit_DebugBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DebugTransform>();


#define FRigUnit_DebugTransformMutable_Execute() \
	void FRigUnit_DebugTransformMutable::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Transform, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugTransform_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DebugTransformMutable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Transform, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
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
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const ERigUnitDebugTransformMode Mode = *(ERigUnitDebugTransformMode*)RigVMMemoryHandles[1].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[2].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const FName& Space = *(FName*)RigVMMemoryHandles[5].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[6].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[7].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[8].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Transform, \
			Mode, \
			Color, \
			Thickness, \
			Scale, \
			Space, \
			WorldOffset, \
			bEnabled, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_DebugBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DebugTransformMutable>();


#define FRigUnit_DebugTransformMutableItemSpace_Execute() \
	void FRigUnit_DebugTransformMutableItemSpace::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Transform, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FRigElementKey& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugTransform_h_116_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DebugTransformMutableItemSpace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Transform, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FRigElementKey& Space, \
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
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const ERigUnitDebugTransformMode Mode = *(ERigUnitDebugTransformMode*)RigVMMemoryHandles[1].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[2].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const FRigElementKey& Space = *(FRigElementKey*)RigVMMemoryHandles[5].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[6].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[7].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[8].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Transform, \
			Mode, \
			Color, \
			Thickness, \
			Scale, \
			Space, \
			WorldOffset, \
			bEnabled, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_DebugBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DebugTransformMutableItemSpace>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugTransform_h_160_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DebugTransformArrayMutable_WorkData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DebugTransformArrayMutable_WorkData>();


#define FRigUnit_DebugTransformArrayMutable_Execute() \
	void FRigUnit_DebugTransformArrayMutable::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FTransform>& Transforms, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		FRigUnit_DebugTransformArrayMutable_WorkData& WorkData, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugTransform_h_169_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DebugTransformArrayMutable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FTransform>& Transforms, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FName& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		FRigUnit_DebugTransformArrayMutable_WorkData& WorkData, \
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
		TArray<FTransform>& Transforms = *(TArray<FTransform>*)RigVMMemoryHandles[0].GetData(false); \
		const ERigUnitDebugTransformMode Mode = *(ERigUnitDebugTransformMode*)RigVMMemoryHandles[1].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[2].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const FName& Space = *(FName*)RigVMMemoryHandles[5].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[6].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[7].GetData(false); \
		FRigUnit_DebugTransformArrayMutable_WorkData& WorkData = *(FRigUnit_DebugTransformArrayMutable_WorkData*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[9].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Transforms, \
			Mode, \
			Color, \
			Thickness, \
			Scale, \
			Space, \
			WorldOffset, \
			bEnabled, \
			WorkData, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_DebugBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DebugTransformArrayMutable>();


#define FRigUnit_DebugTransformArrayMutableItemSpace_Execute() \
	void FRigUnit_DebugTransformArrayMutableItemSpace::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FTransform>& Transforms, \
		const TArrayView<const int32>& ParentIndices, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FRigElementKey& Space, \
		const FTransform& WorldOffset, \
		const bool bEnabled, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugTransform_h_218_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DebugTransformArrayMutableItemSpace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FTransform>& Transforms, \
		const TArrayView<const int32>& ParentIndices, \
		const ERigUnitDebugTransformMode Mode, \
		const FLinearColor& Color, \
		const float Thickness, \
		const float Scale, \
		const FRigElementKey& Space, \
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
		TArray<FTransform>& Transforms = *(TArray<FTransform>*)RigVMMemoryHandles[0].GetData(false); \
		TArray<int32>& ParentIndices = *(TArray<int32>*)RigVMMemoryHandles[1].GetData(false); \
		const ERigUnitDebugTransformMode Mode = *(ERigUnitDebugTransformMode*)RigVMMemoryHandles[2].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[3].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const FRigElementKey& Space = *(FRigElementKey*)RigVMMemoryHandles[6].GetData(false); \
		const FTransform& WorldOffset = *(FTransform*)RigVMMemoryHandles[7].GetData(false); \
		const bool bEnabled = *(bool*)RigVMMemoryHandles[8].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[9].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Transforms, \
			ParentIndices, \
			Mode, \
			Color, \
			Thickness, \
			Scale, \
			Space, \
			WorldOffset, \
			bEnabled, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_DebugBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DebugTransformArrayMutableItemSpace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugTransform_h


#define FOREACH_ENUM_ERIGUNITDEBUGTRANSFORMMODE(op) \
	op(ERigUnitDebugTransformMode::Point) \
	op(ERigUnitDebugTransformMode::Axes) \
	op(ERigUnitDebugTransformMode::Box) \
	op(ERigUnitDebugTransformMode::Max) 

enum class ERigUnitDebugTransformMode : uint8;
template<> CONTROLRIG_API UEnum* StaticEnum<ERigUnitDebugTransformMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
