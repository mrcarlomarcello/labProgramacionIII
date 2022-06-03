// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_MathRBFInterpolate_generated_h
#error "RigUnit_MathRBFInterpolate.generated.h already included, missing '#pragma once' in RigUnit_MathRBFInterpolate.h"
#endif
#define CONTROLRIG_RigUnit_MathRBFInterpolate_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatWorkData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathRBFInterpolateQuatWorkData>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorWorkData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathRBFInterpolateVectorWorkData>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathRBFInterpolateBase>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathRBFInterpolateBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathRBFInterpolateQuatBase>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_132_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit_MathRBFInterpolateBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathRBFInterpolateVectorBase>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_176_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMathRBFInterpolateQuatFloat_Target_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FMathRBFInterpolateQuatFloat_Target>();


#define FRigUnit_MathRBFInterpolateQuatFloat_Execute() \
	void FRigUnit_MathRBFInterpolateQuatFloat::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FMathRBFInterpolateQuatFloat_Target>& Targets, \
		float& Output, \
		const FQuat& Input, \
		const ERBFQuatDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingAngle, \
		const bool bNormalizeOutput, \
		const FVector& TwistAxis, \
		FRigUnit_MathRBFInterpolateQuatWorkData& WorkData, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_189_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FMathRBFInterpolateQuatFloat_Target>& Targets, \
		float& Output, \
		const FQuat& Input, \
		const ERBFQuatDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingAngle, \
		const bool bNormalizeOutput, \
		const FVector& TwistAxis, \
		FRigUnit_MathRBFInterpolateQuatWorkData& WorkData, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		TArray<FMathRBFInterpolateQuatFloat_Target>& Targets = *(TArray<FMathRBFInterpolateQuatFloat_Target>*)RigVMMemoryHandles[0].GetData(false); \
		float& Output = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const FQuat& Input = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		const ERBFQuatDistanceType DistanceFunction = *(ERBFQuatDistanceType*)RigVMMemoryHandles[3].GetData(false); \
		const ERBFKernelType SmoothingFunction = *(ERBFKernelType*)RigVMMemoryHandles[4].GetData(false); \
		const float SmoothingAngle = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const bool bNormalizeOutput = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		const FVector& TwistAxis = *(FVector*)RigVMMemoryHandles[7].GetData(false); \
		FRigUnit_MathRBFInterpolateQuatWorkData& WorkData = *(FRigUnit_MathRBFInterpolateQuatWorkData*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Targets, \
			Output, \
			Input, \
			DistanceFunction, \
			SmoothingFunction, \
			SmoothingAngle, \
			bNormalizeOutput, \
			TwistAxis, \
			WorkData, \
			Context \
		); \
	} \
	typedef FRigUnit_MathRBFInterpolateQuatBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathRBFInterpolateQuatFloat>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_205_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMathRBFInterpolateQuatVector_Target_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FMathRBFInterpolateQuatVector_Target>();


#define FRigUnit_MathRBFInterpolateQuatVector_Execute() \
	void FRigUnit_MathRBFInterpolateQuatVector::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FMathRBFInterpolateQuatVector_Target>& Targets, \
		FVector& Output, \
		const FQuat& Input, \
		const ERBFQuatDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingAngle, \
		const bool bNormalizeOutput, \
		const FVector& TwistAxis, \
		FRigUnit_MathRBFInterpolateQuatWorkData& WorkData, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_218_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FMathRBFInterpolateQuatVector_Target>& Targets, \
		FVector& Output, \
		const FQuat& Input, \
		const ERBFQuatDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingAngle, \
		const bool bNormalizeOutput, \
		const FVector& TwistAxis, \
		FRigUnit_MathRBFInterpolateQuatWorkData& WorkData, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		TArray<FMathRBFInterpolateQuatVector_Target>& Targets = *(TArray<FMathRBFInterpolateQuatVector_Target>*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Output = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const FQuat& Input = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		const ERBFQuatDistanceType DistanceFunction = *(ERBFQuatDistanceType*)RigVMMemoryHandles[3].GetData(false); \
		const ERBFKernelType SmoothingFunction = *(ERBFKernelType*)RigVMMemoryHandles[4].GetData(false); \
		const float SmoothingAngle = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const bool bNormalizeOutput = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		const FVector& TwistAxis = *(FVector*)RigVMMemoryHandles[7].GetData(false); \
		FRigUnit_MathRBFInterpolateQuatWorkData& WorkData = *(FRigUnit_MathRBFInterpolateQuatWorkData*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Targets, \
			Output, \
			Input, \
			DistanceFunction, \
			SmoothingFunction, \
			SmoothingAngle, \
			bNormalizeOutput, \
			TwistAxis, \
			WorkData, \
			Context \
		); \
	} \
	typedef FRigUnit_MathRBFInterpolateQuatBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathRBFInterpolateQuatVector>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_234_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMathRBFInterpolateQuatColor_Target_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FMathRBFInterpolateQuatColor_Target>();


