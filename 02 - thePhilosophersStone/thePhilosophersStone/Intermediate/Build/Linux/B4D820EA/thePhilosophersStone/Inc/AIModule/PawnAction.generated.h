// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UPawnAction;
#ifdef AIMODULE_PawnAction_generated_h
#error "PawnAction.generated.h already included, missing '#pragma once' in PawnAction.h"
#endif
#define AIMODULE_PawnAction_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFinish); \
	DECLARE_FUNCTION(execCreateActionInstance); \
	DECLARE_FUNCTION(execGetActionPriority);


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFinish); \
	DECLARE_FUNCTION(execCreateActionInstance); \
	DECLARE_FUNCTION(execGetActionPriority);


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPawnAction(); \
	friend struct Z_Construct_UClass_UPawnAction_Statics; \
public: \
	DECLARE_CLASS(UPawnAction, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UPawnAction)


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUPawnAction(); \
	friend struct Z_Construct_UClass_UPawnAction_Statics; \
public: \
	DECLARE_CLASS(UPawnAction, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UPawnAction)


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnAction(UPawnAction&&); \
	NO_API UPawnAction(const UPawnAction&); \
public:


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnAction(UPawnAction&&); \
	NO_API UPawnAction(const UPawnAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnAction); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnAction)


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_46_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_49_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PawnAction."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UPawnAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h


#define FOREACH_ENUM_EPAWNSUBACTIONTRIGGERINGPOLICY(op) \
	op(EPawnSubActionTriggeringPolicy::CopyBeforeTriggering) \
	op(EPawnSubActionTriggeringPolicy::ReuseInstances) 
#define FOREACH_ENUM_EPAWNACTIONFAILHANDLING(op) \
	op(EPawnActionFailHandling::RequireSuccess) \
	op(EPawnActionFailHandling::IgnoreFailure) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
