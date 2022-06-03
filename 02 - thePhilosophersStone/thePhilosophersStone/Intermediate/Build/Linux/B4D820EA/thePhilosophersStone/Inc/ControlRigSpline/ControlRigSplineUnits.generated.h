// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIGSPLINE_ControlRigSplineUnits_generated_h
#error "ControlRigSplineUnits.generated.h already included, missing '#pragma once' in ControlRigSplineUnits.h"
#endif
#define CONTROLRIGSPLINE_ControlRigSplineUnits_generated_h

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_ControlRigSplineBase>();


#define FRigUnit_ControlRigSplineFromPoints_Execute() \
	void FRigUnit_ControlRigSplineFromPoints::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FVector>& Points, \
		const ESplineType SplineMode, \
		const int32 SamplesPerSegment, \
		const float Compression, \
		const float Stretch, \
		FControlRigSpline& Spline, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ControlRigSplineFromPoints_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FVector>& Points, \
		const ESplineType SplineMode, \
		const int32 SamplesPerSegment, \
		const float Compression, \
		const float Stretch, \
		FControlRigSpline& Spline, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		TArray<FVector>& Points = *(TArray<FVector>*)RigVMMemoryHandles[0].GetData(false); \
		const ESplineType SplineMode = *(ESplineType*)RigVMMemoryHandles[1].GetData(false); \
		const int32 SamplesPerSegment = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		const float Compression = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Stretch = *(float*)RigVMMemoryHandles[4].GetData(false); \
		FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Points, \
			SplineMode, \
			SamplesPerSegment, \
			Compression, \
			Stretch, \
			Spline, \
			Context \
		); \
	} \
	typedef FRigUnit_ControlRigSplineBase Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_ControlRigSplineFromPoints>();


#define FRigUnit_SetSplinePoints_Execute() \
	void FRigUnit_SetSplinePoints::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FVector>& Points, \
		FControlRigSpline& Spline, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetSplinePoints_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FVector>& Points, \
		FControlRigSpline& Spline, \
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
		TArray<FVector>& Points = *(TArray<FVector>*)RigVMMemoryHandles[0].GetData(false); \
		FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[1].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Points, \
			Spline, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_SetSplinePoints>();


#define FRigUnit_PositionFromControlRigSpline_Execute() \
	void FRigUnit_PositionFromControlRigSpline::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FControlRigSpline& Spline, \
		const float U, \
		FVector& Position, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_PositionFromControlRigSpline_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FControlRigSpline& Spline, \
		const float U, \
		FVector& Position, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[0].GetData(false); \
		const float U = *(float*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Position = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Spline, \
			U, \
			Position, \
			Context \
		); \
	} \
	typedef FRigUnit_ControlRigSplineBase Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_PositionFromControlRigSpline>();


#define FRigUnit_TransformFromControlRigSpline_Execute() \
	void FRigUnit_TransformFromControlRigSpline::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FControlRigSpline& Spline, \
		const FVector& UpVector, \
		const float Roll, \
		const float U, \
		FTransform& Transform, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_114_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_TransformFromControlRigSpline_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FControlRigSpline& Spline, \
		const FVector& UpVector, \
		const float Roll, \
		const float U, \
		FTransform& Transform, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& UpVector = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		const float Roll = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float U = *(float*)RigVMMemoryHandles[3].GetData(false); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Spline, \
			UpVector, \
			Roll, \
			U, \
			Transform, \
			Context \
		); \
	} \
	typedef FRigUnit_ControlRigSplineBase Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_TransformFromControlRigSpline>();


#define FRigUnit_TangentFromControlRigSpline_Execute() \
	void FRigUnit_TangentFromControlRigSpline::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FControlRigSpline& Spline, \
		const float U, \
		FVector& Tangent, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_150_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_TangentFromControlRigSpline_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FControlRigSpline& Spline, \
		const float U, \
		FVector& Tangent, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[0].GetData(false); \
		const float U = *(float*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Tangent = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Spline, \
			U, \
			Tangent, \
			Context \
		); \
	} \
	typedef FRigUnit_ControlRigSplineBase Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_TangentFromControlRigSpline>();


#define FRigUnit_DrawControlRigSpline_Execute() \
	void FRigUnit_DrawControlRigSpline::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FControlRigSpline& Spline, \
		const FLinearColor& Color, \
		const float Thickness, \
		const int32 Detail, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_178_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FControlRigSpline& Spline, \
		const FLinearColor& Color, \
		const float Thickness, \
		const int32 Detail, \
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
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[0].GetData(false); \
		const FLinearColor& Color = *(FLinearColor*)RigVMMemoryHandles[1].GetData(false); \
		const float Thickness = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const int32 Detail = *(int32*)RigVMMemoryHandles[3].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Spline, \
			Color, \
			Thickness, \
			Detail, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_DrawControlRigSpline>();


