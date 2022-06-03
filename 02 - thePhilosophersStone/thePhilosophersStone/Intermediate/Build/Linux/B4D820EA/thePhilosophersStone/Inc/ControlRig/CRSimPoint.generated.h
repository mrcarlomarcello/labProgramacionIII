// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_CRSimPoint_generated_h
#error "CRSimPoint.generated.h already included, missing '#pragma once' in CRSimPoint.h"
#endif
#define CONTROLRIG_CRSimPoint_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPoint_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCRSimPoint_Statics; \
	CONTROLRIG_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FCRSimPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPoint_h


#define FOREACH_ENUM_ECRSIMPOINTINTEGRATETYPE(op) \
	op(ECRSimPointIntegrateType::Verlet) \
	op(ECRSimPointIntegrateType::SemiExplicitEuler) 

enum class ECRSimPointIntegrateType : uint8;
template<> CONTROLRIG_API UEnum* StaticEnum<ECRSimPointIntegrateType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
