// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_InterpData_generated_h
#error "InterpData.generated.h already included, missing '#pragma once' in InterpData.h"
#endif
#define ENGINE_InterpData_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpData_h_19_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpData_h_19_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpData_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpData_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterpData(); \
	friend struct Z_Construct_UClass_UInterpData_Statics; \
public: \
	DECLARE_CLASS(UInterpData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInterpData)


#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpData_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUInterpData(); \
	friend struct Z_Construct_UClass_UInterpData_Statics; \
public: \
	DECLARE_CLASS(UInterpData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInterpData)


#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpData_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterpData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterpData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterpData(UInterpData&&); \
	ENGINE_API UInterpData(const UInterpData&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpData_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterpData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterpData(UInterpData&&); \
	ENGINE_API UInterpData(const UInterpData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterpData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpData)


#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpData_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpData_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpData_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpData_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpData_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpData_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpData_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpData_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpData_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpData_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpData_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InterpData."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInterpData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
