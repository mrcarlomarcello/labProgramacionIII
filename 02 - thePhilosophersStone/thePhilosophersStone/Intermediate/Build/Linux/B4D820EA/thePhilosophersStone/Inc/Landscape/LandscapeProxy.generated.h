// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;
struct FLinearColor;
class UTexture;
class USplineComponent;
class ULandscapeLayerInfoObject;
class UMaterialInterface;
#ifdef LANDSCAPE_LandscapeProxy_generated_h
#error "LandscapeProxy.generated.h already included, missing '#pragma once' in LandscapeProxy.h"
#endif
#define LANDSCAPE_LandscapeProxy_generated_h

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeEditorLayerSettings>();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeLayerStruct>();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_138_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeImportLayerInfo>();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_326_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeProxyMaterialOverride>();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_363_SPARSE_DATA
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_363_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLandscapeExportHeightmapToRenderTarget); \
	DECLARE_FUNCTION(execSetLandscapeMaterialScalarParameterValue); \
	DECLARE_FUNCTION(execSetLandscapeMaterialVectorParameterValue); \
	DECLARE_FUNCTION(execSetLandscapeMaterialTextureParameterValue); \
	DECLARE_FUNCTION(execEditorApplySpline); \
	DECLARE_FUNCTION(execEditorSetLandscapeMaterial); \
	DECLARE_FUNCTION(execChangeComponentScreenSizeToUseSubSections); \
	DECLARE_FUNCTION(execChangeLODDistanceFactor);


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_363_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLandscapeExportHeightmapToRenderTarget); \
	DECLARE_FUNCTION(execSetLandscapeMaterialScalarParameterValue); \
	DECLARE_FUNCTION(execSetLandscapeMaterialVectorParameterValue); \
	DECLARE_FUNCTION(execSetLandscapeMaterialTextureParameterValue); \
	DECLARE_FUNCTION(execEditorApplySpline); \
	DECLARE_FUNCTION(execEditorSetLandscapeMaterial); \
	DECLARE_FUNCTION(execChangeComponentScreenSizeToUseSubSections); \
	DECLARE_FUNCTION(execChangeLODDistanceFactor);


#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_363_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLandscapeExportWeightmapToRenderTarget); \
	DECLARE_FUNCTION(execLandscapeImportWeightmapFromRenderTarget); \
	DECLARE_FUNCTION(execLandscapeImportHeightmapFromRenderTarget);


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_363_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLandscapeExportWeightmapToRenderTarget); \
	DECLARE_FUNCTION(execLandscapeImportWeightmapFromRenderTarget); \
	DECLARE_FUNCTION(execLandscapeImportHeightmapFromRenderTarget);


#else
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_363_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_363_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_363_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ALandscapeProxy, LANDSCAPE_API)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_363_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALandscapeProxy(); \
	friend struct Z_Construct_UClass_ALandscapeProxy_Statics; \
public: \
	DECLARE_CLASS(ALandscapeProxy, APartitionActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ALandscapeProxy) \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_363_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<ALandscapeProxy*>(this); }


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_363_INCLASS \
private: \
	static void StaticRegisterNativesALandscapeProxy(); \
	friend struct Z_Construct_UClass_ALandscapeProxy_Statics; \
public: \
	DECLARE_CLASS(ALandscapeProxy, APartitionActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ALandscapeProxy) \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_363_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<ALandscapeProxy*>(this); }


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_363_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ALandscapeProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ALandscapeProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ALandscapeProxy(ALandscapeProxy&&); \
	LANDSCAPE_API ALandscapeProxy(const ALandscapeProxy&); \
public:


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_363_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ALandscapeProxy(ALandscapeProxy&&); \
	LANDSCAPE_API ALandscapeProxy(const ALandscapeProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ALandscapeProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeProxy); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeProxy)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_360_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_363_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_363_SPARSE_DATA \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_363_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_363_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_363_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_363_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_363_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_363_SPARSE_DATA \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_363_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_363_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_363_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_363_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ALandscapeProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h


#define FOREACH_ENUM_ELANDSCAPEIMPORTALPHAMAPTYPE(op) \
	op(ELandscapeImportAlphamapType::Additive) \
	op(ELandscapeImportAlphamapType::Layered) 

enum class ELandscapeImportAlphamapType : uint8;
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeImportAlphamapType>();

#define FOREACH_ENUM_ELANDSCAPELAYERPAINTINGRESTRICTION(op) \
	op(ELandscapeLayerPaintingRestriction::None) \
	op(ELandscapeLayerPaintingRestriction::UseMaxLayers) \
	op(ELandscapeLayerPaintingRestriction::ExistingOnly) \
	op(ELandscapeLayerPaintingRestriction::UseComponentAllowList) 

enum class ELandscapeLayerPaintingRestriction : uint8;
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeLayerPaintingRestriction>();

#define FOREACH_ENUM_ELANDSCAPELAYERDISPLAYMODE(op) \
	op(ELandscapeLayerDisplayMode::Default) \
	op(ELandscapeLayerDisplayMode::Alphabetical) \
	op(ELandscapeLayerDisplayMode::UserSpecific) 

enum class ELandscapeLayerDisplayMode : uint8;
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeLayerDisplayMode>();

#define FOREACH_ENUM_ELANDSCAPELODFALLOFF(op) \
	op(ELandscapeLODFalloff::Linear) \
	op(ELandscapeLODFalloff::SquareRoot) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
