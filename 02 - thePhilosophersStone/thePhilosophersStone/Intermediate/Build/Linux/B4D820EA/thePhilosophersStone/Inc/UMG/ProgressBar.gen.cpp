// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/ProgressBar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProgressBar() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FProgressBarStyle();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USlateBrushAsset_NoRegister();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EProgressBarFillType();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EProgressBarFillStyle();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UProgressBar::execSetIsMarquee)
	{
		P_GET_UBOOL(Z_Param_InbIsMarquee);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsMarquee(Z_Param_InbIsMarquee);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProgressBar::execSetFillColorAndOpacity)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFillColorAndOpacity(Z_Param_InColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProgressBar::execSetPercent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPercent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPercent(Z_Param_InPercent);
		P_NATIVE_END;
	}
	void UProgressBar::StaticRegisterNativesUProgressBar()
	{
		UClass* Class = UProgressBar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetFillColorAndOpacity", &UProgressBar::execSetFillColorAndOpacity },
			{ "SetIsMarquee", &UProgressBar::execSetIsMarquee },
			{ "SetPercent", &UProgressBar::execSetPercent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics
	{
		struct ProgressBar_eventSetFillColorAndOpacity_Parms
		{
			FLinearColor InColor;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProgressBar_eventSetFillColorAndOpacity_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::NewProp_InColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Progress" },
		{ "Comment", "/** Sets the fill color of the progress bar. */" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "Sets the fill color of the progress bar." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProgressBar, nullptr, "SetFillColorAndOpacity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::ProgressBar_eventSetFillColorAndOpacity_Parms), Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics
	{
		struct ProgressBar_eventSetIsMarquee_Parms
		{
			bool InbIsMarquee;
		};
		static void NewProp_InbIsMarquee_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InbIsMarquee;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::NewProp_InbIsMarquee_SetBit(void* Obj)
	{
		((ProgressBar_eventSetIsMarquee_Parms*)Obj)->InbIsMarquee = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::NewProp_InbIsMarquee = { "InbIsMarquee", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ProgressBar_eventSetIsMarquee_Parms), &Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::NewProp_InbIsMarquee_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::NewProp_InbIsMarquee,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::Function_MetaDataParams[] = {
		{ "Category", "Progress" },
		{ "Comment", "/** Sets the progress bar to show as a marquee. */" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "Sets the progress bar to show as a marquee." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProgressBar, nullptr, "SetIsMarquee", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::ProgressBar_eventSetIsMarquee_Parms), Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProgressBar_SetIsMarquee()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProgressBar_SetPercent_Statics
	{
		struct ProgressBar_eventSetPercent_Parms
		{
			float InPercent;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPercent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProgressBar_SetPercent_Statics::NewProp_InPercent = { "InPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProgressBar_eventSetPercent_Parms, InPercent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProgressBar_SetPercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProgressBar_SetPercent_Statics::NewProp_InPercent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProgressBar_SetPercent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Progress" },
		{ "Comment", "/** Sets the current value of the ProgressBar. */" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "Sets the current value of the ProgressBar." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProgressBar_SetPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProgressBar, nullptr, "SetPercent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProgressBar_SetPercent_Statics::ProgressBar_eventSetPercent_Parms), Z_Construct_UFunction_UProgressBar_SetPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProgressBar_SetPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProgressBar_SetPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProgressBar_SetPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProgressBar_SetPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProgressBar_SetPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProgressBar);
	UClass* Z_Construct_UClass_UProgressBar_NoRegister()
	{
		return UProgressBar::StaticClass();
	}
	struct Z_Construct_UClass_UProgressBar_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Style;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BackgroundImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FillImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FillImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarqueeImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MarqueeImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Percent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Percent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BarFillType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BarFillType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BarFillStyle_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BarFillStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMarquee_MetaData[];
#endif
		static void NewProp_bIsMarquee_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMarquee;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BorderPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BorderPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PercentDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_PercentDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FillColorAndOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FillColorAndOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FillColorAndOpacityDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_FillColorAndOpacityDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProgressBar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProgressBar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity, "SetFillColorAndOpacity" }, // 2540352805
		{ &Z_Construct_UFunction_UProgressBar_SetIsMarquee, "SetIsMarquee" }, // 2153886696
		{ &Z_Construct_UFunction_UProgressBar_SetPercent, "SetPercent" }, // 2364735458
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressBar_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The progress bar widget is a simple bar that fills up that can be restyled to fit any number of uses.\n *\n * * No Children\n */" },
		{ "IncludePath", "Components/ProgressBar.h" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "The progress bar widget is a simple bar that fills up that can be restyled to fit any number of uses.\n\n* No Children" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressBar_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The progress bar style */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "The progress bar style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProgressBar, WidgetStyle), Z_Construct_UScriptStruct_FProgressBarStyle, METADATA_PARAMS(Z_Construct_UClass_UProgressBar_Statics::NewProp_WidgetStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::NewProp_WidgetStyle_MetaData)) }; // 3950708187
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressBar_Statics::NewProp_Style_MetaData[] = {
		{ "Comment", "/** Style used for the progress bar */" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "Style used for the progress bar" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProgressBar, Style_DEPRECATED), Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProgressBar_Statics::NewProp_Style_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::NewProp_Style_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressBar_Statics::NewProp_BackgroundImage_MetaData[] = {
		{ "Comment", "/** The brush to use as the background of the progress bar */" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "The brush to use as the background of the progress bar" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_BackgroundImage = { "BackgroundImage", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProgressBar, BackgroundImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProgressBar_Statics::NewProp_BackgroundImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::NewProp_BackgroundImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressBar_Statics::NewProp_FillImage_MetaData[] = {
		{ "Comment", "/** The brush to use as the fill image */" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "The brush to use as the fill image" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_FillImage = { "FillImage", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProgressBar, FillImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProgressBar_Statics::NewProp_FillImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::NewProp_FillImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressBar_Statics::NewProp_MarqueeImage_MetaData[] = {
		{ "Comment", "/** The brush to use as the marquee image */" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "The brush to use as the marquee image" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_MarqueeImage = { "MarqueeImage", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProgressBar, MarqueeImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProgressBar_Statics::NewProp_MarqueeImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::NewProp_MarqueeImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressBar_Statics::NewProp_Percent_MetaData[] = {
		{ "Category", "Progress" },
		{ "Comment", "/** Used to determine the fill position of the progress bar ranging 0..1 */" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "Used to determine the fill position of the progress bar ranging 0..1" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProgressBar, Percent), METADATA_PARAMS(Z_Construct_UClass_UProgressBar_Statics::NewProp_Percent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::NewProp_Percent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressBar_Statics::NewProp_BarFillType_MetaData[] = {
		{ "Category", "Progress" },
		{ "Comment", "/** Defines the direction in which the progress bar fills */" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "Defines the direction in which the progress bar fills" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_BarFillType = { "BarFillType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProgressBar, BarFillType), Z_Construct_UEnum_Slate_EProgressBarFillType, METADATA_PARAMS(Z_Construct_UClass_UProgressBar_Statics::NewProp_BarFillType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::NewProp_BarFillType_MetaData)) }; // 438747145
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressBar_Statics::NewProp_BarFillStyle_MetaData[] = {
		{ "Category", "Progress" },
		{ "Comment", "/** Defines the visual style of the progress bar fill - scale or mask */" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "Defines the visual style of the progress bar fill - scale or mask" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_BarFillStyle = { "BarFillStyle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProgressBar, BarFillStyle), Z_Construct_UEnum_Slate_EProgressBarFillStyle, METADATA_PARAMS(Z_Construct_UClass_UProgressBar_Statics::NewProp_BarFillStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::NewProp_BarFillStyle_MetaData)) }; // 1326948045
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressBar_Statics::NewProp_bIsMarquee_MetaData[] = {
		{ "Category", "Progress" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
	};
#endif
	void Z_Construct_UClass_UProgressBar_Statics::NewProp_bIsMarquee_SetBit(void* Obj)
	{
		((UProgressBar*)Obj)->bIsMarquee = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_bIsMarquee = { "bIsMarquee", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UProgressBar), &Z_Construct_UClass_UProgressBar_Statics::NewProp_bIsMarquee_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProgressBar_Statics::NewProp_bIsMarquee_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::NewProp_bIsMarquee_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressBar_Statics::NewProp_BorderPadding_MetaData[] = {
		{ "Category", "Progress" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_BorderPadding = { "BorderPadding", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProgressBar, BorderPadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UProgressBar_Statics::NewProp_BorderPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::NewProp_BorderPadding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressBar_Statics::NewProp_PercentDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate to allow logic to drive the text of the widget */" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the text of the widget" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_PercentDelegate = { "PercentDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProgressBar, PercentDelegate), Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UProgressBar_Statics::NewProp_PercentDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::NewProp_PercentDelegate_MetaData)) }; // 3117268266
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressBar_Statics::NewProp_FillColorAndOpacity_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Fill Color and Opacity */" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "Fill Color and Opacity" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_FillColorAndOpacity = { "FillColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProgressBar, FillColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UProgressBar_Statics::NewProp_FillColorAndOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::NewProp_FillColorAndOpacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProgressBar_Statics::NewProp_FillColorAndOpacityDelegate_MetaData[] = {
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_FillColorAndOpacityDelegate = { "FillColorAndOpacityDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProgressBar, FillColorAndOpacityDelegate), Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UProgressBar_Statics::NewProp_FillColorAndOpacityDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::NewProp_FillColorAndOpacityDelegate_MetaData)) }; // 4237293081
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProgressBar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_WidgetStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_Style,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_BackgroundImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_FillImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_MarqueeImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_Percent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_BarFillType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_BarFillStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_bIsMarquee,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_BorderPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_PercentDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_FillColorAndOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_FillColorAndOpacityDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProgressBar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProgressBar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProgressBar_Statics::ClassParams = {
		&UProgressBar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UProgressBar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProgressBar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProgressBar()
	{
		if (!Z_Registration_Info_UClass_UProgressBar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProgressBar.OuterSingleton, Z_Construct_UClass_UProgressBar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProgressBar.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UProgressBar>()
	{
		return UProgressBar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProgressBar);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProgressBar, UProgressBar::StaticClass, TEXT("UProgressBar"), &Z_Registration_Info_UClass_UProgressBar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProgressBar), 2027369034U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_3017553701(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
