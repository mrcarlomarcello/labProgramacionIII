// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieSceneFolder;
struct FSequencerBindingProxy;
class UMovieSceneTrack;
struct FColor;
#ifdef SEQUENCERSCRIPTING_MovieSceneFolderExtensions_generated_h
#error "MovieSceneFolderExtensions.generated.h already included, missing '#pragma once' in MovieSceneFolderExtensions.h"
#endif
#define SEQUENCERSCRIPTING_MovieSceneFolderExtensions_generated_h

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h_21_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveChildObjectBinding); \
	DECLARE_FUNCTION(execAddChildObjectBinding); \
	DECLARE_FUNCTION(execGetChildObjectBindings); \
	DECLARE_FUNCTION(execRemoveChildMasterTrack); \
	DECLARE_FUNCTION(execAddChildMasterTrack); \
	DECLARE_FUNCTION(execGetChildMasterTracks); \
	DECLARE_FUNCTION(execRemoveChildFolder); \
	DECLARE_FUNCTION(execAddChildFolder); \
	DECLARE_FUNCTION(execGetChildFolders); \
	DECLARE_FUNCTION(execSetFolderColor); \
	DECLARE_FUNCTION(execGetFolderColor); \
	DECLARE_FUNCTION(execSetFolderName); \
	DECLARE_FUNCTION(execGetFolderName);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveChildObjectBinding); \
	DECLARE_FUNCTION(execAddChildObjectBinding); \
	DECLARE_FUNCTION(execGetChildObjectBindings); \
	DECLARE_FUNCTION(execRemoveChildMasterTrack); \
	DECLARE_FUNCTION(execAddChildMasterTrack); \
	DECLARE_FUNCTION(execGetChildMasterTracks); \
	DECLARE_FUNCTION(execRemoveChildFolder); \
	DECLARE_FUNCTION(execAddChildFolder); \
	DECLARE_FUNCTION(execGetChildFolders); \
	DECLARE_FUNCTION(execSetFolderColor); \
	DECLARE_FUNCTION(execGetFolderColor); \
	DECLARE_FUNCTION(execSetFolderName); \
	DECLARE_FUNCTION(execGetFolderName);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneFolderExtensions(); \
	friend struct Z_Construct_UClass_UMovieSceneFolderExtensions_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneFolderExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneFolderExtensions)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneFolderExtensions(); \
	friend struct Z_Construct_UClass_UMovieSceneFolderExtensions_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneFolderExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneFolderExtensions)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneFolderExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneFolderExtensions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneFolderExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneFolderExtensions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneFolderExtensions(UMovieSceneFolderExtensions&&); \
	NO_API UMovieSceneFolderExtensions(const UMovieSceneFolderExtensions&); \
public:


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneFolderExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneFolderExtensions(UMovieSceneFolderExtensions&&); \
	NO_API UMovieSceneFolderExtensions(const UMovieSceneFolderExtensions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneFolderExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneFolderExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneFolderExtensions)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h_18_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h_21_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h_21_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h_21_INCLASS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h_21_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCERSCRIPTING_API UClass* StaticClass<class UMovieSceneFolderExtensions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneFolderExtensions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
