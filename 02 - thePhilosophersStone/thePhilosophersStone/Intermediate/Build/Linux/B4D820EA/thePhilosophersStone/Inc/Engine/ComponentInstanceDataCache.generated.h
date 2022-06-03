// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ComponentInstanceDataCache_generated_h
#error "ComponentInstanceDataCache.generated.h already included, missing '#pragma once' in ComponentInstanceDataCache.h"
#endif
#define ENGINE_ComponentInstanceDataCache_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FActorComponentDuplicatedObjectData>();

#define FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_66_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_66_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_66_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorComponentInstanceDataTransientOuter(); \
	friend struct Z_Construct_UClass_UActorComponentInstanceDataTransientOuter_Statics; \
public: \
	DECLARE_CLASS(UActorComponentInstanceDataTransientOuter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UActorComponentInstanceDataTransientOuter)


#define FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_66_INCLASS \
private: \
	static void StaticRegisterNativesUActorComponentInstanceDataTransientOuter(); \
	friend struct Z_Construct_UClass_UActorComponentInstanceDataTransientOuter_Statics; \
public: \
	DECLARE_CLASS(UActorComponentInstanceDataTransientOuter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UActorComponentInstanceDataTransientOuter)


#define FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorComponentInstanceDataTransientOuter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorComponentInstanceDataTransientOuter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorComponentInstanceDataTransientOuter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorComponentInstanceDataTransientOuter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorComponentInstanceDataTransientOuter(UActorComponentInstanceDataTransientOuter&&); \
	NO_API UActorComponentInstanceDataTransientOuter(const UActorComponentInstanceDataTransientOuter&); \
public:


#define FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorComponentInstanceDataTransientOuter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorComponentInstanceDataTransientOuter(UActorComponentInstanceDataTransientOuter&&); \
	NO_API UActorComponentInstanceDataTransientOuter(const UActorComponentInstanceDataTransientOuter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorComponentInstanceDataTransientOuter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorComponentInstanceDataTransientOuter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorComponentInstanceDataTransientOuter)


#define FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_63_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_66_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_66_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_66_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_66_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_66_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UActorComponentInstanceDataTransientOuter>();

#define FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FActorComponentInstanceData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h


#define FOREACH_ENUM_ECOMPONENTCREATIONMETHOD(op) \
	op(EComponentCreationMethod::Native) \
	op(EComponentCreationMethod::SimpleConstructionScript) \
	op(EComponentCreationMethod::UserConstructionScript) \
	op(EComponentCreationMethod::Instance) 

enum class EComponentCreationMethod : uint8;
template<> ENGINE_API UEnum* StaticEnum<EComponentCreationMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
