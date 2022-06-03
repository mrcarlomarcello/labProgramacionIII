// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRawAnimSequenceTrack;
#ifdef ENGINE_AnimTypes_generated_h
#error "AnimTypes.generated.h already included, missing '#pragma once' in AnimTypes.h"
#endif
#define ENGINE_AnimTypes_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_113_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPerBoneBlendWeight>();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_132_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPerBoneBlendWeights>();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_289_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimLinkableElement Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimNotifyEvent>();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_485_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimSyncMarker_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimSyncMarker>();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_546_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimNotifyTrack>();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_640_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMarkerSyncData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMarkerSyncData>();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_824_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTrackToSkeletonMap_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTrackToSkeletonMap>();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_855_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRawAnimSequenceTrack>();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_889_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_889_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetScaleKeys); \
	DECLARE_FUNCTION(execGetRotationalKeys); \
	DECLARE_FUNCTION(execGetPositionalKeys);


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_889_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetScaleKeys); \
	DECLARE_FUNCTION(execGetRotationalKeys); \
	DECLARE_FUNCTION(execGetPositionalKeys);


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_889_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURawAnimSequenceTrackExtensions(); \
	friend struct Z_Construct_UClass_URawAnimSequenceTrackExtensions_Statics; \
public: \
	DECLARE_CLASS(URawAnimSequenceTrackExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(URawAnimSequenceTrackExtensions)


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_889_INCLASS \
private: \
	static void StaticRegisterNativesURawAnimSequenceTrackExtensions(); \
	friend struct Z_Construct_UClass_URawAnimSequenceTrackExtensions_Statics; \
public: \
	DECLARE_CLASS(URawAnimSequenceTrackExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(URawAnimSequenceTrackExtensions)


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_889_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URawAnimSequenceTrackExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URawAnimSequenceTrackExtensions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URawAnimSequenceTrackExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URawAnimSequenceTrackExtensions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URawAnimSequenceTrackExtensions(URawAnimSequenceTrackExtensions&&); \
	NO_API URawAnimSequenceTrackExtensions(const URawAnimSequenceTrackExtensions&); \
public:


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_889_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URawAnimSequenceTrackExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URawAnimSequenceTrackExtensions(URawAnimSequenceTrackExtensions&&); \
	NO_API URawAnimSequenceTrackExtensions(const URawAnimSequenceTrackExtensions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URawAnimSequenceTrackExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URawAnimSequenceTrackExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URawAnimSequenceTrackExtensions)


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_886_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_889_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_889_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_889_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_889_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_889_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_889_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_889_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_889_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_889_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_889_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class URawAnimSequenceTrackExtensions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h


#define FOREACH_ENUM_EBONEAXIS(op) \
	op(BA_X) \
	op(BA_Y) \
	op(BA_Z) 
#define FOREACH_ENUM_EBONECONTROLSPACE(op) \
	op(BCS_WorldSpace) \
	op(BCS_ComponentSpace) \
	op(BCS_ParentBoneSpace) \
	op(BCS_BoneSpace) 
#define FOREACH_ENUM_EBONEROTATIONSOURCE(op) \
	op(BRS_KeepComponentSpaceRotation) \
	op(BRS_KeepLocalSpaceRotation) \
	op(BRS_CopyFromTarget) 
#define FOREACH_ENUM_EMONTAGENOTIFYTICKTYPE(op) \
	op(EMontageNotifyTickType::Queued) \
	op(EMontageNotifyTickType::BranchingPoint) 
#define FOREACH_ENUM_ENOTIFYFILTERTYPE(op) \
	op(ENotifyFilterType::NoFiltering) \
	op(ENotifyFilterType::LOD) 
#define FOREACH_ENUM_EADDITIVEANIMATIONTYPE(op) \
	op(AAT_None) \
	op(AAT_LocalSpaceBase) \
	op(AAT_RotationOffsetMeshSpace) 
#define FOREACH_ENUM_ECURVEBLENDOPTION(op) \
	op(ECurveBlendOption::Override) \
	op(ECurveBlendOption::DoNotOverride) \
	op(ECurveBlendOption::NormalizeByWeight) \
	op(ECurveBlendOption::BlendByWeight) \
	op(ECurveBlendOption::UseBasePose) \
	op(ECurveBlendOption::UseMaxValue) \
	op(ECurveBlendOption::UseMinValue) 
#define FOREACH_ENUM_EANIMINTERPOLATIONTYPE(op) \
	op(EAnimInterpolationType::Linear) \
	op(EAnimInterpolationType::Step) 

enum class EAnimInterpolationType : uint8;
template<> ENGINE_API UEnum* StaticEnum<EAnimInterpolationType>();

#define FOREACH_ENUM_EAXISOPTION(op) \
	op(EAxisOption::X) \
	op(EAxisOption::Y) \
	op(EAxisOption::Z) \
	op(EAxisOption::X_Neg) \
	op(EAxisOption::Y_Neg) \
	op(EAxisOption::Z_Neg) \
	op(EAxisOption::Custom) 
#define FOREACH_ENUM_ECOMPONENTTYPE(op) \
	op(EComponentType::None) \
	op(EComponentType::TranslationX) \
	op(EComponentType::TranslationY) \
	op(EComponentType::TranslationZ) \
	op(EComponentType::RotationX) \
	op(EComponentType::RotationY) \
	op(EComponentType::RotationZ) \
	op(EComponentType::Scale) \
	op(EComponentType::ScaleX) \
	op(EComponentType::ScaleY) \
	op(EComponentType::ScaleZ) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
