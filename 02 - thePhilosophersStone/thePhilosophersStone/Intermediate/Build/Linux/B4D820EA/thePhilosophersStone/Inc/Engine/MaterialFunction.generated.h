// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialFunction_generated_h
#error "MaterialFunction.generated.h already included, missing '#pragma once' in MaterialFunction.h"
#endif
#define ENGINE_MaterialFunction_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_25_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_25_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_25_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterialFunction, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialFunction(); \
	friend struct Z_Construct_UClass_UMaterialFunction_Statics; \
public: \
	DECLARE_CLASS(UMaterialFunction, UMaterialFunctionInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialFunction) \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_25_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialFunction(); \
	friend struct Z_Construct_UClass_UMaterialFunction_Statics; \
public: \
	DECLARE_CLASS(UMaterialFunction, UMaterialFunctionInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialFunction) \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_25_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialFunction(UMaterialFunction&&); \
	ENGINE_API UMaterialFunction(const UMaterialFunction&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialFunction(UMaterialFunction&&); \
	ENGINE_API UMaterialFunction(const UMaterialFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialFunction)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_22_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_25_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_25_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_25_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_25_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialFunction."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
