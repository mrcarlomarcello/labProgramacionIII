// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_Quaternion_generated_h
#error "RigUnit_Quaternion.generated.h already included, missing '#pragma once' in RigUnit_Quaternion.h"
#endif
#define CONTROLRIG_RigUnit_Quaternion_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Quaternion_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_BinaryQuaternionOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_BinaryQuaternionOp>();


#define FRigUnit_MultiplyQuaternion_Execute() \
	void FRigUnit_MultiplyQuaternion::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Argument0, \
		const FQuat& Argument1, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Quaternion_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MultiplyQuaternion_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Argument0, \
		const FQuat& Argument1, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& Argument0 = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& Argument1 = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Argument0, \
			Argument1, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_BinaryQuaternionOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MultiplyQuaternion>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Quaternion_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_UnaryQuaternionOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_UnaryQuaternionOp>();


#define FRigUnit_InverseQuaterion_Execute() \
	void FRigUnit_InverseQuaterion::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Argument, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Quaternion_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_InverseQuaterion_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Argument, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& Argument = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Argument, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_UnaryQuaternionOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_InverseQuaterion>();


#define FRigUnit_QuaternionToAxisAndAngle_Execute() \
	void FRigUnit_QuaternionToAxisAndAngle::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Argument, \
		FVector& Axis, \
		float& Angle, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Quaternion_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Argument, \
		FVector& Axis, \
		float& Angle, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& Argument = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Axis = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		float& Angle = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Argument, \
			Axis, \
			Angle, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_QuaternionToAxisAndAngle>();


#define FRigUnit_QuaternionFromAxisAndAngle_Execute() \
	void FRigUnit_QuaternionFromAxisAndAngle::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Axis, \
		const float Angle, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Quaternion_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Axis, \
		const float Angle, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FVector& Axis = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const float Angle = *(float*)RigVMMemoryHandles[1].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Axis, \
			Angle, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_QuaternionFromAxisAndAngle>();


#define FRigUnit_QuaternionToAngle_Execute() \
	void FRigUnit_QuaternionToAngle::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Axis, \
		const FQuat& Argument, \
		float& Angle, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Quaternion_h_107_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_QuaternionToAngle_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Axis, \
		const FQuat& Argument, \
		float& Angle, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FVector& Axis = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& Argument = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		float& Angle = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Axis, \
			Argument, \
			Angle, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_QuaternionToAngle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Quaternion_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
