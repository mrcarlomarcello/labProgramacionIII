// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeGrassType_generated_h
#error "LandscapeGrassType.generated.h already included, missing '#pragma once' in LandscapeGrassType.h"
#endif
#define LANDSCAPE_LandscapeGrassType_generated_h

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGrassVariety_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FGrassVariety>();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_138_SPARSE_DATA
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_138_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_138_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_138_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeGrassType(); \
	friend struct Z_Construct_UClass_ULandscapeGrassType_Statics; \
public: \
	DECLARE_CLASS(ULandscapeGrassType, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeGrassType)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_138_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeGrassType(); \
	friend struct Z_Construct_UClass_ULandscapeGrassType_Statics; \
public: \
	DECLARE_CLASS(ULandscapeGrassType, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeGrassType)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_138_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeGrassType(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeGrassType) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeGrassType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeGrassType); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ULandscapeGrassType(ULandscapeGrassType&&); \
	LANDSCAPE_API ULandscapeGrassType(const ULandscapeGrassType&); \
public:


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_138_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeGrassType(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ULandscapeGrassType(ULandscapeGrassType&&); \
	LANDSCAPE_API ULandscapeGrassType(const ULandscapeGrassType&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeGrassType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeGrassType); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeGrassType)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_135_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_138_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_138_SPARSE_DATA \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_138_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_138_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_138_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_138_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_138_SPARSE_DATA \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_138_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_138_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h_138_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LandscapeGrassType."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ULandscapeGrassType>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGrassType_h


#define FOREACH_ENUM_EGRASSSCALING(op) \
	op(EGrassScaling::Uniform) \
	op(EGrassScaling::Free) \
	op(EGrassScaling::LockXY) 

enum class EGrassScaling : uint8;
template<> LANDSCAPE_API UEnum* StaticEnum<EGrassScaling>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
