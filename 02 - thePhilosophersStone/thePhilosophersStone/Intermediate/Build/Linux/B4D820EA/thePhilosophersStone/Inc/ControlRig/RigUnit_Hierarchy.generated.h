// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_Hierarchy_generated_h
#error "RigUnit_Hierarchy.generated.h already included, missing '#pragma once' in RigUnit_Hierarchy.h"
#endif
#define CONTROLRIG_RigUnit_Hierarchy_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Hierarchy_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyBase>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Hierarchy_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyBaseMutable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyBaseMutable>();


#define FRigUnit_HierarchyGetParent_Execute() \
	void FRigUnit_HierarchyGetParent::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		FRigElementKey& Parent, \
		FCachedRigElement& CachedChild, \
		FCachedRigElement& CachedParent, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Hierarchy_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		FRigElementKey& Parent, \
		FCachedRigElement& CachedChild, \
		FCachedRigElement& CachedParent, \
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
		FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		FCachedRigElement& CachedChild = *(FCachedRigElement*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FCachedRigElement& CachedParent = *(FCachedRigElement*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Child, \
			Parent, \
			CachedChild, \
			CachedParent, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyGetParent>();


#define FRigUnit_HierarchyGetParents_Execute() \
	void FRigUnit_HierarchyGetParents::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		const bool bIncludeChild, \
		const bool bReverse, \
		FRigElementKeyCollection& Parents, \
		FCachedRigElement& CachedChild, \
		FRigElementKeyCollection& CachedParents, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Hierarchy_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		const bool bIncludeChild, \
		const bool bReverse, \
		FRigElementKeyCollection& Parents, \
		FCachedRigElement& CachedChild, \
		FRigElementKeyCollection& CachedParents, \
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
		const bool bIncludeChild = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const bool bReverse = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		FRigElementKeyCollection& Parents = *(FRigElementKeyCollection*)RigVMMemoryHandles[3].GetData(false); \
		FCachedRigElement& CachedChild = *(FCachedRigElement*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FRigElementKeyCollection& CachedParents = *(FRigElementKeyCollection*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Child, \
			bIncludeChild, \
			bReverse, \
			Parents, \
			CachedChild, \
			CachedParents, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyGetParents>();


#define FRigUnit_HierarchyGetParentsItemArray_Execute() \
	void FRigUnit_HierarchyGetParentsItemArray::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		const bool bIncludeChild, \
		const bool bReverse, \
		TArray<FRigElementKey>& Parents, \
		FCachedRigElement& CachedChild, \
		FRigElementKeyCollection& CachedParents, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Hierarchy_h_100_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Child, \
		const bool bIncludeChild, \
		const bool bReverse, \
		TArray<FRigElementKey>& Parents, \
		FCachedRigElement& CachedChild, \
		FRigElementKeyCollection& CachedParents, \
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
		const bool bIncludeChild = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const bool bReverse = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		TArray<FRigElementKey>& Parents = *(TArray<FRigElementKey>*)RigVMMemoryHandles[3].GetData(false); \
		FCachedRigElement& CachedChild = *(FCachedRigElement*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FRigElementKeyCollection& CachedParents = *(FRigElementKeyCollection*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Child, \
			bIncludeChild, \
			bReverse, \
			Parents, \
			CachedChild, \
			CachedParents, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyGetParentsItemArray>();


#define FRigUnit_HierarchyGetChildren_Execute() \
	void FRigUnit_HierarchyGetChildren::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Parent, \
		const bool bIncludeParent, \
		const bool bRecursive, \
		FRigElementKeyCollection& Children, \
		FCachedRigElement& CachedParent, \
		FRigElementKeyCollection& CachedChildren, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Hierarchy_h_142_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Parent, \
		const bool bIncludeParent, \
		const bool bRecursive, \
		FRigElementKeyCollection& Children, \
		FCachedRigElement& CachedParent, \
		FRigElementKeyCollection& CachedChildren, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigElementKey& Parent = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const bool bIncludeParent = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		const bool bRecursive = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		FRigElementKeyCollection& Children = *(FRigElementKeyCollection*)RigVMMemoryHandles[3].GetData(false); \
		FCachedRigElement& CachedParent = *(FCachedRigElement*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FRigElementKeyCollection& CachedChildren = *(FRigElementKeyCollection*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Parent, \
			bIncludeParent, \
			bRecursive, \
			Children, \
			CachedParent, \
			CachedChildren, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyGetChildren>();


#define FRigUnit_HierarchyGetSiblings_Execute() \
	void FRigUnit_HierarchyGetSiblings::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		const bool bIncludeItem, \
		FRigElementKeyCollection& Siblings, \
		FCachedRigElement& CachedItem, \
		FRigElementKeyCollection& CachedSiblings, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Hierarchy_h_183_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		const bool bIncludeItem, \
		FRigElementKeyCollection& Siblings, \
		FCachedRigElement& CachedItem, \
		FRigElementKeyCollection& CachedSiblings, \
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
		const bool bIncludeItem = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		FRigElementKeyCollection& Siblings = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetData(false); \
		FCachedRigElement& CachedItem = *(FCachedRigElement*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FRigElementKeyCollection& CachedSiblings = *(FRigElementKeyCollection*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Item, \
			bIncludeItem, \
			Siblings, \
			CachedItem, \
			CachedSiblings, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyGetSiblings>();


#define FRigUnit_HierarchyGetSiblingsItemArray_Execute() \
	void FRigUnit_HierarchyGetSiblingsItemArray::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		const bool bIncludeItem, \
		TArray<FRigElementKey>& Siblings, \
		FCachedRigElement& CachedItem, \
		FRigElementKeyCollection& CachedSiblings, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Hierarchy_h_220_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Item, \
		const bool bIncludeItem, \
		TArray<FRigElementKey>& Siblings, \
		FCachedRigElement& CachedItem, \
		FRigElementKeyCollection& CachedSiblings, \
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
		const bool bIncludeItem = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		TArray<FRigElementKey>& Siblings = *(TArray<FRigElementKey>*)RigVMMemoryHandles[2].GetData(false); \
		FCachedRigElement& CachedItem = *(FCachedRigElement*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FRigElementKeyCollection& CachedSiblings = *(FRigElementKeyCollection*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Item, \
			bIncludeItem, \
			Siblings, \
			CachedItem, \
			CachedSiblings, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyGetSiblingsItemArray>();


#define FRigUnit_HierarchyGetPose_Execute() \
	void FRigUnit_HierarchyGetPose::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const bool Initial, \
		const ERigElementType ElementType, \
		const FRigElementKeyCollection& ItemsToGet, \
		FRigPose& Pose, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Hierarchy_h_257_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const bool Initial, \
		const ERigElementType ElementType, \
		const FRigElementKeyCollection& ItemsToGet, \
		FRigPose& Pose, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const bool Initial = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const ERigElementType ElementType = *(ERigElementType*)RigVMMemoryHandles[1].GetData(false); \
		const FRigElementKeyCollection& ItemsToGet = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetData(false); \
		FRigPose& Pose = *(FRigPose*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Initial, \
			ElementType, \
			ItemsToGet, \
			Pose, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyGetPose>();


#define FRigUnit_HierarchyGetPoseItemArray_Execute() \
	void FRigUnit_HierarchyGetPoseItemArray::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const bool Initial, \
		const ERigElementType ElementType, \
		const TArrayView<const FRigElementKey>& ItemsToGet, \
		FRigPose& Pose, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Hierarchy_h_290_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const bool Initial, \
		const ERigElementType ElementType, \
		const TArrayView<const FRigElementKey>& ItemsToGet, \
		FRigPose& Pose, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const bool Initial = *(bool*)RigVMMemoryHandles[0].GetData(false); \
		const ERigElementType ElementType = *(ERigElementType*)RigVMMemoryHandles[1].GetData(false); \
		TArray<FRigElementKey>& ItemsToGet = *(TArray<FRigElementKey>*)RigVMMemoryHandles[2].GetData(false); \
		FRigPose& Pose = *(FRigPose*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Initial, \
			ElementType, \
			ItemsToGet, \
			Pose, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchyGetPoseItemArray>();


#define FRigUnit_HierarchySetPose_Execute() \
	void FRigUnit_HierarchySetPose::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigPose& Pose, \
		const ERigElementType ElementType, \
		const EBoneGetterSetterMode Space, \
		const FRigElementKeyCollection& ItemsToSet, \
		const float Weight, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Hierarchy_h_323_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigPose& Pose, \
		const ERigElementType ElementType, \
		const EBoneGetterSetterMode Space, \
		const FRigElementKeyCollection& ItemsToSet, \
		const float Weight, \
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
		const FRigPose& Pose = *(FRigPose*)RigVMMemoryHandles[0].GetData(false); \
		const ERigElementType ElementType = *(ERigElementType*)RigVMMemoryHandles[1].GetData(false); \
		const EBoneGetterSetterMode Space = *(EBoneGetterSetterMode*)RigVMMemoryHandles[2].GetData(false); \
		const FRigElementKeyCollection& ItemsToSet = *(FRigElementKeyCollection*)RigVMMemoryHandles[3].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Pose, \
			ElementType, \
			Space, \
			ItemsToSet, \
			Weight, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchySetPose>();


#define FRigUnit_HierarchySetPoseItemArray_Execute() \
	void FRigUnit_HierarchySetPoseItemArray::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigPose& Pose, \
		const ERigElementType ElementType, \
		const EBoneGetterSetterMode Space, \
		const TArrayView<const FRigElementKey>& ItemsToSet, \
		const float Weight, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Hierarchy_h_360_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigPose& Pose, \
		const ERigElementType ElementType, \
		const EBoneGetterSetterMode Space, \
		const TArrayView<const FRigElementKey>& ItemsToSet, \
		const float Weight, \
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
		const FRigPose& Pose = *(FRigPose*)RigVMMemoryHandles[0].GetData(false); \
		const ERigElementType ElementType = *(ERigElementType*)RigVMMemoryHandles[1].GetData(false); \
		const EBoneGetterSetterMode Space = *(EBoneGetterSetterMode*)RigVMMemoryHandles[2].GetData(false); \
		TArray<FRigElementKey>& ItemsToSet = *(TArray<FRigElementKey>*)RigVMMemoryHandles[3].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[4].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Pose, \
			ElementType, \
			Space, \
			ItemsToSet, \
			Weight, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_HierarchySetPoseItemArray>();


#define FRigUnit_PoseIsEmpty_Execute() \
	void FRigUnit_PoseIsEmpty::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigPose& Pose, \
		bool& IsEmpty, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Hierarchy_h_396_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_PoseIsEmpty_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigPose& Pose, \
		bool& IsEmpty, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigPose& Pose = *(FRigPose*)RigVMMemoryHandles[0].GetData(false); \
		bool& IsEmpty = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Pose, \
			IsEmpty, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_PoseIsEmpty>();


#define FRigUnit_PoseGetItems_Execute() \
	void FRigUnit_PoseGetItems::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigPose& Pose, \
		const ERigElementType ElementType, \
		FRigElementKeyCollection& Items, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Hierarchy_h_420_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigPose& Pose, \
		const ERigElementType ElementType, \
		FRigElementKeyCollection& Items, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigPose& Pose = *(FRigPose*)RigVMMemoryHandles[0].GetData(false); \
		const ERigElementType ElementType = *(ERigElementType*)RigVMMemoryHandles[1].GetData(false); \
		FRigElementKeyCollection& Items = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Pose, \
			ElementType, \
			Items, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_PoseGetItems>();


#define FRigUnit_PoseGetItemsItemArray_Execute() \
	void FRigUnit_PoseGetItemsItemArray::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigPose& Pose, \
		const ERigElementType ElementType, \
		TArray<FRigElementKey>& Items, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Hierarchy_h_448_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigPose& Pose, \
		const ERigElementType ElementType, \
		TArray<FRigElementKey>& Items, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigPose& Pose = *(FRigPose*)RigVMMemoryHandles[0].GetData(false); \
		const ERigElementType ElementType = *(ERigElementType*)RigVMMemoryHandles[1].GetData(false); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Pose, \
			ElementType, \
			Items, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_PoseGetItemsItemArray>();


#define FRigUnit_PoseGetDelta_Execute() \
	void FRigUnit_PoseGetDelta::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigPose& PoseA, \
		const FRigPose& PoseB, \
		const float PositionThreshold, \
		const float RotationThreshold, \
		const float ScaleThreshold, \
		const float CurveThreshold, \
		const ERigElementType ElementType, \
		const EBoneGetterSetterMode Space, \
		const FRigElementKeyCollection& ItemsToCompare, \
		bool& PosesAreEqual, \
		FRigElementKeyCollection& ItemsWithDelta, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Hierarchy_h_475_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigPose& PoseA, \
		const FRigPose& PoseB, \
		const float PositionThreshold, \
		const float RotationThreshold, \
		const float ScaleThreshold, \
		const float CurveThreshold, \
		const ERigElementType ElementType, \
		const EBoneGetterSetterMode Space, \
		const FRigElementKeyCollection& ItemsToCompare, \
		bool& PosesAreEqual, \
		FRigElementKeyCollection& ItemsWithDelta, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigPose& PoseA = *(FRigPose*)RigVMMemoryHandles[0].GetData(false); \
		const FRigPose& PoseB = *(FRigPose*)RigVMMemoryHandles[1].GetData(false); \
		const float PositionThreshold = *(float*)RigVMMemoryHandles[2].GetData(false); \
		const float RotationThreshold = *(float*)RigVMMemoryHandles[3].GetData(false); \
		const float ScaleThreshold = *(float*)RigVMMemoryHandles[4].GetData(false); \
		const float CurveThreshold = *(float*)RigVMMemoryHandles[5].GetData(false); \
		const ERigElementType ElementType = *(ERigElementType*)RigVMMemoryHandles[6].GetData(false); \
		const EBoneGetterSetterMode Space = *(EBoneGetterSetterMode*)RigVMMemoryHandles[7].GetData(false); \
		const FRigElementKeyCollection& ItemsToCompare = *(FRigElementKeyCollection*)RigVMMemoryHandles[8].GetData(false); \
		bool& PosesAreEqual = *(bool*)RigVMMemoryHandles[9].GetData(false); \
		FRigElementKeyCollection& ItemsWithDelta = *(FRigElementKeyCollection*)RigVMMemoryHandles[10].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			PoseA, \
			PoseB, \
			PositionThreshold, \
			RotationThreshold, \
			ScaleThreshold, \
			CurveThreshold, \
			ElementType, \
			Space, \
			ItemsToCompare, \
			PosesAreEqual, \
			ItemsWithDelta, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_PoseGetDelta>();


#define FRigUnit_PoseGetTransform_Execute() \
	void FRigUnit_PoseGetTransform::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigPose& Pose, \
		const FRigElementKey& Item, \
		const EBoneGetterSetterMode Space, \
		bool& Valid, \
		FTransform& Transform, \
		float& CurveValue, \
		int32& CachedPoseElementIndex, \
		int32& CachedPoseHash, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Hierarchy_h_558_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigPose& Pose, \
		const FRigElementKey& Item, \
		const EBoneGetterSetterMode Space, \
		bool& Valid, \
		FTransform& Transform, \
		float& CurveValue, \
		int32& CachedPoseElementIndex, \
		int32& CachedPoseHash, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigPose& Pose = *(FRigPose*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const EBoneGetterSetterMode Space = *(EBoneGetterSetterMode*)RigVMMemoryHandles[2].GetData(false); \
		bool& Valid = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[4].GetData(false); \
		float& CurveValue = *(float*)RigVMMemoryHandles[5].GetData(false); \
		int32& CachedPoseElementIndex = *(int32*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedPoseHash = *(int32*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Pose, \
			Item, \
			Space, \
			Valid, \
			Transform, \
			CurveValue, \
			CachedPoseElementIndex, \
			CachedPoseHash, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_PoseGetTransform>();


#define FRigUnit_PoseGetTransformArray_Execute() \
	void FRigUnit_PoseGetTransformArray::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigPose& Pose, \
		const EBoneGetterSetterMode Space, \
		bool& Valid, \
		TArray<FTransform>& Transforms, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Hierarchy_h_608_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigPose& Pose, \
		const EBoneGetterSetterMode Space, \
		bool& Valid, \
		TArray<FTransform>& Transforms, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigPose& Pose = *(FRigPose*)RigVMMemoryHandles[0].GetData(false); \
		const EBoneGetterSetterMode Space = *(EBoneGetterSetterMode*)RigVMMemoryHandles[1].GetData(false); \
		bool& Valid = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		TArray<FTransform>& Transforms = *(TArray<FTransform>*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Pose, \
			Space, \
			Valid, \
			Transforms, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_PoseGetTransformArray>();


#define FRigUnit_PoseGetCurve_Execute() \
	void FRigUnit_PoseGetCurve::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigPose& Pose, \
		const FName& Curve, \
		bool& Valid, \
		float& CurveValue, \
		int32& CachedPoseElementIndex, \
		int32& CachedPoseHash, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Hierarchy_h_643_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigPose& Pose, \
		const FName& Curve, \
		bool& Valid, \
		float& CurveValue, \
		int32& CachedPoseElementIndex, \
		int32& CachedPoseHash, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigPose& Pose = *(FRigPose*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Curve = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		bool& Valid = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		float& CurveValue = *(float*)RigVMMemoryHandles[3].GetData(false); \
		int32& CachedPoseElementIndex = *(int32*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedPoseHash = *(int32*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Pose, \
			Curve, \
			Valid, \
			CurveValue, \
			CachedPoseElementIndex, \
			CachedPoseHash, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_PoseGetCurve>();


#define FRigUnit_PoseLoop_Execute() \
	void FRigUnit_PoseLoop::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigPose& Pose, \
		FRigElementKey& Item, \
		FTransform& GlobalTransform, \
		FTransform& LocalTransform, \
		float& CurveValue, \
		int32& Index, \
		int32& Count, \
		float& Ratio, \
		bool& Continue, \
		FControlRigExecuteContext& Completed, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Hierarchy_h_682_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigPose& Pose, \
		FRigElementKey& Item, \
		FTransform& GlobalTransform, \
		FTransform& LocalTransform, \
		float& CurveValue, \
		int32& Index, \
		int32& Count, \
		float& Ratio, \
		bool& Continue, \
		FControlRigExecuteContext& Completed, \
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
		const FRigPose& Pose = *(FRigPose*)RigVMMemoryHandles[0].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		FTransform& GlobalTransform = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		FTransform& LocalTransform = *(FTransform*)RigVMMemoryHandles[3].GetData(false); \
		float& CurveValue = *(float*)RigVMMemoryHandles[4].GetData(false); \
		int32& Index = *(int32*)RigVMMemoryHandles[5].GetData(false); \
		int32& Count = *(int32*)RigVMMemoryHandles[6].GetData(false); \
		float& Ratio = *(float*)RigVMMemoryHandles[7].GetData(false); \
		bool& Continue = *(bool*)RigVMMemoryHandles[8].GetData(false); \
		FControlRigExecuteContext& Completed = *(FControlRigExecuteContext*)RigVMMemoryHandles[9].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[10].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Pose, \
			Item, \
			GlobalTransform, \
			LocalTransform, \
			CurveValue, \
			Index, \
			Count, \
			Ratio, \
			Continue, \
			Completed, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HierarchyBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_PoseLoop>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Hierarchy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
