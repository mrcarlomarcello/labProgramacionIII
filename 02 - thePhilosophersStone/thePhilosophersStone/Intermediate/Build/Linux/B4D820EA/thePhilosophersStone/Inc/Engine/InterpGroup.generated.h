// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_InterpGroup_generated_h
#error "InterpGroup.generated.h already included, missing '#pragma once' in InterpGroup.h"
#endif
#define ENGINE_InterpGroup_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroup_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterpEdSelKey_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInterpEdSelKey>();

#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroup_h_87_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroup_h_87_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroup_h_87_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroup_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterpGroup(); \
	friend struct Z_Construct_UClass_UInterpGroup_Statics; \
public: \
	DECLARE_CLASS(UInterpGroup, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInterpGroup)


#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroup_h_87_INCLASS \
private: \
	static void StaticRegisterNativesUInterpGroup(); \
	friend struct Z_Construct_UClass_UInterpGroup_Statics; \
public: \
	DECLARE_CLASS(UInterpGroup, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInterpGroup)


#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroup_h_87_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterpGroup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpGroup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterpGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpGroup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterpGroup(UInterpGroup&&); \
	ENGINE_API UInterpGroup(const UInterpGroup&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroup_h_87_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterpGroup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterpGroup(UInterpGroup&&); \
	ENGINE_API UInterpGroup(const UInterpGroup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterpGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterpGroup); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterpGroup)


#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroup_h_84_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroup_h_87_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroup_h_87_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroup_h_87_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroup_h_87_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroup_h_87_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroup_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroup_h_87_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroup_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroup_h_87_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroup_h_87_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InterpGroup."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInterpGroup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
