// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_MathInt_generated_h
#error "RigUnit_MathInt.generated.h already included, missing '#pragma once' in RigUnit_MathInt.h"
#endif
#define CONTROLRIG_RigUnit_MathInt_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathInt_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathIntBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathIntBase>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathInt_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathIntUnaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathIntBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathIntUnaryOp>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathInt_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathIntBinaryOp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathIntBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathIntBinaryOp>();


#define FRigUnit_MathIntAdd_Execute() \
	void FRigUnit_MathIntAdd::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathInt_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathIntAdd_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		int32& Result = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathIntBinaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathIntAdd>();


#define FRigUnit_MathIntSub_Execute() \
	void FRigUnit_MathIntSub::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathInt_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathIntSub_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		int32& Result = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathIntBinaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathIntSub>();


#define FRigUnit_MathIntMul_Execute() \
	void FRigUnit_MathIntMul::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathInt_h_81_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathIntMul_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		int32& Result = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathIntBinaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathIntMul>();


#define FRigUnit_MathIntDiv_Execute() \
	void FRigUnit_MathIntDiv::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathInt_h_99_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathIntDiv_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		int32& Result = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathIntBinaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathIntDiv>();


#define FRigUnit_MathIntMod_Execute() \
	void FRigUnit_MathIntMod::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathInt_h_116_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathIntMod_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		int32& Result = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathIntBinaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathIntMod>();


#define FRigUnit_MathIntMin_Execute() \
	void FRigUnit_MathIntMin::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathInt_h_134_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathIntMin_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		int32& Result = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathIntBinaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathIntMin>();


#define FRigUnit_MathIntMax_Execute() \
	void FRigUnit_MathIntMax::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathInt_h_146_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathIntMax_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		int32& Result = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathIntBinaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathIntMax>();


#define FRigUnit_MathIntPow_Execute() \
	void FRigUnit_MathIntPow::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathInt_h_158_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathIntPow_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 A, \
		const int32 B, \
		int32& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		int32& Result = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathIntBinaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathIntPow>();


#define FRigUnit_MathIntNegate_Execute() \
	void FRigUnit_MathIntNegate::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 Value, \
		int32& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathInt_h_176_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathIntNegate_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 Value, \
		int32& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const int32 Value = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		int32& Result = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathIntUnaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathIntNegate>();


#define FRigUnit_MathIntAbs_Execute() \
	void FRigUnit_MathIntAbs::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 Value, \
		int32& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathInt_h_188_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathIntAbs_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 Value, \
		int32& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const int32 Value = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		int32& Result = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathIntUnaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathIntAbs>();


#define FRigUnit_MathIntToFloat_Execute() \
	void FRigUnit_MathIntToFloat::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 Value, \
		float& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathInt_h_200_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathIntToFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 Value, \
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
		const int32 Value = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathIntBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathIntToFloat>();


#define FRigUnit_MathIntSign_Execute() \
	void FRigUnit_MathIntSign::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 Value, \
		int32& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathInt_h_224_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathIntSign_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 Value, \
		int32& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const int32 Value = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		int32& Result = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathIntUnaryOp Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathIntSign>();


#define FRigUnit_MathIntClamp_Execute() \
	void FRigUnit_MathIntClamp::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 Value, \
		const int32 Minimum, \
		const int32 Maximum, \
		int32& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathInt_h_236_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathIntClamp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 Value, \
		const int32 Minimum, \
		const int32 Maximum, \
		int32& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const int32 Value = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 Minimum = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		const int32 Maximum = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		int32& Result = *(int32*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			Minimum, \
			Maximum, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_MathIntBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathIntClamp>();


#define FRigUnit_MathIntEquals_Execute() \
	void FRigUnit_MathIntEquals::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 A, \
		const int32 B, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathInt_h_265_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathIntEquals_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 A, \
		const int32 B, \
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
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetData(false); \
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
	typedef FRigUnit_MathIntBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathIntEquals>();


#define FRigUnit_MathIntNotEquals_Execute() \
	void FRigUnit_MathIntNotEquals::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 A, \
		const int32 B, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathInt_h_291_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathIntNotEquals_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 A, \
		const int32 B, \
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
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetData(false); \
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
	typedef FRigUnit_MathIntBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathIntNotEquals>();


#define FRigUnit_MathIntGreater_Execute() \
	void FRigUnit_MathIntGreater::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 A, \
		const int32 B, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathInt_h_317_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathIntGreater_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 A, \
		const int32 B, \
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
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetData(false); \
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
	typedef FRigUnit_MathIntBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathIntGreater>();


#define FRigUnit_MathIntLess_Execute() \
	void FRigUnit_MathIntLess::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 A, \
		const int32 B, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathInt_h_344_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathIntLess_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 A, \
		const int32 B, \
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
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetData(false); \
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
	typedef FRigUnit_MathIntBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathIntLess>();


#define FRigUnit_MathIntGreaterEqual_Execute() \
	void FRigUnit_MathIntGreaterEqual::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 A, \
		const int32 B, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathInt_h_371_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathIntGreaterEqual_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 A, \
		const int32 B, \
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
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetData(false); \
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
	typedef FRigUnit_MathIntBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathIntGreaterEqual>();


#define FRigUnit_MathIntLessEqual_Execute() \
	void FRigUnit_MathIntLessEqual::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 A, \
		const int32 B, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathInt_h_398_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathIntLessEqual_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const int32 A, \
		const int32 B, \
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
		const int32 A = *(int32*)RigVMMemoryHandles[0].GetData(false); \
		const int32 B = *(int32*)RigVMMemoryHandles[1].GetData(false); \
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
	typedef FRigUnit_MathIntBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathIntLessEqual>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathInt_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
