// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPolygonGroupID;
struct FPolygonID;
struct FVertexInstanceID;
#ifdef STATICMESHDESCRIPTION_StaticMeshDescription_generated_h
#error "StaticMeshDescription.generated.h already included, missing '#pragma once' in StaticMeshDescription.h"
#endif
#define STATICMESHDESCRIPTION_StaticMeshDescription_generated_h

#define FID_Engine_Source_Runtime_StaticMeshDescription_Public_StaticMeshDescription_h_21_SPARSE_DATA
#define FID_Engine_Source_Runtime_StaticMeshDescription_Public_StaticMeshDescription_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPolygonGroupMaterialSlotName); \
	DECLARE_FUNCTION(execCreateCube); \
	DECLARE_FUNCTION(execSetVertexInstanceUV); \
	DECLARE_FUNCTION(execGetVertexInstanceUV);


#define FID_Engine_Source_Runtime_StaticMeshDescription_Public_StaticMeshDescription_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPolygonGroupMaterialSlotName); \
	DECLARE_FUNCTION(execCreateCube); \
	DECLARE_FUNCTION(execSetVertexInstanceUV); \
	DECLARE_FUNCTION(execGetVertexInstanceUV);


#define FID_Engine_Source_Runtime_StaticMeshDescription_Public_StaticMeshDescription_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStaticMeshDescription(); \
	friend struct Z_Construct_UClass_UStaticMeshDescription_Statics; \
public: \
	DECLARE_CLASS(UStaticMeshDescription, UMeshDescriptionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StaticMeshDescription"), NO_API) \
	DECLARE_SERIALIZER(UStaticMeshDescription)


#define FID_Engine_Source_Runtime_StaticMeshDescription_Public_StaticMeshDescription_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUStaticMeshDescription(); \
	friend struct Z_Construct_UClass_UStaticMeshDescription_Statics; \
public: \
	DECLARE_CLASS(UStaticMeshDescription, UMeshDescriptionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StaticMeshDescription"), NO_API) \
	DECLARE_SERIALIZER(UStaticMeshDescription)


#define FID_Engine_Source_Runtime_StaticMeshDescription_Public_StaticMeshDescription_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStaticMeshDescription(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMeshDescription) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStaticMeshDescription); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshDescription); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStaticMeshDescription(UStaticMeshDescription&&); \
	NO_API UStaticMeshDescription(const UStaticMeshDescription&); \
public:


#define FID_Engine_Source_Runtime_StaticMeshDescription_Public_StaticMeshDescription_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStaticMeshDescription(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStaticMeshDescription(UStaticMeshDescription&&); \
	NO_API UStaticMeshDescription(const UStaticMeshDescription&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStaticMeshDescription); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshDescription); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMeshDescription)


#define FID_Engine_Source_Runtime_StaticMeshDescription_Public_StaticMeshDescription_h_17_PROLOG
#define FID_Engine_Source_Runtime_StaticMeshDescription_Public_StaticMeshDescription_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_StaticMeshDescription_Public_StaticMeshDescription_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_StaticMeshDescription_Public_StaticMeshDescription_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_StaticMeshDescription_Public_StaticMeshDescription_h_21_INCLASS \
	FID_Engine_Source_Runtime_StaticMeshDescription_Public_StaticMeshDescription_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_StaticMeshDescription_Public_StaticMeshDescription_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_StaticMeshDescription_Public_StaticMeshDescription_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_StaticMeshDescription_Public_StaticMeshDescription_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_StaticMeshDescription_Public_StaticMeshDescription_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_StaticMeshDescription_Public_StaticMeshDescription_h_21_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STATICMESHDESCRIPTION_API UClass* StaticClass<class UStaticMeshDescription>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_StaticMeshDescription_Public_StaticMeshDescription_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
