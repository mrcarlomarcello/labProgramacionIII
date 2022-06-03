// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_Collection_generated_h
#error "RigUnit_Collection.generated.h already included, missing '#pragma once' in RigUnit_Collection.h"
#endif
#define CONTROLRIG_RigUnit_Collection_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionBase>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionBaseMutable_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionBaseMutable>();


#define FRigUnit_CollectionChain_Execute() \
	void FRigUnit_CollectionChain::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& FirstItem, \
		const FRigElementKey& LastItem, \
		const bool Reverse, \
		FRigElementKeyCollection& Collection, \
		FRigElementKeyCollection& CachedCollection, \
		int32& CachedHierarchyHash, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionChain_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& FirstItem, \
		const FRigElementKey& LastItem, \
		const bool Reverse, \
		FRigElementKeyCollection& Collection, \
		FRigElementKeyCollection& CachedCollection, \
		int32& CachedHierarchyHash, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigElementKey& FirstItem = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& LastItem = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const bool Reverse = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[3].GetData(false); \
		FRigElementKeyCollection& CachedCollection = *(FRigElementKeyCollection*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedHierarchyHash = *(int32*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			FirstItem, \
			LastItem, \
			Reverse, \
			Collection, \
			CachedCollection, \
			CachedHierarchyHash, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionChain>();


#define FRigUnit_CollectionChainArray_Execute() \
	void FRigUnit_CollectionChainArray::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& FirstItem, \
		const FRigElementKey& LastItem, \
		const bool Reverse, \
		TArray<FRigElementKey>& Items, \
		FRigElementKeyCollection& CachedCollection, \
		int32& CachedHierarchyHash, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionChainArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& FirstItem, \
		const FRigElementKey& LastItem, \
		const bool Reverse, \
		TArray<FRigElementKey>& Items, \
		FRigElementKeyCollection& CachedCollection, \
		int32& CachedHierarchyHash, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigElementKey& FirstItem = *(FRigElementKey*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& LastItem = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		const bool Reverse = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[3].GetData(false); \
		FRigElementKeyCollection& CachedCollection = *(FRigElementKeyCollection*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedHierarchyHash = *(int32*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			FirstItem, \
			LastItem, \
			Reverse, \
			Items, \
			CachedCollection, \
			CachedHierarchyHash, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionChainArray>();


#define FRigUnit_CollectionNameSearch_Execute() \
	void FRigUnit_CollectionNameSearch::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& PartialName, \
		const ERigElementType TypeToSearch, \
		FRigElementKeyCollection& Collection, \
		FRigElementKeyCollection& CachedCollection, \
		int32& CachedHierarchyHash, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_104_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearch_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& PartialName, \
		const ERigElementType TypeToSearch, \
		FRigElementKeyCollection& Collection, \
		FRigElementKeyCollection& CachedCollection, \
		int32& CachedHierarchyHash, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FName& PartialName = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const ERigElementType TypeToSearch = *(ERigElementType*)RigVMMemoryHandles[1].GetData(false); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetData(false); \
		FRigElementKeyCollection& CachedCollection = *(FRigElementKeyCollection*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedHierarchyHash = *(int32*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			PartialName, \
			TypeToSearch, \
			Collection, \
			CachedCollection, \
			CachedHierarchyHash, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionNameSearch>();


#define FRigUnit_CollectionNameSearchArray_Execute() \
	void FRigUnit_CollectionNameSearchArray::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& PartialName, \
		const ERigElementType TypeToSearch, \
		TArray<FRigElementKey>& Items, \
		FRigElementKeyCollection& CachedCollection, \
		int32& CachedHierarchyHash, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_139_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearchArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& PartialName, \
		const ERigElementType TypeToSearch, \
		TArray<FRigElementKey>& Items, \
		FRigElementKeyCollection& CachedCollection, \
		int32& CachedHierarchyHash, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FName& PartialName = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const ERigElementType TypeToSearch = *(ERigElementType*)RigVMMemoryHandles[1].GetData(false); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[2].GetData(false); \
		FRigElementKeyCollection& CachedCollection = *(FRigElementKeyCollection*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedHierarchyHash = *(int32*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			PartialName, \
			TypeToSearch, \
			Items, \
			CachedCollection, \
			CachedHierarchyHash, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionNameSearchArray>();


#define FRigUnit_CollectionChildren_Execute() \
	void FRigUnit_CollectionChildren::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Parent, \
		const bool bIncludeParent, \
		const bool bRecursive, \
		const ERigElementType TypeToSearch, \
		FRigElementKeyCollection& Collection, \
		FRigElementKeyCollection& CachedCollection, \
		int32& CachedHierarchyHash, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_174_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionChildren_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Parent, \
		const bool bIncludeParent, \
		const bool bRecursive, \
		const ERigElementType TypeToSearch, \
		FRigElementKeyCollection& Collection, \
		FRigElementKeyCollection& CachedCollection, \
		int32& CachedHierarchyHash, \
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
		const ERigElementType TypeToSearch = *(ERigElementType*)RigVMMemoryHandles[3].GetData(false); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[4].GetData(false); \
		FRigElementKeyCollection& CachedCollection = *(FRigElementKeyCollection*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedHierarchyHash = *(int32*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Parent, \
			bIncludeParent, \
			bRecursive, \
			TypeToSearch, \
			Collection, \
			CachedCollection, \
			CachedHierarchyHash, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionChildren>();


#define FRigUnit_CollectionChildrenArray_Execute() \
	void FRigUnit_CollectionChildrenArray::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Parent, \
		const bool bIncludeParent, \
		const bool bRecursive, \
		const ERigElementType TypeToSearch, \
		TArray<FRigElementKey>& Items, \
		FRigElementKeyCollection& CachedCollection, \
		int32& CachedHierarchyHash, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_217_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionChildrenArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKey& Parent, \
		const bool bIncludeParent, \
		const bool bRecursive, \
		const ERigElementType TypeToSearch, \
		TArray<FRigElementKey>& Items, \
		FRigElementKeyCollection& CachedCollection, \
		int32& CachedHierarchyHash, \
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
		const ERigElementType TypeToSearch = *(ERigElementType*)RigVMMemoryHandles[3].GetData(false); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[4].GetData(false); \
		FRigElementKeyCollection& CachedCollection = *(FRigElementKeyCollection*)RigVMMemoryHandles[5].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedHierarchyHash = *(int32*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Parent, \
			bIncludeParent, \
			bRecursive, \
			TypeToSearch, \
			Items, \
			CachedCollection, \
			CachedHierarchyHash, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionChildrenArray>();


#define FRigUnit_CollectionReplaceItems_Execute() \
	void FRigUnit_CollectionReplaceItems::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const FName& Old, \
		const FName& New, \
		const bool RemoveInvalidItems, \
		const bool bAllowDuplicates, \
		FRigElementKeyCollection& Collection, \
		FRigElementKeyCollection& CachedCollection, \
		int32& CachedHierarchyHash, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_259_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItems_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Items, \
		const FName& Old, \
		const FName& New, \
		const bool RemoveInvalidItems, \
		const bool bAllowDuplicates, \
		FRigElementKeyCollection& Collection, \
		FRigElementKeyCollection& CachedCollection, \
		int32& CachedHierarchyHash, \
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
		const FName& Old = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const FName& New = *(FName*)RigVMMemoryHandles[2].GetData(false); \
		const bool RemoveInvalidItems = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		const bool bAllowDuplicates = *(bool*)RigVMMemoryHandles[4].GetData(false); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[5].GetData(false); \
		FRigElementKeyCollection& CachedCollection = *(FRigElementKeyCollection*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedHierarchyHash = *(int32*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Items, \
			Old, \
			New, \
			RemoveInvalidItems, \
			bAllowDuplicates, \
			Collection, \
			CachedCollection, \
			CachedHierarchyHash, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionReplaceItems>();


#define FRigUnit_CollectionReplaceItemsArray_Execute() \
	void FRigUnit_CollectionReplaceItemsArray::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FName& Old, \
		const FName& New, \
		const bool RemoveInvalidItems, \
		const bool bAllowDuplicates, \
		TArray<FRigElementKey>& Result, \
		FRigElementKeyCollection& CachedCollection, \
		int32& CachedHierarchyHash, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_303_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionReplaceItemsArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const FName& Old, \
		const FName& New, \
		const bool RemoveInvalidItems, \
		const bool bAllowDuplicates, \
		TArray<FRigElementKey>& Result, \
		FRigElementKeyCollection& CachedCollection, \
		int32& CachedHierarchyHash, \
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
		const FName& Old = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const FName& New = *(FName*)RigVMMemoryHandles[2].GetData(false); \
		const bool RemoveInvalidItems = *(bool*)RigVMMemoryHandles[3].GetData(false); \
		const bool bAllowDuplicates = *(bool*)RigVMMemoryHandles[4].GetData(false); \
		TArray<FRigElementKey>& Result = *(TArray<FRigElementKey>*)RigVMMemoryHandles[5].GetData(false); \
		FRigElementKeyCollection& CachedCollection = *(FRigElementKeyCollection*)RigVMMemoryHandles[6].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		int32& CachedHierarchyHash = *(int32*)RigVMMemoryHandles[7].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Items, \
			Old, \
			New, \
			RemoveInvalidItems, \
			bAllowDuplicates, \
			Result, \
			CachedCollection, \
			CachedHierarchyHash, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionReplaceItemsArray>();


#define FRigUnit_CollectionItems_Execute() \
	void FRigUnit_CollectionItems::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const bool bAllowDuplicates, \
		FRigElementKeyCollection& Collection, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_347_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionItems_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		const bool bAllowDuplicates, \
		FRigElementKeyCollection& Collection, \
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
		const bool bAllowDuplicates = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Items, \
			bAllowDuplicates, \
			Collection, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionItems>();


#define FRigUnit_CollectionGetItems_Execute() \
	void FRigUnit_CollectionGetItems::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		TArray<FRigElementKey>& Items, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_374_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionGetItems_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Collection, \
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
		const FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FRigElementKey>& Items = *(TArray<FRigElementKey>*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Collection, \
			Items, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionGetItems>();


#define FRigUnit_CollectionGetParentIndices_Execute() \
	void FRigUnit_CollectionGetParentIndices::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		TArray<int32>& ParentIndices, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_399_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndices_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		TArray<int32>& ParentIndices, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		TArray<int32>& ParentIndices = *(TArray<int32>*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Collection, \
			ParentIndices, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionGetParentIndices>();


#define FRigUnit_CollectionGetParentIndicesItemArray_Execute() \
	void FRigUnit_CollectionGetParentIndicesItemArray::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		TArray<int32>& ParentIndices, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_424_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionGetParentIndicesItemArray_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigElementKey>& Items, \
		TArray<int32>& ParentIndices, \
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
		TArray<int32>& ParentIndices = *(TArray<int32>*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Items, \
			ParentIndices, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionGetParentIndicesItemArray>();


#define FRigUnit_CollectionUnion_Execute() \
	void FRigUnit_CollectionUnion::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& A, \
		const FRigElementKeyCollection& B, \
		const bool bAllowDuplicates, \
		FRigElementKeyCollection& Collection, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_447_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionUnion_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& A, \
		const FRigElementKeyCollection& B, \
		const bool bAllowDuplicates, \
		FRigElementKeyCollection& Collection, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigElementKeyCollection& A = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKeyCollection& B = *(FRigElementKeyCollection*)RigVMMemoryHandles[1].GetData(false); \
		const bool bAllowDuplicates = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			A, \
			B, \
			bAllowDuplicates, \
			Collection, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionUnion>();


#define FRigUnit_CollectionIntersection_Execute() \
	void FRigUnit_CollectionIntersection::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& A, \
		const FRigElementKeyCollection& B, \
		FRigElementKeyCollection& Collection, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_477_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionIntersection_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& A, \
		const FRigElementKeyCollection& B, \
		FRigElementKeyCollection& Collection, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigElementKeyCollection& A = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKeyCollection& B = *(FRigElementKeyCollection*)RigVMMemoryHandles[1].GetData(false); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			A, \
			B, \
			Collection, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionIntersection>();


#define FRigUnit_CollectionDifference_Execute() \
	void FRigUnit_CollectionDifference::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& A, \
		const FRigElementKeyCollection& B, \
		FRigElementKeyCollection& Collection, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_503_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionDifference_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& A, \
		const FRigElementKeyCollection& B, \
		FRigElementKeyCollection& Collection, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigElementKeyCollection& A = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKeyCollection& B = *(FRigElementKeyCollection*)RigVMMemoryHandles[1].GetData(false); \
		FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			A, \
			B, \
			Collection, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionDifference>();


#define FRigUnit_CollectionReverse_Execute() \
	void FRigUnit_CollectionReverse::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		FRigElementKeyCollection& Reversed, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_528_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionReverse_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		FRigElementKeyCollection& Reversed, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		FRigElementKeyCollection& Reversed = *(FRigElementKeyCollection*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Collection, \
			Reversed, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionReverse>();


#define FRigUnit_CollectionCount_Execute() \
	void FRigUnit_CollectionCount::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		int32& Count, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_550_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionCount_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		int32& Count, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		int32& Count = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Collection, \
			Count, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionCount>();


#define FRigUnit_CollectionItemAtIndex_Execute() \
	void FRigUnit_CollectionItemAtIndex::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		const int32 Index, \
		FRigElementKey& Item, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_574_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionItemAtIndex_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		const int32 Index, \
		FRigElementKey& Item, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		const int32 Index = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Collection, \
			Index, \
			Item, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionItemAtIndex>();


#define FRigUnit_CollectionLoop_Execute() \
	void FRigUnit_CollectionLoop::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		FRigElementKey& Item, \
		int32& Index, \
		int32& Count, \
		float& Ratio, \
		bool& Continue, \
		FControlRigExecuteContext& Completed, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_602_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionLoop_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		FRigElementKey& Item, \
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
		const FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		int32& Index = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		int32& Count = *(int32*)RigVMMemoryHandles[3].GetData(false); \
		float& Ratio = *(float*)RigVMMemoryHandles[4].GetData(false); \
		bool& Continue = *(bool*)RigVMMemoryHandles[5].GetData(false); \
		FControlRigExecuteContext& Completed = *(FControlRigExecuteContext*)RigVMMemoryHandles[6].GetData(false); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[7].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Collection, \
			Item, \
			Index, \
			Count, \
			Ratio, \
			Continue, \
			Completed, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBaseMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionLoop>();


#define FRigUnit_CollectionAddItem_Execute() \
	void FRigUnit_CollectionAddItem::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		const FRigElementKey& Item, \
		FRigElementKeyCollection& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h_652_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_CollectionAddItem_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FRigElementKeyCollection& Collection, \
		const FRigElementKey& Item, \
		FRigElementKeyCollection& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FRigElementKeyCollection& Collection = *(FRigElementKeyCollection*)RigVMMemoryHandles[0].GetData(false); \
		const FRigElementKey& Item = *(FRigElementKey*)RigVMMemoryHandles[1].GetData(false); \
		FRigElementKeyCollection& Result = *(FRigElementKeyCollection*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Collection, \
			Item, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_CollectionBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_CollectionAddItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Collection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
