// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNamedLensPreset;
struct FNamedFilmbackPreset;
#ifdef CINEMATICCAMERA_CineCameraComponent_generated_h
#error "CineCameraComponent.generated.h already included, missing '#pragma once' in CineCameraComponent.h"
#endif
#define CINEMATICCAMERA_CineCameraComponent_generated_h

#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<struct FCameraFilmbackSettings>();

#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<struct FNamedFilmbackPreset>();

#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraLensSettings_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<struct FCameraLensSettings>();

#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_125_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNamedLensPreset_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<struct FNamedLensPreset>();

#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_158_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<struct FCameraTrackingFocusSettings>();

#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_182_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraFocusSettings_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<struct FCameraFocusSettings>();

#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_239_SPARSE_DATA
#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_239_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLensPresetsCopy); \
	DECLARE_FUNCTION(execGetFilmbackPresetsCopy); \
	DECLARE_FUNCTION(execSetLensPresetByName); \
	DECLARE_FUNCTION(execGetLensPresetName); \
	DECLARE_FUNCTION(execSetFilmbackPresetByName); \
	DECLARE_FUNCTION(execGetDefaultFilmbackPresetName); \
	DECLARE_FUNCTION(execGetFilmbackPresetName); \
	DECLARE_FUNCTION(execGetVerticalFieldOfView); \
	DECLARE_FUNCTION(execGetHorizontalFieldOfView); \
	DECLARE_FUNCTION(execSetCurrentFocalLength);


#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_239_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLensPresetsCopy); \
	DECLARE_FUNCTION(execGetFilmbackPresetsCopy); \
	DECLARE_FUNCTION(execSetLensPresetByName); \
	DECLARE_FUNCTION(execGetLensPresetName); \
	DECLARE_FUNCTION(execSetFilmbackPresetByName); \
	DECLARE_FUNCTION(execGetDefaultFilmbackPresetName); \
	DECLARE_FUNCTION(execGetFilmbackPresetName); \
	DECLARE_FUNCTION(execGetVerticalFieldOfView); \
	DECLARE_FUNCTION(execGetHorizontalFieldOfView); \
	DECLARE_FUNCTION(execSetCurrentFocalLength);


#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_239_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCineCameraComponent, NO_API)


#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_239_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCineCameraComponent(); \
	friend struct Z_Construct_UClass_UCineCameraComponent_Statics; \
public: \
	DECLARE_CLASS(UCineCameraComponent, UCameraComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CinematicCamera"), NO_API) \
	DECLARE_SERIALIZER(UCineCameraComponent) \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_239_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_239_INCLASS \
private: \
	static void StaticRegisterNativesUCineCameraComponent(); \
	friend struct Z_Construct_UClass_UCineCameraComponent_Statics; \
public: \
	DECLARE_CLASS(UCineCameraComponent, UCameraComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CinematicCamera"), NO_API) \
	DECLARE_SERIALIZER(UCineCameraComponent) \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_239_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_239_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCineCameraComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCineCameraComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCineCameraComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCineCameraComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCineCameraComponent(UCineCameraComponent&&); \
	NO_API UCineCameraComponent(const UCineCameraComponent&); \
public:


#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_239_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCineCameraComponent(UCineCameraComponent&&); \
	NO_API UCineCameraComponent(const UCineCameraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCineCameraComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCineCameraComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCineCameraComponent)


#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_236_PROLOG
#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_239_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_239_SPARSE_DATA \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_239_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_239_INCLASS \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_239_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_239_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_239_SPARSE_DATA \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_239_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_239_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_239_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CINEMATICCAMERA_API UClass* StaticClass<class UCineCameraComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h


#define FOREACH_ENUM_ECAMERAFOCUSMETHOD(op) \
	op(ECameraFocusMethod::DoNotOverride) \
	op(ECameraFocusMethod::Manual) \
	op(ECameraFocusMethod::Tracking) \
	op(ECameraFocusMethod::Disable) 

enum class ECameraFocusMethod : uint8;
template<> CINEMATICCAMERA_API UEnum* StaticEnum<ECameraFocusMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
