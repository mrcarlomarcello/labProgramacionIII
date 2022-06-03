// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPaperSprite;
struct FSlateBrush;
#ifdef PAPER2D_PaperSpriteBlueprintLibrary_generated_h
#error "PaperSpriteBlueprintLibrary.generated.h already included, missing '#pragma once' in PaperSpriteBlueprintLibrary.h"
#endif
#define PAPER2D_PaperSpriteBlueprintLibrary_generated_h

#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteBlueprintLibrary_h_19_SPARSE_DATA
#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteBlueprintLibrary_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMakeBrushFromSprite);


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteBlueprintLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMakeBrushFromSprite);


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteBlueprintLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPaperSpriteBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UPaperSpriteBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UPaperSpriteBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperSpriteBlueprintLibrary)


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteBlueprintLibrary_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUPaperSpriteBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UPaperSpriteBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UPaperSpriteBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperSpriteBlueprintLibrary)


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteBlueprintLibrary_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperSpriteBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperSpriteBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperSpriteBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperSpriteBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperSpriteBlueprintLibrary(UPaperSpriteBlueprintLibrary&&); \
	NO_API UPaperSpriteBlueprintLibrary(const UPaperSpriteBlueprintLibrary&); \
public:


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteBlueprintLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperSpriteBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperSpriteBlueprintLibrary(UPaperSpriteBlueprintLibrary&&); \
	NO_API UPaperSpriteBlueprintLibrary(const UPaperSpriteBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperSpriteBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperSpriteBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperSpriteBlueprintLibrary)


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteBlueprintLibrary_h_16_PROLOG
#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteBlueprintLibrary_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteBlueprintLibrary_h_19_SPARSE_DATA \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteBlueprintLibrary_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteBlueprintLibrary_h_19_INCLASS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteBlueprintLibrary_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteBlueprintLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteBlueprintLibrary_h_19_SPARSE_DATA \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteBlueprintLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteBlueprintLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteBlueprintLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2D_API UClass* StaticClass<class UPaperSpriteBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
