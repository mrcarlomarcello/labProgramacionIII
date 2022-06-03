// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_DynamicHierarchy_generated_h
#error "RigUnit_DynamicHierarchy.generated.h already included, missing '#pragma once' in RigUnit_DynamicHierarchy.h"
#endif
#define CONTROLRIG_RigUnit_DynamicHierarchy_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DynamicHierarchyBase>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBaseMutable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_DynamicHierarchyBaseMutable>();


#define FRigUnit_AddParent_Execute() \
	void FRigUnit_AddParent::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_AddParent_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent, \
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
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Child, \
			Parent, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_AddParent>();


#define FRigUnit_SwitchParent_Execute() \
	void FRigUnit_SwitchParent::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const ERigSwitchParentMode Mode, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent, \
		const bool bMaintainGlobal, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const ERigSwitchParentMode Mode, \
		const FRigElementKey& Child, \
		const FRigElementKey& Parent, \
		const bool bMaintainGlobal, \
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
		const ERigSwitchParentMode Mode = *(ERigSwitchParentMode*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[2].GetData(false); \
		const bool bMaintainGlobal = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Mode, \
			Child, \
			Parent, \
			bMaintainGlobal, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SwitchParent>();


#define FRigUnit_HierarchyGetParentWeights_Execute() \
	void FRigUnit_HierarchyGetParentWeights::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		TArray<FRigElementWeight>& Weights, \
		FRigElementKeyCollection& Parents, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_109_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		TArray<FRigElementWeight>& Weights, \
		FRigElementKeyCollection& Parents, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FRigElementWeight>& Weights = *(TArray<FRigElementWeight>*)RigVMMemoryHandles[1].GetData(false); \
		FRigElementKeyCollection& Parents = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Child, \
			Weights, \
			Parents, \
			Context \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyGetParentWeights>();


#define FRigUnit_HierarchyGetParentWeightsArray_Execute() \
	void FRigUnit_HierarchyGetParentWeightsArray::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		TArray<FRigElementWeight>& Weights, \
		TArray<FRigElementKey>& Parents, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_144_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		TArray<FRigElementWeight>& Weights, \
		TArray<FRigElementKey>& Parents, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FRigElementWeight>& Weights = *(TArray<FRigElementWeight>*)RigVMMemoryHandles[1].GetData(false); \
		TArray<FRigElementKey>& Parents = *(TArray<FRigElementKey>*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Child, \
			Weights, \
			Parents, \
			Context \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyGetParentWeightsArray>();


#define FRigUnit_HierarchySetParentWeights_Execute() \
	void FRigUnit_HierarchySetParentWeights::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		const TArrayView<const FRigElementWeight>& Weights, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_179_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		const TArrayView<const FRigElementWeight>& Weights, \
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
		const FRigElementKey& Child = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FRigElementWeight>& Weights = *(TArray<FRigElementWeight>*)RigVMMemoryHandles[1].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Child, \
			Weights, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_DynamicHierarchyBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchySetParentWeights>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h


#define FOREACH_ENUM_ERIGSWITCHPARENTMODE(op) \
	op(ERigSwitchParentMode::World) \
	op(ERigSwitchParentMode::DefaultParent) \
	op(ERigSwitchParentMode::ParentItem) 

enum class ERigSwitchParentMode : uint8;
template<> CONTROLRIG_API UEnum* StaticEnum<ERigSwitchParentMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
