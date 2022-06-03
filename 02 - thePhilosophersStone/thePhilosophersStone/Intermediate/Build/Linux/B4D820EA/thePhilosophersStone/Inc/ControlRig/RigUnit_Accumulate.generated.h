// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_Accumulate_generated_h
#error "RigUnit_Accumulate.generated.h already included, missing '#pragma once' in RigUnit_Accumulate.h"
#endif
#define CONTROLRIG_RigUnit_Accumulate_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Accumulate_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AccumulateBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_SimBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AccumulateBase>();


#define FRigUnit_AccumulateFloatAdd_Execute() \
	void FRigUnit_AccumulateFloatAdd::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const float Increment, \
		const float InitialValue, \
		const bool bIntegrateDeltaTime, \
		float& Result, \
		float& AccumulatedValue, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Accumulate_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatAdd_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const float Increment, \
		const float InitialValue, \
		const bool bIntegrateDeltaTime, \
		float& Result, \
		float& AccumulatedValue, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const float Increment = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float InitialValue = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const bool bIntegrateDeltaTime = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[3].GetData(false); \
		float& AccumulatedValue = *(float*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Increment, \
			InitialValue, \
			bIntegrateDeltaTime, \
			Result, \
			AccumulatedValue, \
			Context \
		); \
	} \
	typedef FRigUnit_AccumulateBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AccumulateFloatAdd>();


#define FRigUnit_AccumulateVectorAdd_Execute() \
	void FRigUnit_AccumulateVectorAdd::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Increment, \
		const FVector& InitialValue, \
		const bool bIntegrateDeltaTime, \
		FVector& Result, \
		FVector& AccumulatedValue, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Accumulate_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorAdd_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Increment, \
		const FVector& InitialValue, \
		const bool bIntegrateDeltaTime, \
		FVector& Result, \
		FVector& AccumulatedValue, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FVector& Increment = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& InitialValue = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const bool bIntegrateDeltaTime = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		FVector& AccumulatedValue = *(FVector*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Increment, \
			InitialValue, \
			bIntegrateDeltaTime, \
			Result, \
			AccumulatedValue, \
			Context \
		); \
	} \
	typedef FRigUnit_AccumulateBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AccumulateVectorAdd>();


#define FRigUnit_AccumulateFloatMul_Execute() \
	void FRigUnit_AccumulateFloatMul::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const float Multiplier, \
		const float InitialValue, \
		const bool bIntegrateDeltaTime, \
		float& Result, \
		float& AccumulatedValue, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Accumulate_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatMul_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const float Multiplier, \
		const float InitialValue, \
		const bool bIntegrateDeltaTime, \
		float& Result, \
		float& AccumulatedValue, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const float Multiplier = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float InitialValue = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const bool bIntegrateDeltaTime = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[3].GetData(false); \
		float& AccumulatedValue = *(float*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Multiplier, \
			InitialValue, \
			bIntegrateDeltaTime, \
			Result, \
			AccumulatedValue, \
			Context \
		); \
	} \
	typedef FRigUnit_AccumulateBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AccumulateFloatMul>();


#define FRigUnit_AccumulateVectorMul_Execute() \
	void FRigUnit_AccumulateVectorMul::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Multiplier, \
		const FVector& InitialValue, \
		const bool bIntegrateDeltaTime, \
		FVector& Result, \
		FVector& AccumulatedValue, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Accumulate_h_119_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorMul_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Multiplier, \
		const FVector& InitialValue, \
		const bool bIntegrateDeltaTime, \
		FVector& Result, \
		FVector& AccumulatedValue, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FVector& Multiplier = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& InitialValue = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const bool bIntegrateDeltaTime = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		FVector& AccumulatedValue = *(FVector*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Multiplier, \
			InitialValue, \
			bIntegrateDeltaTime, \
			Result, \
			AccumulatedValue, \
			Context \
		); \
	} \
	typedef FRigUnit_AccumulateBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AccumulateVectorMul>();


