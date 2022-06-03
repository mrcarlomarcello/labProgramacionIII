// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FTextBlockStyle;
#ifdef UMG_MultiLineEditableTextBox_generated_h
#error "MultiLineEditableTextBox.generated.h already included, missing '#pragma once' in MultiLineEditableTextBox.h"
#endif
#define UMG_MultiLineEditableTextBox_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_27_DELEGATE \
struct MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxChangedEvent_Parms \
{ \
	FText Text; \
}; \
static inline void FOnMultiLineEditableTextBoxChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMultiLineEditableTextBoxChangedEvent, FText const& Text) \
{ \
	MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxChangedEvent_Parms Parms; \
	Parms.Text=Text; \
	OnMultiLineEditableTextBoxChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_28_DELEGATE \
struct MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxCommittedEvent_Parms \
{ \
	FText Text; \
	TEnumAsByte<ETextCommit::Type> CommitMethod; \
}; \
static inline void FOnMultiLineEditableTextBoxCommittedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMultiLineEditableTextBoxCommittedEvent, FText const& Text, ETextCommit::Type CommitMethod) \
{ \
	MultiLineEditableTextBox_eventOnMultiLineEditableTextBoxCommittedEvent_Parms Parms; \
	Parms.Text=Text; \
	Parms.CommitMethod=CommitMethod; \
	OnMultiLineEditableTextBoxCommittedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetForegroundColor); \
	DECLARE_FUNCTION(execSetTextStyle); \
	DECLARE_FUNCTION(execSetIsReadOnly); \
	DECLARE_FUNCTION(execSetError); \
	DECLARE_FUNCTION(execSetHintText); \
	DECLARE_FUNCTION(execGetHintText); \
	DECLARE_FUNCTION(execSetText); \
	DECLARE_FUNCTION(execGetText);


#define FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetForegroundColor); \
	DECLARE_FUNCTION(execSetTextStyle); \
	DECLARE_FUNCTION(execSetIsReadOnly); \
	DECLARE_FUNCTION(execSetError); \
	DECLARE_FUNCTION(execSetHintText); \
	DECLARE_FUNCTION(execGetHintText); \
	DECLARE_FUNCTION(execSetText); \
	DECLARE_FUNCTION(execGetText);


#define FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiLineEditableTextBox(); \
	friend struct Z_Construct_UClass_UMultiLineEditableTextBox_Statics; \
public: \
	DECLARE_CLASS(UMultiLineEditableTextBox, UTextLayoutWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UMultiLineEditableTextBox)


#define FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUMultiLineEditableTextBox(); \
	friend struct Z_Construct_UClass_UMultiLineEditableTextBox_Statics; \
public: \
	DECLARE_CLASS(UMultiLineEditableTextBox, UTextLayoutWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UMultiLineEditableTextBox)


#define FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiLineEditableTextBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiLineEditableTextBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiLineEditableTextBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiLineEditableTextBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiLineEditableTextBox(UMultiLineEditableTextBox&&); \
	NO_API UMultiLineEditableTextBox(const UMultiLineEditableTextBox&); \
public:


#define FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiLineEditableTextBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiLineEditableTextBox(UMultiLineEditableTextBox&&); \
	NO_API UMultiLineEditableTextBox(const UMultiLineEditableTextBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiLineEditableTextBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiLineEditableTextBox); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiLineEditableTextBox)


#define FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_20_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MultiLineEditableTextBox."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UMultiLineEditableTextBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_MultiLineEditableTextBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
