// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputAxisKeyMapping;
struct FInputActionKeyMapping;
class UInputSettings;
#ifdef ENGINE_InputSettings_generated_h
#error "InputSettings.generated.h already included, missing '#pragma once' in InputSettings.h"
#endif
#define ENGINE_InputSettings_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_24_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execForceRebuildKeymaps); \
	DECLARE_FUNCTION(execGetAxisNames); \
	DECLARE_FUNCTION(execGetActionNames); \
	DECLARE_FUNCTION(execSaveKeyMappings); \
	DECLARE_FUNCTION(execRemoveAxisMapping); \
	DECLARE_FUNCTION(execGetAxisMappingByName); \
	DECLARE_FUNCTION(execAddAxisMapping); \
	DECLARE_FUNCTION(execRemoveActionMapping); \
	DECLARE_FUNCTION(execGetActionMappingByName); \
	DECLARE_FUNCTION(execAddActionMapping); \
	DECLARE_FUNCTION(execGetInputSettings);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execForceRebuildKeymaps); \
	DECLARE_FUNCTION(execGetAxisNames); \
	DECLARE_FUNCTION(execGetActionNames); \
	DECLARE_FUNCTION(execSaveKeyMappings); \
	DECLARE_FUNCTION(execRemoveAxisMapping); \
	DECLARE_FUNCTION(execGetAxisMappingByName); \
	DECLARE_FUNCTION(execAddAxisMapping); \
	DECLARE_FUNCTION(execRemoveActionMapping); \
	DECLARE_FUNCTION(execGetActionMappingByName); \
	DECLARE_FUNCTION(execAddActionMapping); \
	DECLARE_FUNCTION(execGetInputSettings);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputSettings(); \
	friend struct Z_Construct_UClass_UInputSettings_Statics; \
public: \
	DECLARE_CLASS(UInputSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUInputSettings(); \
	friend struct Z_Construct_UClass_UInputSettings_Statics; \
public: \
	DECLARE_CLASS(UInputSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputSettings(UInputSettings&&); \
	NO_API UInputSettings(const UInputSettings&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputSettings(UInputSettings&&); \
	NO_API UInputSettings(const UInputSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputSettings)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_24_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_24_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_24_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_24_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InputSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInputSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
