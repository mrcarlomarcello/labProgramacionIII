// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequence;
struct FBoneAnimationTrack;
struct FFrameRate;
#ifdef ENGINE_AnimDataModel_generated_h
#error "AnimDataModel.generated.h already included, missing '#pragma once' in AnimDataModel.h"
#endif
#define ENGINE_AnimDataModel_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBoneAnimationTrack>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationCurveData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimationCurveData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimatedBoneAttribute>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_77_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_77_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAnimationSequence); \
	DECLARE_FUNCTION(execGetNumberOfFloatCurves); \
	DECLARE_FUNCTION(execGetNumberOfTransformCurves); \
	DECLARE_FUNCTION(execGetBoneTrackNames); \
	DECLARE_FUNCTION(execGetNumBoneTracks); \
	DECLARE_FUNCTION(execIsValidBoneTrackIndex); \
	DECLARE_FUNCTION(execGetBoneTrackIndexByName); \
	DECLARE_FUNCTION(execGetBoneTrackIndex); \
	DECLARE_FUNCTION(execGetBoneTrackByName); \
	DECLARE_FUNCTION(execGetBoneTrackByIndex); \
	DECLARE_FUNCTION(execGetBoneAnimationTracks); \
	DECLARE_FUNCTION(execGetFrameRate); \
	DECLARE_FUNCTION(execGetNumberOfKeys); \
	DECLARE_FUNCTION(execGetNumberOfFrames); \
	DECLARE_FUNCTION(execGetPlayLength);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAnimationSequence); \
	DECLARE_FUNCTION(execGetNumberOfFloatCurves); \
	DECLARE_FUNCTION(execGetNumberOfTransformCurves); \
	DECLARE_FUNCTION(execGetBoneTrackNames); \
	DECLARE_FUNCTION(execGetNumBoneTracks); \
	DECLARE_FUNCTION(execIsValidBoneTrackIndex); \
	DECLARE_FUNCTION(execGetBoneTrackIndexByName); \
	DECLARE_FUNCTION(execGetBoneTrackIndex); \
	DECLARE_FUNCTION(execGetBoneTrackByName); \
	DECLARE_FUNCTION(execGetBoneTrackByIndex); \
	DECLARE_FUNCTION(execGetBoneAnimationTracks); \
	DECLARE_FUNCTION(execGetFrameRate); \
	DECLARE_FUNCTION(execGetNumberOfKeys); \
	DECLARE_FUNCTION(execGetNumberOfFrames); \
	DECLARE_FUNCTION(execGetPlayLength);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimDataModel(); \
	friend struct Z_Construct_UClass_UAnimDataModel_Statics; \
public: \
	DECLARE_CLASS(UAnimDataModel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimDataModel)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUAnimDataModel(); \
	friend struct Z_Construct_UClass_UAnimDataModel_Statics; \
public: \
	DECLARE_CLASS(UAnimDataModel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimDataModel)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimDataModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimDataModel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimDataModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimDataModel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimDataModel(UAnimDataModel&&); \
	NO_API UAnimDataModel(const UAnimDataModel&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_77_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimDataModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimDataModel(UAnimDataModel&&); \
	NO_API UAnimDataModel(const UAnimDataModel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimDataModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimDataModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimDataModel)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_74_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_77_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_77_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_77_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_77_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_77_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimDataModel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
