// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavLinkCustomComponent_generated_h
#error "NavLinkCustomComponent.generated.h already included, missing '#pragma once' in NavLinkCustomComponent.h"
#endif
#define NAVIGATIONSYSTEM_NavLinkCustomComponent_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_30_SPARSE_DATA
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_30_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavLinkCustomComponent(); \
	friend struct Z_Construct_UClass_UNavLinkCustomComponent_Statics; \
public: \
	DECLARE_CLASS(UNavLinkCustomComponent, UNavRelevantComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavLinkCustomComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UNavLinkCustomComponent*>(this); }


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUNavLinkCustomComponent(); \
	friend struct Z_Construct_UClass_UNavLinkCustomComponent_Statics; \
public: \
	DECLARE_CLASS(UNavLinkCustomComponent, UNavRelevantComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavLinkCustomComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UNavLinkCustomComponent*>(this); }


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavLinkCustomComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavLinkCustomComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavLinkCustomComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavLinkCustomComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavLinkCustomComponent(UNavLinkCustomComponent&&); \
	NO_API UNavLinkCustomComponent(const UNavLinkCustomComponent&); \
public:


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavLinkCustomComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavLinkCustomComponent(UNavLinkCustomComponent&&); \
	NO_API UNavLinkCustomComponent(const UNavLinkCustomComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavLinkCustomComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavLinkCustomComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavLinkCustomComponent)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_27_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_30_SPARSE_DATA \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_30_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_30_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_30_SPARSE_DATA \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NavLinkCustomComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavLinkCustomComponent>();

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h_231_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavLinkCustomInstanceData_Statics; \
	NAVIGATIONSYSTEM_API static class UScriptStruct* StaticStruct(); \
	typedef FActorComponentInstanceData Super;


template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<struct FNavLinkCustomInstanceData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