#define FRigUnit_MathRBFInterpolateQuatColor_Execute() \
	void FRigUnit_MathRBFInterpolateQuatColor::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FMathRBFInterpolateQuatColor_Target>& Targets, \
		FLinearColor& Output, \
		const FQuat& Input, \
		const ERBFQuatDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingAngle, \
		const bool bNormalizeOutput, \
		const FVector& TwistAxis, \
		FRigUnit_MathRBFInterpolateQuatWorkData& WorkData, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_247_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatColor_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FMathRBFInterpolateQuatColor_Target>& Targets, \
		FLinearColor& Output, \
		const FQuat& Input, \
		const ERBFQuatDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingAngle, \
		const bool bNormalizeOutput, \
		const FVector& TwistAxis, \
		FRigUnit_MathRBFInterpolateQuatWorkData& WorkData, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		TArray<FMathRBFInterpolateQuatColor_Target>& Targets = *(TArray<FMathRBFInterpolateQuatColor_Target>*)RigVMMemoryHandles[0].GetData(false); \
		FLinearColor& Output = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		const FQuat& Input = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		const ERBFQuatDistanceType DistanceFunction = *(ERBFQuatDistanceType*)RigVMMemoryHandles[3].GetData(false); \
		const ERBFKernelType SmoothingFunction = *(ERBFKernelType*)RigVMMemoryHandles[4].GetData(false); \
		const float SmoothingAngle = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const bool bNormalizeOutput = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		const FVector& TwistAxis = *(FVector*)RigVMMemoryHandles[7].GetData(false); \
		FRigUnit_MathRBFInterpolateQuatWorkData& WorkData = *(FRigUnit_MathRBFInterpolateQuatWorkData*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Targets, \
			Output, \
			Input, \
			DistanceFunction, \
			SmoothingFunction, \
			SmoothingAngle, \
			bNormalizeOutput, \
			TwistAxis, \
			WorkData, \
			Context \
		); \
	} \
	typedef FRigUnit_MathRBFInterpolateQuatBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathRBFInterpolateQuatColor>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_263_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMathRBFInterpolateQuatQuat_Target_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FMathRBFInterpolateQuatQuat_Target>();


#define FRigUnit_MathRBFInterpolateQuatQuat_Execute() \
	void FRigUnit_MathRBFInterpolateQuatQuat::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FMathRBFInterpolateQuatQuat_Target>& Targets, \
		FQuat& Output, \
		const FQuat& Input, \
		const ERBFQuatDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingAngle, \
		const bool bNormalizeOutput, \
		const FVector& TwistAxis, \
		FRigUnit_MathRBFInterpolateQuatWorkData& WorkData, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_276_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatQuat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FMathRBFInterpolateQuatQuat_Target>& Targets, \
		FQuat& Output, \
		const FQuat& Input, \
		const ERBFQuatDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingAngle, \
		const bool bNormalizeOutput, \
		const FVector& TwistAxis, \
		FRigUnit_MathRBFInterpolateQuatWorkData& WorkData, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		TArray<FMathRBFInterpolateQuatQuat_Target>& Targets = *(TArray<FMathRBFInterpolateQuatQuat_Target>*)RigVMMemoryHandles[0].GetData(false); \
		FQuat& Output = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		const FQuat& Input = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		const ERBFQuatDistanceType DistanceFunction = *(ERBFQuatDistanceType*)RigVMMemoryHandles[3].GetData(false); \
		const ERBFKernelType SmoothingFunction = *(ERBFKernelType*)RigVMMemoryHandles[4].GetData(false); \
		const float SmoothingAngle = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const bool bNormalizeOutput = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		const FVector& TwistAxis = *(FVector*)RigVMMemoryHandles[7].GetData(false); \
		FRigUnit_MathRBFInterpolateQuatWorkData& WorkData = *(FRigUnit_MathRBFInterpolateQuatWorkData*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Targets, \
			Output, \
			Input, \
			DistanceFunction, \
			SmoothingFunction, \
			SmoothingAngle, \
			bNormalizeOutput, \
			TwistAxis, \
			WorkData, \
			Context \
		); \
	} \
	typedef FRigUnit_MathRBFInterpolateQuatBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathRBFInterpolateQuatQuat>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_292_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMathRBFInterpolateQuatXform_Target_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FMathRBFInterpolateQuatXform_Target>();


