// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_MathColor_generated_h
#error "RigUnit_MathColor.generated.h already included, missing '#pragma once' in RigUnit_MathColor.h"
#endif
#define CONTROLRIG_RigUnit_MathColor_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathColor_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathColorBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathColorBase>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathColor_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathColorBinaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathColorBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathColorBinaryOp>();


#define FRigUnit_MathColorFromFloat_Execute() \
	void FRigUnit_MathColorFromFloat::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const float Value, \
		FLinearColor& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathColor_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathColorFromFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const float Value, \
		FLinearColor& Result, \
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
		FLinearColor& Result = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathColorBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathColorFromFloat>();


#define FRigUnit_MathColorAdd_Execute() \
	void FRigUnit_MathColorAdd::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FLinearColor& A, \
		const FLinearColor& B, \
		FLinearColor& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathColor_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathColorAdd_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FLinearColor& A, \
		const FLinearColor& B, \
		FLinearColor& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FLinearColor& A = *(FLinearColor*)RigVMMemoryHandles[0].GetData(false); \
		const FLinearColor& B = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		FLinearColor& Result = *(FLinearColor*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathColorBinaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathColorAdd>();


#define FRigUnit_MathColorSub_Execute() \
	void FRigUnit_MathColorSub::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FLinearColor& A, \
		const FLinearColor& B, \
		FLinearColor& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathColor_h_76_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathColorSub_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FLinearColor& A, \
		const FLinearColor& B, \
		FLinearColor& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FLinearColor& A = *(FLinearColor*)RigVMMemoryHandles[0].GetData(false); \
		const FLinearColor& B = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		FLinearColor& Result = *(FLinearColor*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathColorBinaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathColorSub>();


#define FRigUnit_MathColorMul_Execute() \
	void FRigUnit_MathColorMul::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FLinearColor& A, \
		const FLinearColor& B, \
		FLinearColor& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathColor_h_88_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathColorMul_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FLinearColor& A, \
		const FLinearColor& B, \
		FLinearColor& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FLinearColor& A = *(FLinearColor*)RigVMMemoryHandles[0].GetData(false); \
		const FLinearColor& B = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		FLinearColor& Result = *(FLinearColor*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathColorBinaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathColorMul>();


#define FRigUnit_MathColorLerp_Execute() \
	void FRigUnit_MathColorLerp::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FLinearColor& A, \
		const FLinearColor& B, \
		const float T, \
		FLinearColor& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathColor_h_105_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathColorLerp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FLinearColor& A, \
		const FLinearColor& B, \
		const float T, \
		FLinearColor& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FLinearColor& A = *(FLinearColor*)RigVMMemoryHandles[0].GetData(false); \
		const FLinearColor& B = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		const float T = *(float*)RigVMMemoryHandles[2].GetData(false); \
		FLinearColor& Result = *(FLinearColor*)RigVMMemoryHandles[3].GetData(false); \
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
	typedef FRigUnit_MathColorBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathColorLerp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathColor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
