// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FScriptTypedElementListProxy;
class UWorld;
struct FScriptTypedElementHandle;
class UTypedElementSelectionSet;
struct FTypedElementDeletionOptions;
#ifdef ENGINE_TypedElementCommonActions_generated_h
#error "TypedElementCommonActions.generated.h already included, missing '#pragma once' in TypedElementCommonActions.h"
#endif
#define ENGINE_TypedElementCommonActions_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_70_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_70_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDuplicateNormalizedElements); \
	DECLARE_FUNCTION(execK2_DuplicateSelectedElements); \
	DECLARE_FUNCTION(execDeleteNormalizedElements); \
	DECLARE_FUNCTION(execDeleteSelectedElements);


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDuplicateNormalizedElements); \
	DECLARE_FUNCTION(execK2_DuplicateSelectedElements); \
	DECLARE_FUNCTION(execDeleteNormalizedElements); \
	DECLARE_FUNCTION(execDeleteSelectedElements);


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTypedElementCommonActions(); \
	friend struct Z_Construct_UClass_UTypedElementCommonActions_Statics; \
public: \
	DECLARE_CLASS(UTypedElementCommonActions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UTypedElementCommonActions)


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_70_INCLASS \
private: \
	static void StaticRegisterNativesUTypedElementCommonActions(); \
	friend struct Z_Construct_UClass_UTypedElementCommonActions_Statics; \
public: \
	DECLARE_CLASS(UTypedElementCommonActions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UTypedElementCommonActions)


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_70_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTypedElementCommonActions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypedElementCommonActions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTypedElementCommonActions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypedElementCommonActions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTypedElementCommonActions(UTypedElementCommonActions&&); \
	NO_API UTypedElementCommonActions(const UTypedElementCommonActions&); \
public:


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTypedElementCommonActions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTypedElementCommonActions(UTypedElementCommonActions&&); \
	NO_API UTypedElementCommonActions(const UTypedElementCommonActions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTypedElementCommonActions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypedElementCommonActions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypedElementCommonActions)


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_67_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_70_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_70_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_70_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_70_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_70_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_70_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_70_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTypedElementCommonActions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
