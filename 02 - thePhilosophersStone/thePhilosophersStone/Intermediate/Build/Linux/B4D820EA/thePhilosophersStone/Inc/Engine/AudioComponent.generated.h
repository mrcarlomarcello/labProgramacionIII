// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSubtitleCue;
enum class EAudioComponentPlayState : uint8;
class USoundWave;
struct FSoundAttenuationSettings;
struct FSoundWaveEnvelopeDataPerSound;
struct FSoundWaveSpectralDataPerSound;
struct FSoundWaveSpectralData;
class UAudioBus;
class USoundSourceBus;
class USoundSubmixBase;
enum class EAudioFaderCurve : uint8;
class UObject;
class UQuartzClockHandle;
struct FQuartzQuantizationBoundary;
class USoundBase;
#ifdef ENGINE_AudioComponent_generated_h
#error "AudioComponent.generated.h already included, missing '#pragma once' in AudioComponent.h"
#endif
#define ENGINE_AudioComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_56_DELEGATE \
static inline void FOnAudioFinished_DelegateWrapper(const FMulticastScriptDelegate& OnAudioFinished) \
{ \
	OnAudioFinished.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_62_DELEGATE \
struct _Script_Engine_eventOnQueueSubtitles_Parms \
{ \
	TArray<FSubtitleCue> Subtitles; \
	float CueDuration; \
}; \
static inline void FOnQueueSubtitles_DelegateWrapper(const FScriptDelegate& OnQueueSubtitles, TArray<FSubtitleCue> const& Subtitles, float CueDuration) \
{ \
	_Script_Engine_eventOnQueueSubtitles_Parms Parms; \
	Parms.Subtitles=Subtitles; \
	Parms.CueDuration=CueDuration; \
	OnQueueSubtitles.ProcessDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_65_DELEGATE \
struct _Script_Engine_eventOnAudioPlayStateChanged_Parms \
{ \
	EAudioComponentPlayState PlayState; \
}; \
static inline void FOnAudioPlayStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAudioPlayStateChanged, EAudioComponentPlayState PlayState) \
{ \
	_Script_Engine_eventOnAudioPlayStateChanged_Parms Parms; \
	Parms.PlayState=PlayState; \
	OnAudioPlayStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_71_DELEGATE \
struct _Script_Engine_eventOnAudioVirtualizationChanged_Parms \
{ \
	bool bIsVirtualized; \
}; \
static inline void FOnAudioVirtualizationChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAudioVirtualizationChanged, bool bIsVirtualized) \
{ \
	_Script_Engine_eventOnAudioVirtualizationChanged_Parms Parms; \
	Parms.bIsVirtualized=bIsVirtualized ? true : false; \
	OnAudioVirtualizationChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_80_DELEGATE \
struct _Script_Engine_eventOnAudioPlaybackPercent_Parms \
{ \
	const USoundWave* PlayingSoundWave; \
	float PlaybackPercent; \
}; \
static inline void FOnAudioPlaybackPercent_DelegateWrapper(const FMulticastScriptDelegate& OnAudioPlaybackPercent, const USoundWave* PlayingSoundWave, const float PlaybackPercent) \
{ \
	_Script_Engine_eventOnAudioPlaybackPercent_Parms Parms; \
	Parms.PlayingSoundWave=PlayingSoundWave; \
	Parms.PlaybackPercent=PlaybackPercent; \
	OnAudioPlaybackPercent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_89_DELEGATE \
struct _Script_Engine_eventOnAudioSingleEnvelopeValue_Parms \
{ \
	const USoundWave* PlayingSoundWave; \
	float EnvelopeValue; \
}; \
static inline void FOnAudioSingleEnvelopeValue_DelegateWrapper(const FMulticastScriptDelegate& OnAudioSingleEnvelopeValue, const USoundWave* PlayingSoundWave, const float EnvelopeValue) \
{ \
	_Script_Engine_eventOnAudioSingleEnvelopeValue_Parms Parms; \
	Parms.PlayingSoundWave=PlayingSoundWave; \
	Parms.EnvelopeValue=EnvelopeValue; \
	OnAudioSingleEnvelopeValue.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_98_DELEGATE \
struct _Script_Engine_eventOnAudioMultiEnvelopeValue_Parms \
{ \
	float AverageEnvelopeValue; \
	float MaxEnvelope; \
	int32 NumWaveInstances; \
}; \
static inline void FOnAudioMultiEnvelopeValue_DelegateWrapper(const FMulticastScriptDelegate& OnAudioMultiEnvelopeValue, const float AverageEnvelopeValue, const float MaxEnvelope, const int32 NumWaveInstances) \
{ \
	_Script_Engine_eventOnAudioMultiEnvelopeValue_Parms Parms; \
	Parms.AverageEnvelopeValue=AverageEnvelopeValue; \
	Parms.MaxEnvelope=MaxEnvelope; \
	Parms.NumWaveInstances=NumWaveInstances; \
	OnAudioMultiEnvelopeValue.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_131_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioComponentParam_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAudioParameter Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAudioComponentParam>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_144_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_144_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_144_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_144_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInitialActiveSoundParams(); \
	friend struct Z_Construct_UClass_UInitialActiveSoundParams_Statics; \
public: \
	DECLARE_CLASS(UInitialActiveSoundParams, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInitialActiveSoundParams)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_144_INCLASS \
private: \
	static void StaticRegisterNativesUInitialActiveSoundParams(); \
	friend struct Z_Construct_UClass_UInitialActiveSoundParams_Statics; \
public: \
	DECLARE_CLASS(UInitialActiveSoundParams, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInitialActiveSoundParams)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_144_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInitialActiveSoundParams(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInitialActiveSoundParams) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInitialActiveSoundParams); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInitialActiveSoundParams); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInitialActiveSoundParams(UInitialActiveSoundParams&&); \
	NO_API UInitialActiveSoundParams(const UInitialActiveSoundParams&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_144_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInitialActiveSoundParams(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInitialActiveSoundParams(UInitialActiveSoundParams&&); \
	NO_API UInitialActiveSoundParams(const UInitialActiveSoundParams&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInitialActiveSoundParams); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInitialActiveSoundParams); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInitialActiveSoundParams)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_141_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_144_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_144_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_144_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_144_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_144_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_144_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_144_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_144_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_144_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_144_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InitialActiveSoundParams."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInitialActiveSoundParams>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_165_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_165_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_GetAttenuationSettingsToApply); \
	DECLARE_FUNCTION(execGetCookedEnvelopeDataForAllPlayingSounds); \
	DECLARE_FUNCTION(execGetCookedEnvelopeData); \
	DECLARE_FUNCTION(execGetCookedFFTDataForAllPlayingSounds); \
	DECLARE_FUNCTION(execGetCookedFFTData); \
	DECLARE_FUNCTION(execHasCookedAmplitudeEnvelopeData); \
	DECLARE_FUNCTION(execHasCookedFFTData); \
	DECLARE_FUNCTION(execSetOutputToBusOnly); \
	DECLARE_FUNCTION(execSetLowPassFilterFrequency); \
	DECLARE_FUNCTION(execSetLowPassFilterEnabled); \
	DECLARE_FUNCTION(execSetAudioBusSendPostEffect); \
	DECLARE_FUNCTION(execSetAudioBusSendPreEffect); \
	DECLARE_FUNCTION(execSetSourceBusSendPostEffect); \
	DECLARE_FUNCTION(execSetSourceBusSendPreEffect); \
	DECLARE_FUNCTION(execSetSubmixSend); \
	DECLARE_FUNCTION(execAdjustAttenuation); \
	DECLARE_FUNCTION(execSetUISound); \
	DECLARE_FUNCTION(execSetPitchMultiplier); \
	DECLARE_FUNCTION(execSetVolumeMultiplier); \
	DECLARE_FUNCTION(execSetWaveParameter); \
	DECLARE_FUNCTION(execAdjustVolume); \
	DECLARE_FUNCTION(execGetPlayState); \
	DECLARE_FUNCTION(execIsVirtualized); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execStopDelayed); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execSetFloatParameter); \
	DECLARE_FUNCTION(execSetIntParameter); \
	DECLARE_FUNCTION(execSetBoolParameter); \
	DECLARE_FUNCTION(execPlayQuantized); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execFadeOut); \
	DECLARE_FUNCTION(execFadeIn); \
	DECLARE_FUNCTION(execSetSound);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_165_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_GetAttenuationSettingsToApply); \
	DECLARE_FUNCTION(execGetCookedEnvelopeDataForAllPlayingSounds); \
	DECLARE_FUNCTION(execGetCookedEnvelopeData); \
	DECLARE_FUNCTION(execGetCookedFFTDataForAllPlayingSounds); \
	DECLARE_FUNCTION(execGetCookedFFTData); \
	DECLARE_FUNCTION(execHasCookedAmplitudeEnvelopeData); \
	DECLARE_FUNCTION(execHasCookedFFTData); \
	DECLARE_FUNCTION(execSetOutputToBusOnly); \
	DECLARE_FUNCTION(execSetLowPassFilterFrequency); \
	DECLARE_FUNCTION(execSetLowPassFilterEnabled); \
	DECLARE_FUNCTION(execSetAudioBusSendPostEffect); \
	DECLARE_FUNCTION(execSetAudioBusSendPreEffect); \
	DECLARE_FUNCTION(execSetSourceBusSendPostEffect); \
	DECLARE_FUNCTION(execSetSourceBusSendPreEffect); \
	DECLARE_FUNCTION(execSetSubmixSend); \
	DECLARE_FUNCTION(execAdjustAttenuation); \
	DECLARE_FUNCTION(execSetUISound); \
	DECLARE_FUNCTION(execSetPitchMultiplier); \
	DECLARE_FUNCTION(execSetVolumeMultiplier); \
	DECLARE_FUNCTION(execSetWaveParameter); \
	DECLARE_FUNCTION(execAdjustVolume); \
	DECLARE_FUNCTION(execGetPlayState); \
	DECLARE_FUNCTION(execIsVirtualized); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execStopDelayed); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execSetFloatParameter); \
	DECLARE_FUNCTION(execSetIntParameter); \
	DECLARE_FUNCTION(execSetBoolParameter); \
	DECLARE_FUNCTION(execPlayQuantized); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execFadeOut); \
	DECLARE_FUNCTION(execFadeIn); \
	DECLARE_FUNCTION(execSetSound);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_165_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAudioComponent, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_165_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioComponent(); \
	friend struct Z_Construct_UClass_UAudioComponent_Statics; \
public: \
	DECLARE_CLASS(UAudioComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAudioComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_165_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UAudioComponent*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_165_INCLASS \
private: \
	static void StaticRegisterNativesUAudioComponent(); \
	friend struct Z_Construct_UClass_UAudioComponent_Statics; \
public: \
	DECLARE_CLASS(UAudioComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAudioComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_165_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UAudioComponent*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_165_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioComponent(UAudioComponent&&); \
	NO_API UAudioComponent(const UAudioComponent&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_165_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioComponent(UAudioComponent&&); \
	NO_API UAudioComponent(const UAudioComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_162_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_165_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_165_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_165_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_165_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_165_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_165_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_165_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_165_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_165_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_165_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AudioComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAudioComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h


#define FOREACH_ENUM_EAUDIOCOMPONENTPLAYSTATE(op) \
	op(EAudioComponentPlayState::Playing) \
	op(EAudioComponentPlayState::Stopped) \
	op(EAudioComponentPlayState::Paused) \
	op(EAudioComponentPlayState::FadingIn) \
	op(EAudioComponentPlayState::FadingOut) \
	op(EAudioComponentPlayState::Count) 

enum class EAudioComponentPlayState : uint8;
template<> ENGINE_API UEnum* StaticEnum<EAudioComponentPlayState>();

#define FOREACH_ENUM_EAUDIOFADERCURVE(op) \
	op(EAudioFaderCurve::Linear) \
	op(EAudioFaderCurve::Logarithmic) \
	op(EAudioFaderCurve::SCurve) \
	op(EAudioFaderCurve::Sin) \
	op(EAudioFaderCurve::Count) 

enum class EAudioFaderCurve : uint8;
template<> ENGINE_API UEnum* StaticEnum<EAudioFaderCurve>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
