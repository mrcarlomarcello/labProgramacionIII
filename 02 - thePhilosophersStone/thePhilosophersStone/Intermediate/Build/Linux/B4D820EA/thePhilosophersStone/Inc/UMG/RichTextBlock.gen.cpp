// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/RichTextBlock.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRichTextBlock() {}
// Cross Module References
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FRichTextStyleRow();
	UPackage* Z_Construct_UPackage__Script_UMG();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock();
	UMG_API UClass* Z_Construct_UClass_UTextLayoutWidget();
	UMG_API UClass* Z_Construct_UClass_URichTextBlockDecorator_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextOverflowPolicy();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextTransformPolicy();
// End Cross Module References

static_assert(std::is_polymorphic<FRichTextStyleRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FRichTextStyleRow cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RichTextStyleRow;
class UScriptStruct* FRichTextStyleRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RichTextStyleRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RichTextStyleRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRichTextStyleRow, Z_Construct_UPackage__Script_UMG(), TEXT("RichTextStyleRow"));
	}
	return Z_Registration_Info_UScriptStruct_RichTextStyleRow.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FRichTextStyleRow>()
{
	return FRichTextStyleRow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRichTextStyleRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Simple struct for rich text styles */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Simple struct for rich text styles" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRichTextStyleRow>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::NewProp_TextStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::NewProp_TextStyle = { "TextStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRichTextStyleRow, TextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::NewProp_TextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::NewProp_TextStyle_MetaData)) }; // 2453068466
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::NewProp_TextStyle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"RichTextStyleRow",
		sizeof(FRichTextStyleRow),
		alignof(FRichTextStyleRow),
		Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRichTextStyleRow()
	{
		if (!Z_Registration_Info_UScriptStruct_RichTextStyleRow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RichTextStyleRow.InnerSingleton, Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RichTextStyleRow.InnerSingleton;
	}
	DEFINE_FUNCTION(URichTextBlock::execRefreshTextLayout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshTextLayout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextBlock::execGetDecoratorByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_DecoratorClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URichTextBlockDecorator**)Z_Param__Result=P_THIS->GetDecoratorByClass(Z_Param_DecoratorClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextBlock::execSetTextStyleSet)
	{
		P_GET_OBJECT(UDataTable,Z_Param_NewTextStyleSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextStyleSet(Z_Param_NewTextStyleSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextBlock::execSetText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetText(Z_Param_Out_InText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextBlock::execGetText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextBlock::execGetDefaultDynamicMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetDefaultDynamicMaterial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextBlock::execClearAllDefaultStyleOverrides)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllDefaultStyleOverrides();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextBlock::execSetDefaultTextStyle)
	{
		P_GET_STRUCT_REF(FTextBlockStyle,Z_Param_Out_InDefaultTextStyle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultTextStyle(Z_Param_Out_InDefaultTextStyle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextBlock::execSetTextOverflowPolicy)
	{
		P_GET_ENUM(ETextOverflowPolicy,Z_Param_InOverflowPolicy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextOverflowPolicy(ETextOverflowPolicy(Z_Param_InOverflowPolicy));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextBlock::execSetTextTransformPolicy)
	{
		P_GET_ENUM(ETextTransformPolicy,Z_Param_InTransformPolicy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextTransformPolicy(ETextTransformPolicy(Z_Param_InTransformPolicy));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextBlock::execSetAutoWrapText)
	{
		P_GET_UBOOL(Z_Param_InAutoTextWrap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoWrapText(Z_Param_InAutoTextWrap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextBlock::execSetMinDesiredWidth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMinDesiredWidth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinDesiredWidth(Z_Param_InMinDesiredWidth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextBlock::execSetDefaultStrikeBrush)
	{
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_InStrikeBrush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultStrikeBrush(Z_Param_Out_InStrikeBrush);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextBlock::execSetDefaultFont)
	{
		P_GET_STRUCT(FSlateFontInfo,Z_Param_InFontInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultFont(Z_Param_InFontInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextBlock::execSetDefaultShadowOffset)
	{
		P_GET_STRUCT(FVector2D,Z_Param_InShadowOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultShadowOffset(Z_Param_InShadowOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextBlock::execSetDefaultShadowColorAndOpacity)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InShadowColorAndOpacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultShadowColorAndOpacity(Z_Param_InShadowColorAndOpacity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URichTextBlock::execSetDefaultColorAndOpacity)
	{
		P_GET_STRUCT(FSlateColor,Z_Param_InColorAndOpacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultColorAndOpacity(Z_Param_InColorAndOpacity);
		P_NATIVE_END;
	}
	void URichTextBlock::StaticRegisterNativesURichTextBlock()
	{
		UClass* Class = URichTextBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearAllDefaultStyleOverrides", &URichTextBlock::execClearAllDefaultStyleOverrides },
			{ "GetDecoratorByClass", &URichTextBlock::execGetDecoratorByClass },
			{ "GetDefaultDynamicMaterial", &URichTextBlock::execGetDefaultDynamicMaterial },
			{ "GetText", &URichTextBlock::execGetText },
			{ "RefreshTextLayout", &URichTextBlock::execRefreshTextLayout },
			{ "SetAutoWrapText", &URichTextBlock::execSetAutoWrapText },
			{ "SetDefaultColorAndOpacity", &URichTextBlock::execSetDefaultColorAndOpacity },
			{ "SetDefaultFont", &URichTextBlock::execSetDefaultFont },
			{ "SetDefaultShadowColorAndOpacity", &URichTextBlock::execSetDefaultShadowColorAndOpacity },
			{ "SetDefaultShadowOffset", &URichTextBlock::execSetDefaultShadowOffset },
			{ "SetDefaultStrikeBrush", &URichTextBlock::execSetDefaultStrikeBrush },
			{ "SetDefaultTextStyle", &URichTextBlock::execSetDefaultTextStyle },
			{ "SetMinDesiredWidth", &URichTextBlock::execSetMinDesiredWidth },
			{ "SetText", &URichTextBlock::execSetText },
			{ "SetTextOverflowPolicy", &URichTextBlock::execSetTextOverflowPolicy },
			{ "SetTextStyleSet", &URichTextBlock::execSetTextStyleSet },
			{ "SetTextTransformPolicy", &URichTextBlock::execSetTextTransformPolicy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URichTextBlock_ClearAllDefaultStyleOverrides_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_ClearAllDefaultStyleOverrides_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Remove all overrides made to the default text style and return to the style specified in the style set data table */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Remove all overrides made to the default text style and return to the style specified in the style set data table" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_ClearAllDefaultStyleOverrides_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, nullptr, "ClearAllDefaultStyleOverrides", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_ClearAllDefaultStyleOverrides_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_ClearAllDefaultStyleOverrides_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_ClearAllDefaultStyleOverrides()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URichTextBlock_ClearAllDefaultStyleOverrides_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics
	{
		struct RichTextBlock_eventGetDecoratorByClass_Parms
		{
			TSubclassOf<URichTextBlockDecorator>  DecoratorClass;
			URichTextBlockDecorator* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_DecoratorClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::NewProp_DecoratorClass = { "DecoratorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextBlock_eventGetDecoratorByClass_Parms, DecoratorClass), Z_Construct_UClass_URichTextBlockDecorator_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextBlock_eventGetDecoratorByClass_Parms, ReturnValue), Z_Construct_UClass_URichTextBlockDecorator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::NewProp_DecoratorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, nullptr, "GetDecoratorByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::RichTextBlock_eventGetDecoratorByClass_Parms), Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextBlock_GetDefaultDynamicMaterial_Statics
	{
		struct RichTextBlock_eventGetDefaultDynamicMaterial_Parms
		{
			UMaterialInstanceDynamic* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URichTextBlock_GetDefaultDynamicMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextBlock_eventGetDefaultDynamicMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextBlock_GetDefaultDynamicMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_GetDefaultDynamicMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_GetDefaultDynamicMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Creates a dynamic material for the default font or returns it if it already\n\x09 * exists\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Creates a dynamic material for the default font or returns it if it already\nexists" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_GetDefaultDynamicMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, nullptr, "GetDefaultDynamicMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_URichTextBlock_GetDefaultDynamicMaterial_Statics::RichTextBlock_eventGetDefaultDynamicMaterial_Parms), Z_Construct_UFunction_URichTextBlock_GetDefaultDynamicMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_GetDefaultDynamicMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_GetDefaultDynamicMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_GetDefaultDynamicMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_GetDefaultDynamicMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URichTextBlock_GetDefaultDynamicMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextBlock_GetText_Statics
	{
		struct RichTextBlock_eventGetText_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URichTextBlock_GetText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextBlock_eventGetText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextBlock_GetText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_GetText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_GetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Returns widgets text.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Returns widgets text." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_GetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, nullptr, "GetText", nullptr, nullptr, sizeof(Z_Construct_UFunction_URichTextBlock_GetText_Statics::RichTextBlock_eventGetText_Parms), Z_Construct_UFunction_URichTextBlock_GetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_GetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_GetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_GetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_GetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URichTextBlock_GetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextBlock_RefreshTextLayout_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_RefreshTextLayout_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Causes the text to reflow it's layout and re-evaluate any decorators\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Causes the text to reflow it's layout and re-evaluate any decorators" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_RefreshTextLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, nullptr, "RefreshTextLayout", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_RefreshTextLayout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_RefreshTextLayout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_RefreshTextLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URichTextBlock_RefreshTextLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextBlock_SetAutoWrapText_Statics
	{
		struct RichTextBlock_eventSetAutoWrapText_Parms
		{
			bool InAutoTextWrap;
		};
		static void NewProp_InAutoTextWrap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InAutoTextWrap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URichTextBlock_SetAutoWrapText_Statics::NewProp_InAutoTextWrap_SetBit(void* Obj)
	{
		((RichTextBlock_eventSetAutoWrapText_Parms*)Obj)->InAutoTextWrap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URichTextBlock_SetAutoWrapText_Statics::NewProp_InAutoTextWrap = { "InAutoTextWrap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RichTextBlock_eventSetAutoWrapText_Parms), &Z_Construct_UFunction_URichTextBlock_SetAutoWrapText_Statics::NewProp_InAutoTextWrap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextBlock_SetAutoWrapText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_SetAutoWrapText_Statics::NewProp_InAutoTextWrap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_SetAutoWrapText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Set the auto wrap for this rich text block\n\x09 * @param InAutoTextWrap to turn wrap on or off\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Set the auto wrap for this rich text block\n@param InAutoTextWrap to turn wrap on or off" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_SetAutoWrapText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, nullptr, "SetAutoWrapText", nullptr, nullptr, sizeof(Z_Construct_UFunction_URichTextBlock_SetAutoWrapText_Statics::RichTextBlock_eventSetAutoWrapText_Parms), Z_Construct_UFunction_URichTextBlock_SetAutoWrapText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetAutoWrapText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_SetAutoWrapText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetAutoWrapText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_SetAutoWrapText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URichTextBlock_SetAutoWrapText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextBlock_SetDefaultColorAndOpacity_Statics
	{
		struct RichTextBlock_eventSetDefaultColorAndOpacity_Parms
		{
			FSlateColor InColorAndOpacity;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InColorAndOpacity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URichTextBlock_SetDefaultColorAndOpacity_Statics::NewProp_InColorAndOpacity = { "InColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextBlock_eventSetDefaultColorAndOpacity_Parms, InColorAndOpacity), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) }; // 1767155899
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextBlock_SetDefaultColorAndOpacity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_SetDefaultColorAndOpacity_Statics::NewProp_InColorAndOpacity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_SetDefaultColorAndOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  \n\x09 * Sets the color and opacity of the default text in this rich text block\n\x09 * @param InColorAndOpacity\x09\x09The new text color and opacity\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Sets the color and opacity of the default text in this rich text block\n@param InColorAndOpacity             The new text color and opacity" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_SetDefaultColorAndOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, nullptr, "SetDefaultColorAndOpacity", nullptr, nullptr, sizeof(Z_Construct_UFunction_URichTextBlock_SetDefaultColorAndOpacity_Statics::RichTextBlock_eventSetDefaultColorAndOpacity_Parms), Z_Construct_UFunction_URichTextBlock_SetDefaultColorAndOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetDefaultColorAndOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_SetDefaultColorAndOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetDefaultColorAndOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_SetDefaultColorAndOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URichTextBlock_SetDefaultColorAndOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextBlock_SetDefaultFont_Statics
	{
		struct RichTextBlock_eventSetDefaultFont_Parms
		{
			FSlateFontInfo InFontInfo;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InFontInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URichTextBlock_SetDefaultFont_Statics::NewProp_InFontInfo = { "InFontInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextBlock_eventSetDefaultFont_Parms, InFontInfo), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(nullptr, 0) }; // 346448296
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextBlock_SetDefaultFont_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_SetDefaultFont_Statics::NewProp_InFontInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_SetDefaultFont_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Dynamically set the default font info for this rich text block\n\x09 * @param InFontInfo The new font info\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Dynamically set the default font info for this rich text block\n@param InFontInfo The new font info" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_SetDefaultFont_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, nullptr, "SetDefaultFont", nullptr, nullptr, sizeof(Z_Construct_UFunction_URichTextBlock_SetDefaultFont_Statics::RichTextBlock_eventSetDefaultFont_Parms), Z_Construct_UFunction_URichTextBlock_SetDefaultFont_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetDefaultFont_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_SetDefaultFont_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetDefaultFont_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_SetDefaultFont()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URichTextBlock_SetDefaultFont_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextBlock_SetDefaultShadowColorAndOpacity_Statics
	{
		struct RichTextBlock_eventSetDefaultShadowColorAndOpacity_Parms
		{
			FLinearColor InShadowColorAndOpacity;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InShadowColorAndOpacity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URichTextBlock_SetDefaultShadowColorAndOpacity_Statics::NewProp_InShadowColorAndOpacity = { "InShadowColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextBlock_eventSetDefaultShadowColorAndOpacity_Parms, InShadowColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextBlock_SetDefaultShadowColorAndOpacity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_SetDefaultShadowColorAndOpacity_Statics::NewProp_InShadowColorAndOpacity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_SetDefaultShadowColorAndOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  \n\x09 * Sets the color and opacity of the default text drop shadow\n\x09 * Note: if opacity is zero no shadow will be drawn\n\x09 * @param InShadowColorAndOpacity\x09\x09The new drop shadow color and opacity\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Sets the color and opacity of the default text drop shadow\nNote: if opacity is zero no shadow will be drawn\n@param InShadowColorAndOpacity               The new drop shadow color and opacity" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_SetDefaultShadowColorAndOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, nullptr, "SetDefaultShadowColorAndOpacity", nullptr, nullptr, sizeof(Z_Construct_UFunction_URichTextBlock_SetDefaultShadowColorAndOpacity_Statics::RichTextBlock_eventSetDefaultShadowColorAndOpacity_Parms), Z_Construct_UFunction_URichTextBlock_SetDefaultShadowColorAndOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetDefaultShadowColorAndOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_SetDefaultShadowColorAndOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetDefaultShadowColorAndOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_SetDefaultShadowColorAndOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URichTextBlock_SetDefaultShadowColorAndOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextBlock_SetDefaultShadowOffset_Statics
	{
		struct RichTextBlock_eventSetDefaultShadowOffset_Parms
		{
			FVector2D InShadowOffset;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InShadowOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URichTextBlock_SetDefaultShadowOffset_Statics::NewProp_InShadowOffset = { "InShadowOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextBlock_eventSetDefaultShadowOffset_Parms, InShadowOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextBlock_SetDefaultShadowOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_SetDefaultShadowOffset_Statics::NewProp_InShadowOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_SetDefaultShadowOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  \n\x09 * Sets the offset that the default text drop shadow should be drawn at\n\x09 * @param InShadowOffset\x09\x09The new offset\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Sets the offset that the default text drop shadow should be drawn at\n@param InShadowOffset                The new offset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_SetDefaultShadowOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, nullptr, "SetDefaultShadowOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_URichTextBlock_SetDefaultShadowOffset_Statics::RichTextBlock_eventSetDefaultShadowOffset_Parms), Z_Construct_UFunction_URichTextBlock_SetDefaultShadowOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetDefaultShadowOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_SetDefaultShadowOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetDefaultShadowOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_SetDefaultShadowOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URichTextBlock_SetDefaultShadowOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextBlock_SetDefaultStrikeBrush_Statics
	{
		struct RichTextBlock_eventSetDefaultStrikeBrush_Parms
		{
			FSlateBrush InStrikeBrush;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InStrikeBrush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URichTextBlock_SetDefaultStrikeBrush_Statics::NewProp_InStrikeBrush = { "InStrikeBrush", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextBlock_eventSetDefaultStrikeBrush_Parms, InStrikeBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) }; // 852902259
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextBlock_SetDefaultStrikeBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_SetDefaultStrikeBrush_Statics::NewProp_InStrikeBrush,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_SetDefaultStrikeBrush_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Dynamically set the default strike brush for this rich text block\n\x09 * @param InStrikeBrush The new brush to use to strike through text\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Dynamically set the default strike brush for this rich text block\n@param InStrikeBrush The new brush to use to strike through text" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_SetDefaultStrikeBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, nullptr, "SetDefaultStrikeBrush", nullptr, nullptr, sizeof(Z_Construct_UFunction_URichTextBlock_SetDefaultStrikeBrush_Statics::RichTextBlock_eventSetDefaultStrikeBrush_Parms), Z_Construct_UFunction_URichTextBlock_SetDefaultStrikeBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetDefaultStrikeBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_SetDefaultStrikeBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetDefaultStrikeBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_SetDefaultStrikeBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URichTextBlock_SetDefaultStrikeBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle_Statics
	{
		struct RichTextBlock_eventSetDefaultTextStyle_Parms
		{
			FTextBlockStyle InDefaultTextStyle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDefaultTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDefaultTextStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle_Statics::NewProp_InDefaultTextStyle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle_Statics::NewProp_InDefaultTextStyle = { "InDefaultTextStyle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextBlock_eventSetDefaultTextStyle_Parms, InDefaultTextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle_Statics::NewProp_InDefaultTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle_Statics::NewProp_InDefaultTextStyle_MetaData)) }; // 2453068466
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle_Statics::NewProp_InDefaultTextStyle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** \n\x09 * Wholesale override of the currently established default text style\n\x09 * @param InDefaultTextStyle The new text style to apply to all default (i.e. undecorated) text in the block\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Wholesale override of the currently established default text style\n@param InDefaultTextStyle The new text style to apply to all default (i.e. undecorated) text in the block" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, nullptr, "SetDefaultTextStyle", nullptr, nullptr, sizeof(Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle_Statics::RichTextBlock_eventSetDefaultTextStyle_Parms), Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextBlock_SetMinDesiredWidth_Statics
	{
		struct RichTextBlock_eventSetMinDesiredWidth_Parms
		{
			float InMinDesiredWidth;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InMinDesiredWidth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URichTextBlock_SetMinDesiredWidth_Statics::NewProp_InMinDesiredWidth = { "InMinDesiredWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextBlock_eventSetMinDesiredWidth_Parms, InMinDesiredWidth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextBlock_SetMinDesiredWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_SetMinDesiredWidth_Statics::NewProp_InMinDesiredWidth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_SetMinDesiredWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 *  Set the minimum desired width for this rich text block\n\x09 *  @param InMinDesiredWidth new minimum desired width\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Set the minimum desired width for this rich text block\n@param InMinDesiredWidth new minimum desired width" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_SetMinDesiredWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, nullptr, "SetMinDesiredWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_URichTextBlock_SetMinDesiredWidth_Statics::RichTextBlock_eventSetMinDesiredWidth_Parms), Z_Construct_UFunction_URichTextBlock_SetMinDesiredWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetMinDesiredWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_SetMinDesiredWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetMinDesiredWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_SetMinDesiredWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URichTextBlock_SetMinDesiredWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextBlock_SetText_Statics
	{
		struct RichTextBlock_eventSetText_Parms
		{
			FText InText;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_SetText_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URichTextBlock_SetText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextBlock_eventSetText_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_SetText_Statics::NewProp_InText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetText_Statics::NewProp_InText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextBlock_SetText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_SetText_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_SetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Directly sets the widget text.\n\x09 * Warning: This will wipe any binding created for the Text property!\n\x09 * @param InText The text to assign to the widget\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Directly sets the widget text.\nWarning: This will wipe any binding created for the Text property!\n@param InText The text to assign to the widget" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, nullptr, "SetText", nullptr, nullptr, sizeof(Z_Construct_UFunction_URichTextBlock_SetText_Statics::RichTextBlock_eventSetText_Parms), Z_Construct_UFunction_URichTextBlock_SetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_SetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_SetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URichTextBlock_SetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextBlock_SetTextOverflowPolicy_Statics
	{
		struct RichTextBlock_eventSetTextOverflowPolicy_Parms
		{
			ETextOverflowPolicy InOverflowPolicy;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InOverflowPolicy_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InOverflowPolicy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URichTextBlock_SetTextOverflowPolicy_Statics::NewProp_InOverflowPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URichTextBlock_SetTextOverflowPolicy_Statics::NewProp_InOverflowPolicy = { "InOverflowPolicy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextBlock_eventSetTextOverflowPolicy_Parms, InOverflowPolicy), Z_Construct_UEnum_SlateCore_ETextOverflowPolicy, METADATA_PARAMS(nullptr, 0) }; // 1604726165
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextBlock_SetTextOverflowPolicy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_SetTextOverflowPolicy_Statics::NewProp_InOverflowPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_SetTextOverflowPolicy_Statics::NewProp_InOverflowPolicy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_SetTextOverflowPolicy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09* Set the text overflow policy for this text block.\n\x09* @param InOverflowPolicy the new text overflow policy.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Set the text overflow policy for this text block.\n@param InOverflowPolicy the new text overflow policy." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_SetTextOverflowPolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, nullptr, "SetTextOverflowPolicy", nullptr, nullptr, sizeof(Z_Construct_UFunction_URichTextBlock_SetTextOverflowPolicy_Statics::RichTextBlock_eventSetTextOverflowPolicy_Parms), Z_Construct_UFunction_URichTextBlock_SetTextOverflowPolicy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetTextOverflowPolicy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_SetTextOverflowPolicy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetTextOverflowPolicy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_SetTextOverflowPolicy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URichTextBlock_SetTextOverflowPolicy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextBlock_SetTextStyleSet_Statics
	{
		struct RichTextBlock_eventSetTextStyleSet_Parms
		{
			UDataTable* NewTextStyleSet;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTextStyleSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URichTextBlock_SetTextStyleSet_Statics::NewProp_NewTextStyleSet = { "NewTextStyleSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextBlock_eventSetTextStyleSet_Parms, NewTextStyleSet), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextBlock_SetTextStyleSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_SetTextStyleSet_Statics::NewProp_NewTextStyleSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_SetTextStyleSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_SetTextStyleSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, nullptr, "SetTextStyleSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_URichTextBlock_SetTextStyleSet_Statics::RichTextBlock_eventSetTextStyleSet_Parms), Z_Construct_UFunction_URichTextBlock_SetTextStyleSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetTextStyleSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_SetTextStyleSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetTextStyleSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_SetTextStyleSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URichTextBlock_SetTextStyleSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URichTextBlock_SetTextTransformPolicy_Statics
	{
		struct RichTextBlock_eventSetTextTransformPolicy_Parms
		{
			ETextTransformPolicy InTransformPolicy;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InTransformPolicy_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InTransformPolicy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URichTextBlock_SetTextTransformPolicy_Statics::NewProp_InTransformPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URichTextBlock_SetTextTransformPolicy_Statics::NewProp_InTransformPolicy = { "InTransformPolicy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RichTextBlock_eventSetTextTransformPolicy_Parms, InTransformPolicy), Z_Construct_UEnum_SlateCore_ETextTransformPolicy, METADATA_PARAMS(nullptr, 0) }; // 883314779
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URichTextBlock_SetTextTransformPolicy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_SetTextTransformPolicy_Statics::NewProp_InTransformPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URichTextBlock_SetTextTransformPolicy_Statics::NewProp_InTransformPolicy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URichTextBlock_SetTextTransformPolicy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Set the text transformation policy for this text block.\n\x09 * @param InTransformPolicy the new text transformation policy.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Set the text transformation policy for this text block.\n@param InTransformPolicy the new text transformation policy." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URichTextBlock_SetTextTransformPolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URichTextBlock, nullptr, "SetTextTransformPolicy", nullptr, nullptr, sizeof(Z_Construct_UFunction_URichTextBlock_SetTextTransformPolicy_Statics::RichTextBlock_eventSetTextTransformPolicy_Parms), Z_Construct_UFunction_URichTextBlock_SetTextTransformPolicy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetTextTransformPolicy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URichTextBlock_SetTextTransformPolicy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URichTextBlock_SetTextTransformPolicy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URichTextBlock_SetTextTransformPolicy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URichTextBlock_SetTextTransformPolicy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URichTextBlock);
	UClass* Z_Construct_UClass_URichTextBlock_NoRegister()
	{
		return URichTextBlock::StaticClass();
	}
	struct Z_Construct_UClass_URichTextBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextStyleSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TextStyleSet;
		static const UECodeGen_Private::FClassPropertyParams NewProp_DecoratorClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecoratorClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DecoratorClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefaultStyle_MetaData[];
#endif
		static void NewProp_bOverrideDefaultStyle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefaultStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTextStyleOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultTextStyleOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinDesiredWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDesiredWidth;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TextTransformPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextTransformPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TextTransformPolicy;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TextOverflowPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextOverflowPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TextOverflowPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultTextStyle;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InstanceDecorators_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceDecorators_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceDecorators;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URichTextBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextLayoutWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URichTextBlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URichTextBlock_ClearAllDefaultStyleOverrides, "ClearAllDefaultStyleOverrides" }, // 1099010654
		{ &Z_Construct_UFunction_URichTextBlock_GetDecoratorByClass, "GetDecoratorByClass" }, // 726484824
		{ &Z_Construct_UFunction_URichTextBlock_GetDefaultDynamicMaterial, "GetDefaultDynamicMaterial" }, // 701436981
		{ &Z_Construct_UFunction_URichTextBlock_GetText, "GetText" }, // 943413393
		{ &Z_Construct_UFunction_URichTextBlock_RefreshTextLayout, "RefreshTextLayout" }, // 79406754
		{ &Z_Construct_UFunction_URichTextBlock_SetAutoWrapText, "SetAutoWrapText" }, // 327586531
		{ &Z_Construct_UFunction_URichTextBlock_SetDefaultColorAndOpacity, "SetDefaultColorAndOpacity" }, // 2155418012
		{ &Z_Construct_UFunction_URichTextBlock_SetDefaultFont, "SetDefaultFont" }, // 3795656623
		{ &Z_Construct_UFunction_URichTextBlock_SetDefaultShadowColorAndOpacity, "SetDefaultShadowColorAndOpacity" }, // 2350237293
		{ &Z_Construct_UFunction_URichTextBlock_SetDefaultShadowOffset, "SetDefaultShadowOffset" }, // 2478869906
		{ &Z_Construct_UFunction_URichTextBlock_SetDefaultStrikeBrush, "SetDefaultStrikeBrush" }, // 3976479791
		{ &Z_Construct_UFunction_URichTextBlock_SetDefaultTextStyle, "SetDefaultTextStyle" }, // 3479811935
		{ &Z_Construct_UFunction_URichTextBlock_SetMinDesiredWidth, "SetMinDesiredWidth" }, // 1702717923
		{ &Z_Construct_UFunction_URichTextBlock_SetText, "SetText" }, // 1511178261
		{ &Z_Construct_UFunction_URichTextBlock_SetTextOverflowPolicy, "SetTextOverflowPolicy" }, // 3985703590
		{ &Z_Construct_UFunction_URichTextBlock_SetTextStyleSet, "SetTextStyleSet" }, // 3253575560
		{ &Z_Construct_UFunction_URichTextBlock_SetTextTransformPolicy, "SetTextTransformPolicy" }, // 2292958828
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlock_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The rich text block\n *\n * * Fancy Text\n * * No Children\n */" },
		{ "IncludePath", "Components/RichTextBlock.h" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The rich text block\n\n* Fancy Text\n* No Children" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlock_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** The text to display */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "The text to display" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_URichTextBlock_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URichTextBlock, Text), METADATA_PARAMS(Z_Construct_UClass_URichTextBlock_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlock_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlock_Statics::NewProp_TextStyleSet_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "RequiredAssetDataTags", "RowStructure=RichTextStyleRow" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URichTextBlock_Statics::NewProp_TextStyleSet = { "TextStyleSet", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URichTextBlock, TextStyleSet), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URichTextBlock_Statics::NewProp_TextStyleSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlock_Statics::NewProp_TextStyleSet_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URichTextBlock_Statics::NewProp_DecoratorClasses_Inner = { "DecoratorClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URichTextBlockDecorator_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlock_Statics::NewProp_DecoratorClasses_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URichTextBlock_Statics::NewProp_DecoratorClasses = { "DecoratorClasses", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URichTextBlock, DecoratorClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URichTextBlock_Statics::NewProp_DecoratorClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlock_Statics::NewProp_DecoratorClasses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlock_Statics::NewProp_bOverrideDefaultStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** True to specify the default text style for this rich text inline, overriding any default provided in the style set table */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "True to specify the default text style for this rich text inline, overriding any default provided in the style set table" },
	};
#endif
	void Z_Construct_UClass_URichTextBlock_Statics::NewProp_bOverrideDefaultStyle_SetBit(void* Obj)
	{
		((URichTextBlock*)Obj)->bOverrideDefaultStyle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URichTextBlock_Statics::NewProp_bOverrideDefaultStyle = { "bOverrideDefaultStyle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URichTextBlock), &Z_Construct_UClass_URichTextBlock_Statics::NewProp_bOverrideDefaultStyle_SetBit, METADATA_PARAMS(Z_Construct_UClass_URichTextBlock_Statics::NewProp_bOverrideDefaultStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlock_Statics::NewProp_bOverrideDefaultStyle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlock_Statics::NewProp_DefaultTextStyleOverride_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Text style to apply by default to text in this block */" },
		{ "EditCondition", "bOverrideDefaultStyle" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Text style to apply by default to text in this block" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URichTextBlock_Statics::NewProp_DefaultTextStyleOverride = { "DefaultTextStyleOverride", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URichTextBlock, DefaultTextStyleOverride), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UClass_URichTextBlock_Statics::NewProp_DefaultTextStyleOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlock_Statics::NewProp_DefaultTextStyleOverride_MetaData)) }; // 2453068466
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlock_Statics::NewProp_MinDesiredWidth_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The minimum desired size for the text */" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "The minimum desired size for the text" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URichTextBlock_Statics::NewProp_MinDesiredWidth = { "MinDesiredWidth", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URichTextBlock, MinDesiredWidth), METADATA_PARAMS(Z_Construct_UClass_URichTextBlock_Statics::NewProp_MinDesiredWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlock_Statics::NewProp_MinDesiredWidth_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URichTextBlock_Statics::NewProp_TextTransformPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlock_Statics::NewProp_TextTransformPolicy_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The text transformation policy to apply to this text block */" },
		{ "DisplayName", "Transform Policy" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "The text transformation policy to apply to this text block" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URichTextBlock_Statics::NewProp_TextTransformPolicy = { "TextTransformPolicy", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URichTextBlock, TextTransformPolicy), Z_Construct_UEnum_SlateCore_ETextTransformPolicy, METADATA_PARAMS(Z_Construct_UClass_URichTextBlock_Statics::NewProp_TextTransformPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlock_Statics::NewProp_TextTransformPolicy_MetaData)) }; // 883314779
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URichTextBlock_Statics::NewProp_TextOverflowPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlock_Statics::NewProp_TextOverflowPolicy_MetaData[] = {
		{ "Category", "Clipping" },
		{ "Comment", "/** Sets what happens to text that is clipped and doesn't fit within the clip rect for this widget */" },
		{ "DisplayName", "Overflow Policy" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
		{ "ToolTip", "Sets what happens to text that is clipped and doesn't fit within the clip rect for this widget" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URichTextBlock_Statics::NewProp_TextOverflowPolicy = { "TextOverflowPolicy", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URichTextBlock, TextOverflowPolicy), Z_Construct_UEnum_SlateCore_ETextOverflowPolicy, METADATA_PARAMS(Z_Construct_UClass_URichTextBlock_Statics::NewProp_TextOverflowPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlock_Statics::NewProp_TextOverflowPolicy_MetaData)) }; // 1604726165
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlock_Statics::NewProp_DefaultTextStyle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URichTextBlock_Statics::NewProp_DefaultTextStyle = { "DefaultTextStyle", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URichTextBlock, DefaultTextStyle), Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(Z_Construct_UClass_URichTextBlock_Statics::NewProp_DefaultTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlock_Statics::NewProp_DefaultTextStyle_MetaData)) }; // 2453068466
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URichTextBlock_Statics::NewProp_InstanceDecorators_Inner = { "InstanceDecorators", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URichTextBlockDecorator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlock_Statics::NewProp_InstanceDecorators_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/RichTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URichTextBlock_Statics::NewProp_InstanceDecorators = { "InstanceDecorators", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URichTextBlock, InstanceDecorators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URichTextBlock_Statics::NewProp_InstanceDecorators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlock_Statics::NewProp_InstanceDecorators_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URichTextBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlock_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlock_Statics::NewProp_TextStyleSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlock_Statics::NewProp_DecoratorClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlock_Statics::NewProp_DecoratorClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlock_Statics::NewProp_bOverrideDefaultStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlock_Statics::NewProp_DefaultTextStyleOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlock_Statics::NewProp_MinDesiredWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlock_Statics::NewProp_TextTransformPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlock_Statics::NewProp_TextTransformPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlock_Statics::NewProp_TextOverflowPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlock_Statics::NewProp_TextOverflowPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlock_Statics::NewProp_DefaultTextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlock_Statics::NewProp_InstanceDecorators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichTextBlock_Statics::NewProp_InstanceDecorators,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URichTextBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URichTextBlock>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URichTextBlock_Statics::ClassParams = {
		&URichTextBlock::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URichTextBlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlock_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URichTextBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URichTextBlock()
	{
		if (!Z_Registration_Info_UClass_URichTextBlock.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URichTextBlock.OuterSingleton, Z_Construct_UClass_URichTextBlock_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URichTextBlock.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<URichTextBlock>()
	{
		return URichTextBlock::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URichTextBlock);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_Statics::ScriptStructInfo[] = {
		{ FRichTextStyleRow::StaticStruct, Z_Construct_UScriptStruct_FRichTextStyleRow_Statics::NewStructOps, TEXT("RichTextStyleRow"), &Z_Registration_Info_UScriptStruct_RichTextStyleRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRichTextStyleRow), 2076437322U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URichTextBlock, URichTextBlock::StaticClass, TEXT("URichTextBlock"), &Z_Registration_Info_UClass_URichTextBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URichTextBlock), 574349068U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_556061141(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlock_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
