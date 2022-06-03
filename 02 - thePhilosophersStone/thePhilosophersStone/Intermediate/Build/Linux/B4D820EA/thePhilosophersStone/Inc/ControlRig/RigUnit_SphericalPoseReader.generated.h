// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_SphericalPoseReader_generated_h
#error "RigUnit_SphericalPoseReader.generated.h already included, missing '#pragma once' in RigUnit_SphericalPoseReader.h"
#endif
#define CONTROLRIG_RigUnit_SphericalPoseReader_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SphericalPoseReader_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRegionScaleFactors_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRegionScaleFactors>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SphericalPoseReader_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSphericalRegion_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FSphericalRegion>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SphericalPoseReader_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FSphericalPoseReaderDebugSettings>();


#define FRigUnit_SphericalPoseReader_Execute() \
	void FRigUnit_SphericalPoseReader::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		float& OutputParam, \
		const FRigElementKey& DriverItem, \
		const FVector& DriverAxis, \
		const FVector& RotationOffset, \
		const float ActiveRegionSize, \
		const FRegionScaleFactors& ActiveRegionScaleFactors, \
		const float FalloffSize, \
		const FRegionScaleFactors& FalloffRegionScaleFactors, \
		const bool FlipWidthScaling, \
		const bool FlipHeightScaling, \
		const FRigElementKey& OptionalParentItem, \
		const FSphericalPoseReaderDebugSettings& Debug, \
		FSphericalRegion& InnerRegion, \
		FSphericalRegion& OuterRegion, \
		FVector& DriverNormal, \
		FVector& Driver2D, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SphericalPoseReader_h_274_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		float& OutputParam, \
		const FRigElementKey& DriverItem, \
		const FVector& DriverAxis, \
		const FVector& RotationOffset, \
		const float ActiveRegionSize, \
		const FRegionScaleFactors& ActiveRegionScaleFactors, \
		const float FalloffSize, \
		const FRegionScaleFactors& FalloffRegionScaleFactors, \
		const bool FlipWidthScaling, \
		const bool FlipHeightScaling, \
		const FRigElementKey& OptionalParentItem, \
		const FSphericalPoseReaderDebugSettings& Debug, \
		FSphericalRegion& InnerRegion, \
		FSphericalRegion& OuterRegion, \
		FVector& DriverNormal, \
		FVector& Driver2D, \
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
		float& OutputParam = *(float*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& DriverItem = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const FVector& DriverAxis = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const FVector& RotationOffset = *(FVector*)RigVMMemoryHandles[3].GetData(false); \
		const float ActiveRegionSize = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const FRegionScaleFactors& ActiveRegionScaleFactors = *(FRegionScaleFactors*)RigVMMemoryHandles[5].GetData(false); \
		const float FalloffSize = *(float*)RigVMMemoryHandles[6].GetData(false); \
		const FRegionScaleFactors& FalloffRegionScaleFactors = *(FRegionScaleFactors*)RigVMMemoryHandles[7].GetData(false); \
		const bool FlipWidthScaling = *(bool*)RigVMMemoryHandles[8].GetData(false); \
		const bool FlipHeightScaling = *(bool*)RigVMMemoryHandles[9].GetData(false); \
		const FRigElementKey& OptionalParentItem = *(FRigElementKey*)RigVMMemoryHandles[10].GetData(false); \
		const FSphericalPoseReaderDebugSettings& Debug = *(FSphericalPoseReaderDebugSettings*)RigVMMemoryHandles[11].GetData(false); \
		FSphericalRegion& InnerRegion = *(FSphericalRegion*)RigVMMemoryHandles[12].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FSphericalRegion& OuterRegion = *(FSphericalRegion*)RigVMMemoryHandles[13].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FVector& DriverNormal = *(FVector*)RigVMMemoryHandles[14].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FVector& Driver2D = *(FVector*)RigVMMemoryHandles[15].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[16].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			OutputParam, \
			DriverItem, \
			DriverAxis, \
			RotationOffset, \
			ActiveRegionSize, \
			ActiveRegionScaleFactors, \
			FalloffSize, \
			FalloffRegionScaleFactors, \
			FlipWidthScaling, \
			FlipHeightScaling, \
			OptionalParentItem, \
			Debug, \
			InnerRegion, \
			OuterRegion, \
			DriverNormal, \
			Driver2D, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SphericalPoseReader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SphericalPoseReader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
