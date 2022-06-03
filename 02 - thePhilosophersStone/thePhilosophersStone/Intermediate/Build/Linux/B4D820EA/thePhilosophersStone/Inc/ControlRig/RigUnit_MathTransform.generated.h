// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_MathTransform_generated_h
#error "RigUnit_MathTransform.generated.h already included, missing '#pragma once' in RigUnit_MathTransform.h"
#endif
#define CONTROLRIG_RigUnit_MathTransform_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathTransform_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathTransformBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathTransformBase>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathTransform_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathTransformMutableBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathMutableBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathTransformMutableBase>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathTransform_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathTransformUnaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathTransformBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathTransformUnaryOp>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathTransform_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathTransformBinaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathTransformBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathTransformBinaryOp>();


#define FRigUnit_MathTransformFromEulerTransform_Execute() \
	void FRigUnit_MathTransformFromEulerTransform::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FEulerTransform& EulerTransform, \
		FTransform& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathTransform_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathTransformFromEulerTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FEulerTransform& EulerTransform, \
		FTransform& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FEulerTransform& EulerTransform = *(FEulerTransform*)RigVMMemoryHandles[0].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			EulerTransform, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathTransformBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathTransformFromEulerTransform>();


#define FRigUnit_MathTransformToEulerTransform_Execute() \
	void FRigUnit_MathTransformToEulerTransform::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Value, \
		FEulerTransform& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathTransform_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathTransformToEulerTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Value, \
		FEulerTransform& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		FEulerTransform& Result = *(FEulerTransform*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathTransformBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathTransformToEulerTransform>();


#define FRigUnit_MathTransformMul_Execute() \
	void FRigUnit_MathTransformMul::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& A, \
		const FTransform& B, \
		FTransform& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathTransform_h_113_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathTransformMul_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& A, \
		const FTransform& B, \
		FTransform& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FTransform& A = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FTransform& B = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathTransformBinaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathTransformMul>();


#define FRigUnit_MathTransformMakeRelative_Execute() \
	void FRigUnit_MathTransformMakeRelative::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Global, \
		const FTransform& Parent, \
		FTransform& Local, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathTransform_h_124_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeRelative_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Global, \
		const FTransform& Parent, \
		FTransform& Local, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FTransform& Global = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FTransform& Parent = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		FTransform& Local = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Global, \
			Parent, \
			Local, \
			Context \
		); \
	} \
	typedef FRigUnit_MathTransformBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathTransformMakeRelative>();


#define FRigUnit_MathTransformMakeAbsolute_Execute() \
	void FRigUnit_MathTransformMakeAbsolute::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Local, \
		const FTransform& Parent, \
		FTransform& Global, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathTransform_h_150_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathTransformMakeAbsolute_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Local, \
		const FTransform& Parent, \
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
		const FTransform& Local = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FTransform& Parent = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		FTransform& Global = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Local, \
			Parent, \
			Global, \
			Context \
		); \
	} \
	typedef FRigUnit_MathTransformBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathTransformMakeAbsolute>();


#define FRigUnit_MathTransformAccumulateArray_Execute() \
	void FRigUnit_MathTransformAccumulateArray::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		TArray<FTransform>& Transforms, \
		const EBoneGetterSetterMode TargetSpace, \
		const FTransform& Root, \
		const TArrayView<const int32>& ParentIndices, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathTransform_h_178_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathTransformAccumulateArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		TArray<FTransform>& Transforms, \
		const EBoneGetterSetterMode TargetSpace, \
		const FTransform& Root, \
		const TArrayView<const int32>& ParentIndices, \
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
		const EBoneGetterSetterMode TargetSpace = *(EBoneGetterSetterMode*)RigVMMemoryHandles[1].GetData(false); \
		const FTransform& Root = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		TArray<int32>& ParentIndices = *(TArray<int32>*)RigVMMemoryHandles[3].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Transforms, \
			TargetSpace, \
			Root, \
			ParentIndices, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_MathTransformMutableBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathTransformAccumulateArray>();


#define FRigUnit_MathTransformInverse_Execute() \
	void FRigUnit_MathTransformInverse::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Value, \
		FTransform& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathTransform_h_220_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathTransformInverse_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Value, \
		FTransform& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathTransformUnaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathTransformInverse>();


