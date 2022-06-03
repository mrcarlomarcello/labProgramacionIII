// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_GetTransform_generated_h
#error "RigUnit_GetTransform.generated.h already included, missing '#pragma once' in RigUnit_GetTransform.h"
#endif
#define CONTROLRIG_RigUnit_GetTransform_generated_h


#define FRigUnit_GetTransform_Execute() \
	void FRigUnit_GetTransform::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		const EBoneGetterSetterMode Space, \
		const bool bInitial, \
		FTransform& Transform, \
		FCachedRigElement& CachedIndex, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetTransform_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		const EBoneGetterSetterMode Space, \
		const bool bInitial, \
		FTransform& Transform, \
		FCachedRigElement& CachedIndex, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const EBoneGetterSetterMode Space = *(EBoneGetterSetterMode*)RigVMMemoryHandles[1].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[3].GetData(false); \
		FCachedRigElement& CachedIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Item, \
			Space, \
			bInitial, \
			Transform, \
			CachedIndex, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetTransform>();


#define FRigUnit_GetTransformArray_Execute() \
	void FRigUnit_GetTransformArray::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const EBoneGetterSetterMode Space, \
		const bool bInitial, \
		TArray<FTransform>& Transforms, \
		TArray<FCachedRigElement>& CachedIndex, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetTransform_h_75_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const EBoneGetterSetterMode Space, \
		const bool bInitial, \
		TArray<FTransform>& Transforms, \
		TArray<FCachedRigElement>& CachedIndex, \
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
		const EBoneGetterSetterMode Space = *(EBoneGetterSetterMode*)RigVMMemoryHandles[1].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		TArray<FTransform>& Transforms = *(TArray<FTransform>*)RigVMMemoryHandles[3].GetData(false); \
		TArray<FCachedRigElement>& CachedIndex = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Items, \
			Space, \
			bInitial, \
			Transforms, \
			CachedIndex, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetTransformArray>();


#define FRigUnit_GetTransformItemArray_Execute() \
	void FRigUnit_GetTransformItemArray::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const EBoneGetterSetterMode Space, \
		const bool bInitial, \
		TArray<FTransform>& Transforms, \
		TArray<FCachedRigElement>& CachedIndex, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetTransform_h_122_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const EBoneGetterSetterMode Space, \
		const bool bInitial, \
		TArray<FTransform>& Transforms, \
		TArray<FCachedRigElement>& CachedIndex, \
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
		const EBoneGetterSetterMode Space = *(EBoneGetterSetterMode*)RigVMMemoryHandles[1].GetData(false); \
		const bool bInitial = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		TArray<FTransform>& Transforms = *(TArray<FTransform>*)RigVMMemoryHandles[3].GetData(false); \
		TArray<FCachedRigElement>& CachedIndex = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Items, \
			Space, \
			bInitial, \
			Transforms, \
			CachedIndex, \
			Context \
		); \
	} \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_GetTransformItemArray>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetTransform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
