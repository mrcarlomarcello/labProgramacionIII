// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BodyInstance_generated_h
#error "BodyInstance.generated.h already included, missing '#pragma once' in BodyInstance.h"
#endif
#define ENGINE_BodyInstance_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodyInstance_h_188_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCollisionResponse_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCollisionResponse>();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodyInstance_h_255_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBodyInstance_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FBodyInstanceCore Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBodyInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_BodyInstance_h


#define FOREACH_ENUM_EDOFMODE(op) \
	op(EDOFMode::Default) \
	op(EDOFMode::SixDOF) \
	op(EDOFMode::YZPlane) \
	op(EDOFMode::XZPlane) \
	op(EDOFMode::XYPlane) \
	op(EDOFMode::CustomPlane) \
	op(EDOFMode::None) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
