// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEQUENCERSCRIPTING_SequenceTimeUnit_generated_h
#error "SequenceTimeUnit.generated.h already included, missing '#pragma once' in SequenceTimeUnit.h"
#endif
#define SEQUENCERSCRIPTING_SequenceTimeUnit_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_SequenceTimeUnit_h


#define FOREACH_ENUM_ESEQUENCETIMEUNIT(op) \
	op(ESequenceTimeUnit::DisplayRate) \
	op(ESequenceTimeUnit::TickResolution) 

enum class ESequenceTimeUnit : uint8;
template<> SEQUENCERSCRIPTING_API UEnum* StaticEnum<ESequenceTimeUnit>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
