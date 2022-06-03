// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMesh;
#ifdef ENGINE_AnimationAsset_generated_h
#error "AnimationAsset.generated.h already included, missing '#pragma once' in AnimationAsset.h"
#endif
#define ENGINE_AnimationAsset_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_109_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlendSampleData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBlendSampleData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_196_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlendFilter_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBlendFilter>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_303_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMarkerSyncAnimPosition_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMarkerSyncAnimPosition>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_353_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimTickRecord_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimTickRecord>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_568_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimGroupInstance_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimGroupInstance>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_627_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRootMotionMovementParams_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRootMotionMovementParams>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_899_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationGroupReference_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimationGroupReference>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_924_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_924_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPlayLength);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_924_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPlayLength);


#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_924_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPreviewSkeletalMesh);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_924_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPreviewSkeletalMesh);


#else
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_924_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_924_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_924_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimationAsset, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_924_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationAsset(); \
	friend struct Z_Construct_UClass_UAnimationAsset_Statics; \
public: \
	DECLARE_CLASS(UAnimationAsset, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimationAsset) \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_924_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UAnimationAsset*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_924_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationAsset(); \
	friend struct Z_Construct_UClass_UAnimationAsset_Statics; \
public: \
	DECLARE_CLASS(UAnimationAsset, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimationAsset) \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_924_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UAnimationAsset*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_924_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationAsset(UAnimationAsset&&); \
	NO_API UAnimationAsset(const UAnimationAsset&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_924_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationAsset(UAnimationAsset&&); \
	NO_API UAnimationAsset(const UAnimationAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationAsset); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationAsset)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_921_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_924_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_924_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_924_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_924_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_924_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_924_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_924_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_924_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_924_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_924_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_924_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h_924_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimationAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationAsset_h


#define FOREACH_ENUM_EANIMGROUPROLE(op) \
	op(EAnimGroupRole::CanBeLeader) \
	op(EAnimGroupRole::AlwaysFollower) \
	op(EAnimGroupRole::AlwaysLeader) \
	op(EAnimGroupRole::TransitionLeader) \
	op(EAnimGroupRole::TransitionFollower) 
#define FOREACH_ENUM_EANIMSYNCGROUPSCOPE(op) \
	op(EAnimSyncGroupScope::Local) \
	op(EAnimSyncGroupScope::Component) 

enum class EAnimSyncGroupScope : uint8;
template<> ENGINE_API UEnum* StaticEnum<EAnimSyncGroupScope>();

#define FOREACH_ENUM_EANIMSYNCMETHOD(op) \
	op(EAnimSyncMethod::DoNotSync) \
	op(EAnimSyncMethod::SyncGroup) \
	op(EAnimSyncMethod::Graph) 

enum class EAnimSyncMethod : uint8;
template<> ENGINE_API UEnum* StaticEnum<EAnimSyncMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
