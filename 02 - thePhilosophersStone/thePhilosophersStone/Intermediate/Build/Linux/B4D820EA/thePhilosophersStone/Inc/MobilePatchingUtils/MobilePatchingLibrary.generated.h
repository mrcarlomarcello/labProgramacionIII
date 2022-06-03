// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMobilePendingContent;
class UMobileInstalledContent;
#ifdef MOBILEPATCHINGUTILS_MobilePatchingLibrary_generated_h
#error "MobilePatchingLibrary.generated.h already included, missing '#pragma once' in MobilePatchingLibrary.h"
#endif
#define MOBILEPATCHINGUTILS_MobilePatchingLibrary_generated_h

#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_13_DELEGATE \
static inline void FOnContentInstallSucceeded_DelegateWrapper(const FScriptDelegate& OnContentInstallSucceeded) \
{ \
	OnContentInstallSucceeded.ProcessDelegate<UObject>(NULL); \
}


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_14_DELEGATE \
struct _Script_MobilePatchingUtils_eventOnContentInstallFailed_Parms \
{ \
	FText ErrorText; \
	int32 ErrorCode; \
}; \
static inline void FOnContentInstallFailed_DelegateWrapper(const FScriptDelegate& OnContentInstallFailed, const FText& ErrorText, int32 ErrorCode) \
{ \
	_Script_MobilePatchingUtils_eventOnContentInstallFailed_Parms Parms; \
	Parms.ErrorText=ErrorText; \
	Parms.ErrorCode=ErrorCode; \
	OnContentInstallFailed.ProcessDelegate<UObject>(&Parms); \
}


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_19_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMount); \
	DECLARE_FUNCTION(execGetInstalledContentSize); \
	DECLARE_FUNCTION(execGetDiskFreeSpace);


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMount); \
	DECLARE_FUNCTION(execGetInstalledContentSize); \
	DECLARE_FUNCTION(execGetDiskFreeSpace);


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMobileInstalledContent(); \
	friend struct Z_Construct_UClass_UMobileInstalledContent_Statics; \
