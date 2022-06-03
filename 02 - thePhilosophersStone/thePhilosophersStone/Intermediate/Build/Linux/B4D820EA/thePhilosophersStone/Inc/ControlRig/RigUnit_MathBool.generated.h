// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_MathBool_generated_h
#error "RigUnit_MathBool.generated.h already included, missing '#pragma once' in RigUnit_MathBool.h"
#endif
#define CONTROLRIG_RigUnit_MathBool_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolBase>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolConstant_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathBoolBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolConstant>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolUnaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathBoolBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolUnaryOp>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolBinaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathBoolBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolBinaryOp>();


#define FRigUnit_MathBoolConstTrue_Execute() \
	void FRigUnit_MathBoolConstTrue::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		bool& Value, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolConstTrue_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		bool& Value, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		bool& Value = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			Context \
		); \
	} \
	typedef FRigUnit_MathBoolConstant Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolConstTrue>();


#define FRigUnit_MathBoolConstFalse_Execute() \
	void FRigUnit_MathBoolConstFalse::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		bool& Value, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_88_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolConstFalse_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		bool& Value, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		bool& Value = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			Context \
		); \
	} \
	typedef FRigUnit_MathBoolConstant Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolConstFalse>();


#define FRigUnit_MathBoolNot_Execute() \
	void FRigUnit_MathBoolNot::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const bool Value, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_105_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolNot_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const bool Value, \
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
		const bool Value = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathBoolUnaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolNot>();


#define FRigUnit_MathBoolAnd_Execute() \
	void FRigUnit_MathBoolAnd::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_117_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolAnd_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const bool A, \
		const bool B, \
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
		const bool A = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const bool B = *(bool*)RigVMMemoryHandles[1].GetData(false); \
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
	typedef FRigUnit_MathBoolBinaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolAnd>();


#define FRigUnit_MathBoolNand_Execute() \
	void FRigUnit_MathBoolNand::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_129_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolNand_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const bool A, \
		const bool B, \
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
		const bool A = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const bool B = *(bool*)RigVMMemoryHandles[1].GetData(false); \
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
	typedef FRigUnit_MathBoolBinaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolNand>();


#define FRigUnit_MathBoolOr_Execute() \
	void FRigUnit_MathBoolOr::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_141_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolOr_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const bool A, \
		const bool B, \
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
		const bool A = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const bool B = *(bool*)RigVMMemoryHandles[1].GetData(false); \
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
	typedef FRigUnit_MathBoolBinaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolOr>();


#define FRigUnit_MathBoolEquals_Execute() \
	void FRigUnit_MathBoolEquals::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_153_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolEquals_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const bool A, \
		const bool B, \
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
		const bool A = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const bool B = *(bool*)RigVMMemoryHandles[1].GetData(false); \
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
	typedef FRigUnit_MathBoolBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolEquals>();


#define FRigUnit_MathBoolNotEquals_Execute() \
	void FRigUnit_MathBoolNotEquals::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const bool A, \
		const bool B, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_179_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolNotEquals_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const bool A, \
		const bool B, \
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
		const bool A = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const bool B = *(bool*)RigVMMemoryHandles[1].GetData(false); \
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
	typedef FRigUnit_MathBoolBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolNotEquals>();


#define FRigUnit_MathBoolToggled_Execute() \
	void FRigUnit_MathBoolToggled::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const bool Value, \
		bool& Toggled, \
		bool& Initialized, \
		bool& LastValue, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h_205_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathBoolToggled_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const bool Value, \
		bool& Toggled, \
		bool& Initialized, \
		bool& LastValue, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const bool Value = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		bool& Toggled = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		bool& Initialized = *(bool*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& LastValue = *(bool*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			Toggled, \
			Initialized, \
			LastValue, \
			Context \
		); \
	} \
	typedef FRigUnit_MathBoolBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathBoolToggled>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathBool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
