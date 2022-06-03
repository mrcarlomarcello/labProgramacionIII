// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_WorldPartitionVolume_generated_h
#error "WorldPartitionVolume.generated.h already included, missing '#pragma once' in WorldPartitionVolume.h"
#endif
#define ENGINE_WorldPartitionVolume_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_14_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_14_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldPartitionVolume(); \
	friend struct Z_Construct_UClass_AWorldPartitionVolume_Statics; \
public: \
	DECLARE_CLASS(AWorldPartitionVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AWorldPartitionVolume)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAWorldPartitionVolume(); \
	friend struct Z_Construct_UClass_AWorldPartitionVolume_Statics; \
public: \
	DECLARE_CLASS(AWorldPartitionVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AWorldPartitionVolume)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWorldPartitionVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldPartitionVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldPartitionVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldPartitionVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldPartitionVolume(AWorldPartitionVolume&&); \
	NO_API AWorldPartitionVolume(const AWorldPartitionVolume&); \
public:


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldPartitionVolume(AWorldPartitionVolume&&); \
	NO_API AWorldPartitionVolume(const AWorldPartitionVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldPartitionVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldPartitionVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldPartitionVolume)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_14_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_14_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_14_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AWorldPartitionVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
