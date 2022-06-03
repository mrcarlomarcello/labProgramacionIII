// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PBIK_RigUnit_PBIK_generated_h
#error "RigUnit_PBIK.generated.h already included, missing '#pragma once' in RigUnit_PBIK.h"
#endif
#define PBIK_RigUnit_PBIK_generated_h

#define FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_RigUnit_PBIK_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPBIKDebug_Statics; \
	PBIK_API static class UScriptStruct* StaticStruct();


template<> PBIK_API UScriptStruct* StaticStruct<struct FPBIKDebug>();

#define FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_RigUnit_PBIK_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPBIKEffector_Statics; \
	PBIK_API static class UScriptStruct* StaticStruct();


template<> PBIK_API UScriptStruct* StaticStruct<struct FPBIKEffector>();


#define FRigUnit_PBIK_Execute() \
	void FRigUnit_PBIK::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Root, \
		const TArrayView<const FPBIKEffector>& Effectors, \
		TArray<int32>& EffectorSolverIndices, \
		const TArrayView<const FPBIKBoneSetting>& BoneSettings, \
		const TArrayView<const FName>& ExcludedBones, \
		const FPBIKSolverSettings& Settings, \
		const FPBIKDebug& Debug, \
		TArray<int32>& BoneSettingToSolverBoneIndex, \
		TArray<int32>& SolverBoneToElementIndex, \
		FPBIKSolver& Solver, \
		bool& bNeedsInit, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_RigUnit_PBIK_h_100_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics; \
	PBIK_API static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Root, \
		const TArrayView<const FPBIKEffector>& Effectors, \
		TArray<int32>& EffectorSolverIndices, \
		const TArrayView<const FPBIKBoneSetting>& BoneSettings, \
		const TArrayView<const FName>& ExcludedBones, \
		const FPBIKSolverSettings& Settings, \
		const FPBIKDebug& Debug, \
		TArray<int32>& BoneSettingToSolverBoneIndex, \
		TArray<int32>& SolverBoneToElementIndex, \
		FPBIKSolver& Solver, \
		bool& bNeedsInit, \
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
		const FName& Root = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FPBIKEffector>& Effectors = *(TArray<FPBIKEffector>*)RigVMMemoryHandles[1].GetData(false); \
		TArray<int32>& EffectorSolverIndices = *(TArray<int32>*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		TArray<FPBIKBoneSetting>& BoneSettings = *(TArray<FPBIKBoneSetting>*)RigVMMemoryHandles[3].GetData(false); \
		TArray<FName>& ExcludedBones = *(TArray<FName>*)RigVMMemoryHandles[4].GetData(false); \
		const FPBIKSolverSettings& Settings = *(FPBIKSolverSettings*)RigVMMemoryHandles[5].GetData(false); \
		const FPBIKDebug& Debug = *(FPBIKDebug*)RigVMMemoryHandles[6].GetData(false); \
		TArray<int32>& BoneSettingToSolverBoneIndex = *(TArray<int32>*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		TArray<int32>& SolverBoneToElementIndex = *(TArray<int32>*)RigVMMemoryHandles[8].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FPBIKSolver& Solver = *(FPBIKSolver*)RigVMMemoryHandles[9].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		bool& bNeedsInit = *(bool*)RigVMMemoryHandles[10].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[11].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Root, \
			Effectors, \
			EffectorSolverIndices, \
			BoneSettings, \
			ExcludedBones, \
			Settings, \
			Debug, \
			BoneSettingToSolverBoneIndex, \
			SolverBoneToElementIndex, \
			Solver, \
			bNeedsInit, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> PBIK_API UScriptStruct* StaticStruct<struct FRigUnit_PBIK>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_RigUnit_PBIK_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
