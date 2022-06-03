// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FPostProcessSettings;
#ifdef ENGINE_CameraModifier_generated_h
#error "CameraModifier.generated.h already included, missing '#pragma once' in CameraModifier.h"
#endif
#define ENGINE_CameraModifier_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_25_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEnableModifier); \
	DECLARE_FUNCTION(execDisableModifier); \
	DECLARE_FUNCTION(execGetViewTarget); \
	DECLARE_FUNCTION(execIsDisabled); \
	DECLARE_FUNCTION(execOnCameraOwnerDestroyed);


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEnableModifier); \
	DECLARE_FUNCTION(execDisableModifier); \
	DECLARE_FUNCTION(execGetViewTarget); \
	DECLARE_FUNCTION(execIsDisabled); \
	DECLARE_FUNCTION(execOnCameraOwnerDestroyed);


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_25_EVENT_PARMS \
	struct CameraModifier_eventBlueprintModifyCamera_Parms \
	{ \
		float DeltaTime; \
		FVector ViewLocation; \
		FRotator ViewRotation; \
		float FOV; \
		FVector NewViewLocation; \
		FRotator NewViewRotation; \
		float NewFOV; \
	}; \
	struct CameraModifier_eventBlueprintModifyPostProcess_Parms \
	{ \
		float DeltaTime; \
		float PostProcessBlendWeight; \
		FPostProcessSettings PostProcessSettings; \
	};


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_25_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraModifier(); \
	friend struct Z_Construct_UClass_UCameraModifier_Statics; \
public: \
	DECLARE_CLASS(UCameraModifier, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCameraModifier)


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUCameraModifier(); \
	friend struct Z_Construct_UClass_UCameraModifier_Statics; \
public: \
	DECLARE_CLASS(UCameraModifier, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCameraModifier)


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraModifier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraModifier); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraModifier(UCameraModifier&&); \
	NO_API UCameraModifier(const UCameraModifier&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraModifier(UCameraModifier&&); \
	NO_API UCameraModifier(const UCameraModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraModifier); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraModifier)


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_22_PROLOG \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_25_EVENT_PARMS


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_25_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_25_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_25_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_25_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_25_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_25_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CameraModifier."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCameraModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
