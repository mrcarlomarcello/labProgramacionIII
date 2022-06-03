// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieSceneSequencePlayer;
class USceneComponent;
struct FFrameTime;
class UMovieSceneAsyncAction_SequencePrediction;
#ifdef MOVIESCENETRACKS_MovieScenePredictionSystem_generated_h
#error "MovieScenePredictionSystem.generated.h already included, missing '#pragma once' in MovieScenePredictionSystem.h"
#endif
#define MOVIESCENETRACKS_MovieScenePredictionSystem_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_35_DELEGATE \
struct _Script_MovieSceneTracks_eventMovieSceneActorPredictionResult_Parms \
{ \
	FTransform PredictedTransform; \
}; \
static inline void FMovieSceneActorPredictionResult_DelegateWrapper(const FMulticastScriptDelegate& MovieSceneActorPredictionResult, FTransform PredictedTransform) \
{ \
	_Script_MovieSceneTracks_eventMovieSceneActorPredictionResult_Parms Parms; \
	Parms.PredictedTransform=PredictedTransform; \
	MovieSceneActorPredictionResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_36_DELEGATE \
static inline void FMovieSceneActorPredictionFailure_DelegateWrapper(const FMulticastScriptDelegate& MovieSceneActorPredictionFailure) \
{ \
	MovieSceneActorPredictionFailure.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_44_SPARSE_DATA
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_44_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPredictLocalTransformAtFrame); \
	DECLARE_FUNCTION(execPredictLocalTransformAtTime); \
	DECLARE_FUNCTION(execPredictWorldTransformAtFrame); \
	DECLARE_FUNCTION(execPredictWorldTransformAtTime);


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPredictLocalTransformAtFrame); \
	DECLARE_FUNCTION(execPredictLocalTransformAtTime); \
	DECLARE_FUNCTION(execPredictWorldTransformAtFrame); \
	DECLARE_FUNCTION(execPredictWorldTransformAtTime);


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneAsyncAction_SequencePrediction(); \
	friend struct Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneAsyncAction_SequencePrediction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneAsyncAction_SequencePrediction)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneAsyncAction_SequencePrediction(); \
	friend struct Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneAsyncAction_SequencePrediction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneAsyncAction_SequencePrediction)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneAsyncAction_SequencePrediction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAsyncAction_SequencePrediction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneAsyncAction_SequencePrediction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAsyncAction_SequencePrediction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneAsyncAction_SequencePrediction(UMovieSceneAsyncAction_SequencePrediction&&); \
	NO_API UMovieSceneAsyncAction_SequencePrediction(const UMovieSceneAsyncAction_SequencePrediction&); \
public:


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneAsyncAction_SequencePrediction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneAsyncAction_SequencePrediction(UMovieSceneAsyncAction_SequencePrediction&&); \
	NO_API UMovieSceneAsyncAction_SequencePrediction(const UMovieSceneAsyncAction_SequencePrediction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneAsyncAction_SequencePrediction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAsyncAction_SequencePrediction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAsyncAction_SequencePrediction)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_41_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_44_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_44_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_44_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_44_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneAsyncAction_SequencePrediction>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_182_SPARSE_DATA
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_182_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_182_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_182_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieScenePredictionSystem(); \
	friend struct Z_Construct_UClass_UMovieScenePredictionSystem_Statics; \
public: \
	DECLARE_CLASS(UMovieScenePredictionSystem, UMovieSceneEntitySystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieScenePredictionSystem)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_182_INCLASS \
private: \
	static void StaticRegisterNativesUMovieScenePredictionSystem(); \
	friend struct Z_Construct_UClass_UMovieScenePredictionSystem_Statics; \
public: \
	DECLARE_CLASS(UMovieScenePredictionSystem, UMovieSceneEntitySystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieScenePredictionSystem)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_182_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieScenePredictionSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScenePredictionSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieScenePredictionSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScenePredictionSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieScenePredictionSystem(UMovieScenePredictionSystem&&); \
	MOVIESCENETRACKS_API UMovieScenePredictionSystem(const UMovieScenePredictionSystem&); \
public:


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_182_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieScenePredictionSystem(UMovieScenePredictionSystem&&); \
	MOVIESCENETRACKS_API UMovieScenePredictionSystem(const UMovieScenePredictionSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieScenePredictionSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScenePredictionSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScenePredictionSystem)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_177_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_182_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_182_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_182_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_182_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_182_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_182_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_182_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_182_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_182_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_182_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieScenePredictionSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
