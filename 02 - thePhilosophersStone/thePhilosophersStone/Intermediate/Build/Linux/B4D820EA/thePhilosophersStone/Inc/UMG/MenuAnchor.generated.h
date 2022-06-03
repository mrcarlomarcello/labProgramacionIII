// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef UMG_MenuAnchor_generated_h
#error "MenuAnchor.generated.h already included, missing '#pragma once' in MenuAnchor.h"
#endif
#define UMG_MenuAnchor_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_14_DELEGATE \
struct _Script_UMG_eventOnMenuOpenChangedEvent_Parms \
{ \
	bool bIsOpen; \
}; \
static inline void FOnMenuOpenChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMenuOpenChangedEvent, bool bIsOpen) \
{ \
	_Script_UMG_eventOnMenuOpenChangedEvent_Parms Parms; \
	Parms.bIsOpen=bIsOpen ? true : false; \
	OnMenuOpenChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_29_DELEGATE \
struct MenuAnchor_eventGetUserWidget_Parms \
{ \
	UUserWidget* ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	MenuAnchor_eventGetUserWidget_Parms() \
		: ReturnValue(NULL) \
	{ \
	} \
}; \
static inline UUserWidget* FGetUserWidget_DelegateWrapper(const FScriptDelegate& GetUserWidget) \
{ \
	MenuAnchor_eventGetUserWidget_Parms Parms; \
	GetUserWidget.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_25_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasOpenSubMenus); \
	DECLARE_FUNCTION(execGetMenuPosition); \
	DECLARE_FUNCTION(execShouldOpenDueToClick); \
	DECLARE_FUNCTION(execIsOpen); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execOpen); \
	DECLARE_FUNCTION(execToggleOpen); \
	DECLARE_FUNCTION(execFitInWindow); \
	DECLARE_FUNCTION(execSetPlacement);


#define FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasOpenSubMenus); \
	DECLARE_FUNCTION(execGetMenuPosition); \
	DECLARE_FUNCTION(execShouldOpenDueToClick); \
	DECLARE_FUNCTION(execIsOpen); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execOpen); \
	DECLARE_FUNCTION(execToggleOpen); \
	DECLARE_FUNCTION(execFitInWindow); \
	DECLARE_FUNCTION(execSetPlacement);


#define FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMenuAnchor(); \
	friend struct Z_Construct_UClass_UMenuAnchor_Statics; \
public: \
	DECLARE_CLASS(UMenuAnchor, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UMenuAnchor)


#define FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUMenuAnchor(); \
	friend struct Z_Construct_UClass_UMenuAnchor_Statics; \
public: \
	DECLARE_CLASS(UMenuAnchor, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UMenuAnchor)


#define FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMenuAnchor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuAnchor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMenuAnchor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuAnchor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMenuAnchor(UMenuAnchor&&); \
	NO_API UMenuAnchor(const UMenuAnchor&); \
public:


#define FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMenuAnchor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMenuAnchor(UMenuAnchor&&); \
	NO_API UMenuAnchor(const UMenuAnchor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMenuAnchor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuAnchor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuAnchor)


#define FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_22_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_25_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_25_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_25_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_25_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MenuAnchor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UMenuAnchor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_MenuAnchor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