public: \
	DECLARE_CLASS(UMobileInstalledContent, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MobilePatchingUtils"), NO_API) \
	DECLARE_SERIALIZER(UMobileInstalledContent)


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMobileInstalledContent(); \
	friend struct Z_Construct_UClass_UMobileInstalledContent_Statics; \
public: \
	DECLARE_CLASS(UMobileInstalledContent, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MobilePatchingUtils"), NO_API) \
	DECLARE_SERIALIZER(UMobileInstalledContent)


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMobileInstalledContent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMobileInstalledContent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMobileInstalledContent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMobileInstalledContent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMobileInstalledContent(UMobileInstalledContent&&); \
	NO_API UMobileInstalledContent(const UMobileInstalledContent&); \
public:


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMobileInstalledContent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMobileInstalledContent(UMobileInstalledContent&&); \
	NO_API UMobileInstalledContent(const UMobileInstalledContent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMobileInstalledContent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMobileInstalledContent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMobileInstalledContent)


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_19_INCLASS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOBILEPATCHINGUTILS_API UClass* StaticClass<class UMobileInstalledContent>();

#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_48_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_48_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartInstall); \
	DECLARE_FUNCTION(execGetInstallProgress); \
	DECLARE_FUNCTION(execGetDownloadStatusText); \
	DECLARE_FUNCTION(execGetDownloadSpeed); \
	DECLARE_FUNCTION(execGetTotalDownloadedSize); \
	DECLARE_FUNCTION(execGetRequiredDiskSpace); \
	DECLARE_FUNCTION(execGetDownloadSize);


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartInstall); \
	DECLARE_FUNCTION(execGetInstallProgress); \
	DECLARE_FUNCTION(execGetDownloadStatusText); \
	DECLARE_FUNCTION(execGetDownloadSpeed); \
	DECLARE_FUNCTION(execGetTotalDownloadedSize); \
	DECLARE_FUNCTION(execGetRequiredDiskSpace); \
	DECLARE_FUNCTION(execGetDownloadSize);


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMobilePendingContent(); \
	friend struct Z_Construct_UClass_UMobilePendingContent_Statics; \
public: \
	DECLARE_CLASS(UMobilePendingContent, UMobileInstalledContent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MobilePatchingUtils"), NO_API) \
	DECLARE_SERIALIZER(UMobilePendingContent)


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUMobilePendingContent(); \
	friend struct Z_Construct_UClass_UMobilePendingContent_Statics; \
public: \
	DECLARE_CLASS(UMobilePendingContent, UMobileInstalledContent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MobilePatchingUtils"), NO_API) \
	DECLARE_SERIALIZER(UMobilePendingContent)


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMobilePendingContent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMobilePendingContent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMobilePendingContent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMobilePendingContent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMobilePendingContent(UMobilePendingContent&&); \
	NO_API UMobilePendingContent(const UMobilePendingContent&); \
public:


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMobilePendingContent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMobilePendingContent(UMobilePendingContent&&); \
	NO_API UMobilePendingContent(const UMobilePendingContent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMobilePendingContent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMobilePendingContent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMobilePendingContent)


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_45_PROLOG
#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_48_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_48_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_48_INCLASS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_48_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOBILEPATCHINGUTILS_API UClass* StaticClass<class UMobilePendingContent>();

#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_111_DELEGATE \
struct _Script_MobilePatchingUtils_eventOnRequestContentSucceeded_Parms \
{ \
	UMobilePendingContent* MobilePendingContent; \
}; \
static inline void FOnRequestContentSucceeded_DelegateWrapper(const FScriptDelegate& OnRequestContentSucceeded, UMobilePendingContent* MobilePendingContent) \
{ \
	_Script_MobilePatchingUtils_eventOnRequestContentSucceeded_Parms Parms; \
	Parms.MobilePendingContent=MobilePendingContent; \
	OnRequestContentSucceeded.ProcessDelegate<UObject>(&Parms); \
}


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_112_DELEGATE \
struct _Script_MobilePatchingUtils_eventOnRequestContentFailed_Parms \
{ \
	FText ErrorText; \
	int32 ErrorCode; \
}; \
static inline void FOnRequestContentFailed_DelegateWrapper(const FScriptDelegate& OnRequestContentFailed, const FText& ErrorText, int32 ErrorCode) \
{ \
	_Script_MobilePatchingUtils_eventOnRequestContentFailed_Parms Parms; \
	Parms.ErrorText=ErrorText; \
	Parms.ErrorCode=ErrorCode; \
	OnRequestContentFailed.ProcessDelegate<UObject>(&Parms); \
}


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_117_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_117_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSupportedPlatformNames); \
	DECLARE_FUNCTION(execGetActiveDeviceProfileName); \
	DECLARE_FUNCTION(execHasActiveWiFiConnection); \
	DECLARE_FUNCTION(execRequestContent); \
	DECLARE_FUNCTION(execGetInstalledContent);


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSupportedPlatformNames); \
	DECLARE_FUNCTION(execGetActiveDeviceProfileName); \
	DECLARE_FUNCTION(execHasActiveWiFiConnection); \
	DECLARE_FUNCTION(execRequestContent); \
	DECLARE_FUNCTION(execGetInstalledContent);


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_117_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMobilePatchingLibrary(); \
	friend struct Z_Construct_UClass_UMobilePatchingLibrary_Statics; \
public: \
	DECLARE_CLASS(UMobilePatchingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MobilePatchingUtils"), NO_API) \
	DECLARE_SERIALIZER(UMobilePatchingLibrary)


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_117_INCLASS \
private: \
	static void StaticRegisterNativesUMobilePatchingLibrary(); \
	friend struct Z_Construct_UClass_UMobilePatchingLibrary_Statics; \
public: \
	DECLARE_CLASS(UMobilePatchingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MobilePatchingUtils"), NO_API) \
	DECLARE_SERIALIZER(UMobilePatchingLibrary)


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_117_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMobilePatchingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMobilePatchingLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMobilePatchingLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMobilePatchingLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMobilePatchingLibrary(UMobilePatchingLibrary&&); \
	NO_API UMobilePatchingLibrary(const UMobilePatchingLibrary&); \
public:


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_117_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMobilePatchingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMobilePatchingLibrary(UMobilePatchingLibrary&&); \
	NO_API UMobilePatchingLibrary(const UMobilePatchingLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMobilePatchingLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMobilePatchingLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMobilePatchingLibrary)


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_114_PROLOG
#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_117_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_117_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_117_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_117_INCLASS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_117_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_117_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_117_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h_117_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOBILEPATCHINGUTILS_API UClass* StaticClass<class UMobilePatchingLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MobilePatchingUtils_Source_MobilePatchingUtils_Private_MobilePatchingLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
