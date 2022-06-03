// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECheckBoxState : uint8;
#ifdef UMG_CheckBox_generated_h
#error "CheckBox.generated.h already included, missing '#pragma once' in CheckBox.h"
#endif
#define UMG_CheckBox_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_19_DELEGATE \
struct _Script_UMG_eventOnCheckBoxComponentStateChanged_Parms \
{ \
	bool bIsChecked; \
}; \
static inline void FOnCheckBoxComponentStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCheckBoxComponentStateChanged, bool bIsChecked) \
{ \
	_Script_UMG_eventOnCheckBoxComponentStateChanged_Parms Parms; \
	Parms.bIsChecked=bIsChecked ? true : false; \
	OnCheckBoxComponentStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPressMethod); \
	DECLARE_FUNCTION(execSetTouchMethod); \
	DECLARE_FUNCTION(execSetClickMethod); \
	DECLARE_FUNCTION(execSetCheckedState); \
	DECLARE_FUNCTION(execSetIsChecked); \
	DECLARE_FUNCTION(execGetCheckedState); \
	DECLARE_FUNCTION(execIsChecked); \
	DECLARE_FUNCTION(execIsPressed);


#define FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPressMethod); \
	DECLARE_FUNCTION(execSetTouchMethod); \
	DECLARE_FUNCTION(execSetClickMethod); \
	DECLARE_FUNCTION(execSetCheckedState); \
	DECLARE_FUNCTION(execSetIsChecked); \
	DECLARE_FUNCTION(execGetCheckedState); \
	DECLARE_FUNCTION(execIsChecked); \
	DECLARE_FUNCTION(execIsPressed);


#define FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCheckBox(); \
	friend struct Z_Construct_UClass_UCheckBox_Statics; \
public: \
	DECLARE_CLASS(UCheckBox, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UCheckBox)


#define FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUCheckBox(); \
	friend struct Z_Construct_UClass_UCheckBox_Statics; \
public: \
	DECLARE_CLASS(UCheckBox, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UCheckBox)


#define FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCheckBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheckBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheckBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheckBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCheckBox(UCheckBox&&); \
	NO_API UCheckBox(const UCheckBox&); \
public:


#define FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCheckBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCheckBox(UCheckBox&&); \
	NO_API UCheckBox(const UCheckBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheckBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheckBox); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheckBox)


#define FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_29_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CheckBox."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UCheckBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