#define FRigUnit_MathRBFInterpolateQuatXform_Execute() \
	void FRigUnit_MathRBFInterpolateQuatXform::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FMathRBFInterpolateQuatXform_Target>& Targets, \
		FTransform& Output, \
		const FQuat& Input, \
		const ERBFQuatDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingAngle, \
		const bool bNormalizeOutput, \
		const FVector& TwistAxis, \
		FRigUnit_MathRBFInterpolateQuatWorkData& WorkData, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_305_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateQuatXform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FMathRBFInterpolateQuatXform_Target>& Targets, \
		FTransform& Output, \
		const FQuat& Input, \
		const ERBFQuatDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingAngle, \
		const bool bNormalizeOutput, \
		const FVector& TwistAxis, \
		FRigUnit_MathRBFInterpolateQuatWorkData& WorkData, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		TArray<FMathRBFInterpolateQuatXform_Target>& Targets = *(TArray<FMathRBFInterpolateQuatXform_Target>*)RigVMMemoryHandles[0].GetData(false); \
		FTransform& Output = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		const FQuat& Input = *(FQuat*)RigVMMemoryHandles[2].GetData(false); \
		const ERBFQuatDistanceType DistanceFunction = *(ERBFQuatDistanceType*)RigVMMemoryHandles[3].GetData(false); \
		const ERBFKernelType SmoothingFunction = *(ERBFKernelType*)RigVMMemoryHandles[4].GetData(false); \
		const float SmoothingAngle = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const bool bNormalizeOutput = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		const FVector& TwistAxis = *(FVector*)RigVMMemoryHandles[7].GetData(false); \
		FRigUnit_MathRBFInterpolateQuatWorkData& WorkData = *(FRigUnit_MathRBFInterpolateQuatWorkData*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Targets, \
			Output, \
			Input, \
			DistanceFunction, \
			SmoothingFunction, \
			SmoothingAngle, \
			bNormalizeOutput, \
			TwistAxis, \
			WorkData, \
			Context \
		); \
	} \
	typedef FRigUnit_MathRBFInterpolateQuatBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathRBFInterpolateQuatXform>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_323_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMathRBFInterpolateVectorFloat_Target_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FMathRBFInterpolateVectorFloat_Target>();


#define FRigUnit_MathRBFInterpolateVectorFloat_Execute() \
	void FRigUnit_MathRBFInterpolateVectorFloat::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FMathRBFInterpolateVectorFloat_Target>& Targets, \
		float& Output, \
		const FVector& Input, \
		const ERBFVectorDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingRadius, \
		const bool bNormalizeOutput, \
		FRigUnit_MathRBFInterpolateVectorWorkData& WorkData, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_336_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FMathRBFInterpolateVectorFloat_Target>& Targets, \
		float& Output, \
		const FVector& Input, \
		const ERBFVectorDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingRadius, \
		const bool bNormalizeOutput, \
		FRigUnit_MathRBFInterpolateVectorWorkData& WorkData, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		TArray<FMathRBFInterpolateVectorFloat_Target>& Targets = *(TArray<FMathRBFInterpolateVectorFloat_Target>*)RigVMMemoryHandles[0].GetData(false); \
		float& Output = *(float*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& Input = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const ERBFVectorDistanceType DistanceFunction = *(ERBFVectorDistanceType*)RigVMMemoryHandles[3].GetData(false); \
		const ERBFKernelType SmoothingFunction = *(ERBFKernelType*)RigVMMemoryHandles[4].GetData(false); \
		const float SmoothingRadius = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const bool bNormalizeOutput = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		FRigUnit_MathRBFInterpolateVectorWorkData& WorkData = *(FRigUnit_MathRBFInterpolateVectorWorkData*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Targets, \
			Output, \
			Input, \
			DistanceFunction, \
			SmoothingFunction, \
			SmoothingRadius, \
			bNormalizeOutput, \
			WorkData, \
			Context \
		); \
	} \
	typedef FRigUnit_MathRBFInterpolateVectorBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathRBFInterpolateVectorFloat>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_352_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMathRBFInterpolateVectorVector_Target_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FMathRBFInterpolateVectorVector_Target>();


