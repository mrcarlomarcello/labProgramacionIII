// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRigElementKey;
struct FRigControlValue;
struct FTransformNoScale;
struct FEulerTransform;
struct FRigPose;
class URigHierarchyController;
struct FRigElementWeight;
struct FRigControlSettings;
enum class ERigControlValueType : uint8;
enum class ERigElementType : uint8;
struct FRigNullElement;
struct FRigControlElement;
struct FRigBoneElement;
class URigHierarchy;
#ifdef CONTROLRIG_RigHierarchy_generated_h
#error "RigHierarchy.generated.h already included, missing '#pragma once' in RigHierarchy.h"
#endif
#define CONTROLRIG_RigHierarchy_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigTransformStackEntry_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigTransformStackEntry>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_98_SPARSE_DATA
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_98_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPreviousParent); \
	DECLARE_FUNCTION(execGetPreviousName); \
	DECLARE_FUNCTION(execGetTransformNoScaleFromControlValue); \
	DECLARE_FUNCTION(execMakeControlValueFromTransformNoScale); \
	DECLARE_FUNCTION(execGetEulerTransformFromControlValue); \
	DECLARE_FUNCTION(execMakeControlValueFromEulerTransform); \
	DECLARE_FUNCTION(execGetTransformFromControlValue); \
	DECLARE_FUNCTION(execMakeControlValueFromTransform); \
	DECLARE_FUNCTION(execGetRotatorFromControlValue); \
	DECLARE_FUNCTION(execMakeControlValueFromRotator); \
	DECLARE_FUNCTION(execGetVectorFromControlValue); \
	DECLARE_FUNCTION(execMakeControlValueFromVector); \
	DECLARE_FUNCTION(execGetVector2DFromControlValue); \
	DECLARE_FUNCTION(execMakeControlValueFromVector2D); \
	DECLARE_FUNCTION(execGetIntFromControlValue); \
	DECLARE_FUNCTION(execMakeControlValueFromInt); \
	DECLARE_FUNCTION(execGetFloatFromControlValue); \
	DECLARE_FUNCTION(execMakeControlValueFromFloat); \
	DECLARE_FUNCTION(execMakeControlValueFromBool); \
	DECLARE_FUNCTION(execSetPose_ForBlueprint); \
	DECLARE_FUNCTION(execGetPose); \
	DECLARE_FUNCTION(execGetController); \
	DECLARE_FUNCTION(execSendAutoKeyEvent); \
	DECLARE_FUNCTION(execGetAllKeys_ForBlueprint); \
	DECLARE_FUNCTION(execIsParentedTo); \
	DECLARE_FUNCTION(execSwitchToWorldSpace); \
	DECLARE_FUNCTION(execSwitchToDefaultParent); \
	DECLARE_FUNCTION(execSwitchToParent); \
	DECLARE_FUNCTION(execSetParentWeightArray); \
	DECLARE_FUNCTION(execSetParentWeight); \
	DECLARE_FUNCTION(execGetParentWeightArray); \
	DECLARE_FUNCTION(execGetParentWeight); \
	DECLARE_FUNCTION(execGetNumberOfParents); \
	DECLARE_FUNCTION(execGetFirstParent); \
	DECLARE_FUNCTION(execGetParents); \
	DECLARE_FUNCTION(execGetChildren); \
	DECLARE_FUNCTION(execGetParentTransformByIndex); \
	DECLARE_FUNCTION(execGetParentTransform); \
	DECLARE_FUNCTION(execSetControlSettingsByIndex); \
	DECLARE_FUNCTION(execSetControlSettings); \
	DECLARE_FUNCTION(execSetControlShapeTransformByIndex); \
	DECLARE_FUNCTION(execSetControlShapeTransform); \
	DECLARE_FUNCTION(execSetControlOffsetTransformByIndex); \
	DECLARE_FUNCTION(execSetControlOffsetTransform); \
	DECLARE_FUNCTION(execSetCurveValueByIndex); \
	DECLARE_FUNCTION(execSetCurveValue); \
	DECLARE_FUNCTION(execGetCurveValueByIndex); \
	DECLARE_FUNCTION(execGetCurveValue); \
	DECLARE_FUNCTION(execSetControlVisibilityByIndex); \
	DECLARE_FUNCTION(execSetControlVisibility); \
	DECLARE_FUNCTION(execSetControlValueByIndex); \
	DECLARE_FUNCTION(execSetControlValue); \
	DECLARE_FUNCTION(execGetControlValueByIndex); \
	DECLARE_FUNCTION(execGetControlValue); \
	DECLARE_FUNCTION(execGetGlobalControlShapeTransformByIndex); \
	DECLARE_FUNCTION(execGetGlobalControlShapeTransform); \
	DECLARE_FUNCTION(execGetGlobalControlOffsetTransformByIndex); \
	DECLARE_FUNCTION(execGetGlobalControlOffsetTransform); \
	DECLARE_FUNCTION(execSetGlobalTransformByIndex); \
	DECLARE_FUNCTION(execSetGlobalTransform); \
	DECLARE_FUNCTION(execGetGlobalTransformByIndex); \
	DECLARE_FUNCTION(execGetGlobalTransform); \
	DECLARE_FUNCTION(execSetLocalTransformByIndex); \
	DECLARE_FUNCTION(execSetLocalTransform); \
	DECLARE_FUNCTION(execGetLocalTransformByIndex); \
	DECLARE_FUNCTION(execGetLocalTransform); \
	DECLARE_FUNCTION(execSortKeys); \
	DECLARE_FUNCTION(execIsSelectedByIndex); \
	DECLARE_FUNCTION(execIsSelected); \
	DECLARE_FUNCTION(execGetSelectedKeys); \
	DECLARE_FUNCTION(execGetReferenceKeys); \
	DECLARE_FUNCTION(execGetRigidBodyKeys); \
	DECLARE_FUNCTION(execGetCurveKeys); \
	DECLARE_FUNCTION(execGetControlKeys); \
	DECLARE_FUNCTION(execGetNullKeys); \
	DECLARE_FUNCTION(execGetBoneKeys); \
	DECLARE_FUNCTION(execFindNull_ForBlueprintOnly); \
	DECLARE_FUNCTION(execFindControl_ForBlueprintOnly); \
	DECLARE_FUNCTION(execFindBone_ForBlueprintOnly); \
	DECLARE_FUNCTION(execGetKey); \
	DECLARE_FUNCTION(execGetIndex_ForBlueprint); \
	DECLARE_FUNCTION(execContains_ForBlueprint); \
	DECLARE_FUNCTION(execIsValidIndex); \
	DECLARE_FUNCTION(execNum); \
	DECLARE_FUNCTION(execResetCurveValues); \
	DECLARE_FUNCTION(execResetPoseToInitial); \
	DECLARE_FUNCTION(execCopyPose); \
	DECLARE_FUNCTION(execCopyHierarchy); \
	DECLARE_FUNCTION(execReset);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPreviousParent); \
	DECLARE_FUNCTION(execGetPreviousName); \
	DECLARE_FUNCTION(execGetTransformNoScaleFromControlValue); \
	DECLARE_FUNCTION(execMakeControlValueFromTransformNoScale); \
	DECLARE_FUNCTION(execGetEulerTransformFromControlValue); \
	DECLARE_FUNCTION(execMakeControlValueFromEulerTransform); \
	DECLARE_FUNCTION(execGetTransformFromControlValue); \
	DECLARE_FUNCTION(execMakeControlValueFromTransform); \
	DECLARE_FUNCTION(execGetRotatorFromControlValue); \
	DECLARE_FUNCTION(execMakeControlValueFromRotator); \
	DECLARE_FUNCTION(execGetVectorFromControlValue); \
	DECLARE_FUNCTION(execMakeControlValueFromVector); \
	DECLARE_FUNCTION(execGetVector2DFromControlValue); \
	DECLARE_FUNCTION(execMakeControlValueFromVector2D); \
	DECLARE_FUNCTION(execGetIntFromControlValue); \
	DECLARE_FUNCTION(execMakeControlValueFromInt); \
	DECLARE_FUNCTION(execGetFloatFromControlValue); \
	DECLARE_FUNCTION(execMakeControlValueFromFloat); \
	DECLARE_FUNCTION(execMakeControlValueFromBool); \
	DECLARE_FUNCTION(execSetPose_ForBlueprint); \
	DECLARE_FUNCTION(execGetPose); \
	DECLARE_FUNCTION(execGetController); \
	DECLARE_FUNCTION(execSendAutoKeyEvent); \
	DECLARE_FUNCTION(execGetAllKeys_ForBlueprint); \
	DECLARE_FUNCTION(execIsParentedTo); \
	DECLARE_FUNCTION(execSwitchToWorldSpace); \
	DECLARE_FUNCTION(execSwitchToDefaultParent); \
	DECLARE_FUNCTION(execSwitchToParent); \
	DECLARE_FUNCTION(execSetParentWeightArray); \
	DECLARE_FUNCTION(execSetParentWeight); \
	DECLARE_FUNCTION(execGetParentWeightArray); \
	DECLARE_FUNCTION(execGetParentWeight); \
	DECLARE_FUNCTION(execGetNumberOfParents); \
	DECLARE_FUNCTION(execGetFirstParent); \
	DECLARE_FUNCTION(execGetParents); \
	DECLARE_FUNCTION(execGetChildren); \
	DECLARE_FUNCTION(execGetParentTransformByIndex); \
	DECLARE_FUNCTION(execGetParentTransform); \
	DECLARE_FUNCTION(execSetControlSettingsByIndex); \
	DECLARE_FUNCTION(execSetControlSettings); \
	DECLARE_FUNCTION(execSetControlShapeTransformByIndex); \
	DECLARE_FUNCTION(execSetControlShapeTransform); \
	DECLARE_FUNCTION(execSetControlOffsetTransformByIndex); \
	DECLARE_FUNCTION(execSetControlOffsetTransform); \
	DECLARE_FUNCTION(execSetCurveValueByIndex); \
	DECLARE_FUNCTION(execSetCurveValue); \
	DECLARE_FUNCTION(execGetCurveValueByIndex); \
	DECLARE_FUNCTION(execGetCurveValue); \
	DECLARE_FUNCTION(execSetControlVisibilityByIndex); \
	DECLARE_FUNCTION(execSetControlVisibility); \
	DECLARE_FUNCTION(execSetControlValueByIndex); \
	DECLARE_FUNCTION(execSetControlValue); \
	DECLARE_FUNCTION(execGetControlValueByIndex); \
	DECLARE_FUNCTION(execGetControlValue); \
	DECLARE_FUNCTION(execGetGlobalControlShapeTransformByIndex); \
	DECLARE_FUNCTION(execGetGlobalControlShapeTransform); \
	DECLARE_FUNCTION(execGetGlobalControlOffsetTransformByIndex); \
	DECLARE_FUNCTION(execGetGlobalControlOffsetTransform); \
	DECLARE_FUNCTION(execSetGlobalTransformByIndex); \
	DECLARE_FUNCTION(execSetGlobalTransform); \
	DECLARE_FUNCTION(execGetGlobalTransformByIndex); \
	DECLARE_FUNCTION(execGetGlobalTransform); \
	DECLARE_FUNCTION(execSetLocalTransformByIndex); \
	DECLARE_FUNCTION(execSetLocalTransform); \
	DECLARE_FUNCTION(execGetLocalTransformByIndex); \
	DECLARE_FUNCTION(execGetLocalTransform); \
	DECLARE_FUNCTION(execSortKeys); \
	DECLARE_FUNCTION(execIsSelectedByIndex); \
	DECLARE_FUNCTION(execIsSelected); \
	DECLARE_FUNCTION(execGetSelectedKeys); \
	DECLARE_FUNCTION(execGetReferenceKeys); \
	DECLARE_FUNCTION(execGetRigidBodyKeys); \
	DECLARE_FUNCTION(execGetCurveKeys); \
	DECLARE_FUNCTION(execGetControlKeys); \
	DECLARE_FUNCTION(execGetNullKeys); \
	DECLARE_FUNCTION(execGetBoneKeys); \
	DECLARE_FUNCTION(execFindNull_ForBlueprintOnly); \
	DECLARE_FUNCTION(execFindControl_ForBlueprintOnly); \
	DECLARE_FUNCTION(execFindBone_ForBlueprintOnly); \
	DECLARE_FUNCTION(execGetKey); \
	DECLARE_FUNCTION(execGetIndex_ForBlueprint); \
	DECLARE_FUNCTION(execContains_ForBlueprint); \
	DECLARE_FUNCTION(execIsValidIndex); \
	DECLARE_FUNCTION(execNum); \
	DECLARE_FUNCTION(execResetCurveValues); \
	DECLARE_FUNCTION(execResetPoseToInitial); \
	DECLARE_FUNCTION(execCopyPose); \
	DECLARE_FUNCTION(execCopyHierarchy); \
	DECLARE_FUNCTION(execReset);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_98_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URigHierarchy, NO_API)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigHierarchy(); \
	friend struct Z_Construct_UClass_URigHierarchy_Statics; \
public: \
	DECLARE_CLASS(URigHierarchy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), NO_API) \
	DECLARE_SERIALIZER(URigHierarchy) \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_98_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_98_INCLASS \
private: \
	static void StaticRegisterNativesURigHierarchy(); \
	friend struct Z_Construct_UClass_URigHierarchy_Statics; \
public: \
	DECLARE_CLASS(URigHierarchy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), NO_API) \
	DECLARE_SERIALIZER(URigHierarchy) \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_98_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_98_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URigHierarchy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigHierarchy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigHierarchy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigHierarchy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigHierarchy(URigHierarchy&&); \
	NO_API URigHierarchy(const URigHierarchy&); \
public:


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_98_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigHierarchy(URigHierarchy&&); \
	NO_API URigHierarchy(const URigHierarchy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigHierarchy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigHierarchy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigHierarchy)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_95_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_98_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_98_SPARSE_DATA \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_98_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_98_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_98_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_98_SPARSE_DATA \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_98_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIG_API UClass* StaticClass<class URigHierarchy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchy_h


#define FOREACH_ENUM_ERIGTRANSFORMSTACKENTRYTYPE(op) \
	op(TransformPose) \
	op(ControlOffset) \
	op(ControlShape) \
	op(CurveValue) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
