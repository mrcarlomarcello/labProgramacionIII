// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTapDelayInfo;
struct FSubmixEffectTapDelaySettings;
#ifdef SYNTHESIS_SubmixEffectTapDelay_generated_h
#error "SubmixEffectTapDelay.generated.h already included, missing '#pragma once' in SubmixEffectTapDelay.h"
#endif
#define SYNTHESIS_SubmixEffectTapDelay_generated_h

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTapDelayInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SYNTHESIS_API UScriptStruct* StaticStruct<struct FTapDelayInfo>();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SYNTHESIS_API UScriptStruct* StaticStruct<struct FSubmixEffectTapDelaySettings>();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_179_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_179_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetInterpolationTime); \
	DECLARE_FUNCTION(execGetMaxDelayInMilliseconds); \
	DECLARE_FUNCTION(execGetTapIds); \
	DECLARE_FUNCTION(execGetTap); \
	DECLARE_FUNCTION(execSetTap); \
	DECLARE_FUNCTION(execRemoveTap); \
	DECLARE_FUNCTION(execAddTap); \
	DECLARE_FUNCTION(execSetSettings);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_179_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetInterpolationTime); \
	DECLARE_FUNCTION(execGetMaxDelayInMilliseconds); \
	DECLARE_FUNCTION(execGetTapIds); \
	DECLARE_FUNCTION(execGetTap); \
	DECLARE_FUNCTION(execSetTap); \
	DECLARE_FUNCTION(execRemoveTap); \
	DECLARE_FUNCTION(execAddTap); \
	DECLARE_FUNCTION(execSetSettings);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_179_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubmixEffectTapDelayPreset(); \
	friend struct Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics; \
public: \
	DECLARE_CLASS(USubmixEffectTapDelayPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USubmixEffectTapDelayPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_179_INCLASS \
private: \
	static void StaticRegisterNativesUSubmixEffectTapDelayPreset(); \
	friend struct Z_Construct_UClass_USubmixEffectTapDelayPreset_Statics; \
public: \
	DECLARE_CLASS(USubmixEffectTapDelayPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USubmixEffectTapDelayPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_179_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubmixEffectTapDelayPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectTapDelayPreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubmixEffectTapDelayPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectTapDelayPreset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubmixEffectTapDelayPreset(USubmixEffectTapDelayPreset&&); \
	NO_API USubmixEffectTapDelayPreset(const USubmixEffectTapDelayPreset&); \
public:


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_179_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubmixEffectTapDelayPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubmixEffectTapDelayPreset(USubmixEffectTapDelayPreset&&); \
	NO_API USubmixEffectTapDelayPreset(const USubmixEffectTapDelayPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubmixEffectTapDelayPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectTapDelayPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectTapDelayPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_176_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_179_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_179_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_179_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_179_INCLASS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_179_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_179_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_179_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_179_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_179_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h_179_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SYNTHESIS_API UClass* StaticClass<class USubmixEffectTapDelayPreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectTapDelay_h


#define FOREACH_ENUM_ETAPLINEMODE(op) \
	op(ETapLineMode::SendToChannel) \
	op(ETapLineMode::Panning) \
	op(ETapLineMode::Disabled) 

enum class ETapLineMode : uint8;
template<> SYNTHESIS_API UEnum* StaticEnum<ETapLineMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
