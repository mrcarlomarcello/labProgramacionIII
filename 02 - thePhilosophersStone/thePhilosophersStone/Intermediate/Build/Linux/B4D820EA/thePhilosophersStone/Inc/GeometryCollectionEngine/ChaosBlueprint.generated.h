// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FChaosCollisionEventData;
struct FChaosBreakingEventData;
struct FChaosTrailingEventData;
struct FChaosRemovalEventData;
enum class EChaosRemovalSortMethod : uint8;
enum class EChaosTrailingSortMethod : uint8;
enum class EChaosBreakingSortMethod : uint8;
enum class EChaosCollisionSortMethod : uint8;
struct FChaosRemovalEventRequestSettings;
struct FChaosTrailingEventRequestSettings;
struct FChaosBreakingEventRequestSettings;
struct FChaosCollisionEventRequestSettings;
class AGeometryCollectionActor;
class AChaosSolverActor;
#ifdef GEOMETRYCOLLECTIONENGINE_ChaosBlueprint_generated_h
#error "ChaosBlueprint.generated.h already included, missing '#pragma once' in ChaosBlueprint.h"
#endif
#define GEOMETRYCOLLECTIONENGINE_ChaosBlueprint_generated_h

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_23_DELEGATE \
struct _Script_GeometryCollectionEngine_eventOnChaosCollisionEvents_Parms \
{ \
	TArray<FChaosCollisionEventData> CollisionEvents; \
}; \
static inline void FOnChaosCollisionEvents_DelegateWrapper(const FMulticastScriptDelegate& OnChaosCollisionEvents, TArray<FChaosCollisionEventData> const& CollisionEvents) \
{ \
	_Script_GeometryCollectionEngine_eventOnChaosCollisionEvents_Parms Parms; \
	Parms.CollisionEvents=CollisionEvents; \
	OnChaosCollisionEvents.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_28_DELEGATE \
struct _Script_GeometryCollectionEngine_eventOnChaosBreakingEvents_Parms \
{ \
	TArray<FChaosBreakingEventData> BreakingEvents; \
}; \
static inline void FOnChaosBreakingEvents_DelegateWrapper(const FMulticastScriptDelegate& OnChaosBreakingEvents, TArray<FChaosBreakingEventData> const& BreakingEvents) \
{ \
	_Script_GeometryCollectionEngine_eventOnChaosBreakingEvents_Parms Parms; \
	Parms.BreakingEvents=BreakingEvents; \
	OnChaosBreakingEvents.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_33_DELEGATE \
struct _Script_GeometryCollectionEngine_eventOnChaosTrailingEvents_Parms \
{ \
	TArray<FChaosTrailingEventData> TrailingEvents; \
}; \
static inline void FOnChaosTrailingEvents_DelegateWrapper(const FMulticastScriptDelegate& OnChaosTrailingEvents, TArray<FChaosTrailingEventData> const& TrailingEvents) \
{ \
	_Script_GeometryCollectionEngine_eventOnChaosTrailingEvents_Parms Parms; \
	Parms.TrailingEvents=TrailingEvents; \
	OnChaosTrailingEvents.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_38_DELEGATE \
struct _Script_GeometryCollectionEngine_eventOnChaosRemovalEvents_Parms \
{ \
	TArray<FChaosRemovalEventData> RemovalEvents; \
}; \
static inline void FOnChaosRemovalEvents_DelegateWrapper(const FMulticastScriptDelegate& OnChaosRemovalEvents, TArray<FChaosRemovalEventData> const& RemovalEvents) \
{ \
	_Script_GeometryCollectionEngine_eventOnChaosRemovalEvents_Parms Parms; \
	Parms.RemovalEvents=RemovalEvents; \
	OnChaosRemovalEvents.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_45_SPARSE_DATA
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSortRemovalEvents); \
	DECLARE_FUNCTION(execSortTrailingEvents); \
	DECLARE_FUNCTION(execSortBreakingEvents); \
	DECLARE_FUNCTION(execSortCollisionEvents); \
	DECLARE_FUNCTION(execIsEventListening); \
	DECLARE_FUNCTION(execSetRemovalEventEnabled); \
	DECLARE_FUNCTION(execSetTrailingEventEnabled); \
	DECLARE_FUNCTION(execSetBreakingEventEnabled); \
	DECLARE_FUNCTION(execSetCollisionEventEnabled); \
	DECLARE_FUNCTION(execSetRemovalEventRequestSettings); \
	DECLARE_FUNCTION(execSetTrailingEventRequestSettings); \
	DECLARE_FUNCTION(execSetBreakingEventRequestSettings); \
	DECLARE_FUNCTION(execSetCollisionEventRequestSettings); \
	DECLARE_FUNCTION(execRemoveGeometryCollectionActor); \
	DECLARE_FUNCTION(execAddGeometryCollectionActor); \
	DECLARE_FUNCTION(execRemoveChaosSolverActor); \
	DECLARE_FUNCTION(execAddChaosSolverActor);


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSortRemovalEvents); \
	DECLARE_FUNCTION(execSortTrailingEvents); \
	DECLARE_FUNCTION(execSortBreakingEvents); \
	DECLARE_FUNCTION(execSortCollisionEvents); \
	DECLARE_FUNCTION(execIsEventListening); \
	DECLARE_FUNCTION(execSetRemovalEventEnabled); \
	DECLARE_FUNCTION(execSetTrailingEventEnabled); \
	DECLARE_FUNCTION(execSetBreakingEventEnabled); \
	DECLARE_FUNCTION(execSetCollisionEventEnabled); \
	DECLARE_FUNCTION(execSetRemovalEventRequestSettings); \
	DECLARE_FUNCTION(execSetTrailingEventRequestSettings); \
	DECLARE_FUNCTION(execSetBreakingEventRequestSettings); \
	DECLARE_FUNCTION(execSetCollisionEventRequestSettings); \
	DECLARE_FUNCTION(execRemoveGeometryCollectionActor); \
	DECLARE_FUNCTION(execAddGeometryCollectionActor); \
	DECLARE_FUNCTION(execRemoveChaosSolverActor); \
	DECLARE_FUNCTION(execAddChaosSolverActor);


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosDestructionListener(); \
	friend struct Z_Construct_UClass_UChaosDestructionListener_Statics; \
public: \
	DECLARE_CLASS(UChaosDestructionListener, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCollectionEngine"), NO_API) \
	DECLARE_SERIALIZER(UChaosDestructionListener)


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUChaosDestructionListener(); \
	friend struct Z_Construct_UClass_UChaosDestructionListener_Statics; \
public: \
	DECLARE_CLASS(UChaosDestructionListener, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCollectionEngine"), NO_API) \
	DECLARE_SERIALIZER(UChaosDestructionListener)


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosDestructionListener(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosDestructionListener) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosDestructionListener); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosDestructionListener); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaosDestructionListener(UChaosDestructionListener&&); \
	NO_API UChaosDestructionListener(const UChaosDestructionListener&); \
public:


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosDestructionListener(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaosDestructionListener(UChaosDestructionListener&&); \
	NO_API UChaosDestructionListener(const UChaosDestructionListener&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosDestructionListener); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosDestructionListener); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosDestructionListener)


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_42_PROLOG
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_45_SPARSE_DATA \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_45_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_45_INCLASS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_45_SPARSE_DATA \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_45_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ChaosDestructionListener."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<class UChaosDestructionListener>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