#define FRigUnit_AccumulateQuatMul_Execute() \
	void FRigUnit_AccumulateQuatMul::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Multiplier, \
		const FQuat& InitialValue, \
		const bool bFlipOrder, \
		const bool bIntegrateDeltaTime, \
		FQuat& Result, \
		FQuat& AccumulatedValue, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Accumulate_h_152_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatMul_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& Multiplier, \
		const FQuat& InitialValue, \
		const bool bFlipOrder, \
		const bool bIntegrateDeltaTime, \
		FQuat& Result, \
		FQuat& AccumulatedValue, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& Multiplier = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& InitialValue = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		const bool bFlipOrder = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		const bool bIntegrateDeltaTime = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[4].GetData(false); \
		FQuat& AccumulatedValue = *(FQuat*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Multiplier, \
			InitialValue, \
			bFlipOrder, \
			bIntegrateDeltaTime, \
			Result, \
			AccumulatedValue, \
			Context \
		); \
	} \
	typedef FRigUnit_AccumulateBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AccumulateQuatMul>();


#define FRigUnit_AccumulateTransformMul_Execute() \
	void FRigUnit_AccumulateTransformMul::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Multiplier, \
		const FTransform& InitialValue, \
		const bool bFlipOrder, \
		const bool bIntegrateDeltaTime, \
		FTransform& Result, \
		FTransform& AccumulatedValue, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Accumulate_h_188_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformMul_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& Multiplier, \
		const FTransform& InitialValue, \
		const bool bFlipOrder, \
		const bool bIntegrateDeltaTime, \
		FTransform& Result, \
		FTransform& AccumulatedValue, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FTransform& Multiplier = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FTransform& InitialValue = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		const bool bFlipOrder = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		const bool bIntegrateDeltaTime = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[4].GetData(false); \
		FTransform& AccumulatedValue = *(FTransform*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Multiplier, \
			InitialValue, \
			bFlipOrder, \
			bIntegrateDeltaTime, \
			Result, \
			AccumulatedValue, \
			Context \
		); \
	} \
	typedef FRigUnit_AccumulateBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AccumulateTransformMul>();


#define FRigUnit_AccumulateFloatLerp_Execute() \
	void FRigUnit_AccumulateFloatLerp::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const float TargetValue, \
		const float InitialValue, \
		const float Blend, \
		const bool bIntegrateDeltaTime, \
		float& Result, \
		float& AccumulatedValue, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Accumulate_h_224_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatLerp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const float TargetValue, \
		const float InitialValue, \
		const float Blend, \
		const bool bIntegrateDeltaTime, \
		float& Result, \
		float& AccumulatedValue, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const float TargetValue = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const float InitialValue = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const float Blend = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const bool bIntegrateDeltaTime = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		float& Result = *(float*)RigVMMemoryHandles[4].GetData(false); \
		float& AccumulatedValue = *(float*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			TargetValue, \
			InitialValue, \
			Blend, \
			bIntegrateDeltaTime, \
			Result, \
			AccumulatedValue, \
			Context \
		); \
	} \
	typedef FRigUnit_AccumulateBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AccumulateFloatLerp>();


#define FRigUnit_AccumulateVectorLerp_Execute() \
	void FRigUnit_AccumulateVectorLerp::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& TargetValue, \
		const FVector& InitialValue, \
		const float Blend, \
		const bool bIntegrateDeltaTime, \
		FVector& Result, \
		FVector& AccumulatedValue, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Accumulate_h_260_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorLerp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& TargetValue, \
		const FVector& InitialValue, \
		const float Blend, \
		const bool bIntegrateDeltaTime, \
		FVector& Result, \
		FVector& AccumulatedValue, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FVector& TargetValue = *(FVector*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& InitialValue = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const float Blend = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const bool bIntegrateDeltaTime = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FVector& Result = *(FVector*)RigVMMemoryHandles[4].GetData(false); \
		FVector& AccumulatedValue = *(FVector*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			TargetValue, \
			InitialValue, \
			Blend, \
			bIntegrateDeltaTime, \
			Result, \
			AccumulatedValue, \
			Context \
		); \
	} \
	typedef FRigUnit_AccumulateBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AccumulateVectorLerp>();


