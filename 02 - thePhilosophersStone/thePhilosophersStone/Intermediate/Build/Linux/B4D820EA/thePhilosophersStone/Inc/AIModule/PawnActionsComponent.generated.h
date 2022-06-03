// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPawnAction;
class UObject;
class APawn;
#ifdef AIMODULE_PawnActionsComponent_generated_h
#error "PawnActionsComponent.generated.h already included, missing '#pragma once' in PawnActionsComponent.h"
#endif
#define AIMODULE_PawnActionsComponent_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPawnActionEvent_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FPawnActionEvent>();

#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPawnActionStack_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FPawnActionStack>();

#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_80_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_80_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execK2_ForceAbortAction); \
	DECLARE_FUNCTION(execK2_AbortAction); \
	DECLARE_FUNCTION(execK2_PushAction); \
	DECLARE_FUNCTION(execK2_PerformAction);


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execK2_ForceAbortAction); \
	DECLARE_FUNCTION(execK2_AbortAction); \
	DECLARE_FUNCTION(execK2_PushAction); \
	DECLARE_FUNCTION(execK2_PerformAction);


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPawnActionsComponent(); \
	friend struct Z_Construct_UClass_UPawnActionsComponent_Statics; \
public: \
	DECLARE_CLASS(UPawnActionsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UPawnActionsComponent)


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_80_INCLASS \
private: \
	static void StaticRegisterNativesUPawnActionsComponent(); \
	friend struct Z_Construct_UClass_UPawnActionsComponent_Statics; \
public: \
	DECLARE_CLASS(UPawnActionsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UPawnActionsComponent)


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_80_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnActionsComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnActionsComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnActionsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnActionsComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnActionsComponent(UPawnActionsComponent&&); \
	NO_API UPawnActionsComponent(const UPawnActionsComponent&); \
public:


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnActionsComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnActionsComponent(UPawnActionsComponent&&); \
	NO_API UPawnActionsComponent(const UPawnActionsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnActionsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnActionsComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnActionsComponent)


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_77_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_80_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_80_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_80_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_80_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_80_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_80_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_80_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PawnActionsComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UPawnActionsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
