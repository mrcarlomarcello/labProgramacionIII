// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/ExpandableArea.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExpandableArea() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UExpandableArea_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UExpandableArea();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FExpandableAreaStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UNamedSlotInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics
	{
		struct _Script_UMG_eventOnExpandableAreaExpansionChanged_Parms
		{
			UExpandableArea* Area;
			bool bIsExpanded;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Area_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Area;
		static void NewProp_bIsExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExpanded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::NewProp_Area_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::NewProp_Area = { "Area", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_UMG_eventOnExpandableAreaExpansionChanged_Parms, Area), Z_Construct_UClass_UExpandableArea_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::NewProp_Area_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::NewProp_Area_MetaData)) };
	void Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::NewProp_bIsExpanded_SetBit(void* Obj)
	{
		((_Script_UMG_eventOnExpandableAreaExpansionChanged_Parms*)Obj)->bIsExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::NewProp_bIsExpanded = { "bIsExpanded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_UMG_eventOnExpandableAreaExpansionChanged_Parms), &Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::NewProp_bIsExpanded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::NewProp_Area,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::NewProp_bIsExpanded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnExpandableAreaExpansionChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::_Script_UMG_eventOnExpandableAreaExpansionChanged_Parms), Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UExpandableArea::execSetIsExpanded_Animated)
	{
		P_GET_UBOOL(Z_Param_IsExpanded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsExpanded_Animated(Z_Param_IsExpanded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandableArea::execSetIsExpanded)
	{
		P_GET_UBOOL(Z_Param_IsExpanded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsExpanded(Z_Param_IsExpanded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExpandableArea::execGetIsExpanded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsExpanded();
		P_NATIVE_END;
	}
	void UExpandableArea::StaticRegisterNativesUExpandableArea()
	{
		UClass* Class = UExpandableArea::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsExpanded", &UExpandableArea::execGetIsExpanded },
			{ "SetIsExpanded", &UExpandableArea::execSetIsExpanded },
			{ "SetIsExpanded_Animated", &UExpandableArea::execSetIsExpanded_Animated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics
	{
		struct ExpandableArea_eventGetIsExpanded_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ExpandableArea_eventGetIsExpanded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ExpandableArea_eventGetIsExpanded_Parms), &Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Expansion" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandableArea, nullptr, "GetIsExpanded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::ExpandableArea_eventGetIsExpanded_Parms), Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandableArea_GetIsExpanded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics
	{
		struct ExpandableArea_eventSetIsExpanded_Parms
		{
			bool IsExpanded;
		};
		static void NewProp_IsExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsExpanded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::NewProp_IsExpanded_SetBit(void* Obj)
	{
		((ExpandableArea_eventSetIsExpanded_Parms*)Obj)->IsExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::NewProp_IsExpanded = { "IsExpanded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ExpandableArea_eventSetIsExpanded_Parms), &Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::NewProp_IsExpanded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::NewProp_IsExpanded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Expansion" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandableArea, nullptr, "SetIsExpanded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::ExpandableArea_eventSetIsExpanded_Parms), Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandableArea_SetIsExpanded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics
	{
		struct ExpandableArea_eventSetIsExpanded_Animated_Parms
		{
			bool IsExpanded;
		};
		static void NewProp_IsExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsExpanded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::NewProp_IsExpanded_SetBit(void* Obj)
	{
		((ExpandableArea_eventSetIsExpanded_Animated_Parms*)Obj)->IsExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::NewProp_IsExpanded = { "IsExpanded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ExpandableArea_eventSetIsExpanded_Animated_Parms), &Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::NewProp_IsExpanded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::NewProp_IsExpanded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Expansion" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandableArea, nullptr, "SetIsExpanded_Animated", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::ExpandableArea_eventSetIsExpanded_Animated_Parms), Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExpandableArea);
	UClass* Z_Construct_UClass_UExpandableArea_NoRegister()
	{
		return UExpandableArea::StaticClass();
	}
	struct Z_Construct_UClass_UExpandableArea_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Style;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BorderBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BorderBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BorderColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BorderColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsExpanded_MetaData[];
#endif
		static void NewProp_bIsExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExpanded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeaderPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeaderPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AreaPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnExpansionChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExpansionChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeaderContent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HeaderContent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyContent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BodyContent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExpandableArea_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExpandableArea_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExpandableArea_GetIsExpanded, "GetIsExpanded" }, // 945662505
		{ &Z_Construct_UFunction_UExpandableArea_SetIsExpanded, "SetIsExpanded" }, // 4071816863
		{ &Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated, "SetIsExpanded_Animated" }, // 3348066830
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandableArea_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Components/ExpandableArea.h" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandableArea_Statics::NewProp_Style_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExpandableArea_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExpandableArea, Style), Z_Construct_UScriptStruct_FExpandableAreaStyle, METADATA_PARAMS(Z_Construct_UClass_UExpandableArea_Statics::NewProp_Style_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExpandableArea_Statics::NewProp_Style_MetaData)) }; // 3058173129
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandableArea_Statics::NewProp_BorderBrush_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExpandableArea_Statics::NewProp_BorderBrush = { "BorderBrush", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExpandableArea, BorderBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UExpandableArea_Statics::NewProp_BorderBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExpandableArea_Statics::NewProp_BorderBrush_MetaData)) }; // 852902259
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandableArea_Statics::NewProp_BorderColor_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExpandableArea_Statics::NewProp_BorderColor = { "BorderColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExpandableArea, BorderColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UClass_UExpandableArea_Statics::NewProp_BorderColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExpandableArea_Statics::NewProp_BorderColor_MetaData)) }; // 1767155899
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandableArea_Statics::NewProp_bIsExpanded_MetaData[] = {
		{ "Category", "Expansion" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
#endif
	void Z_Construct_UClass_UExpandableArea_Statics::NewProp_bIsExpanded_SetBit(void* Obj)
	{
		((UExpandableArea*)Obj)->bIsExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExpandableArea_Statics::NewProp_bIsExpanded = { "bIsExpanded", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UExpandableArea), &Z_Construct_UClass_UExpandableArea_Statics::NewProp_bIsExpanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExpandableArea_Statics::NewProp_bIsExpanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExpandableArea_Statics::NewProp_bIsExpanded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandableArea_Statics::NewProp_MaxHeight_MetaData[] = {
		{ "Category", "Expansion" },
		{ "Comment", "/** The maximum height of the area */" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
		{ "ToolTip", "The maximum height of the area" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExpandableArea_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExpandableArea, MaxHeight), METADATA_PARAMS(Z_Construct_UClass_UExpandableArea_Statics::NewProp_MaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExpandableArea_Statics::NewProp_MaxHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandableArea_Statics::NewProp_HeaderPadding_MetaData[] = {
		{ "Category", "Expansion" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExpandableArea_Statics::NewProp_HeaderPadding = { "HeaderPadding", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExpandableArea, HeaderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UExpandableArea_Statics::NewProp_HeaderPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExpandableArea_Statics::NewProp_HeaderPadding_MetaData)) }; // 451581171
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandableArea_Statics::NewProp_AreaPadding_MetaData[] = {
		{ "Category", "Expansion" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExpandableArea_Statics::NewProp_AreaPadding = { "AreaPadding", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExpandableArea, AreaPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UExpandableArea_Statics::NewProp_AreaPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExpandableArea_Statics::NewProp_AreaPadding_MetaData)) }; // 451581171
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandableArea_Statics::NewProp_OnExpansionChanged_MetaData[] = {
		{ "Category", "ExpandableArea|Event" },
		{ "Comment", "/** A bindable delegate for the IsChecked. */" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
		{ "ToolTip", "A bindable delegate for the IsChecked." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UExpandableArea_Statics::NewProp_OnExpansionChanged = { "OnExpansionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExpandableArea, OnExpansionChanged), Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UExpandableArea_Statics::NewProp_OnExpansionChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExpandableArea_Statics::NewProp_OnExpansionChanged_MetaData)) }; // 523588027
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandableArea_Statics::NewProp_HeaderContent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UExpandableArea_Statics::NewProp_HeaderContent = { "HeaderContent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExpandableArea, HeaderContent), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UExpandableArea_Statics::NewProp_HeaderContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExpandableArea_Statics::NewProp_HeaderContent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExpandableArea_Statics::NewProp_BodyContent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UExpandableArea_Statics::NewProp_BodyContent = { "BodyContent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExpandableArea, BodyContent), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UExpandableArea_Statics::NewProp_BodyContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExpandableArea_Statics::NewProp_BodyContent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExpandableArea_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandableArea_Statics::NewProp_Style,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandableArea_Statics::NewProp_BorderBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandableArea_Statics::NewProp_BorderColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandableArea_Statics::NewProp_bIsExpanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandableArea_Statics::NewProp_MaxHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandableArea_Statics::NewProp_HeaderPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandableArea_Statics::NewProp_AreaPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandableArea_Statics::NewProp_OnExpansionChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandableArea_Statics::NewProp_HeaderContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandableArea_Statics::NewProp_BodyContent,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UExpandableArea_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNamedSlotInterface_NoRegister, (int32)VTABLE_OFFSET(UExpandableArea, INamedSlotInterface), false },  // 982470384
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExpandableArea_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExpandableArea>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExpandableArea_Statics::ClassParams = {
		&UExpandableArea::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UExpandableArea_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UExpandableArea_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UExpandableArea_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExpandableArea_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExpandableArea()
	{
		if (!Z_Registration_Info_UClass_UExpandableArea.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExpandableArea.OuterSingleton, Z_Construct_UClass_UExpandableArea_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExpandableArea.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UExpandableArea>()
	{
		return UExpandableArea::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExpandableArea);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ExpandableArea_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ExpandableArea_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExpandableArea, UExpandableArea::StaticClass, TEXT("UExpandableArea"), &Z_Registration_Info_UClass_UExpandableArea, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExpandableArea), 2298542919U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ExpandableArea_h_3935017062(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ExpandableArea_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ExpandableArea_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
