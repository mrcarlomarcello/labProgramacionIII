// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimStateMachineTypes_generated_h
#error "AnimStateMachineTypes.generated.h already included, missing '#pragma once' in AnimStateMachineTypes.h"
#endif
#define ENGINE_AnimStateMachineTypes_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimationTransitionRule>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationStateBase_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimationStateBase>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimationStateBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimationState>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_118_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimationStateBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimationTransitionBetweenStates>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_179_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBakedStateExitTransition>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_224_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBakedAnimationState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBakedAnimationState>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_280_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBakedAnimationStateMachine>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_329_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_329_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_329_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_329_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimStateMachineTypes(); \
	friend struct Z_Construct_UClass_UAnimStateMachineTypes_Statics; \
public: \
	DECLARE_CLASS(UAnimStateMachineTypes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimStateMachineTypes)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_329_INCLASS \
private: \
	static void StaticRegisterNativesUAnimStateMachineTypes(); \
	friend struct Z_Construct_UClass_UAnimStateMachineTypes_Statics; \
public: \
	DECLARE_CLASS(UAnimStateMachineTypes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimStateMachineTypes)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_329_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimStateMachineTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimStateMachineTypes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimStateMachineTypes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimStateMachineTypes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimStateMachineTypes(UAnimStateMachineTypes&&); \
	NO_API UAnimStateMachineTypes(const UAnimStateMachineTypes&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_329_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimStateMachineTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimStateMachineTypes(UAnimStateMachineTypes&&); \
	NO_API UAnimStateMachineTypes(const UAnimStateMachineTypes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimStateMachineTypes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimStateMachineTypes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimStateMachineTypes)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_326_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_329_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_329_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_329_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_329_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_329_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_329_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_329_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_329_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_329_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_329_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimStateMachineTypes."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimStateMachineTypes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h


#define FOREACH_ENUM_ETRANSITIONBLENDMODE(op) \
	op(ETransitionBlendMode::TBM_Linear) \
	op(ETransitionBlendMode::TBM_Cubic) 
#define FOREACH_ENUM_ETRANSITIONLOGICTYPE(op) \
	op(ETransitionLogicType::TLT_StandardBlend) \
	op(ETransitionLogicType::TLT_Inertialization) \
	op(ETransitionLogicType::TLT_Custom) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
