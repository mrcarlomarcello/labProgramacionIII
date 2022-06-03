// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCameraAnimInst;
class UCameraAnim;
enum class ECameraShakePlaySpace : uint8;
struct FLinearColor;
class UCameraShakeSourceComponent;
class UCameraShakeBase;
class AEmitterCameraLensEffectBase;
class ICameraLensEffectInterface;
class AActor;
class UCameraModifier;
class APlayerController;
#ifdef ENGINE_PlayerCameraManager_generated_h
#error "PlayerCameraManager.generated.h already included, missing '#pragma once' in PlayerCameraManager.h"
#endif
#define ENGINE_PlayerCameraManager_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_22_DELEGATE \
struct _Script_Engine_eventOnAudioFadeChangeSignature_Parms \
{ \
	bool bFadeOut; \
	float FadeTime; \
}; \
static inline void FOnAudioFadeChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAudioFadeChangeSignature, bool bFadeOut, float FadeTime) \
{ \
	_Script_Engine_eventOnAudioFadeChangeSignature_Parms Parms; \
	Parms.bFadeOut=bFadeOut ? true : false; \
	Parms.FadeTime=FadeTime; \
	OnAudioFadeChangeSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraCacheEntry_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCameraCacheEntry>();

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTViewTarget_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTViewTarget>();

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_111_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FViewTargetTransitionParams_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FViewTargetTransitionParams>();

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_181_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_181_RPC_WRAPPERS \
	virtual void OnPhotographyMultiPartCaptureEnd_Implementation(); \
	virtual void OnPhotographyMultiPartCaptureStart_Implementation(); \
	virtual void OnPhotographySessionEnd_Implementation(); \
	virtual void OnPhotographySessionStart_Implementation(); \
	virtual void PhotographyCameraModify_Implementation(const FVector NewCameraLocation, const FVector PreviousCameraLocation, const FVector OriginalCameraLocation, FVector& ResultCameraLocation); \
 \
	DECLARE_FUNCTION(execSwapPendingViewTargetWhenUsingClientSideCameraUpdates); \
	DECLARE_FUNCTION(execSetGameCameraCutThisFrame); \
	DECLARE_FUNCTION(execStopAllCameraAnims); \
	DECLARE_FUNCTION(execStopCameraAnimInst); \
	DECLARE_FUNCTION(execStopAllInstancesOfCameraAnim); \
	DECLARE_FUNCTION(execPlayCameraAnim); \
	DECLARE_FUNCTION(execSetManualCameraFade); \
	DECLARE_FUNCTION(execStopCameraFade); \
	DECLARE_FUNCTION(execStartCameraFade); \
	DECLARE_FUNCTION(execStopAllCameraShakesFromSource); \
	DECLARE_FUNCTION(execStopAllInstancesOfCameraShakeFromSource); \
	DECLARE_FUNCTION(execStopAllCameraShakes); \
	DECLARE_FUNCTION(execStopAllInstancesOfCameraShake); \
	DECLARE_FUNCTION(execStopCameraShake); \
	DECLARE_FUNCTION(execStartCameraShakeFromSource); \
	DECLARE_FUNCTION(execStartCameraShake); \
	DECLARE_FUNCTION(execRemoveCameraLensEffect); \
	DECLARE_FUNCTION(execAddCameraLensEffect); \
	DECLARE_FUNCTION(execClearCameraLensEffects); \
	DECLARE_FUNCTION(execRemoveGenericCameraLensEffect); \
	DECLARE_FUNCTION(execAddGenericCameraLensEffect); \
	DECLARE_FUNCTION(execGetCameraLocation); \
	DECLARE_FUNCTION(execGetCameraRotation); \
	DECLARE_FUNCTION(execGetFOVAngle); \
	DECLARE_FUNCTION(execRemoveCameraModifier); \
	DECLARE_FUNCTION(execFindCameraModifierByClass); \
	DECLARE_FUNCTION(execAddNewCameraModifier); \
	DECLARE_FUNCTION(execGetOwningPlayerController); \
	DECLARE_FUNCTION(execOnPhotographyMultiPartCaptureEnd); \
	DECLARE_FUNCTION(execOnPhotographyMultiPartCaptureStart); \
	DECLARE_FUNCTION(execOnPhotographySessionEnd); \
	DECLARE_FUNCTION(execOnPhotographySessionStart); \
	DECLARE_FUNCTION(execPhotographyCameraModify);


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnPhotographyMultiPartCaptureEnd_Implementation(); \
	virtual void OnPhotographyMultiPartCaptureStart_Implementation(); \
	virtual void OnPhotographySessionEnd_Implementation(); \
	virtual void OnPhotographySessionStart_Implementation(); \
	virtual void PhotographyCameraModify_Implementation(const FVector NewCameraLocation, const FVector PreviousCameraLocation, const FVector OriginalCameraLocation, FVector& ResultCameraLocation); \
 \
	DECLARE_FUNCTION(execSwapPendingViewTargetWhenUsingClientSideCameraUpdates); \
	DECLARE_FUNCTION(execSetGameCameraCutThisFrame); \
	DECLARE_FUNCTION(execStopAllCameraAnims); \
	DECLARE_FUNCTION(execStopCameraAnimInst); \
	DECLARE_FUNCTION(execStopAllInstancesOfCameraAnim); \
	DECLARE_FUNCTION(execPlayCameraAnim); \
	DECLARE_FUNCTION(execSetManualCameraFade); \
	DECLARE_FUNCTION(execStopCameraFade); \
	DECLARE_FUNCTION(execStartCameraFade); \
	DECLARE_FUNCTION(execStopAllCameraShakesFromSource); \
	DECLARE_FUNCTION(execStopAllInstancesOfCameraShakeFromSource); \
	DECLARE_FUNCTION(execStopAllCameraShakes); \
	DECLARE_FUNCTION(execStopAllInstancesOfCameraShake); \
	DECLARE_FUNCTION(execStopCameraShake); \
	DECLARE_FUNCTION(execStartCameraShakeFromSource); \
	DECLARE_FUNCTION(execStartCameraShake); \
	DECLARE_FUNCTION(execRemoveCameraLensEffect); \
	DECLARE_FUNCTION(execAddCameraLensEffect); \
	DECLARE_FUNCTION(execClearCameraLensEffects); \
	DECLARE_FUNCTION(execRemoveGenericCameraLensEffect); \
	DECLARE_FUNCTION(execAddGenericCameraLensEffect); \
	DECLARE_FUNCTION(execGetCameraLocation); \
	DECLARE_FUNCTION(execGetCameraRotation); \
	DECLARE_FUNCTION(execGetFOVAngle); \
	DECLARE_FUNCTION(execRemoveCameraModifier); \
	DECLARE_FUNCTION(execFindCameraModifierByClass); \
	DECLARE_FUNCTION(execAddNewCameraModifier); \
	DECLARE_FUNCTION(execGetOwningPlayerController); \
	DECLARE_FUNCTION(execOnPhotographyMultiPartCaptureEnd); \
	DECLARE_FUNCTION(execOnPhotographyMultiPartCaptureStart); \
	DECLARE_FUNCTION(execOnPhotographySessionEnd); \
	DECLARE_FUNCTION(execOnPhotographySessionStart); \
	DECLARE_FUNCTION(execPhotographyCameraModify);


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_181_EVENT_PARMS \
	struct PlayerCameraManager_eventBlueprintUpdateCamera_Parms \
	{ \
		AActor* CameraTarget; \
		FVector NewCameraLocation; \
		FRotator NewCameraRotation; \
		float NewCameraFOV; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PlayerCameraManager_eventBlueprintUpdateCamera_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct PlayerCameraManager_eventPhotographyCameraModify_Parms \
	{ \
		FVector NewCameraLocation; \
		FVector PreviousCameraLocation; \
		FVector OriginalCameraLocation; \
		FVector ResultCameraLocation; \
	};


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_181_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_181_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCameraManager(); \
	friend struct Z_Construct_UClass_APlayerCameraManager_Statics; \
public: \
	DECLARE_CLASS(APlayerCameraManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(APlayerCameraManager)


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_181_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCameraManager(); \
	friend struct Z_Construct_UClass_APlayerCameraManager_Statics; \
public: \
	DECLARE_CLASS(APlayerCameraManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(APlayerCameraManager)


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_181_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCameraManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCameraManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCameraManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCameraManager(APlayerCameraManager&&); \
	NO_API APlayerCameraManager(const APlayerCameraManager&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_181_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCameraManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCameraManager(APlayerCameraManager&&); \
	NO_API APlayerCameraManager(const APlayerCameraManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCameraManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCameraManager)


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_178_PROLOG \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_181_EVENT_PARMS


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_181_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_181_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_181_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_181_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_181_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_181_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_181_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_181_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_181_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_181_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h_181_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlayerCameraManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class APlayerCameraManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Camera_PlayerCameraManager_h


#define FOREACH_ENUM_EVIEWTARGETBLENDFUNCTION(op) \
	op(VTBlend_Linear) \
	op(VTBlend_Cubic) \
	op(VTBlend_EaseIn) \
	op(VTBlend_EaseOut) \
	op(VTBlend_EaseInOut) \
	op(VTBlend_PreBlended) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
