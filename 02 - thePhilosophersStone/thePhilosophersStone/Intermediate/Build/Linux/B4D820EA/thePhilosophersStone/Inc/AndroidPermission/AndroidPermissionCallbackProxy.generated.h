// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANDROIDPERMISSION_AndroidPermissionCallbackProxy_generated_h
#error "AndroidPermissionCallbackProxy.generated.h already included, missing '#pragma once' in AndroidPermissionCallbackProxy.h"
#endif
#define ANDROIDPERMISSION_AndroidPermissionCallbackProxy_generated_h

#define FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_12_DELEGATE \
struct _Script_AndroidPermission_eventAndroidPermissionDynamicDelegate_Parms \
{ \
	TArray<FString> Permissions; \
	TArray<bool> GrantResults; \
}; \
static inline void FAndroidPermissionDynamicDelegate_DelegateWrapper(const FMulticastScriptDelegate& AndroidPermissionDynamicDelegate, TArray<FString> const& Permissions, TArray<bool> const& GrantResults) \
{ \
	_Script_AndroidPermission_eventAndroidPermissionDynamicDelegate_Parms Parms; \
	Parms.Permissions=Permissions; \
	Parms.GrantResults=GrantResults; \
	AndroidPermissionDynamicDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_18_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_18_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidPermissionCallbackProxy(); \
	friend struct Z_Construct_UClass_UAndroidPermissionCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UAndroidPermissionCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AndroidPermission"), NO_API) \
	DECLARE_SERIALIZER(UAndroidPermissionCallbackProxy)


#define FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAndroidPermissionCallbackProxy(); \
	friend struct Z_Construct_UClass_UAndroidPermissionCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UAndroidPermissionCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AndroidPermission"), NO_API) \
	DECLARE_SERIALIZER(UAndroidPermissionCallbackProxy)


#define FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidPermissionCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidPermissionCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidPermissionCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidPermissionCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAndroidPermissionCallbackProxy(UAndroidPermissionCallbackProxy&&); \
	NO_API UAndroidPermissionCallbackProxy(const UAndroidPermissionCallbackProxy&); \
public:


#define FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidPermissionCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAndroidPermissionCallbackProxy(UAndroidPermissionCallbackProxy&&); \
	NO_API UAndroidPermissionCallbackProxy(const UAndroidPermissionCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidPermissionCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidPermissionCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidPermissionCallbackProxy)


#define FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_18_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_18_INCLASS \
	FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANDROIDPERMISSION_API UClass* StaticClass<class UAndroidPermissionCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AndroidPermission_Source_AndroidPermission_Classes_AndroidPermissionCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
