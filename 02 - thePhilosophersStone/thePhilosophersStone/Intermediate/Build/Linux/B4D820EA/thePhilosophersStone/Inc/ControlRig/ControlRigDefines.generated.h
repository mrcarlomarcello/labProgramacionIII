// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_ControlRigDefines_generated_h
#error "ControlRigDefines.generated.h already included, missing '#pragma once' in ControlRigDefines.h"
#endif
#define CONTROLRIG_ControlRigDefines_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigDefines_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FControlRigExecuteContext_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMExecuteContext Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FControlRigExecuteContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigDefines_h


#define FOREACH_ENUM_ETRANSFORMSPACEMODE(op) \
	op(ETransformSpaceMode::LocalSpace) \
	op(ETransformSpaceMode::GlobalSpace) \
	op(ETransformSpaceMode::BaseSpace) \
	op(ETransformSpaceMode::BaseJoint) \
	op(ETransformSpaceMode::Max) 

enum class ETransformSpaceMode : uint8;
template<> CONTROLRIG_API UEnum* StaticEnum<ETransformSpaceMode>();

#define FOREACH_ENUM_ECONTROLRIGCLAMPSPATIALMODE(op) \
	op(EControlRigClampSpatialMode::Plane) \
	op(EControlRigClampSpatialMode::Cylinder) \
	op(EControlRigClampSpatialMode::Sphere) 
#define FOREACH_ENUM_ETRANSFORMGETTERTYPE(op) \
	op(ETransformGetterType::Initial) \
	op(ETransformGetterType::Current) \
	op(ETransformGetterType::Max) 

enum class ETransformGetterType : uint8;
template<> CONTROLRIG_API UEnum* StaticEnum<ETransformGetterType>();

#define FOREACH_ENUM_EBONEGETTERSETTERMODE(op) \
	op(EBoneGetterSetterMode::LocalSpace) \
	op(EBoneGetterSetterMode::GlobalSpace) \
	op(EBoneGetterSetterMode::Max) 

enum class EBoneGetterSetterMode : uint8;
template<> CONTROLRIG_API UEnum* StaticEnum<EBoneGetterSetterMode>();

#define FOREACH_ENUM_ERIGEXECUTIONTYPE(op) \
	op(ERigExecutionType::Runtime) \
	op(ERigExecutionType::Editing) \
	op(ERigExecutionType::Max) 

enum class ERigExecutionType : uint8;
template<> CONTROLRIG_API UEnum* StaticEnum<ERigExecutionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
