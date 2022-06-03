// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FARFilter;
struct FTagAndValue;
struct FAssetData;
class UObject;
struct FSoftObjectPath;
class IAssetRegistry;
#ifdef ASSETREGISTRY_AssetRegistryHelpers_generated_h
#error "AssetRegistryHelpers.generated.h already included, missing '#pragma once' in AssetRegistryHelpers.h"
#endif
#define ASSETREGISTRY_AssetRegistryHelpers_generated_h

#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTagAndValue_Statics; \
	ASSETREGISTRY_API static class UScriptStruct* StaticStruct();


template<> ASSETREGISTRY_API UScriptStruct* StaticStruct<struct FTagAndValue>();

#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_26_SPARSE_DATA
#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetFilterTagsAndValues); \
	DECLARE_FUNCTION(execGetTagValue); \
	DECLARE_FUNCTION(execGetExportTextName); \
	DECLARE_FUNCTION(execIsAssetLoaded); \
	DECLARE_FUNCTION(execGetAsset); \
	DECLARE_FUNCTION(execGetClass); \
	DECLARE_FUNCTION(execToSoftObjectPath); \
	DECLARE_FUNCTION(execGetFullName); \
	DECLARE_FUNCTION(execIsRedirector); \
	DECLARE_FUNCTION(execIsUAsset); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execCreateAssetData); \
	DECLARE_FUNCTION(execGetAssetRegistry);


#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetFilterTagsAndValues); \
	DECLARE_FUNCTION(execGetTagValue); \
	DECLARE_FUNCTION(execGetExportTextName); \
	DECLARE_FUNCTION(execIsAssetLoaded); \
	DECLARE_FUNCTION(execGetAsset); \
	DECLARE_FUNCTION(execGetClass); \
	DECLARE_FUNCTION(execToSoftObjectPath); \
	DECLARE_FUNCTION(execGetFullName); \
	DECLARE_FUNCTION(execIsRedirector); \
	DECLARE_FUNCTION(execIsUAsset); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execCreateAssetData); \
	DECLARE_FUNCTION(execGetAssetRegistry);


#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetRegistryHelpers(); \
	friend struct Z_Construct_UClass_UAssetRegistryHelpers_Statics; \
public: \
	DECLARE_CLASS(UAssetRegistryHelpers, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AssetRegistry"), NO_API) \
	DECLARE_SERIALIZER(UAssetRegistryHelpers)


#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUAssetRegistryHelpers(); \
	friend struct Z_Construct_UClass_UAssetRegistryHelpers_Statics; \
public: \
	DECLARE_CLASS(UAssetRegistryHelpers, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AssetRegistry"), NO_API) \
	DECLARE_SERIALIZER(UAssetRegistryHelpers)


#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetRegistryHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetRegistryHelpers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetRegistryHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetRegistryHelpers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetRegistryHelpers(UAssetRegistryHelpers&&); \
	NO_API UAssetRegistryHelpers(const UAssetRegistryHelpers&); \
public:


#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetRegistryHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetRegistryHelpers(UAssetRegistryHelpers&&); \
	NO_API UAssetRegistryHelpers(const UAssetRegistryHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetRegistryHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetRegistryHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetRegistryHelpers)


#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_23_PROLOG
#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_26_SPARSE_DATA \
	FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_26_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_26_INCLASS \
	FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_26_SPARSE_DATA \
	FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSETREGISTRY_API UClass* StaticClass<class UAssetRegistryHelpers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_AssetRegistryHelpers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
