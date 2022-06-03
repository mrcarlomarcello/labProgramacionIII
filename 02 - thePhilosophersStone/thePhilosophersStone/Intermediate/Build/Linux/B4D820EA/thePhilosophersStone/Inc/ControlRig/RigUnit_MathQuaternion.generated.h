// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_MathQuaternion_generated_h
#error "RigUnit_MathQuaternion.generated.h already included, missing '#pragma once' in RigUnit_MathQuaternion.h"
#endif
#define CONTROLRIG_RigUnit_MathQuaternion_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionBase>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionUnaryOp>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionBinaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionBinaryOp>();


#define FRigUnit_MathQuaternionFromAxisAndAngle_Execute() \
	void FRigUnit_MathQuaternionFromAxisAndAngle::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Axis, \
		const float Angle, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromAxisAndAngle_Statics; \
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
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionFromAxisAndAngle>();


#define FRigUnit_MathQuaternionFromEuler_Execute() \
	void FRigUnit_MathQuaternionFromEuler::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Euler, \
		const EEulerRotationOrder RotationOrder, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromEuler_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Euler, \
		const EEulerRotationOrder RotationOrder, \
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
		const FVector& Euler = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const EEulerRotationOrder RotationOrder = *(EEulerRotationOrder*)RigVMMemoryHandles[1].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Euler, \
			RotationOrder, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionFromEuler>();


#define FRigUnit_MathQuaternionFromRotator_Execute() \
	void FRigUnit_MathQuaternionFromRotator::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRotator& Rotator, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_114_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromRotator_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRotator& Rotator, \
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
		const FRotator& Rotator = *(FRotator*)RigVMMemoryHandles[0].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Rotator, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionFromRotator>();


#define FRigUnit_MathQuaternionFromTwoVectors_Execute() \
	void FRigUnit_MathQuaternionFromTwoVectors::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& A, \
		const FVector& B, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_138_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionFromTwoVectors_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& A, \
		const FVector& B, \
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
		const FVector& A = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& B = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionFromTwoVectors>();


#define FRigUnit_MathQuaternionToAxisAndAngle_Execute() \
	void FRigUnit_MathQuaternionToAxisAndAngle::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Value, \
		FVector& Axis, \
		float& Angle, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_165_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToAxisAndAngle_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Value, \
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
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Axis = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		float& Angle = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			Axis, \
			Angle, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionToAxisAndAngle>();


#define FRigUnit_MathQuaternionScale_Execute() \
	void FRigUnit_MathQuaternionScale::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FQuat& Value, \
		const float Scale, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_193_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionScale_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FQuat& Value, \
		const float Scale, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			Scale, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionScale>();


#define FRigUnit_MathQuaternionToEuler_Execute() \
	void FRigUnit_MathQuaternionToEuler::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Value, \
		const EEulerRotationOrder RotationOrder, \
		FVector& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_217_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToEuler_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Value, \
		const EEulerRotationOrder RotationOrder, \
		FVector& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const EEulerRotationOrder RotationOrder = *(EEulerRotationOrder*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			RotationOrder, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionToEuler>();


#define FRigUnit_MathQuaternionToRotator_Execute() \
	void FRigUnit_MathQuaternionToRotator::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Value, \
		FRotator& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_245_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionToRotator_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Value, \
		FRotator& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		FRotator& Result = *(FRotator*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionToRotator>();


#define FRigUnit_MathQuaternionMul_Execute() \
	void FRigUnit_MathQuaternionMul::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_269_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionMul_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
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
		const FQuat& A = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& B = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBinaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionMul>();


#define FRigUnit_MathQuaternionInverse_Execute() \
	void FRigUnit_MathQuaternionInverse::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Value, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_280_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionInverse_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Value, \
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
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionUnaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionInverse>();


#define FRigUnit_MathQuaternionSlerp_Execute() \
	void FRigUnit_MathQuaternionSlerp::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		const float T, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_291_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSlerp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		const float T, \
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
		const FQuat& A = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& B = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		const float T = *(float*)RigVMMemoryHandles[2].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			A, \
			B, \
			T, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionSlerp>();


#define FRigUnit_MathQuaternionEquals_Execute() \
	void FRigUnit_MathQuaternionEquals::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_321_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionEquals_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		bool& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& A = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& B = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionEquals>();


#define FRigUnit_MathQuaternionNotEquals_Execute() \
	void FRigUnit_MathQuaternionNotEquals::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_348_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionNotEquals_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		bool& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& A = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& B = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionNotEquals>();


#define FRigUnit_MathQuaternionSelectBool_Execute() \
	void FRigUnit_MathQuaternionSelectBool::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const bool Condition, \
		const FQuat& IfTrue, \
		const FQuat& IfFalse, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_375_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSelectBool_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const bool Condition, \
		const FQuat& IfTrue, \
		const FQuat& IfFalse, \
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
		const bool Condition = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& IfTrue = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		const FQuat& IfFalse = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Condition, \
			IfTrue, \
			IfFalse, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionSelectBool>();


#define FRigUnit_MathQuaternionDot_Execute() \
	void FRigUnit_MathQuaternionDot::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
		float& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_405_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionDot_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& A, \
		const FQuat& B, \
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
		const FQuat& A = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& B = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionDot>();


#define FRigUnit_MathQuaternionUnit_Execute() \
	void FRigUnit_MathQuaternionUnit::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Value, \
		FQuat& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_432_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionUnit_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Value, \
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
		const FQuat& Value = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionUnaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionUnit>();


#define FRigUnit_MathQuaternionRotateVector_Execute() \
	void FRigUnit_MathQuaternionRotateVector::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Quaternion, \
		const FVector& Vector, \
		FVector& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_443_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotateVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Quaternion, \
		const FVector& Vector, \
		FVector& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& Quaternion = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Vector = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Quaternion, \
			Vector, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionRotateVector>();


#define FRigUnit_MathQuaternionGetAxis_Execute() \
	void FRigUnit_MathQuaternionGetAxis::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Quaternion, \
		const EAxis::Type Axis, \
		FVector& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_470_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionGetAxis_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Quaternion, \
		const EAxis::Type Axis, \
		FVector& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& Quaternion = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const EAxis::Type Axis = *(EAxis::Type*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Quaternion, \
			Axis, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionGetAxis>();


#define FRigUnit_MathQuaternionSwingTwist_Execute() \
	void FRigUnit_MathQuaternionSwingTwist::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Input, \
		const FVector& TwistAxis, \
		FQuat& Swing, \
		FQuat& Twist, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_499_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionSwingTwist_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Input, \
		const FVector& TwistAxis, \
		FQuat& Swing, \
		FQuat& Twist, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& Input = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& TwistAxis = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FQuat& Swing = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		FQuat& Twist = *(FQuat*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Input, \
			TwistAxis, \
			Swing, \
			Twist, \
			Context \
		); \
	} \
	typedef FRigUnit_MathQuaternionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionSwingTwist>();


#define FRigUnit_MathQuaternionRotationOrder_Execute() \
	void FRigUnit_MathQuaternionRotationOrder::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		EEulerRotationOrder& RotationOrder, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h_529_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathQuaternionRotationOrder_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		EEulerRotationOrder& RotationOrder, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		EEulerRotationOrder& RotationOrder = *(EEulerRotationOrder*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			RotationOrder, \
			Context \
		); \
	} \
	typedef FRigUnit_MathBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathQuaternionRotationOrder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathQuaternion_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