#define FRigUnit_AccumulateQuatLerp_Execute() \
	void FRigUnit_AccumulateQuatLerp::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& TargetValue, \
		const FQuat& InitialValue, \
		const float Blend, \
		const bool bIntegrateDeltaTime, \
		FQuat& Result, \
		FQuat& AccumulatedValue, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Accumulate_h_297_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AccumulateQuatLerp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FQuat& TargetValue, \
		const FQuat& InitialValue, \
		const float Blend, \
		const bool bIntegrateDeltaTime, \
		FQuat& Result, \
		FQuat& AccumulatedValue, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FQuat& TargetValue = *(FQuat*)RigVMMemoryHandles[0].GetData(false); \
		const FQuat& InitialValue = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		const float Blend = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const bool bIntegrateDeltaTime = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FQuat& Result = *(FQuat*)RigVMMemoryHandles[4].GetData(false); \
		FQuat& AccumulatedValue = *(FQuat*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			TargetValue, \
			InitialValue, \
			Blend, \
			bIntegrateDeltaTime, \
			Result, \
			AccumulatedValue, \
			Context \
		); \
	} \
	typedef FRigUnit_AccumulateBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AccumulateQuatLerp>();


#define FRigUnit_AccumulateTransformLerp_Execute() \
	void FRigUnit_AccumulateTransformLerp::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& TargetValue, \
		const FTransform& InitialValue, \
		const float Blend, \
		const bool bIntegrateDeltaTime, \
		FTransform& Result, \
		FTransform& AccumulatedValue, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Accumulate_h_334_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AccumulateTransformLerp_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FTransform& TargetValue, \
		const FTransform& InitialValue, \
		const float Blend, \
		const bool bIntegrateDeltaTime, \
		FTransform& Result, \
		FTransform& AccumulatedValue, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FTransform& TargetValue = *(FTransform*)RigVMMemoryHandles[0].GetData(false); \
		const FTransform& InitialValue = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		const float Blend = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const bool bIntegrateDeltaTime = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FTransform& Result = *(FTransform*)RigVMMemoryHandles[4].GetData(false); \
		FTransform& AccumulatedValue = *(FTransform*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			TargetValue, \
			InitialValue, \
			Blend, \
			bIntegrateDeltaTime, \
			Result, \
			AccumulatedValue, \
			Context \
		); \
	} \
	typedef FRigUnit_AccumulateBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AccumulateTransformLerp>();


#define FRigUnit_AccumulateFloatRange_Execute() \
	void FRigUnit_AccumulateFloatRange::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const float Value, \
		float& Minimum, \
		float& Maximum, \
		float& AccumulatedMinimum, \
		float& AccumulatedMaximum, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Accumulate_h_371_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AccumulateFloatRange_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const float Value, \
		float& Minimum, \
		float& Maximum, \
		float& AccumulatedMinimum, \
		float& AccumulatedMaximum, \
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
		float& Minimum = *(float*)RigVMMemoryHandles[1].GetData(false); \
		float& Maximum = *(float*)RigVMMemoryHandles[2].GetData(false); \
		float& AccumulatedMinimum = *(float*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		float& AccumulatedMaximum = *(float*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			Minimum, \
			Maximum, \
			AccumulatedMinimum, \
			AccumulatedMaximum, \
			Context \
		); \
	} \
	typedef FRigUnit_AccumulateBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AccumulateFloatRange>();


#define FRigUnit_AccumulateVectorRange_Execute() \
	void FRigUnit_AccumulateVectorRange::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Value, \
		FVector& Minimum, \
		FVector& Maximum, \
		FVector& AccumulatedMinimum, \
		FVector& AccumulatedMaximum, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Accumulate_h_403_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AccumulateVectorRange_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FVector& Value, \
		FVector& Minimum, \
		FVector& Maximum, \
		FVector& AccumulatedMinimum, \
		FVector& AccumulatedMaximum, \
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
		FVector& Minimum = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Maximum = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		FVector& AccumulatedMinimum = *(FVector*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FVector& AccumulatedMaximum = *(FVector*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Value, \
			Minimum, \
			Maximum, \
			AccumulatedMinimum, \
			AccumulatedMaximum, \
			Context \
		); \
	} \
	typedef FRigUnit_AccumulateBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AccumulateVectorRange>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_Accumulate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
