// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraComponentSettings_generated_h
#error "NiagaraComponentSettings.generated.h already included, missing '#pragma once' in NiagaraComponentSettings.h"
#endif
#define NIAGARA_NiagaraComponentSettings_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentSettings_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraEmitterNameSettingsRef>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentSettings_h_43_SPARSE_DATA
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentSettings_h_43_RPC_WRAPPERS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentSettings_h_43_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentSettings_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraComponentSettings(); \
	friend struct Z_Construct_UClass_UNiagaraComponentSettings_Statics; \
public: \
	DECLARE_CLASS(UNiagaraComponentSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraComponentSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentSettings_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraComponentSettings(); \
	friend struct Z_Construct_UClass_UNiagaraComponentSettings_Statics; \
public: \
	DECLARE_CLASS(UNiagaraComponentSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraComponentSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentSettings_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraComponentSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraComponentSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraComponentSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraComponentSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraComponentSettings(UNiagaraComponentSettings&&); \
	NO_API UNiagaraComponentSettings(const UNiagaraComponentSettings&); \
public:


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentSettings_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraComponentSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraComponentSettings(UNiagaraComponentSettings&&); \
	NO_API UNiagaraComponentSettings(const UNiagaraComponentSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraComponentSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraComponentSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraComponentSettings)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentSettings_h_40_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentSettings_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentSettings_h_43_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentSettings_h_43_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentSettings_h_43_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentSettings_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentSettings_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentSettings_h_43_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentSettings_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentSettings_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentSettings_h_43_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NiagaraComponentSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraComponentSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