#define FRigUnit_MathRBFInterpolateVectorVector_Execute() \
	void FRigUnit_MathRBFInterpolateVectorVector::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FMathRBFInterpolateVectorVector_Target>& Targets, \
		FVector& Output, \
		const FVector& Input, \
		const ERBFVectorDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingRadius, \
		const bool bNormalizeOutput, \
		FRigUnit_MathRBFInterpolateVectorWorkData& WorkData, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_365_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FMathRBFInterpolateVectorVector_Target>& Targets, \
		FVector& Output, \
		const FVector& Input, \
		const ERBFVectorDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingRadius, \
		const bool bNormalizeOutput, \
		FRigUnit_MathRBFInterpolateVectorWorkData& WorkData, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		TArray<FMathRBFInterpolateVectorVector_Target>& Targets = *(TArray<FMathRBFInterpolateVectorVector_Target>*)RigVMMemoryHandles[0].GetData(false); \
		FVector& Output = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& Input = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const ERBFVectorDistanceType DistanceFunction = *(ERBFVectorDistanceType*)RigVMMemoryHandles[3].GetData(false); \
		const ERBFKernelType SmoothingFunction = *(ERBFKernelType*)RigVMMemoryHandles[4].GetData(false); \
		const float SmoothingRadius = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const bool bNormalizeOutput = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		FRigUnit_MathRBFInterpolateVectorWorkData& WorkData = *(FRigUnit_MathRBFInterpolateVectorWorkData*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Targets, \
			Output, \
			Input, \
			DistanceFunction, \
			SmoothingFunction, \
			SmoothingRadius, \
			bNormalizeOutput, \
			WorkData, \
			Context \
		); \
	} \
	typedef FRigUnit_MathRBFInterpolateVectorBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathRBFInterpolateVectorVector>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_381_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMathRBFInterpolateVectorColor_Target_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FMathRBFInterpolateVectorColor_Target>();


#define FRigUnit_MathRBFInterpolateVectorColor_Execute() \
	void FRigUnit_MathRBFInterpolateVectorColor::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FMathRBFInterpolateVectorColor_Target>& Targets, \
		FLinearColor& Output, \
		const FVector& Input, \
		const ERBFVectorDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingRadius, \
		const bool bNormalizeOutput, \
		FRigUnit_MathRBFInterpolateVectorWorkData& WorkData, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_394_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorColor_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FMathRBFInterpolateVectorColor_Target>& Targets, \
		FLinearColor& Output, \
		const FVector& Input, \
		const ERBFVectorDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingRadius, \
		const bool bNormalizeOutput, \
		FRigUnit_MathRBFInterpolateVectorWorkData& WorkData, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		TArray<FMathRBFInterpolateVectorColor_Target>& Targets = *(TArray<FMathRBFInterpolateVectorColor_Target>*)RigVMMemoryHandles[0].GetData(false); \
		FLinearColor& Output = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& Input = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const ERBFVectorDistanceType DistanceFunction = *(ERBFVectorDistanceType*)RigVMMemoryHandles[3].GetData(false); \
		const ERBFKernelType SmoothingFunction = *(ERBFKernelType*)RigVMMemoryHandles[4].GetData(false); \
		const float SmoothingRadius = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const bool bNormalizeOutput = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		FRigUnit_MathRBFInterpolateVectorWorkData& WorkData = *(FRigUnit_MathRBFInterpolateVectorWorkData*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Targets, \
			Output, \
			Input, \
			DistanceFunction, \
			SmoothingFunction, \
			SmoothingRadius, \
			bNormalizeOutput, \
			WorkData, \
			Context \
		); \
	} \
	typedef FRigUnit_MathRBFInterpolateVectorBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathRBFInterpolateVectorColor>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_411_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMathRBFInterpolateVectorQuat_Target_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FMathRBFInterpolateVectorQuat_Target>();


