// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FQuartzTransportTimeStamp;
enum class EQuartzCommandQuantization : uint8;
class UQuartzClockHandle;
struct FQuartzClockSettings;
#ifdef AUDIOMIXER_QuartzSubsystem_generated_h
#error "QuartzSubsystem.generated.h already included, missing '#pragma once' in QuartzSubsystem.h"
#endif
#define AUDIOMIXER_QuartzSubsystem_generated_h

#define FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_QuartzSubsystem_h_39_SPARSE_DATA
#define FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_QuartzSubsystem_h_39_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRoundTripMaxLatency); \
	DECLARE_FUNCTION(execGetRoundTripMinLatency); \
	DECLARE_FUNCTION(execGetRoundTripAverageLatency); \
	DECLARE_FUNCTION(execGetAudioRenderThreadToGameThreadMaxLatency); \
	DECLARE_FUNCTION(execGetAudioRenderThreadToGameThreadMinLatency); \
	DECLARE_FUNCTION(execGetAudioRenderThreadToGameThreadAverageLatency); \
	DECLARE_FUNCTION(execGetGameThreadToAudioRenderThreadMaxLatency); \
	DECLARE_FUNCTION(execGetGameThreadToAudioRenderThreadMinLatency); \
	DECLARE_FUNCTION(execGetGameThreadToAudioRenderThreadAverageLatency); \
	DECLARE_FUNCTION(execGetEstimatedClockRunTime); \
	DECLARE_FUNCTION(execGetCurrentClockTimestamp); \
	DECLARE_FUNCTION(execGetDurationOfQuantizationTypeInSeconds); \
	DECLARE_FUNCTION(execIsClockRunning); \
	DECLARE_FUNCTION(execDoesClockExist); \
	DECLARE_FUNCTION(execGetHandleForClock); \
	DECLARE_FUNCTION(execDeleteClockByHandle); \
	DECLARE_FUNCTION(execDeleteClockByName); \
	DECLARE_FUNCTION(execCreateNewClock); \
	DECLARE_FUNCTION(execIsQuartzEnabled);


#define FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_QuartzSubsystem_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRoundTripMaxLatency); \
	DECLARE_FUNCTION(execGetRoundTripMinLatency); \
	DECLARE_FUNCTION(execGetRoundTripAverageLatency); \
	DECLARE_FUNCTION(execGetAudioRenderThreadToGameThreadMaxLatency); \
	DECLARE_FUNCTION(execGetAudioRenderThreadToGameThreadMinLatency); \
	DECLARE_FUNCTION(execGetAudioRenderThreadToGameThreadAverageLatency); \
	DECLARE_FUNCTION(execGetGameThreadToAudioRenderThreadMaxLatency); \
	DECLARE_FUNCTION(execGetGameThreadToAudioRenderThreadMinLatency); \
	DECLARE_FUNCTION(execGetGameThreadToAudioRenderThreadAverageLatency); \
	DECLARE_FUNCTION(execGetEstimatedClockRunTime); \
	DECLARE_FUNCTION(execGetCurrentClockTimestamp); \
	DECLARE_FUNCTION(execGetDurationOfQuantizationTypeInSeconds); \
	DECLARE_FUNCTION(execIsClockRunning); \
	DECLARE_FUNCTION(execDoesClockExist); \
	DECLARE_FUNCTION(execGetHandleForClock); \
	DECLARE_FUNCTION(execDeleteClockByHandle); \
	DECLARE_FUNCTION(execDeleteClockByName); \
	DECLARE_FUNCTION(execCreateNewClock); \
	DECLARE_FUNCTION(execIsQuartzEnabled);


#define FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_QuartzSubsystem_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuartzSubsystem(); \
	friend struct Z_Construct_UClass_UQuartzSubsystem_Statics; \
public: \
	DECLARE_CLASS(UQuartzSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(UQuartzSubsystem)


#define FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_QuartzSubsystem_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUQuartzSubsystem(); \
	friend struct Z_Construct_UClass_UQuartzSubsystem_Statics; \
public: \
	DECLARE_CLASS(UQuartzSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(UQuartzSubsystem)


#define FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_QuartzSubsystem_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuartzSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuartzSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuartzSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuartzSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuartzSubsystem(UQuartzSubsystem&&); \
	NO_API UQuartzSubsystem(const UQuartzSubsystem&); \
public:


#define FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_QuartzSubsystem_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuartzSubsystem(UQuartzSubsystem&&); \
	NO_API UQuartzSubsystem(const UQuartzSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuartzSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuartzSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuartzSubsystem)


#define FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_QuartzSubsystem_h_36_PROLOG
#define FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_QuartzSubsystem_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_QuartzSubsystem_h_39_SPARSE_DATA \
	FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_QuartzSubsystem_h_39_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_QuartzSubsystem_h_39_INCLASS \
	FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_QuartzSubsystem_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_QuartzSubsystem_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_QuartzSubsystem_h_39_SPARSE_DATA \
	FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_QuartzSubsystem_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_QuartzSubsystem_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_QuartzSubsystem_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOMIXER_API UClass* StaticClass<class UQuartzSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_QuartzSubsystem_h


#define FOREACH_ENUM_EQUARZTCLOCKMANAGERTYPE(op) \
	op(EQuarztClockManagerType::AudioEngine) \
	op(EQuarztClockManagerType::QuartzSubsystem) \
	op(EQuarztClockManagerType::Count) 

enum class EQuarztClockManagerType : uint8;
template<> AUDIOMIXER_API UEnum* StaticEnum<EQuarztClockManagerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
