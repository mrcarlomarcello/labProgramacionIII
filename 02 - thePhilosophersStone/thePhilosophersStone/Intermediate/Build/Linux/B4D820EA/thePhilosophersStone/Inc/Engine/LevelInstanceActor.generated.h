// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LevelInstanceActor_generated_h
#error "LevelInstanceActor.generated.h already included, missing '#pragma once' in LevelInstanceActor.h"
#endif
#define ENGINE_LevelInstanceActor_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_28_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_28_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_28_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ALevelInstance, NO_API)


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALevelInstance(); \
	friend struct Z_Construct_UClass_ALevelInstance_Statics; \
public: \
	DECLARE_CLASS(ALevelInstance, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ALevelInstance) \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_28_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_28_INCLASS \
private: \
	static void StaticRegisterNativesALevelInstance(); \
	friend struct Z_Construct_UClass_ALevelInstance_Statics; \
public: \
	DECLARE_CLASS(ALevelInstance, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ALevelInstance) \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_28_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALevelInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALevelInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALevelInstance(ALevelInstance&&); \
	NO_API ALevelInstance(const ALevelInstance&); \
public:


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALevelInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALevelInstance(ALevelInstance&&); \
	NO_API ALevelInstance(const ALevelInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALevelInstance)


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_25_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_28_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_28_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_28_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_28_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LevelInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ALevelInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h


#define FOREACH_ENUM_ELEVELINSTANCERUNTIMEBEHAVIOR(op) \
	op(ELevelInstanceRuntimeBehavior::None) \
	op(ELevelInstanceRuntimeBehavior::Embedded_Deprecated) \
	op(ELevelInstanceRuntimeBehavior::Partitioned) \
	op(ELevelInstanceRuntimeBehavior::LevelStreaming) 

enum class ELevelInstanceRuntimeBehavior : uint8;
template<> ENGINE_API UEnum* StaticEnum<ELevelInstanceRuntimeBehavior>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
