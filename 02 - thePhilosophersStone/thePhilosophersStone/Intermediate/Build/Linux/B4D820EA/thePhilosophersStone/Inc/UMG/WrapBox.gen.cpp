// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/WrapBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWrapBox() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UWrapBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWrapBox();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWrapBoxSlot_NoRegister();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EOrientation();
// End Cross Module References
	DEFINE_FUNCTION(UWrapBox::execAddChildToWrapBox)
	{
		P_GET_OBJECT(UWidget,Z_Param_Content);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWrapBoxSlot**)Z_Param__Result=P_THIS->AddChildToWrapBox(Z_Param_Content);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrapBox::execSetHorizontalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrapBox::execSetInnerSlotPadding)
	{
		P_GET_STRUCT(FVector2D,Z_Param_InPadding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInnerSlotPadding(Z_Param_InPadding);
		P_NATIVE_END;
	}
	void UWrapBox::StaticRegisterNativesUWrapBox()
	{
		UClass* Class = UWrapBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChildToWrapBox", &UWrapBox::execAddChildToWrapBox },
			{ "SetHorizontalAlignment", &UWrapBox::execSetHorizontalAlignment },
			{ "SetInnerSlotPadding", &UWrapBox::execSetInnerSlotPadding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics
	{
		struct WrapBox_eventAddChildToWrapBox_Parms
		{
			UWidget* Content;
			UWrapBoxSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Content;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrapBox_eventAddChildToWrapBox_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::NewProp_Content_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrapBox_eventAddChildToWrapBox_Parms, ReturnValue), Z_Construct_UClass_UWrapBoxSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Panel" },
		{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrapBox, nullptr, "AddChildToWrapBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::WrapBox_eventAddChildToWrapBox_Parms), Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrapBox_AddChildToWrapBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrapBox_SetHorizontalAlignment_Statics
	{
		struct WrapBox_eventSetHorizontalAlignment_Parms
		{
			TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InHorizontalAlignment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWrapBox_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrapBox_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) }; // 4247529014
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrapBox_SetHorizontalAlignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrapBox_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrapBox_SetHorizontalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Content Layout" },
		{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrapBox_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrapBox, nullptr, "SetHorizontalAlignment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWrapBox_SetHorizontalAlignment_Statics::WrapBox_eventSetHorizontalAlignment_Parms), Z_Construct_UFunction_UWrapBox_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBox_SetHorizontalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrapBox_SetHorizontalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBox_SetHorizontalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrapBox_SetHorizontalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWrapBox_SetHorizontalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics
	{
		struct WrapBox_eventSetInnerSlotPadding_Parms
		{
			FVector2D InPadding;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPadding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WrapBox_eventSetInnerSlotPadding_Parms, InPadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::NewProp_InPadding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Content Layout" },
		{ "Comment", "/** Sets the inner slot padding goes between slots sharing borders */" },
		{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
		{ "ToolTip", "Sets the inner slot padding goes between slots sharing borders" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrapBox, nullptr, "SetInnerSlotPadding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::WrapBox_eventSetInnerSlotPadding_Parms), Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWrapBox);
	UClass* Z_Construct_UClass_UWrapBox_NoRegister()
	{
		return UWrapBox::StaticClass();
	}
	struct Z_Construct_UClass_UWrapBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerSlotPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InnerSlotPadding;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WrapWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WrapWidth;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WrapSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WrapSize;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExplicitWrapWidth_MetaData[];
#endif
		static void NewProp_bExplicitWrapWidth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExplicitWrapWidth;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExplicitWrapSize_MetaData[];
#endif
		static void NewProp_bExplicitWrapSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExplicitWrapSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Orientation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWrapBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWrapBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWrapBox_AddChildToWrapBox, "AddChildToWrapBox" }, // 4188977456
		{ &Z_Construct_UFunction_UWrapBox_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 3063256401
		{ &Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding, "SetInnerSlotPadding" }, // 1800775286
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Arranges widgets left-to-right or top-to-bottom dependently of the orientation.  When the widgets exceed the wrapSize it will place widgets on the next line.\n * \n * * Many Children\n * * Flows\n * * Wraps\n */" },
		{ "IncludePath", "Components/WrapBox.h" },
		{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
		{ "ToolTip", "Arranges widgets left-to-right or top-to-bottom dependently of the orientation.  When the widgets exceed the wrapSize it will place widgets on the next line.\n\n* Many Children\n* Flows\n* Wraps" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapBox_Statics::NewProp_InnerSlotPadding_MetaData[] = {
		{ "Category", "Content Layout" },
		{ "Comment", "/** The inner slot padding goes between slots sharing borders */" },
		{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
		{ "ToolTip", "The inner slot padding goes between slots sharing borders" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWrapBox_Statics::NewProp_InnerSlotPadding = { "InnerSlotPadding", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWrapBox, InnerSlotPadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UWrapBox_Statics::NewProp_InnerSlotPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWrapBox_Statics::NewProp_InnerSlotPadding_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapBox_Statics::NewProp_WrapWidth_MetaData[] = {
		{ "Comment", "/** DEPRECATED value replaced by WrapSize, When this width is exceeded, elements will start appearing on the next line. */" },
		{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
		{ "ToolTip", "DEPRECATED value replaced by WrapSize, When this width is exceeded, elements will start appearing on the next line." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWrapBox_Statics::NewProp_WrapWidth = { "WrapWidth", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWrapBox, WrapWidth_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UWrapBox_Statics::NewProp_WrapWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWrapBox_Statics::NewProp_WrapWidth_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapBox_Statics::NewProp_WrapSize_MetaData[] = {
		{ "Category", "Content Layout" },
		{ "Comment", "/** When this size is exceeded, elements will start appearing on the next line. */" },
		{ "EditCondition", "bExplicitWrapSize" },
		{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
		{ "ToolTip", "When this size is exceeded, elements will start appearing on the next line." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWrapBox_Statics::NewProp_WrapSize = { "WrapSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWrapBox, WrapSize), METADATA_PARAMS(Z_Construct_UClass_UWrapBox_Statics::NewProp_WrapSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWrapBox_Statics::NewProp_WrapSize_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapBox_Statics::NewProp_bExplicitWrapWidth_MetaData[] = {
		{ "Comment", "/** DEPRECATED value replaced by bExplicitWrapSize, Use explicit wrap width whenever possible. It greatly simplifies layout calculations and reduces likelihood of \"wiggling UI\" */" },
		{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
		{ "ToolTip", "DEPRECATED value replaced by bExplicitWrapSize, Use explicit wrap width whenever possible. It greatly simplifies layout calculations and reduces likelihood of \"wiggling UI\"" },
	};
#endif
	void Z_Construct_UClass_UWrapBox_Statics::NewProp_bExplicitWrapWidth_SetBit(void* Obj)
	{
		((UWrapBox*)Obj)->bExplicitWrapWidth_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWrapBox_Statics::NewProp_bExplicitWrapWidth = { "bExplicitWrapWidth", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWrapBox), &Z_Construct_UClass_UWrapBox_Statics::NewProp_bExplicitWrapWidth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWrapBox_Statics::NewProp_bExplicitWrapWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWrapBox_Statics::NewProp_bExplicitWrapWidth_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapBox_Statics::NewProp_bExplicitWrapSize_MetaData[] = {
		{ "Category", "Content Layout" },
		{ "Comment", "/** Use explicit wrap size whenever possible. It greatly simplifies layout calculations and reduces likelihood of \"wiggling UI\" */" },
		{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
		{ "ToolTip", "Use explicit wrap size whenever possible. It greatly simplifies layout calculations and reduces likelihood of \"wiggling UI\"" },
	};
#endif
	void Z_Construct_UClass_UWrapBox_Statics::NewProp_bExplicitWrapSize_SetBit(void* Obj)
	{
		((UWrapBox*)Obj)->bExplicitWrapSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWrapBox_Statics::NewProp_bExplicitWrapSize = { "bExplicitWrapSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWrapBox), &Z_Construct_UClass_UWrapBox_Statics::NewProp_bExplicitWrapSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWrapBox_Statics::NewProp_bExplicitWrapSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWrapBox_Statics::NewProp_bExplicitWrapSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapBox_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "Content Layout" },
		{ "Comment", "/** The alignment of each line of wrapped content. */" },
		{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
		{ "ToolTip", "The alignment of each line of wrapped content." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWrapBox_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWrapBox, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UWrapBox_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWrapBox_Statics::NewProp_HorizontalAlignment_MetaData)) }; // 4247529014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapBox_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "Content Layout" },
		{ "Comment", "/** Determines if the Wrap Box should arranges the widgets left-to-right or top-to-bottom */" },
		{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
		{ "ToolTip", "Determines if the Wrap Box should arranges the widgets left-to-right or top-to-bottom" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWrapBox_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWrapBox, Orientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(Z_Construct_UClass_UWrapBox_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWrapBox_Statics::NewProp_Orientation_MetaData)) }; // 3412645699
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWrapBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrapBox_Statics::NewProp_InnerSlotPadding,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrapBox_Statics::NewProp_WrapWidth,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrapBox_Statics::NewProp_WrapSize,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrapBox_Statics::NewProp_bExplicitWrapWidth,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrapBox_Statics::NewProp_bExplicitWrapSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrapBox_Statics::NewProp_HorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrapBox_Statics::NewProp_Orientation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWrapBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWrapBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWrapBox_Statics::ClassParams = {
		&UWrapBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWrapBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWrapBox_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWrapBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWrapBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWrapBox()
	{
		if (!Z_Registration_Info_UClass_UWrapBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWrapBox.OuterSingleton, Z_Construct_UClass_UWrapBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWrapBox.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UWrapBox>()
	{
		return UWrapBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWrapBox);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWrapBox, UWrapBox::StaticClass, TEXT("UWrapBox"), &Z_Registration_Info_UClass_UWrapBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWrapBox), 1670588356U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_4221099113(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
