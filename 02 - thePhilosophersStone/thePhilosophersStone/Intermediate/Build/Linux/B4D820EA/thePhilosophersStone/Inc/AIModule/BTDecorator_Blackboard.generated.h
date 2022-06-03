// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTDecorator_Blackboard_generated_h
#error "BTDecorator_Blackboard.generated.h already included, missing '#pragma once' in BTDecorator_Blackboard.h"
#endif
#define AIMODULE_BTDecorator_Blackboard_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_37_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_37_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_37_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTDecorator_Blackboard(); \
	friend struct Z_Construct_UClass_UBTDecorator_Blackboard_Statics; \
public: \
	DECLARE_CLASS(UBTDecorator_Blackboard, UBTDecorator_BlackboardBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTDecorator_Blackboard)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUBTDecorator_Blackboard(); \
	friend struct Z_Construct_UClass_UBTDecorator_Blackboard_Statics; \
public: \
	DECLARE_CLASS(UBTDecorator_Blackboard, UBTDecorator_BlackboardBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTDecorator_Blackboard)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTDecorator_Blackboard(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTDecorator_Blackboard) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTDecorator_Blackboard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTDecorator_Blackboard); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTDecorator_Blackboard(UBTDecorator_Blackboard&&); \
	NO_API UBTDecorator_Blackboard(const UBTDecorator_Blackboard&); \
public:


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTDecorator_Blackboard(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTDecorator_Blackboard(UBTDecorator_Blackboard&&); \
	NO_API UBTDecorator_Blackboard(const UBTDecorator_Blackboard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTDecorator_Blackboard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTDecorator_Blackboard); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTDecorator_Blackboard)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_34_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_37_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_37_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_37_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_37_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h_37_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BTDecorator_Blackboard."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTDecorator_Blackboard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_Blackboard_h


#define FOREACH_ENUM_EBTBLACKBOARDRESTART(op) \
	op(EBTBlackboardRestart::ValueChange) \
	op(EBTBlackboardRestart::ResultChange) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