#define FRigUnit_MathRBFInterpolateVectorQuat_Execute() \
	void FRigUnit_MathRBFInterpolateVectorQuat::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FMathRBFInterpolateVectorQuat_Target>& Targets, \
		FQuat& Output, \
		const FVector& Input, \
		const ERBFVectorDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingRadius, \
		const bool bNormalizeOutput, \
		FRigUnit_MathRBFInterpolateVectorWorkData& WorkData, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_424_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorQuat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FMathRBFInterpolateVectorQuat_Target>& Targets, \
		FQuat& Output, \
		const FVector& Input, \
		const ERBFVectorDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingRadius, \
		const bool bNormalizeOutput, \
		FRigUnit_MathRBFInterpolateVectorWorkData& WorkData, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		TArray<FMathRBFInterpolateVectorQuat_Target>& Targets = *(TArray<FMathRBFInterpolateVectorQuat_Target>*)RigVMMemoryHandles[0].GetData(false); \
		FQuat& Output = *(FQuat*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& Input = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const ERBFVectorDistanceType DistanceFunction = *(ERBFVectorDistanceType*)RigVMMemoryHandles[3].GetData(false); \
		const ERBFKernelType SmoothingFunction = *(ERBFKernelType*)RigVMMemoryHandles[4].GetData(false); \
		const float SmoothingRadius = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const bool bNormalizeOutput = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		FRigUnit_MathRBFInterpolateVectorWorkData& WorkData = *(FRigUnit_MathRBFInterpolateVectorWorkData*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Targets, \
			Output, \
			Input, \
			DistanceFunction, \
			SmoothingFunction, \
			SmoothingRadius, \
			bNormalizeOutput, \
			WorkData, \
			Context \
		); \
	} \
	typedef FRigUnit_MathRBFInterpolateVectorBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathRBFInterpolateVectorQuat>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_439_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMathRBFInterpolateVectorXform_Target_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FMathRBFInterpolateVectorXform_Target>();


#define FRigUnit_MathRBFInterpolateVectorXform_Execute() \
	void FRigUnit_MathRBFInterpolateVectorXform::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FMathRBFInterpolateVectorXform_Target>& Targets, \
		FTransform& Output, \
		const FVector& Input, \
		const ERBFVectorDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingRadius, \
		const bool bNormalizeOutput, \
		FRigUnit_MathRBFInterpolateVectorWorkData& WorkData, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h_452_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_MathRBFInterpolateVectorXform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FMathRBFInterpolateVectorXform_Target>& Targets, \
		FTransform& Output, \
		const FVector& Input, \
		const ERBFVectorDistanceType DistanceFunction, \
		const ERBFKernelType SmoothingFunction, \
		const float SmoothingRadius, \
		const bool bNormalizeOutput, \
		FRigUnit_MathRBFInterpolateVectorWorkData& WorkData, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		TArray<FMathRBFInterpolateVectorXform_Target>& Targets = *(TArray<FMathRBFInterpolateVectorXform_Target>*)RigVMMemoryHandles[0].GetData(false); \
		FTransform& Output = *(FTransform*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& Input = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const ERBFVectorDistanceType DistanceFunction = *(ERBFVectorDistanceType*)RigVMMemoryHandles[3].GetData(false); \
		const ERBFKernelType SmoothingFunction = *(ERBFKernelType*)RigVMMemoryHandles[4].GetData(false); \
		const float SmoothingRadius = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const bool bNormalizeOutput = *(bool*)RigVMMemoryHandles[6].GetData(false); \
		FRigUnit_MathRBFInterpolateVectorWorkData& WorkData = *(FRigUnit_MathRBFInterpolateVectorWorkData*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Targets, \
			Output, \
			Input, \
			DistanceFunction, \
			SmoothingFunction, \
			SmoothingRadius, \
			bNormalizeOutput, \
			WorkData, \
			Context \
		); \
	} \
	typedef FRigUnit_MathRBFInterpolateVectorBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_MathRBFInterpolateVectorXform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Math_RigUnit_MathRBFInterpolate_h


#define FOREACH_ENUM_ERBFKERNELTYPE(op) \
	op(ERBFKernelType::Gaussian) \
	op(ERBFKernelType::Exponential) \
	op(ERBFKernelType::Linear) \
	op(ERBFKernelType::Cubic) \
	op(ERBFKernelType::Quintic) 

enum class ERBFKernelType : uint8;
template<> CONTROLRIG_API UEnum* StaticEnum<ERBFKernelType>();

#define FOREACH_ENUM_ERBFQUATDISTANCETYPE(op) \
	op(ERBFQuatDistanceType::Euclidean) \
	op(ERBFQuatDistanceType::ArcLength) \
	op(ERBFQuatDistanceType::SwingAngle) \
	op(ERBFQuatDistanceType::TwistAngle) 

enum class ERBFQuatDistanceType : uint8;
template<> CONTROLRIG_API UEnum* StaticEnum<ERBFQuatDistanceType>();

#define FOREACH_ENUM_ERBFVECTORDISTANCETYPE(op) \
	op(ERBFVectorDistanceType::Euclidean) \
	op(ERBFVectorDistanceType::Manhattan) \
	op(ERBFVectorDistanceType::ArcLength) 

enum class ERBFVectorDistanceType : uint8;
template<> CONTROLRIG_API UEnum* StaticEnum<ERBFVectorDistanceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
