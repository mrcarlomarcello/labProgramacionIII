// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_ControlRigGizmoActor_generated_h
#error "ControlRigGizmoActor.generated.h already included, missing '#pragma once' in ControlRigGizmoActor.h"
#endif
#define CONTROLRIG_ControlRigGizmoActor_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FControlShapeActorCreationParam_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FControlShapeActorCreationParam>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_51_SPARSE_DATA
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_51_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGlobalTransform); \
	DECLARE_FUNCTION(execSetGlobalTransform); \
	DECLARE_FUNCTION(execIsHovered); \
	DECLARE_FUNCTION(execSetHovered); \
	DECLARE_FUNCTION(execSetSelectable); \
	DECLARE_FUNCTION(execIsSelectedInEditor); \
	DECLARE_FUNCTION(execSetSelected); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execSetEnabled);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGlobalTransform); \
	DECLARE_FUNCTION(execSetGlobalTransform); \
	DECLARE_FUNCTION(execIsHovered); \
	DECLARE_FUNCTION(execSetHovered); \
	DECLARE_FUNCTION(execSetSelectable); \
	DECLARE_FUNCTION(execIsSelectedInEditor); \
	DECLARE_FUNCTION(execSetSelected); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execSetEnabled);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_51_EVENT_PARMS \
	struct ControlRigShapeActor_eventOnEnabledChanged_Parms \
	{ \
		bool bIsEnabled; \
	}; \
	struct ControlRigShapeActor_eventOnHoveredChanged_Parms \
	{ \
		bool bIsSelected; \
	}; \
	struct ControlRigShapeActor_eventOnManipulatingChanged_Parms \
	{ \
		bool bIsManipulating; \
	}; \
	struct ControlRigShapeActor_eventOnSelectionChanged_Parms \
	{ \
		bool bIsSelected; \
	}; \
	struct ControlRigShapeActor_eventOnTransformChanged_Parms \
	{ \
		FTransform NewTransform; \
	};


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_51_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAControlRigShapeActor(); \
	friend struct Z_Construct_UClass_AControlRigShapeActor_Statics; \
public: \
	DECLARE_CLASS(AControlRigShapeActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ControlRig"), NO_API) \
	DECLARE_SERIALIZER(AControlRigShapeActor)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_51_INCLASS \
private: \
	static void StaticRegisterNativesAControlRigShapeActor(); \
	friend struct Z_Construct_UClass_AControlRigShapeActor_Statics; \
public: \
	DECLARE_CLASS(AControlRigShapeActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ControlRig"), NO_API) \
	DECLARE_SERIALIZER(AControlRigShapeActor)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AControlRigShapeActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AControlRigShapeActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AControlRigShapeActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AControlRigShapeActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AControlRigShapeActor(AControlRigShapeActor&&); \
	NO_API AControlRigShapeActor(const AControlRigShapeActor&); \
public:


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AControlRigShapeActor(AControlRigShapeActor&&); \
	NO_API AControlRigShapeActor(const AControlRigShapeActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AControlRigShapeActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AControlRigShapeActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AControlRigShapeActor)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_48_PROLOG \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_51_EVENT_PARMS


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_51_SPARSE_DATA \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_51_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_51_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_51_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_51_SPARSE_DATA \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_51_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIG_API UClass* StaticClass<class AControlRigShapeActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigGizmoActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
