// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_WorldPartitionRuntimeHash_generated_h
#error "WorldPartitionRuntimeHash.generated.h already included, missing '#pragma once' in WorldPartitionRuntimeHash.h"
#endif
#define ENGINE_WorldPartitionRuntimeHash_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_31_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_31_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_31_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldPartitionRuntimeHash(); \
	friend struct Z_Construct_UClass_UWorldPartitionRuntimeHash_Statics; \
public: \
	DECLARE_CLASS(UWorldPartitionRuntimeHash, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UWorldPartitionRuntimeHash) \
	DECLARE_WITHIN(UWorldPartition) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionRuntimeHash(); \
	friend struct Z_Construct_UClass_UWorldPartitionRuntimeHash_Statics; \
public: \
	DECLARE_CLASS(UWorldPartitionRuntimeHash, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UWorldPartitionRuntimeHash) \
	DECLARE_WITHIN(UWorldPartition) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldPartitionRuntimeHash(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionRuntimeHash) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldPartitionRuntimeHash); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionRuntimeHash); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWorldPartitionRuntimeHash(UWorldPartitionRuntimeHash&&); \
	NO_API UWorldPartitionRuntimeHash(const UWorldPartitionRuntimeHash&); \
public:


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldPartitionRuntimeHash(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWorldPartitionRuntimeHash(UWorldPartitionRuntimeHash&&); \
	NO_API UWorldPartitionRuntimeHash(const UWorldPartitionRuntimeHash&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldPartitionRuntimeHash); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionRuntimeHash); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionRuntimeHash)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_28_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_31_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_31_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_31_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_31_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_31_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WorldPartitionRuntimeHash."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UWorldPartitionRuntimeHash>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h


#define FOREACH_ENUM_EWORLDPARTITIONSTREAMINGPERFORMANCE(op) \
	op(EWorldPartitionStreamingPerformance::Good) \
	op(EWorldPartitionStreamingPerformance::Slow) \
	op(EWorldPartitionStreamingPerformance::Critical) 

enum class EWorldPartitionStreamingPerformance : uint8;
template<> ENGINE_API UEnum* StaticEnum<EWorldPartitionStreamingPerformance>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
