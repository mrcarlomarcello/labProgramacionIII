// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialLayersFunctions_generated_h
#error "MaterialLayersFunctions.generated.h already included, missing '#pragma once' in MaterialLayersFunctions.h"
#endif
#define ENGINE_MaterialLayersFunctions_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialLayersFunctions_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMaterialParameterInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialLayersFunctions_h_181_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialLayersFunctions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMaterialLayersFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialLayersFunctions_h


#define FOREACH_ENUM_EMATERIALPARAMETERASSOCIATION(op) \
	op(LayerParameter) \
	op(BlendParameter) \
	op(GlobalParameter) 
#define FOREACH_ENUM_EMATERIALLAYERLINKSTATE(op) \
	op(EMaterialLayerLinkState::Uninitialized) \
	op(EMaterialLayerLinkState::LinkedToParent) \
	op(EMaterialLayerLinkState::UnlinkedFromParent) \
	op(EMaterialLayerLinkState::NotFromParent) 

enum class EMaterialLayerLinkState : uint8;
template<> ENGINE_API UEnum* StaticEnum<EMaterialLayerLinkState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
