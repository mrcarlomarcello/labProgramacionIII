// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEXTENSIONS_IAudioCodec_generated_h
#error "IAudioCodec.generated.h already included, missing '#pragma once' in IAudioCodec.h"
#endif
#define AUDIOEXTENSIONS_IAudioCodec_generated_h

#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioCodec_h_625_SPARSE_DATA
#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioCodec_h_625_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioCodec_h_625_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioCodec_h_625_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioCodecEncoderSettings(); \
	friend struct Z_Construct_UClass_UAudioCodecEncoderSettings_Statics; \
public: \
	DECLARE_CLASS(UAudioCodecEncoderSettings, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioExtensions"), NO_API) \
	DECLARE_SERIALIZER(UAudioCodecEncoderSettings)


#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioCodec_h_625_INCLASS \
private: \
	static void StaticRegisterNativesUAudioCodecEncoderSettings(); \
	friend struct Z_Construct_UClass_UAudioCodecEncoderSettings_Statics; \
public: \
	DECLARE_CLASS(UAudioCodecEncoderSettings, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioExtensions"), NO_API) \
	DECLARE_SERIALIZER(UAudioCodecEncoderSettings)


#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioCodec_h_625_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioCodecEncoderSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioCodecEncoderSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioCodecEncoderSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioCodecEncoderSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioCodecEncoderSettings(UAudioCodecEncoderSettings&&); \
	NO_API UAudioCodecEncoderSettings(const UAudioCodecEncoderSettings&); \
public:


#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioCodec_h_625_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioCodecEncoderSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioCodecEncoderSettings(UAudioCodecEncoderSettings&&); \
	NO_API UAudioCodecEncoderSettings(const UAudioCodecEncoderSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioCodecEncoderSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioCodecEncoderSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioCodecEncoderSettings)


#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioCodec_h_621_PROLOG
#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioCodec_h_625_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioCodec_h_625_SPARSE_DATA \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioCodec_h_625_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioCodec_h_625_INCLASS \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioCodec_h_625_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioCodec_h_625_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioCodec_h_625_SPARSE_DATA \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioCodec_h_625_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioCodec_h_625_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioCodec_h_625_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEXTENSIONS_API UClass* StaticClass<class UAudioCodecEncoderSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioCodec_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
