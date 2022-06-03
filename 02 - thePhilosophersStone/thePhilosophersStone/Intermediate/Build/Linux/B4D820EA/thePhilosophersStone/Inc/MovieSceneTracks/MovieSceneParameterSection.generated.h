// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFrameNumber;
struct FLinearColor;
#ifdef MOVIESCENETRACKS_MovieSceneParameterSection_generated_h
#error "MovieSceneParameterSection.generated.h already included, missing '#pragma once' in MovieSceneParameterSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneParameterSection_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_139_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoolParameterNameAndCurve_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FBoolParameterNameAndCurve>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_162_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FScalarParameterNameAndCurve>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_185_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FVector2DParameterNameAndCurves>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_214_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FVectorParameterNameAndCurves>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_246_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FColorParameterNameAndCurves_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FColorParameterNameAndCurves>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_281_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTransformParameterNameAndCurves_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FTransformParameterNameAndCurves>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_312_SPARSE_DATA
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_312_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetParameterNames); \
	DECLARE_FUNCTION(execRemoveTransformParameter); \
	DECLARE_FUNCTION(execRemoveColorParameter); \
	DECLARE_FUNCTION(execRemoveVectorParameter); \
	DECLARE_FUNCTION(execRemoveVector2DParameter); \
	DECLARE_FUNCTION(execRemoveBoolParameter); \
	DECLARE_FUNCTION(execRemoveScalarParameter); \
	DECLARE_FUNCTION(execAddTransformParameterKey); \
	DECLARE_FUNCTION(execAddColorParameterKey); \
	DECLARE_FUNCTION(execAddVectorParameterKey); \
	DECLARE_FUNCTION(execAddVector2DParameterKey); \
	DECLARE_FUNCTION(execAddBoolParameterKey); \
	DECLARE_FUNCTION(execAddScalarParameterKey);


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_312_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetParameterNames); \
	DECLARE_FUNCTION(execRemoveTransformParameter); \
	DECLARE_FUNCTION(execRemoveColorParameter); \
	DECLARE_FUNCTION(execRemoveVectorParameter); \
	DECLARE_FUNCTION(execRemoveVector2DParameter); \
	DECLARE_FUNCTION(execRemoveBoolParameter); \
	DECLARE_FUNCTION(execRemoveScalarParameter); \
	DECLARE_FUNCTION(execAddTransformParameterKey); \
	DECLARE_FUNCTION(execAddColorParameterKey); \
	DECLARE_FUNCTION(execAddVectorParameterKey); \
	DECLARE_FUNCTION(execAddVector2DParameterKey); \
	DECLARE_FUNCTION(execAddBoolParameterKey); \
	DECLARE_FUNCTION(execAddScalarParameterKey);


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_312_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneParameterSection, NO_API)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_312_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneParameterSection(); \
	friend struct Z_Construct_UClass_UMovieSceneParameterSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneParameterSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneParameterSection) \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_312_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_312_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneParameterSection(); \
	friend struct Z_Construct_UClass_UMovieSceneParameterSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneParameterSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneParameterSection) \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_312_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_312_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneParameterSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneParameterSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneParameterSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneParameterSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneParameterSection(UMovieSceneParameterSection&&); \
	NO_API UMovieSceneParameterSection(const UMovieSceneParameterSection&); \
public:


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_312_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneParameterSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneParameterSection(UMovieSceneParameterSection&&); \
	NO_API UMovieSceneParameterSection(const UMovieSceneParameterSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneParameterSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneParameterSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneParameterSection)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_308_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_312_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_312_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_312_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_312_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_312_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_312_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_312_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_312_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_312_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h_312_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieSceneParameterSection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneParameterSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneParameterSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
