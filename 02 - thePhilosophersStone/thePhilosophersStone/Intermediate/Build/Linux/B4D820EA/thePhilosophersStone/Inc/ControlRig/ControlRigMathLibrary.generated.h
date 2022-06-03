// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_ControlRigMathLibrary_generated_h
#error "ControlRigMathLibrary.generated.h already included, missing '#pragma once' in ControlRigMathLibrary.h"
#endif
#define CONTROLRIG_ControlRigMathLibrary_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_ControlRigMathLibrary_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCRFourPointBezier_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FCRFourPointBezier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_ControlRigMathLibrary_h


#define FOREACH_ENUM_ECONTROLRIGANIMEASINGTYPE(op) \
	op(EControlRigAnimEasingType::Linear) \
	op(EControlRigAnimEasingType::QuadraticEaseIn) \
	op(EControlRigAnimEasingType::QuadraticEaseOut) \
	op(EControlRigAnimEasingType::QuadraticEaseInOut) \
	op(EControlRigAnimEasingType::CubicEaseIn) \
	op(EControlRigAnimEasingType::CubicEaseOut) \
	op(EControlRigAnimEasingType::CubicEaseInOut) \
	op(EControlRigAnimEasingType::QuarticEaseIn) \
	op(EControlRigAnimEasingType::QuarticEaseOut) \
	op(EControlRigAnimEasingType::QuarticEaseInOut) \
	op(EControlRigAnimEasingType::QuinticEaseIn) \
	op(EControlRigAnimEasingType::QuinticEaseOut) \
	op(EControlRigAnimEasingType::QuinticEaseInOut) \
	op(EControlRigAnimEasingType::SineEaseIn) \
	op(EControlRigAnimEasingType::SineEaseOut) \
	op(EControlRigAnimEasingType::SineEaseInOut) \
	op(EControlRigAnimEasingType::CircularEaseIn) \
	op(EControlRigAnimEasingType::CircularEaseOut) \
	op(EControlRigAnimEasingType::CircularEaseInOut) \
	op(EControlRigAnimEasingType::ExponentialEaseIn) \
	op(EControlRigAnimEasingType::ExponentialEaseOut) \
	op(EControlRigAnimEasingType::ExponentialEaseInOut) \
	op(EControlRigAnimEasingType::ElasticEaseIn) \
	op(EControlRigAnimEasingType::ElasticEaseOut) \
	op(EControlRigAnimEasingType::ElasticEaseInOut) \
	op(EControlRigAnimEasingType::BackEaseIn) \
	op(EControlRigAnimEasingType::BackEaseOut) \
	op(EControlRigAnimEasingType::BackEaseInOut) \
	op(EControlRigAnimEasingType::BounceEaseIn) \
	op(EControlRigAnimEasingType::BounceEaseOut) \
	op(EControlRigAnimEasingType::BounceEaseInOut) 

enum class EControlRigAnimEasingType : uint8;
template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigAnimEasingType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
