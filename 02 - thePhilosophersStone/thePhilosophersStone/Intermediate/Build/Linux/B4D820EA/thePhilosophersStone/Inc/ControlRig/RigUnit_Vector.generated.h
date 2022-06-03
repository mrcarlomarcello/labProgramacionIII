// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_Vector_generated_h
#error "RigUnit_Vector.generated.h already included, missing '#pragma once' in RigUnit_Vector.h"
#endif
#define CONTROLRIG_RigUnit_Vector_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Vector_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_BinaryVectorOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_BinaryVectorOp>();


#define FRigUnit_Multiply_VectorVector_Execute() \
	void FRigUnit_Multiply_VectorVector::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Argument0, \
		const FVector& Argument1, \
		FVector& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Vector_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_Multiply_VectorVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Argument0, \
		const FVector& Argument1, \
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
		const FVector& Argument0 = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Argument1 = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Argument0, \
			Argument1, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_BinaryVectorOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_Multiply_VectorVector>();


#define FRigUnit_Add_VectorVector_Execute() \
	void FRigUnit_Add_VectorVector::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Argument0, \
		const FVector& Argument1, \
		FVector& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Vector_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_Add_VectorVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Argument0, \
		const FVector& Argument1, \
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
		const FVector& Argument0 = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Argument1 = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Argument0, \
			Argument1, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_BinaryVectorOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_Add_VectorVector>();


#define FRigUnit_Subtract_VectorVector_Execute() \
	void FRigUnit_Subtract_VectorVector::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Argument0, \
		const FVector& Argument1, \
		FVector& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Vector_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_Subtract_VectorVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Argument0, \
		const FVector& Argument1, \
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
		const FVector& Argument0 = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Argument1 = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Argument0, \
			Argument1, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_BinaryVectorOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_Subtract_VectorVector>();


#define FRigUnit_Divide_VectorVector_Execute() \
	void FRigUnit_Divide_VectorVector::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Argument0, \
		const FVector& Argument1, \
		FVector& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Vector_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_Divide_VectorVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Argument0, \
		const FVector& Argument1, \
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
		const FVector& Argument0 = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Argument1 = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Argument0, \
			Argument1, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_BinaryVectorOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_Divide_VectorVector>();


#define FRigUnit_Distance_VectorVector_Execute() \
	void FRigUnit_Distance_VectorVector::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Argument0, \
		const FVector& Argument1, \
		float& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Vector_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_Distance_VectorVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Argument0, \
		const FVector& Argument1, \
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
		const FVector& Argument0 = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Argument1 = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Argument0, \
			Argument1, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_Distance_VectorVector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_Math_RigUnit_Vector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
