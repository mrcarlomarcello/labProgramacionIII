// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraScript_generated_h
#error "NiagaraScript.generated.h already included, missing '#pragma once' in NiagaraScript.h"
#endif
#define NIAGARA_NiagaraScript_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraModuleDependency>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_123_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraCompilerTag>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_165_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraVMExecutableDataId>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_288_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraVMExecutableByteCode>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_350_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraVMExecutableData>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_522_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FVersionedNiagaraScriptData>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_648_SPARSE_DATA
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_648_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRaiseOnGPUCompilationComplete);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_648_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRaiseOnGPUCompilationComplete);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_648_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraScript, NIAGARA_API)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_648_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraScript(); \
	friend struct Z_Construct_UClass_UNiagaraScript_Statics; \
public: \
	DECLARE_CLASS(UNiagaraScript, UNiagaraScriptBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraScript) \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_648_ARCHIVESERIALIZER


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_648_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraScript(); \
	friend struct Z_Construct_UClass_UNiagaraScript_Statics; \
public: \
	DECLARE_CLASS(UNiagaraScript, UNiagaraScriptBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraScript) \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_648_ARCHIVESERIALIZER


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_648_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraScript(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraScript) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraScript); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraScript); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NIAGARA_API UNiagaraScript(UNiagaraScript&&); \
	NIAGARA_API UNiagaraScript(const UNiagaraScript&); \
public:


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_648_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NIAGARA_API UNiagaraScript(UNiagaraScript&&); \
	NIAGARA_API UNiagaraScript(const UNiagaraScript&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraScript); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraScript); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraScript)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_645_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_648_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_648_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_648_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_648_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_648_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_648_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_648_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_648_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_648_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_648_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NiagaraScript."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraScript>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h


#define FOREACH_ENUM_EUNUSEDATTRIBUTEBEHAVIOUR(op) \
	op(EUnusedAttributeBehaviour::Copy) \
	op(EUnusedAttributeBehaviour::Zero) \
	op(EUnusedAttributeBehaviour::None) \
	op(EUnusedAttributeBehaviour::MarkInvalid) \
	op(EUnusedAttributeBehaviour::PassThrough) 

enum class EUnusedAttributeBehaviour : uint8;
template<> NIAGARA_API UEnum* StaticEnum<EUnusedAttributeBehaviour>();

#define FOREACH_ENUM_ENIAGARAMODULEDEPENDENCYTYPE(op) \
	op(ENiagaraModuleDependencyType::PreDependency) \
	op(ENiagaraModuleDependencyType::PostDependency) 

enum class ENiagaraModuleDependencyType : uint8;
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraModuleDependencyType>();

#define FOREACH_ENUM_ENIAGARAMODULEDEPENDENCYSCRIPTCONSTRAINT(op) \
	op(ENiagaraModuleDependencyScriptConstraint::SameScript) \
	op(ENiagaraModuleDependencyScriptConstraint::AllScripts) 

enum class ENiagaraModuleDependencyScriptConstraint : uint8;
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraModuleDependencyScriptConstraint>();

#define FOREACH_ENUM_ENIAGARASCRIPTLIBRARYVISIBILITY(op) \
	op(ENiagaraScriptLibraryVisibility::Invalid) \
	op(ENiagaraScriptLibraryVisibility::Unexposed) \
	op(ENiagaraScriptLibraryVisibility::Library) \
	op(ENiagaraScriptLibraryVisibility::Hidden) 

enum class ENiagaraScriptLibraryVisibility : uint8;
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraScriptLibraryVisibility>();

#define FOREACH_ENUM_ENIAGARASCRIPTTEMPLATESPECIFICATION(op) \
	op(ENiagaraScriptTemplateSpecification::None) \
	op(ENiagaraScriptTemplateSpecification::Template) \
	op(ENiagaraScriptTemplateSpecification::Behavior) 

enum class ENiagaraScriptTemplateSpecification : uint8;
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraScriptTemplateSpecification>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
