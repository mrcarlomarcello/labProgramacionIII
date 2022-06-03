// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Material_generated_h
#error "Material.generated.h already included, missing '#pragma once' in Material.h"
#endif
#define ENGINE_Material_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_Material_h_293_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FParameterGroupData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FParameterGroupData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_Material_h_323_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_Material_h_323_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_Material_h_323_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_Material_h_323_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterial, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_Material_h_323_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterial(); \
	friend struct Z_Construct_UClass_UMaterial_Statics; \
public: \
	DECLARE_CLASS(UMaterial, UMaterialInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterial) \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_Material_h_323_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_Material_h_323_INCLASS \
private: \
	static void StaticRegisterNativesUMaterial(); \
	friend struct Z_Construct_UClass_UMaterial_Statics; \
public: \
	DECLARE_CLASS(UMaterial, UMaterialInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterial) \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_Material_h_323_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_Material_h_323_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterial(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterial) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterial); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterial); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterial(UMaterial&&); \
	ENGINE_API UMaterial(const UMaterial&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_Material_h_323_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterial(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterial(UMaterial&&); \
	ENGINE_API UMaterial(const UMaterial&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterial); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterial); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterial)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_Material_h_320_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_Material_h_323_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_Material_h_323_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_Material_h_323_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_Material_h_323_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_Material_h_323_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_Material_h_323_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_Material_h_323_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_Material_h_323_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_Material_h_323_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_Material_h_323_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Material."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterial>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_Material_h


#define FOREACH_ENUM_EDECALBLENDMODE(op) \
	op(DBM_Translucent) \
	op(DBM_Stain) \
	op(DBM_Normal) \
	op(DBM_Emissive) \
	op(DBM_DBuffer_ColorNormalRoughness) \
	op(DBM_DBuffer_Color) \
	op(DBM_DBuffer_ColorNormal) \
	op(DBM_DBuffer_ColorRoughness) \
	op(DBM_DBuffer_Normal) \
	op(DBM_DBuffer_NormalRoughness) \
	op(DBM_DBuffer_Roughness) \
	op(DBM_DBuffer_Emissive) \
	op(DBM_DBuffer_AlphaComposite) \
	op(DBM_DBuffer_EmissiveAlphaComposite) \
	op(DBM_Volumetric_DistanceFunction) \
	op(DBM_AlphaComposite) \
	op(DBM_AmbientOcclusion) 
#define FOREACH_ENUM_EMATERIALDECALRESPONSE(op) \
	op(MDR_None) \
	op(MDR_ColorNormalRoughness) \
	op(MDR_Color) \
	op(MDR_ColorNormal) \
	op(MDR_ColorRoughness) \
	op(MDR_Normal) \
	op(MDR_NormalRoughness) \
	op(MDR_Roughness) 
#define FOREACH_ENUM_EMATERIALTRANSLUCENCYPASS(op) \
	op(MTP_BeforeDOF) \
	op(MTP_AfterDOF) \
	op(MTP_AfterMotionBlur) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
