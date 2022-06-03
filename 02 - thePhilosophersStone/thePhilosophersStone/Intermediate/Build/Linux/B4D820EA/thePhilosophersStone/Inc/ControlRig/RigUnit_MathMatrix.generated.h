// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_MathMatrix_generated_h
#error "RigUnit_MathMatrix.generated.h already included, missing '#pragma once' in RigUnit_MathMatrix.h"
#endif
#define CONTROLRIG_RigUnit_MathMatrix_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathMatrix_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathMatrixBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathMatrixBase>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathMatrix_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathMatrixUnaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathMatrixBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathMatrixUnaryOp>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathMatrix_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathMatrixBinaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathMatrixBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathMatrixBinaryOp>();


#define FRigUnit_MathMatrixToTransform_Execute() \
	void FRigUnit_MathMatrixToTransform::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FMatrix& Value, \
		FTransform& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathMatrix_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathMatrixToTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FMatrix& Value, \
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
		const FMatrix& Value = *(FMatrix*)RigVMMemoryHandles[0].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathMatrixBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathMatrixToTransform>();


#define FRigUnit_MathMatrixFromTransform_Execute() \
	void FRigUnit_MathMatrixFromTransform::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Transform, \
		FMatrix& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathMatrix_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Transform, \
		FMatrix& Result, \
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
		FMatrix& Result = *(FMatrix*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Transform, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathMatrixBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathMatrixFromTransform>();


#define FRigUnit_MathMatrixToVectors_Execute() \
	void FRigUnit_MathMatrixToVectors::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FMatrix& Value, \
		FVector& Origin, \
		FVector& X, \
		FVector& Y, \
		FVector& Z, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathMatrix_h_107_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathMatrixToVectors_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FMatrix& Value, \
		FVector& Origin, \
		FVector& X, \
		FVector& Y, \
		FVector& Z, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FMatrix& Value = *(FMatrix*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Origin = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& X = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		FVector& Y = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		FVector& Z = *(FVector*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			Origin, \
			X, \
			Y, \
			Z, \
			Context \
		); \
	} \
	typedef FRigUnit_MathMatrixBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathMatrixToVectors>();


#define FRigUnit_MathMatrixFromVectors_Execute() \
	void FRigUnit_MathMatrixFromVectors::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Origin, \
		const FVector& X, \
		const FVector& Y, \
		const FVector& Z, \
		FMatrix& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathMatrix_h_143_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathMatrixFromVectors_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Origin, \
		const FVector& X, \
		const FVector& Y, \
		const FVector& Z, \
		FMatrix& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FVector& Origin = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& X = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& Y = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const FVector& Z = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		FMatrix& Result = *(FMatrix*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Origin, \
			X, \
			Y, \
			Z, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathMatrixBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathMatrixFromVectors>();


#define FRigUnit_MathMatrixMul_Execute() \
	void FRigUnit_MathMatrixMul::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FMatrix& A, \
		const FMatrix& B, \
		FMatrix& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathMatrix_h_179_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathMatrixMul_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FMatrix& A, \
		const FMatrix& B, \
		FMatrix& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FMatrix& A = *(FMatrix*)RigVMMemoryHandles[0].GetData(false); \
		const FMatrix& B = *(FMatrix*)RigVMMemoryHandles[1].GetData(false); \
		FMatrix& Result = *(FMatrix*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathMatrixBinaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathMatrixMul>();


#define FRigUnit_MathMatrixInverse_Execute() \
	void FRigUnit_MathMatrixInverse::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FMatrix& Value, \
		FMatrix& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathMatrix_h_190_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathMatrixInverse_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FMatrix& Value, \
		FMatrix& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FMatrix& Value = *(FMatrix*)RigVMMemoryHandles[0].GetData(false); \
		FMatrix& Result = *(FMatrix*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathMatrixUnaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathMatrixInverse>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathMatrix_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
