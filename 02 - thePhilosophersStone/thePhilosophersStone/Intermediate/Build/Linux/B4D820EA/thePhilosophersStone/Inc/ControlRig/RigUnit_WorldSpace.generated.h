// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_WorldSpace_generated_h
#error "RigUnit_WorldSpace.generated.h already included, missing '#pragma once' in RigUnit_WorldSpace.h"
#endif
#define CONTROLRIG_RigUnit_WorldSpace_generated_h


#define FRigUnit_ToWorldSpace_Transform_Execute() \
	void FRigUnit_ToWorldSpace_Transform::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Transform, \
		FTransform& World, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_WorldSpace_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Transform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Transform, \
		FTransform& World, \
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
		FTransform& World = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Transform, \
			World, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ToWorldSpace_Transform>();


#define FRigUnit_ToRigSpace_Transform_Execute() \
	void FRigUnit_ToRigSpace_Transform::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Transform, \
		FTransform& Global, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_WorldSpace_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Transform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Transform, \
		FTransform& Global, \
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
		FTransform& Global = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Transform, \
			Global, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ToRigSpace_Transform>();


#define FRigUnit_ToWorldSpace_Location_Execute() \
	void FRigUnit_ToWorldSpace_Location::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Location, \
		FVector& World, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_WorldSpace_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Location_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Location, \
		FVector& World, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FVector& Location = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		FVector& World = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Location, \
			World, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ToWorldSpace_Location>();


#define FRigUnit_ToRigSpace_Location_Execute() \
	void FRigUnit_ToRigSpace_Location::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Location, \
		FVector& Global, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_WorldSpace_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Location_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Location, \
		FVector& Global, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FVector& Location = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Global = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Location, \
			Global, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ToRigSpace_Location>();


#define FRigUnit_ToWorldSpace_Rotation_Execute() \
	void FRigUnit_ToWorldSpace_Rotation::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Rotation, \
		FQuat& World, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_WorldSpace_h_130_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ToWorldSpace_Rotation_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Rotation, \
		FQuat& World, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& Rotation = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		FQuat& World = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Rotation, \
			World, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ToWorldSpace_Rotation>();


#define FRigUnit_ToRigSpace_Rotation_Execute() \
	void FRigUnit_ToRigSpace_Rotation::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Rotation, \
		FQuat& Global, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_WorldSpace_h_159_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ToRigSpace_Rotation_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Rotation, \
		FQuat& Global, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& Rotation = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		FQuat& Global = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Rotation, \
			Global, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_ToRigSpace_Rotation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_WorldSpace_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
