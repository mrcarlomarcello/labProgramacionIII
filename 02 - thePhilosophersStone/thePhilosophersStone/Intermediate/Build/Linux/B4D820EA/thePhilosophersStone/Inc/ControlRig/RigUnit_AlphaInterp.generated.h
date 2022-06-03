// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_AlphaInterp_generated_h
#error "RigUnit_AlphaInterp.generated.h already included, missing '#pragma once' in RigUnit_AlphaInterp.h"
#endif
#define CONTROLRIG_RigUnit_AlphaInterp_generated_h


#define FRigUnit_AlphaInterp_Execute() \
	void FRigUnit_AlphaInterp::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const float Value, \
		const float Scale, \
		const float Bias, \
		const bool bMapRange, \
		const FInputRange& InRange, \
		const FInputRange& OutRange, \
		const bool bClampResult, \
		const float ClampMin, \
		const float ClampMax, \
		const bool bInterpResult, \
		const float InterpSpeedIncreasing, \
		const float InterpSpeedDecreasing, \
		float& Result, \
		FInputScaleBiasClamp& ScaleBiasClamp, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_AlphaInterp_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AlphaInterp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const float Value, \
		const float Scale, \
		const float Bias, \
		const bool bMapRange, \
		const FInputRange& InRange, \
		const FInputRange& OutRange, \
		const bool bClampResult, \
		const float ClampMin, \
		const float ClampMax, \
		const bool bInterpResult, \
		const float InterpSpeedIncreasing, \
		const float InterpSpeedDecreasing, \
		float& Result, \
		FInputScaleBiasClamp& ScaleBiasClamp, \
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
		const float Scale = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float Bias = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const bool bMapRange = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		const FInputRange& InRange = *(FInputRange*)RigVMMemoryHandles[4].GetData(false); \
		const FInputRange& OutRange = *(FInputRange*)RigVMMemoryHandles[5].GetData(false); \
		const bool bClampResult = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		const float ClampMin = *(float*)RigVMMemoryHandles[7].GetData(false); \
		const float ClampMax = *(float*)RigVMMemoryHandles[8].GetData(false); \
		const bool bInterpResult = *(bool*)RigVMMemoryHandles[9].GetData(false); \
		const float InterpSpeedIncreasing = *(float*)RigVMMemoryHandles[10].GetData(false); \
		const float InterpSpeedDecreasing = *(float*)RigVMMemoryHandles[11].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[12].GetData(false); \
		FInputScaleBiasClamp& ScaleBiasClamp = *(FInputScaleBiasClamp*)RigVMMemoryHandles[13].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			Scale, \
			Bias, \
			bMapRange, \
			InRange, \
			OutRange, \
			bClampResult, \
			ClampMin, \
			ClampMax, \
			bInterpResult, \
			InterpSpeedIncreasing, \
			InterpSpeedDecreasing, \
			Result, \
			ScaleBiasClamp, \
			Context \
		); \
	} \
	typedef FRigUnit_SimBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AlphaInterp>();


#define FRigUnit_AlphaInterpVector_Execute() \
	void FRigUnit_AlphaInterpVector::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Value, \
		const float Scale, \
		const float Bias, \
		const bool bMapRange, \
		const FInputRange& InRange, \
		const FInputRange& OutRange, \
		const bool bClampResult, \
		const float ClampMin, \
		const float ClampMax, \
		const bool bInterpResult, \
		const float InterpSpeedIncreasing, \
		const float InterpSpeedDecreasing, \
		FVector& Result, \
		FInputScaleBiasClamp& ScaleBiasClamp, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_AlphaInterp_h_88_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AlphaInterpVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Value, \
		const float Scale, \
		const float Bias, \
		const bool bMapRange, \
		const FInputRange& InRange, \
		const FInputRange& OutRange, \
		const bool bClampResult, \
		const float ClampMin, \
		const float ClampMax, \
		const bool bInterpResult, \
		const float InterpSpeedIncreasing, \
		const float InterpSpeedDecreasing, \
		FVector& Result, \
		FInputScaleBiasClamp& ScaleBiasClamp, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FVector& Value = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const float Scale = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float Bias = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const bool bMapRange = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		const FInputRange& InRange = *(FInputRange*)RigVMMemoryHandles[4].GetData(false); \
		const FInputRange& OutRange = *(FInputRange*)RigVMMemoryHandles[5].GetData(false); \
		const bool bClampResult = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		const float ClampMin = *(float*)RigVMMemoryHandles[7].GetData(false); \
		const float ClampMax = *(float*)RigVMMemoryHandles[8].GetData(false); \
		const bool bInterpResult = *(bool*)RigVMMemoryHandles[9].GetData(false); \
		const float InterpSpeedIncreasing = *(float*)RigVMMemoryHandles[10].GetData(false); \
		const float InterpSpeedDecreasing = *(float*)RigVMMemoryHandles[11].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[12].GetData(false); \
		FInputScaleBiasClamp& ScaleBiasClamp = *(FInputScaleBiasClamp*)RigVMMemoryHandles[13].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			Scale, \
			Bias, \
			bMapRange, \
			InRange, \
			OutRange, \
			bClampResult, \
			ClampMin, \
			ClampMax, \
			bInterpResult, \
			InterpSpeedIncreasing, \
			InterpSpeedDecreasing, \
			Result, \
			ScaleBiasClamp, \
			Context \
		); \
	} \
	typedef FRigUnit_SimBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AlphaInterpVector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_AlphaInterp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
