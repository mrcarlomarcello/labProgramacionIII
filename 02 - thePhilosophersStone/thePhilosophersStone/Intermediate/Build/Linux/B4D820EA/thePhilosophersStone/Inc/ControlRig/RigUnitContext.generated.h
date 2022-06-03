// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnitContext_generated_h
#error "RigUnitContext.generated.h already included, missing '#pragma once' in RigUnitContext.h"
#endif
#define CONTROLRIG_RigUnitContext_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h


#define FOREACH_ENUM_ECONTROLRIGSTATE(op) \
	op(EControlRigState::Init) \
	op(EControlRigState::Update) \
	op(EControlRigState::Invalid) 

enum class EControlRigState : uint8;
template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
