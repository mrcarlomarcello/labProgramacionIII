// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MotionTrajectoryTypes_generated_h
#error "MotionTrajectoryTypes.generated.h already included, missing '#pragma once' in MotionTrajectoryTypes.h"
#endif
#define ENGINE_MotionTrajectoryTypes_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Animation_MotionTrajectoryTypes_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTrajectorySample_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTrajectorySample>();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_MotionTrajectoryTypes_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTrajectorySampleRange_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTrajectorySampleRange>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Animation_MotionTrajectoryTypes_h


#define FOREACH_ENUM_ETRAJECTORYSAMPLEDOMAIN(op) \
	op(ETrajectorySampleDomain::None) \
	op(ETrajectorySampleDomain::Time) \
	op(ETrajectorySampleDomain::Distance) 

enum class ETrajectorySampleDomain : uint8;
template<> ENGINE_API UEnum* StaticEnum<ETrajectorySampleDomain>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
