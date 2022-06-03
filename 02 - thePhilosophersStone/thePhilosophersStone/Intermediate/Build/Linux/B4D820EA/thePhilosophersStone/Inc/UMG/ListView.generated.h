// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UUserWidget;
class AActor;
#ifdef UMG_ListView_generated_h
#error "ListView.generated.h already included, missing '#pragma once' in ListView.h"
#endif
#define UMG_ListView_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_10_DELEGATE \
struct _Script_UMG_eventSimpleListItemEventDynamic_Parms \
{ \
	UObject* Item; \
}; \
static inline void FSimpleListItemEventDynamic_DelegateWrapper(const FMulticastScriptDelegate& SimpleListItemEventDynamic, UObject* Item) \
{ \
	_Script_UMG_eventSimpleListItemEventDynamic_Parms Parms; \
	Parms.Item=Item; \
	SimpleListItemEventDynamic.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_11_DELEGATE \
struct _Script_UMG_eventOnListEntryInitializedDynamic_Parms \
{ \
	UObject* Item; \
	UUserWidget* Widget; \
}; \
static inline void FOnListEntryInitializedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListEntryInitializedDynamic, UObject* Item, UUserWidget* Widget) \
{ \
	_Script_UMG_eventOnListEntryInitializedDynamic_Parms Parms; \
	Parms.Item=Item; \
	Parms.Widget=Widget; \
	OnListEntryInitializedDynamic.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_12_DELEGATE \
struct _Script_UMG_eventOnListItemSelectionChangedDynamic_Parms \
{ \
	UObject* Item; \
	bool bIsSelected; \
}; \
static inline void FOnListItemSelectionChangedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListItemSelectionChangedDynamic, UObject* Item, bool bIsSelected) \
{ \
	_Script_UMG_eventOnListItemSelectionChangedDynamic_Parms Parms; \
	Parms.Item=Item; \
	Parms.bIsSelected=bIsSelected ? true : false; \
	OnListItemSelectionChangedDynamic.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_13_DELEGATE \
struct _Script_UMG_eventOnItemIsHoveredChangedDynamic_Parms \
{ \
	UObject* Item; \
	bool bIsHovered; \
}; \
static inline void FOnItemIsHoveredChangedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnItemIsHoveredChangedDynamic, UObject* Item, bool bIsHovered) \
{ \
	_Script_UMG_eventOnItemIsHoveredChangedDynamic_Parms Parms; \
	Parms.Item=Item; \
	Parms.bIsHovered=bIsHovered ? true : false; \
	OnItemIsHoveredChangedDynamic.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_14_DELEGATE \
struct _Script_UMG_eventOnListItemScrolledIntoViewDynamic_Parms \
{ \
	UObject* Item; \
	UUserWidget* Widget; \
}; \
static inline void FOnListItemScrolledIntoViewDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListItemScrolledIntoViewDynamic, UObject* Item, UUserWidget* Widget) \
{ \
	_Script_UMG_eventOnListItemScrolledIntoViewDynamic_Parms Parms; \
	Parms.Item=Item; \
	Parms.Widget=Widget; \
	OnListItemScrolledIntoViewDynamic.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_28_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_GetSelectedItem); \
	DECLARE_FUNCTION(execBP_SetListItems); \
	DECLARE_FUNCTION(execBP_CancelScrollIntoView); \
	DECLARE_FUNCTION(execBP_ScrollItemIntoView); \
	DECLARE_FUNCTION(execBP_NavigateToItem); \
	DECLARE_FUNCTION(execBP_IsItemVisible); \
	DECLARE_FUNCTION(execBP_GetSelectedItems); \
	DECLARE_FUNCTION(execBP_GetNumItemsSelected); \
	DECLARE_FUNCTION(execBP_ClearSelection); \
	DECLARE_FUNCTION(execBP_SetItemSelection); \
	DECLARE_FUNCTION(execBP_SetSelectedItem); \
	DECLARE_FUNCTION(execOnListItemOuterEndPlayed); \
	DECLARE_FUNCTION(execOnListItemEndPlayed); \
	DECLARE_FUNCTION(execNavigateToIndex); \
	DECLARE_FUNCTION(execSetSelectedIndex); \
	DECLARE_FUNCTION(execScrollIndexIntoView); \
	DECLARE_FUNCTION(execIsRefreshPending); \
	DECLARE_FUNCTION(execSetSelectionMode); \
	DECLARE_FUNCTION(execClearListItems); \
	DECLARE_FUNCTION(execGetIndexForItem); \
	DECLARE_FUNCTION(execGetNumItems); \
	DECLARE_FUNCTION(execGetItemAt); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execAddItem); \
	DECLARE_FUNCTION(execGetListItems);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_GetSelectedItem); \
	DECLARE_FUNCTION(execBP_SetListItems); \
	DECLARE_FUNCTION(execBP_CancelScrollIntoView); \
	DECLARE_FUNCTION(execBP_ScrollItemIntoView); \
	DECLARE_FUNCTION(execBP_NavigateToItem); \
	DECLARE_FUNCTION(execBP_IsItemVisible); \
	DECLARE_FUNCTION(execBP_GetSelectedItems); \
	DECLARE_FUNCTION(execBP_GetNumItemsSelected); \
	DECLARE_FUNCTION(execBP_ClearSelection); \
	DECLARE_FUNCTION(execBP_SetItemSelection); \
	DECLARE_FUNCTION(execBP_SetSelectedItem); \
	DECLARE_FUNCTION(execOnListItemOuterEndPlayed); \
	DECLARE_FUNCTION(execOnListItemEndPlayed); \
	DECLARE_FUNCTION(execNavigateToIndex); \
	DECLARE_FUNCTION(execSetSelectedIndex); \
	DECLARE_FUNCTION(execScrollIndexIntoView); \
	DECLARE_FUNCTION(execIsRefreshPending); \
	DECLARE_FUNCTION(execSetSelectionMode); \
	DECLARE_FUNCTION(execClearListItems); \
	DECLARE_FUNCTION(execGetIndexForItem); \
	DECLARE_FUNCTION(execGetNumItems); \
	DECLARE_FUNCTION(execGetItemAt); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execAddItem); \
	DECLARE_FUNCTION(execGetListItems);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUListView(); \
	friend struct Z_Construct_UClass_UListView_Statics; \
public: \
	DECLARE_CLASS(UListView, UListViewBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UListView)


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUListView(); \
	friend struct Z_Construct_UClass_UListView_Statics; \
public: \
	DECLARE_CLASS(UListView, UListViewBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UListView)


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UListView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UListView) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UListView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UListView); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UListView(UListView&&); \
	NO_API UListView(const UListView&); \
public:


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UListView(UListView&&); \
	NO_API UListView(const UListView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UListView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UListView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UListView)


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_25_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_28_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_28_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_28_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_28_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UListView>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
