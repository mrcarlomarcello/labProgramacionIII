// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMeterResults;
#ifdef AUDIOSYNESTHESIA_Meter_generated_h
#error "Meter.generated.h already included, missing '#pragma once' in Meter.h"
#endif
#define AUDIOSYNESTHESIA_Meter_generated_h

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_24_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_24_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeterSettings(); \
	friend struct Z_Construct_UClass_UMeterSettings_Statics; \
public: \
	DECLARE_CLASS(UMeterSettings, UAudioSynesthesiaSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), NO_API) \
	DECLARE_SERIALIZER(UMeterSettings)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUMeterSettings(); \
	friend struct Z_Construct_UClass_UMeterSettings_Statics; \
public: \
	DECLARE_CLASS(UMeterSettings, UAudioSynesthesiaSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), NO_API) \
	DECLARE_SERIALIZER(UMeterSettings)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeterSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeterSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeterSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeterSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeterSettings(UMeterSettings&&); \
	NO_API UMeterSettings(const UMeterSettings&); \
public:


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeterSettings(UMeterSettings&&); \
	NO_API UMeterSettings(const UMeterSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeterSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeterSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMeterSettings)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_24_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_24_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_24_INCLASS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_24_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOSYNESTHESIA_API UClass* StaticClass<class UMeterSettings>();

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeterResults_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUDIOSYNESTHESIA_API UScriptStruct* StaticStruct<struct FMeterResults>();

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_91_DELEGATE \
struct _Script_AudioSynesthesia_eventOnOverallMeterResults_Parms \
{ \
	TArray<FMeterResults> MeterResults; \
}; \
static inline void FOnOverallMeterResults_DelegateWrapper(const FMulticastScriptDelegate& OnOverallMeterResults, TArray<FMeterResults> const& MeterResults) \
{ \
	_Script_AudioSynesthesia_eventOnOverallMeterResults_Parms Parms; \
	Parms.MeterResults=MeterResults; \
	OnOverallMeterResults.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_97_DELEGATE \
struct _Script_AudioSynesthesia_eventOnLatestOverallMeterResults_Parms \
{ \
	FMeterResults LatestOverallMeterResults; \
}; \
static inline void FOnLatestOverallMeterResults_DelegateWrapper(const FMulticastScriptDelegate& OnLatestOverallMeterResults, FMeterResults const& LatestOverallMeterResults) \
{ \
	_Script_AudioSynesthesia_eventOnLatestOverallMeterResults_Parms Parms; \
	Parms.LatestOverallMeterResults=LatestOverallMeterResults; \
	OnLatestOverallMeterResults.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_103_DELEGATE \
struct _Script_AudioSynesthesia_eventOnPerChannelMeterResults_Parms \
{ \
	int32 ChannelIndex; \
	TArray<FMeterResults> MeterResults; \
}; \
static inline void FOnPerChannelMeterResults_DelegateWrapper(const FMulticastScriptDelegate& OnPerChannelMeterResults, int32 ChannelIndex, TArray<FMeterResults> const& MeterResults) \
{ \
	_Script_AudioSynesthesia_eventOnPerChannelMeterResults_Parms Parms; \
	Parms.ChannelIndex=ChannelIndex; \
	Parms.MeterResults=MeterResults; \
	OnPerChannelMeterResults.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_109_DELEGATE \
struct _Script_AudioSynesthesia_eventOnLatestPerChannelMeterResults_Parms \
{ \
	int32 ChannelIndex; \
	FMeterResults LatestMeterResults; \
}; \
static inline void FOnLatestPerChannelMeterResults_DelegateWrapper(const FMulticastScriptDelegate& OnLatestPerChannelMeterResults, int32 ChannelIndex, FMeterResults const& LatestMeterResults) \
{ \
	_Script_AudioSynesthesia_eventOnLatestPerChannelMeterResults_Parms Parms; \
	Parms.ChannelIndex=ChannelIndex; \
	Parms.LatestMeterResults=LatestMeterResults; \
	OnLatestPerChannelMeterResults.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_122_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_122_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_122_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_122_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeterAnalyzer(); \
	friend struct Z_Construct_UClass_UMeterAnalyzer_Statics; \
public: \
	DECLARE_CLASS(UMeterAnalyzer, UAudioAnalyzer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), NO_API) \
	DECLARE_SERIALIZER(UMeterAnalyzer)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_122_INCLASS \
private: \
	static void StaticRegisterNativesUMeterAnalyzer(); \
	friend struct Z_Construct_UClass_UMeterAnalyzer_Statics; \
public: \
	DECLARE_CLASS(UMeterAnalyzer, UAudioAnalyzer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), NO_API) \
	DECLARE_SERIALIZER(UMeterAnalyzer)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_122_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeterAnalyzer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeterAnalyzer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeterAnalyzer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeterAnalyzer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeterAnalyzer(UMeterAnalyzer&&); \
	NO_API UMeterAnalyzer(const UMeterAnalyzer&); \
public:


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_122_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeterAnalyzer(UMeterAnalyzer&&); \
	NO_API UMeterAnalyzer(const UMeterAnalyzer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeterAnalyzer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeterAnalyzer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMeterAnalyzer)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_119_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_122_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_122_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_122_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_122_INCLASS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_122_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_122_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_122_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_122_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_122_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOSYNESTHESIA_API UClass* StaticClass<class UMeterAnalyzer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h


#define FOREACH_ENUM_EMETERPEAKTYPE(op) \
	op(EMeterPeakType::MeanSquared) \
	op(EMeterPeakType::RootMeanSquared) \
	op(EMeterPeakType::Peak) \
	op(EMeterPeakType::Count) 

enum class EMeterPeakType : uint8;
template<> AUDIOSYNESTHESIA_API UEnum* StaticEnum<EMeterPeakType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
