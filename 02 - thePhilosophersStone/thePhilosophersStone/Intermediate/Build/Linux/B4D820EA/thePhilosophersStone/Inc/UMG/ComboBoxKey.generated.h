// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
#ifdef UMG_ComboBoxKey_generated_h
#error "ComboBoxKey.generated.h already included, missing '#pragma once' in ComboBoxKey.h"
#endif
#define UMG_ComboBoxKey_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_25_DELEGATE \
struct ComboBoxKey_eventOnSelectionChangedEvent_Parms \
{ \
	FName SelectedItem; \
	TEnumAsByte<ESelectInfo::Type> SelectionType; \
}; \
static inline void FOnSelectionChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnSelectionChangedEvent, FName SelectedItem, ESelectInfo::Type SelectionType) \
{ \
	ComboBoxKey_eventOnSelectionChangedEvent_Parms Parms; \
	Parms.SelectedItem=SelectedItem; \
	Parms.SelectionType=SelectionType; \
	OnSelectionChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_26_DELEGATE \
static inline void FOnOpeningEvent_DelegateWrapper(const FMulticastScriptDelegate& OnOpeningEvent) \
{ \
	OnOpeningEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_27_DELEGATE \
struct ComboBoxKey_eventGenerateWidgetEvent_Parms \
{ \
	FName Item; \
	UWidget* ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	ComboBoxKey_eventGenerateWidgetEvent_Parms() \
		: ReturnValue(NULL) \
	{ \
	} \
}; \
static inline UWidget* FGenerateWidgetEvent_DelegateWrapper(const FScriptDelegate& GenerateWidgetEvent, FName Item) \
{ \
	ComboBoxKey_eventGenerateWidgetEvent_Parms Parms; \
	Parms.Item=Item; \
	GenerateWidgetEvent.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsOpen); \
	DECLARE_FUNCTION(execGetSelectedOption); \
	DECLARE_FUNCTION(execSetSelectedOption); \
	DECLARE_FUNCTION(execClearSelection); \
	DECLARE_FUNCTION(execClearOptions); \
	DECLARE_FUNCTION(execRemoveOption); \
	DECLARE_FUNCTION(execAddOption);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsOpen); \
	DECLARE_FUNCTION(execGetSelectedOption); \
	DECLARE_FUNCTION(execSetSelectedOption); \
	DECLARE_FUNCTION(execClearSelection); \
	DECLARE_FUNCTION(execClearOptions); \
	DECLARE_FUNCTION(execRemoveOption); \
	DECLARE_FUNCTION(execAddOption);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComboBoxKey(); \
	friend struct Z_Construct_UClass_UComboBoxKey_Statics; \
public: \
	DECLARE_CLASS(UComboBoxKey, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UComboBoxKey)


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUComboBoxKey(); \
	friend struct Z_Construct_UClass_UComboBoxKey_Statics; \
public: \
	DECLARE_CLASS(UComboBoxKey, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UComboBoxKey)


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComboBoxKey(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComboBoxKey) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComboBoxKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboBoxKey); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComboBoxKey(UComboBoxKey&&); \
	NO_API UComboBoxKey(const UComboBoxKey&); \
public:


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComboBoxKey(UComboBoxKey&&); \
	NO_API UComboBoxKey(const UComboBoxKey&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComboBoxKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComboBoxKey); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UComboBoxKey)


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_17_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UComboBoxKey>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_ComboBoxKey_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
