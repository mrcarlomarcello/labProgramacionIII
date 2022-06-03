// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARASHADER_NiagaraShared_generated_h
#error "NiagaraShared.generated.h already included, missing '#pragma once' in NiagaraShared.h"
#endif
#define NIAGARASHADER_NiagaraShared_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics; \
	NIAGARASHADER_API static class UScriptStruct* StaticStruct();


template<> NIAGARASHADER_API UScriptStruct* StaticStruct<struct FNiagaraCompileEvent>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_142_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NIAGARASHADER_API UScriptStruct* StaticStruct<struct FNiagaraDataInterfaceGeneratedFunction>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_203_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NIAGARASHADER_API UScriptStruct* StaticStruct<struct FNiagaraDataInterfaceGPUParamInfo>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_620_DELEGATE \
static inline void FOnNiagaraScriptCompilationComplete_DelegateWrapper(const FMulticastScriptDelegate& OnNiagaraScriptCompilationComplete) \
{ \
	OnNiagaraScriptCompilationComplete.ProcessMulticastDelegate<UObject>(NULL); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h


#define FOREACH_ENUM_FNIAGARACOMPILEEVENTSEVERITY(op) \
	op(FNiagaraCompileEventSeverity::Log) \
	op(FNiagaraCompileEventSeverity::Display) \
	op(FNiagaraCompileEventSeverity::Warning) \
	op(FNiagaraCompileEventSeverity::Error) 

enum class FNiagaraCompileEventSeverity : uint8;
template<> NIAGARASHADER_API UEnum* StaticEnum<FNiagaraCompileEventSeverity>();

#define FOREACH_ENUM_FNIAGARACOMPILEEVENTSOURCE(op) \
	op(FNiagaraCompileEventSource::Unset) \
	op(FNiagaraCompileEventSource::ScriptDependency) 

enum class FNiagaraCompileEventSource : uint8;
template<> NIAGARASHADER_API UEnum* StaticEnum<FNiagaraCompileEventSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
