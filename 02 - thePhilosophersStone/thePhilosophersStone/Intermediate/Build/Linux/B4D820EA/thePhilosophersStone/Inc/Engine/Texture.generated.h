// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Texture_generated_h
#error "Texture.generated.h already included, missing '#pragma once' in Texture.h"
#endif
#define ENGINE_Texture_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTextureSourceBlock_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTextureSourceBlock>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_137_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTextureSource_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTextureSource>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_651_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTexturePlatformData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTexturePlatformData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_896_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTextureFormatSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTextureFormatSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_930_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTextureSourceColorSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_974_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_974_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_974_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_974_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UTexture, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_974_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTexture(); \
	friend struct Z_Construct_UClass_UTexture_Statics; \
public: \
	DECLARE_CLASS(UTexture, UStreamableRenderAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTexture) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_974_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UTexture*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_974_INCLASS \
private: \
	static void StaticRegisterNativesUTexture(); \
	friend struct Z_Construct_UClass_UTexture_Statics; \
public: \
	DECLARE_CLASS(UTexture, UStreamableRenderAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTexture) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_974_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UTexture*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_974_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTexture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTexture(UTexture&&); \
	ENGINE_API UTexture(const UTexture&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_974_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTexture(UTexture&&); \
	ENGINE_API UTexture(const UTexture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTexture); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTexture)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_971_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_974_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_974_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_974_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_974_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_974_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_974_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_974_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_974_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_974_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_974_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Texture."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTexture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h


#define FOREACH_ENUM_TEXTUREFILTER(op) \
	op(TF_Nearest) \
	op(TF_Bilinear) \
	op(TF_Trilinear) \
	op(TF_Default) 
#define FOREACH_ENUM_TEXTUREADDRESS(op) \
	op(TA_Wrap) \
	op(TA_Clamp) \
	op(TA_Mirror) 
#define FOREACH_ENUM_ETEXTUREMIPCOUNT(op) \
	op(TMC_ResidentMips) \
	op(TMC_AllMips) \
	op(TMC_AllMipsBiased) 
#define FOREACH_ENUM_ETEXTURESOURCEARTTYPE(op) \
	op(TSAT_Uncompressed) \
	op(TSAT_PNGCompressed) \
	op(TSAT_DDSFile) 
#define FOREACH_ENUM_ETEXTURECOMPRESSIONQUALITY(op) \
	op(TCQ_Default) \
	op(TCQ_Lowest) \
	op(TCQ_Low) \
	op(TCQ_Medium) \
	op(TCQ_High) \
	op(TCQ_Highest) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
