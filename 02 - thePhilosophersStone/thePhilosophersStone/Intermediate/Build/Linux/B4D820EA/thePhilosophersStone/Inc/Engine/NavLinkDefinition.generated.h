// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavLinkDefinition_generated_h
#error "NavLinkDefinition.generated.h already included, missing '#pragma once' in NavLinkDefinition.h"
#endif
#define ENGINE_NavLinkDefinition_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavigationLinkBase_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNavigationLinkBase>();

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_188_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavigationLink_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FNavigationLinkBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNavigationLink>();

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_241_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavigationSegmentLink_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FNavigationLinkBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNavigationSegmentLink>();

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_295_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_295_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_295_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_295_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavLinkDefinition(); \
	friend struct Z_Construct_UClass_UNavLinkDefinition_Statics; \
public: \
	DECLARE_CLASS(UNavLinkDefinition, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNavLinkDefinition) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_295_INCLASS \
private: \
	static void StaticRegisterNativesUNavLinkDefinition(); \
	friend struct Z_Construct_UClass_UNavLinkDefinition_Statics; \
public: \
	DECLARE_CLASS(UNavLinkDefinition, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNavLinkDefinition) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_295_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavLinkDefinition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavLinkDefinition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavLinkDefinition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavLinkDefinition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavLinkDefinition(UNavLinkDefinition&&); \
	NO_API UNavLinkDefinition(const UNavLinkDefinition&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_295_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavLinkDefinition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavLinkDefinition(UNavLinkDefinition&&); \
	NO_API UNavLinkDefinition(const UNavLinkDefinition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavLinkDefinition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavLinkDefinition); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavLinkDefinition)


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_292_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_295_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_295_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_295_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_295_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_295_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_295_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_295_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_295_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_295_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h_295_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NavLinkDefinition."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNavLinkDefinition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavLinkDefinition_h


#define FOREACH_ENUM_ENAVLINKDIRECTION(op) \
	op(ENavLinkDirection::BothWays) \
	op(ENavLinkDirection::LeftToRight) \
	op(ENavLinkDirection::RightToLeft) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
