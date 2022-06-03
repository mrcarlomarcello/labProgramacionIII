// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URichTextBlockDecorator;
class UDataTable;
class UMaterialInstanceDynamic;
struct FTextBlockStyle;
enum class ETextOverflowPolicy : uint8;
enum class ETextTransformPolicy : uint8;
struct FSlateBrush;
struct FSlateFontInfo;
struct FLinearColor;
struct FSlateColor;
#ifdef UMG_RichTextBlock_generated_h
#error "RichTextBlock.generated.h already included, missing '#pragma once' in RichTextBlock.h"
#endif
#define UMG_RichTextBlock_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRichTextStyleRow_Statics; \
	UMG_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> UMG_API UScriptStruct* StaticStruct<struct FRichTextStyleRow>();

#define FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_39_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_39_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRefreshTextLayout); \
	DECLARE_FUNCTION(execGetDecoratorByClass); \
	DECLARE_FUNCTION(execSetTextStyleSet); \
	DECLARE_FUNCTION(execSetText); \
	DECLARE_FUNCTION(execGetText); \
	DECLARE_FUNCTION(execGetDefaultDynamicMaterial); \
	DECLARE_FUNCTION(execClearAllDefaultStyleOverrides); \
	DECLARE_FUNCTION(execSetDefaultTextStyle); \
	DECLARE_FUNCTION(execSetTextOverflowPolicy); \
	DECLARE_FUNCTION(execSetTextTransformPolicy); \
	DECLARE_FUNCTION(execSetAutoWrapText); \
	DECLARE_FUNCTION(execSetMinDesiredWidth); \
	DECLARE_FUNCTION(execSetDefaultStrikeBrush); \
	DECLARE_FUNCTION(execSetDefaultFont); \
	DECLARE_FUNCTION(execSetDefaultShadowOffset); \
	DECLARE_FUNCTION(execSetDefaultShadowColorAndOpacity); \
	DECLARE_FUNCTION(execSetDefaultColorAndOpacity);


#define FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRefreshTextLayout); \
	DECLARE_FUNCTION(execGetDecoratorByClass); \
	DECLARE_FUNCTION(execSetTextStyleSet); \
	DECLARE_FUNCTION(execSetText); \
	DECLARE_FUNCTION(execGetText); \
	DECLARE_FUNCTION(execGetDefaultDynamicMaterial); \
	DECLARE_FUNCTION(execClearAllDefaultStyleOverrides); \
	DECLARE_FUNCTION(execSetDefaultTextStyle); \
	DECLARE_FUNCTION(execSetTextOverflowPolicy); \
	DECLARE_FUNCTION(execSetTextTransformPolicy); \
	DECLARE_FUNCTION(execSetAutoWrapText); \
	DECLARE_FUNCTION(execSetMinDesiredWidth); \
	DECLARE_FUNCTION(execSetDefaultStrikeBrush); \
	DECLARE_FUNCTION(execSetDefaultFont); \
	DECLARE_FUNCTION(execSetDefaultShadowOffset); \
	DECLARE_FUNCTION(execSetDefaultShadowColorAndOpacity); \
	DECLARE_FUNCTION(execSetDefaultColorAndOpacity);


#define FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURichTextBlock(); \
	friend struct Z_Construct_UClass_URichTextBlock_Statics; \
public: \
	DECLARE_CLASS(URichTextBlock, UTextLayoutWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(URichTextBlock)


#define FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_39_INCLASS \
private: \
	static void StaticRegisterNativesURichTextBlock(); \
	friend struct Z_Construct_UClass_URichTextBlock_Statics; \
public: \
	DECLARE_CLASS(URichTextBlock, UTextLayoutWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(URichTextBlock)


#define FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URichTextBlock(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URichTextBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URichTextBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URichTextBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URichTextBlock(URichTextBlock&&); \
	NO_API URichTextBlock(const URichTextBlock&); \
public:


#define FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URichTextBlock(URichTextBlock&&); \
	NO_API URichTextBlock(const URichTextBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URichTextBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URichTextBlock); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URichTextBlock)


#define FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_36_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_39_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_39_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_39_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_39_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class URichTextBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