#define FRigUnit_GetLengthControlRigSpline_Execute() \
	void FRigUnit_GetLengthControlRigSpline::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FControlRigSpline& Spline, \
		float& Length, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_210_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetLengthControlRigSpline_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FControlRigSpline& Spline, \
		float& Length, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[0].GetData(false); \
		float& Length = *(float*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Spline, \
			Length, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_GetLengthControlRigSpline>();


#define FRigUnit_FitChainToSplineCurve_Execute() \
	void FRigUnit_FitChainToSplineCurve::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const FControlRigSpline& Spline, \
		const EControlRigCurveAlignment Alignment, \
		const float Minimum, \
		const float Maximum, \
		const int32 SamplingPrecision, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const FVector& PoleVectorPosition, \
		const TArrayView<const FRigUnit_FitChainToCurve_Rotation>& Rotations, \
		const EControlRigAnimEasingType RotationEaseType, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const FRigUnit_FitChainToCurve_DebugSettings& DebugSettings, \
		FRigUnit_FitChainToCurve_WorkData& WorkData, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_235_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurve_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const FControlRigSpline& Spline, \
		const EControlRigCurveAlignment Alignment, \
		const float Minimum, \
		const float Maximum, \
		const int32 SamplingPrecision, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const FVector& PoleVectorPosition, \
		const TArrayView<const FRigUnit_FitChainToCurve_Rotation>& Rotations, \
		const EControlRigAnimEasingType RotationEaseType, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const FRigUnit_FitChainToCurve_DebugSettings& DebugSettings, \
		FRigUnit_FitChainToCurve_WorkData& WorkData, \
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
		const FRigElementKeyCollection& Items = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[1].GetData(false); \
		const EControlRigCurveAlignment Alignment = *(EControlRigCurveAlignment*)RigVMMemoryHandles[2].GetData(false); \
		const float Minimum = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Maximum = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const int32 SamplingPrecision = *(int32*)RigVMMemoryHandles[5].GetData(false); \
		const FVector& PrimaryAxis = *(FVector*)RigVMMemoryHandles[6].GetData(false); \
		const FVector& SecondaryAxis = *(FVector*)RigVMMemoryHandles[7].GetData(false); \
		const FVector& PoleVectorPosition = *(FVector*)RigVMMemoryHandles[8].GetData(false); \
		TArray<FRigUnit_FitChainToCurve_Rotation>& Rotations = *(TArray<FRigUnit_FitChainToCurve_Rotation>*)RigVMMemoryHandles[9].GetData(false); \
		const EControlRigAnimEasingType RotationEaseType = *(EControlRigAnimEasingType*)RigVMMemoryHandles[10].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[11].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[12].GetData(false); \
		const FRigUnit_FitChainToCurve_DebugSettings& DebugSettings = *(FRigUnit_FitChainToCurve_DebugSettings*)RigVMMemoryHandles[13].GetData(false); \
		FRigUnit_FitChainToCurve_WorkData& WorkData = *(FRigUnit_FitChainToCurve_WorkData*)RigVMMemoryHandles[14].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[15].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Items, \
			Spline, \
			Alignment, \
			Minimum, \
			Maximum, \
			SamplingPrecision, \
			PrimaryAxis, \
			SecondaryAxis, \
			PoleVectorPosition, \
			Rotations, \
			RotationEaseType, \
			Weight, \
			bPropagateToChildren, \
			DebugSettings, \
			WorkData, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_FitChainToSplineCurve>();


#define FRigUnit_FitChainToSplineCurveItemArray_Execute() \
	void FRigUnit_FitChainToSplineCurveItemArray::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FControlRigSpline& Spline, \
		const EControlRigCurveAlignment Alignment, \
		const float Minimum, \
		const float Maximum, \
		const int32 SamplingPrecision, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const FVector& PoleVectorPosition, \
		const TArrayView<const FRigUnit_FitChainToCurve_Rotation>& Rotations, \
		const EControlRigAnimEasingType RotationEaseType, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const FRigUnit_FitChainToCurve_DebugSettings& DebugSettings, \
		FRigUnit_FitChainToCurve_WorkData& WorkData, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_351_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FitChainToSplineCurveItemArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FControlRigSpline& Spline, \
		const EControlRigCurveAlignment Alignment, \
		const float Minimum, \
		const float Maximum, \
		const int32 SamplingPrecision, \
		const FVector& PrimaryAxis, \
		const FVector& SecondaryAxis, \
		const FVector& PoleVectorPosition, \
		const TArrayView<const FRigUnit_FitChainToCurve_Rotation>& Rotations, \
		const EControlRigAnimEasingType RotationEaseType, \
		const float Weight, \
		const bool bPropagateToChildren, \
		const FRigUnit_FitChainToCurve_DebugSettings& DebugSettings, \
		FRigUnit_FitChainToCurve_WorkData& WorkData, \
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
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetData(false); \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[1].GetData(false); \
		const EControlRigCurveAlignment Alignment = *(EControlRigCurveAlignment*)RigVMMemoryHandles[2].GetData(false); \
		const float Minimum = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float Maximum = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const int32 SamplingPrecision = *(int32*)RigVMMemoryHandles[5].GetData(false); \
		const FVector& PrimaryAxis = *(FVector*)RigVMMemoryHandles[6].GetData(false); \
		const FVector& SecondaryAxis = *(FVector*)RigVMMemoryHandles[7].GetData(false); \
		const FVector& PoleVectorPosition = *(FVector*)RigVMMemoryHandles[8].GetData(false); \
		TArray<FRigUnit_FitChainToCurve_Rotation>& Rotations = *(TArray<FRigUnit_FitChainToCurve_Rotation>*)RigVMMemoryHandles[9].GetData(false); \
		const EControlRigAnimEasingType RotationEaseType = *(EControlRigAnimEasingType*)RigVMMemoryHandles[10].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[11].GetData(false); \
		const bool bPropagateToChildren = *(bool*)RigVMMemoryHandles[12].GetData(false); \
		const FRigUnit_FitChainToCurve_DebugSettings& DebugSettings = *(FRigUnit_FitChainToCurve_DebugSettings*)RigVMMemoryHandles[13].GetData(false); \
		FRigUnit_FitChainToCurve_WorkData& WorkData = *(FRigUnit_FitChainToCurve_WorkData*)RigVMMemoryHandles[14].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[15].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Items, \
			Spline, \
			Alignment, \
			Minimum, \
			Maximum, \
			SamplingPrecision, \
			PrimaryAxis, \
			SecondaryAxis, \
			PoleVectorPosition, \
			Rotations, \
			RotationEaseType, \
			Weight, \
			bPropagateToChildren, \
			DebugSettings, \
			WorkData, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_FitChainToSplineCurveItemArray>();


#define FRigUnit_FitSplineCurveToChain_Execute() \
	void FRigUnit_FitSplineCurveToChain::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Items, \
		FControlRigSpline& Spline, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_466_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChain_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Items, \
		FControlRigSpline& Spline, \
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
		const FRigElementKeyCollection& Items = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[1].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Items, \
			Spline, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_FitSplineCurveToChain>();


#define FRigUnit_FitSplineCurveToChainItemArray_Execute() \
	void FRigUnit_FitSplineCurveToChainItemArray::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		FControlRigSpline& Spline, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_495_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_FitSplineCurveToChainItemArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		FControlRigSpline& Spline, \
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
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[0].GetData(false); \
		FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[1].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Items, \
			Spline, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_FitSplineCurveToChainItemArray>();


#define FRigUnit_ClosestParameterFromControlRigSpline_Execute() \
	void FRigUnit_ClosestParameterFromControlRigSpline::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FControlRigSpline& Spline, \
		const FVector& Position, \
		float& U, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_524_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ClosestParameterFromControlRigSpline_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FControlRigSpline& Spline, \
		const FVector& Position, \
		float& U, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[0].GetData(false); \
		const FVector& Position = *(FVector*)RigVMMemoryHandles[1].GetData(false); \
		float& U = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Spline, \
			Position, \
			U, \
			Context \
		); \
	} \
	typedef FRigUnit_ControlRigSplineBase Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_ClosestParameterFromControlRigSpline>();


#define FRigUnit_ParameterAtPercentage_Execute() \
	void FRigUnit_ParameterAtPercentage::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FControlRigSpline& Spline, \
		const float Percentage, \
		float& U, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h_553_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_ParameterAtPercentage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FControlRigSpline& Spline, \
		const float Percentage, \
		float& U, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FControlRigSpline& Spline = *(FControlRigSpline*)RigVMMemoryHandles[0].GetData(false); \
		const float Percentage = *(float*)RigVMMemoryHandles[1].GetData(false); \
		float& U = *(float*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Spline, \
			Percentage, \
			U, \
			Context \
		); \
	} \
	typedef FRigUnit_ControlRigSplineBase Super;


template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<struct FRigUnit_ParameterAtPercentage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineUnits_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
