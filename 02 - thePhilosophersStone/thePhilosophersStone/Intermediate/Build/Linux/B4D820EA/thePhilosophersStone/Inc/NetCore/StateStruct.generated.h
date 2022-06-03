// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETCORE_StateStruct_generated_h
#error "StateStruct.generated.h already included, missing '#pragma once' in StateStruct.h"
#endif
#define NETCORE_StateStruct_generated_h

#define FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_123_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateStruct_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NETCORE_API UScriptStruct* StaticStruct<struct FStateStruct>();

#define FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_198_SPARSE_DATA
#define FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_198_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_198_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_198_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatePerObjectConfig(); \
	friend struct Z_Construct_UClass_UStatePerObjectConfig_Statics; \
public: \
	DECLARE_CLASS(UStatePerObjectConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetCore"), NO_API) \
	DECLARE_SERIALIZER(UStatePerObjectConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_198_INCLASS \
private: \
	static void StaticRegisterNativesUStatePerObjectConfig(); \
	friend struct Z_Construct_UClass_UStatePerObjectConfig_Statics; \
public: \
	DECLARE_CLASS(UStatePerObjectConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetCore"), NO_API) \
	DECLARE_SERIALIZER(UStatePerObjectConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_198_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStatePerObjectConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStatePerObjectConfig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatePerObjectConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatePerObjectConfig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStatePerObjectConfig(UStatePerObjectConfig&&); \
	NO_API UStatePerObjectConfig(const UStatePerObjectConfig&); \
public:


#define FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_198_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStatePerObjectConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStatePerObjectConfig(UStatePerObjectConfig&&); \
	NO_API UStatePerObjectConfig(const UStatePerObjectConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatePerObjectConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatePerObjectConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStatePerObjectConfig)


#define FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_195_PROLOG
#define FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_198_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_198_SPARSE_DATA \
	FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_198_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_198_INCLASS \
	FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_198_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_198_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_198_SPARSE_DATA \
	FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_198_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_198_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h_198_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETCORE_API UClass* StaticClass<class UStatePerObjectConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_StateStruct_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