#define FRigUnit_MathTransformLerp_Execute() \
	void FRigUnit_MathTransformLerp::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& A, \
		const FTransform& B, \
		const float T, \
		FTransform& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathTransform_h_231_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathTransformLerp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& A, \
		const FTransform& B, \
		const float T, \
		FTransform& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FTransform& A = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FTransform& B = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		const float T = *(float*)RigVMMemoryHandles[2].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[3].GetData(false); \
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
	typedef FRigUnit_MathTransformBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathTransformLerp>();


#define FRigUnit_MathTransformSelectBool_Execute() \
	void FRigUnit_MathTransformSelectBool::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const bool Condition, \
		const FTransform& IfTrue, \
		const FTransform& IfFalse, \
		FTransform& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathTransform_h_261_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathTransformSelectBool_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const bool Condition, \
		const FTransform& IfTrue, \
		const FTransform& IfFalse, \
		FTransform& Result, \
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
		const FTransform& IfTrue = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		const FTransform& IfFalse = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[3].GetData(false); \
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
	typedef FRigUnit_MathTransformBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathTransformSelectBool>();


#define FRigUnit_MathTransformRotateVector_Execute() \
	void FRigUnit_MathTransformRotateVector::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Transform, \
		const FVector& Direction, \
		FVector& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathTransform_h_291_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathTransformRotateVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Transform, \
		const FVector& Direction, \
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
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Direction = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Transform, \
			Direction, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathTransformBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathTransformRotateVector>();


#define FRigUnit_MathTransformTransformVector_Execute() \
	void FRigUnit_MathTransformTransformVector::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Transform, \
		const FVector& Location, \
		FVector& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathTransform_h_318_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathTransformTransformVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Transform, \
		const FVector& Location, \
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
		const FTransform& Transform = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Location = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Transform, \
			Location, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathTransformBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathTransformTransformVector>();


#define FRigUnit_MathTransformFromSRT_Execute() \
	void FRigUnit_MathTransformFromSRT::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Location, \
		const FVector& Rotation, \
		const EEulerRotationOrder RotationOrder, \
		const FVector& Scale, \
		FTransform& Transform, \
		FEulerTransform& EulerTransform, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathTransform_h_345_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathTransformFromSRT_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Location, \
		const FVector& Rotation, \
		const EEulerRotationOrder RotationOrder, \
		const FVector& Scale, \
		FTransform& Transform, \
		FEulerTransform& EulerTransform, \
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
		const FVector& Rotation = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const EEulerRotationOrder RotationOrder = *(EEulerRotationOrder*)RigVMMemoryHandles[2].GetData(false); \
		const FVector& Scale = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[4].GetData(false); \
		FEulerTransform& EulerTransform = *(FEulerTransform*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Location, \
			Rotation, \
			RotationOrder, \
			Scale, \
			Transform, \
			EulerTransform, \
			Context \
		); \
	} \
	typedef FRigUnit_MathTransformBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathTransformFromSRT>();


#define FRigUnit_MathTransformClampSpatially_Execute() \
	void FRigUnit_MathTransformClampSpatially::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Value, \
		const EAxis::Type Axis, \
		const EControlRigClampSpatialMode::Type Type, \
		const float Minimum, \
		const float Maximum, \
		const FTransform& Space, \
		const bool bDrawDebug, \
		const FLinearColor& DebugColor, \
		const float DebugThickness, \
		FTransform& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathTransform_h_385_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathTransformClampSpatially_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Value, \
		const EAxis::Type Axis, \
		const EControlRigClampSpatialMode::Type Type, \
		const float Minimum, \
		const float Maximum, \
		const FTransform& Space, \
		const bool bDrawDebug, \
		const FLinearColor& DebugColor, \
		const float DebugThickness, \
		FTransform& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FTransform& Value = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const EAxis::Type Axis = *(EAxis::Type*)RigVMMemoryHandles[1].GetData(false); \
		const EControlRigClampSpatialMode::Type Type = *(EControlRigClampSpatialMode::Type*)RigVMMemoryHandles[2].GetData(false); \
		const float Minimum = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Maximum = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const FTransform& Space = *(FTransform*)RigVMMemoryHandles[5].GetData(false); \
		const bool bDrawDebug = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		const FLinearColor& DebugColor = *(FLinearColor*)RigVMMemoryHandles[7].GetData(false); \
		const float DebugThickness = *(float*)RigVMMemoryHandles[8].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[9].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			Axis, \
			Type, \
			Minimum, \
			Maximum, \
			Space, \
			bDrawDebug, \
			DebugColor, \
			DebugThickness, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathTransformBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathTransformClampSpatially>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathTransform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
