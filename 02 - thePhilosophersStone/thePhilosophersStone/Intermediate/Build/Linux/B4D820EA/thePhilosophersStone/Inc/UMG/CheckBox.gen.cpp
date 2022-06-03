// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/CheckBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckBox() {}
// Cross Module References
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnCheckBoxComponentStateChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UCheckBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCheckBox();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ECheckBoxState();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EButtonClickMethod();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EButtonPressMethod();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EButtonTouchMethod();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetCheckBoxState__DelegateSignature();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCheckBoxStyle();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USlateBrushAsset_NoRegister();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMG_OnCheckBoxComponentStateChanged__DelegateSignature_Statics
	{
		struct _Script_UMG_eventOnCheckBoxComponentStateChanged_Parms
		{
			bool bIsChecked;
		};
		static void NewProp_bIsChecked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsChecked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UMG_OnCheckBoxComponentStateChanged__DelegateSignature_Statics::NewProp_bIsChecked_SetBit(void* Obj)
	{
		((_Script_UMG_eventOnCheckBoxComponentStateChanged_Parms*)Obj)->bIsChecked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UMG_OnCheckBoxComponentStateChanged__DelegateSignature_Statics::NewProp_bIsChecked = { "bIsChecked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_UMG_eventOnCheckBoxComponentStateChanged_Parms), &Z_Construct_UDelegateFunction_UMG_OnCheckBoxComponentStateChanged__DelegateSignature_Statics::NewProp_bIsChecked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnCheckBoxComponentStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnCheckBoxComponentStateChanged__DelegateSignature_Statics::NewProp_bIsChecked,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnCheckBoxComponentStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnCheckBoxComponentStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnCheckBoxComponentStateChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMG_OnCheckBoxComponentStateChanged__DelegateSignature_Statics::_Script_UMG_eventOnCheckBoxComponentStateChanged_Parms), Z_Construct_UDelegateFunction_UMG_OnCheckBoxComponentStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnCheckBoxComponentStateChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnCheckBoxComponentStateChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnCheckBoxComponentStateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnCheckBoxComponentStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnCheckBoxComponentStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCheckBox::execSetPressMethod)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InPressMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPressMethod(EButtonPressMethod::Type(Z_Param_InPressMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCheckBox::execSetTouchMethod)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InTouchMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTouchMethod(EButtonTouchMethod::Type(Z_Param_InTouchMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCheckBox::execSetClickMethod)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InClickMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetClickMethod(EButtonClickMethod::Type(Z_Param_InClickMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCheckBox::execSetCheckedState)
	{
		P_GET_ENUM(ECheckBoxState,Z_Param_InCheckedState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCheckedState(ECheckBoxState(Z_Param_InCheckedState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCheckBox::execSetIsChecked)
	{
		P_GET_UBOOL(Z_Param_InIsChecked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsChecked(Z_Param_InIsChecked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCheckBox::execGetCheckedState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECheckBoxState*)Z_Param__Result=P_THIS->GetCheckedState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCheckBox::execIsChecked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsChecked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCheckBox::execIsPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPressed();
		P_NATIVE_END;
	}
	void UCheckBox::StaticRegisterNativesUCheckBox()
	{
		UClass* Class = UCheckBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCheckedState", &UCheckBox::execGetCheckedState },
			{ "IsChecked", &UCheckBox::execIsChecked },
			{ "IsPressed", &UCheckBox::execIsPressed },
			{ "SetCheckedState", &UCheckBox::execSetCheckedState },
			{ "SetClickMethod", &UCheckBox::execSetClickMethod },
			{ "SetIsChecked", &UCheckBox::execSetIsChecked },
			{ "SetPressMethod", &UCheckBox::execSetPressMethod },
			{ "SetTouchMethod", &UCheckBox::execSetTouchMethod },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCheckBox_GetCheckedState_Statics
	{
		struct CheckBox_eventGetCheckedState_Parms
		{
			ECheckBoxState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCheckBox_GetCheckedState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCheckBox_GetCheckedState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckBox_eventGetCheckedState_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(nullptr, 0) }; // 1662204813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckBox_GetCheckedState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckBox_GetCheckedState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckBox_GetCheckedState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckBox_GetCheckedState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Returns the full current checked state. */" },
		{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
		{ "ToolTip", "Returns the full current checked state." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckBox_GetCheckedState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckBox, nullptr, "GetCheckedState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCheckBox_GetCheckedState_Statics::CheckBox_eventGetCheckedState_Parms), Z_Construct_UFunction_UCheckBox_GetCheckedState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckBox_GetCheckedState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckBox_GetCheckedState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckBox_GetCheckedState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckBox_GetCheckedState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheckBox_GetCheckedState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCheckBox_IsChecked_Statics
	{
		struct CheckBox_eventIsChecked_Parms
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
	void Z_Construct_UFunction_UCheckBox_IsChecked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CheckBox_eventIsChecked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCheckBox_IsChecked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CheckBox_eventIsChecked_Parms), &Z_Construct_UFunction_UCheckBox_IsChecked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckBox_IsChecked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckBox_IsChecked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckBox_IsChecked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Returns true if the checkbox is currently checked */" },
		{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
		{ "ToolTip", "Returns true if the checkbox is currently checked" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckBox_IsChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckBox, nullptr, "IsChecked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCheckBox_IsChecked_Statics::CheckBox_eventIsChecked_Parms), Z_Construct_UFunction_UCheckBox_IsChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckBox_IsChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckBox_IsChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckBox_IsChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckBox_IsChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheckBox_IsChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCheckBox_IsPressed_Statics
	{
		struct CheckBox_eventIsPressed_Parms
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
	void Z_Construct_UFunction_UCheckBox_IsPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CheckBox_eventIsPressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCheckBox_IsPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CheckBox_eventIsPressed_Parms), &Z_Construct_UFunction_UCheckBox_IsPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckBox_IsPressed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckBox_IsPressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckBox_IsPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Returns true if this button is currently pressed */" },
		{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
		{ "ToolTip", "Returns true if this button is currently pressed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckBox_IsPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckBox, nullptr, "IsPressed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCheckBox_IsPressed_Statics::CheckBox_eventIsPressed_Parms), Z_Construct_UFunction_UCheckBox_IsPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckBox_IsPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckBox_IsPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckBox_IsPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckBox_IsPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheckBox_IsPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCheckBox_SetCheckedState_Statics
	{
		struct CheckBox_eventSetCheckedState_Parms
		{
			ECheckBoxState InCheckedState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InCheckedState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InCheckedState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCheckBox_SetCheckedState_Statics::NewProp_InCheckedState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCheckBox_SetCheckedState_Statics::NewProp_InCheckedState = { "InCheckedState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckBox_eventSetCheckedState_Parms, InCheckedState), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(nullptr, 0) }; // 1662204813
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckBox_SetCheckedState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckBox_SetCheckedState_Statics::NewProp_InCheckedState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckBox_SetCheckedState_Statics::NewProp_InCheckedState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckBox_SetCheckedState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets the checked state. */" },
		{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
		{ "ToolTip", "Sets the checked state." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckBox_SetCheckedState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckBox, nullptr, "SetCheckedState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCheckBox_SetCheckedState_Statics::CheckBox_eventSetCheckedState_Parms), Z_Construct_UFunction_UCheckBox_SetCheckedState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckBox_SetCheckedState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckBox_SetCheckedState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckBox_SetCheckedState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckBox_SetCheckedState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheckBox_SetCheckedState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCheckBox_SetClickMethod_Statics
	{
		struct CheckBox_eventSetClickMethod_Parms
		{
			TEnumAsByte<EButtonClickMethod::Type> InClickMethod;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InClickMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCheckBox_SetClickMethod_Statics::NewProp_InClickMethod = { "InClickMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckBox_eventSetClickMethod_Parms, InClickMethod), Z_Construct_UEnum_SlateCore_EButtonClickMethod, METADATA_PARAMS(nullptr, 0) }; // 4238010345
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckBox_SetClickMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckBox_SetClickMethod_Statics::NewProp_InClickMethod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckBox_SetClickMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Button" },
		{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckBox_SetClickMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckBox, nullptr, "SetClickMethod", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCheckBox_SetClickMethod_Statics::CheckBox_eventSetClickMethod_Parms), Z_Construct_UFunction_UCheckBox_SetClickMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckBox_SetClickMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckBox_SetClickMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckBox_SetClickMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckBox_SetClickMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheckBox_SetClickMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCheckBox_SetIsChecked_Statics
	{
		struct CheckBox_eventSetIsChecked_Parms
		{
			bool InIsChecked;
		};
		static void NewProp_InIsChecked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InIsChecked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCheckBox_SetIsChecked_Statics::NewProp_InIsChecked_SetBit(void* Obj)
	{
		((CheckBox_eventSetIsChecked_Parms*)Obj)->InIsChecked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCheckBox_SetIsChecked_Statics::NewProp_InIsChecked = { "InIsChecked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CheckBox_eventSetIsChecked_Parms), &Z_Construct_UFunction_UCheckBox_SetIsChecked_Statics::NewProp_InIsChecked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckBox_SetIsChecked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckBox_SetIsChecked_Statics::NewProp_InIsChecked,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckBox_SetIsChecked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Sets the checked state. */" },
		{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
		{ "ToolTip", "Sets the checked state." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckBox_SetIsChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckBox, nullptr, "SetIsChecked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCheckBox_SetIsChecked_Statics::CheckBox_eventSetIsChecked_Parms), Z_Construct_UFunction_UCheckBox_SetIsChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckBox_SetIsChecked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckBox_SetIsChecked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckBox_SetIsChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckBox_SetIsChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheckBox_SetIsChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCheckBox_SetPressMethod_Statics
	{
		struct CheckBox_eventSetPressMethod_Parms
		{
			TEnumAsByte<EButtonPressMethod::Type> InPressMethod;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InPressMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCheckBox_SetPressMethod_Statics::NewProp_InPressMethod = { "InPressMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckBox_eventSetPressMethod_Parms, InPressMethod), Z_Construct_UEnum_SlateCore_EButtonPressMethod, METADATA_PARAMS(nullptr, 0) }; // 73978870
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckBox_SetPressMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckBox_SetPressMethod_Statics::NewProp_InPressMethod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckBox_SetPressMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Button" },
		{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckBox_SetPressMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckBox, nullptr, "SetPressMethod", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCheckBox_SetPressMethod_Statics::CheckBox_eventSetPressMethod_Parms), Z_Construct_UFunction_UCheckBox_SetPressMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckBox_SetPressMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckBox_SetPressMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckBox_SetPressMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckBox_SetPressMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheckBox_SetPressMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCheckBox_SetTouchMethod_Statics
	{
		struct CheckBox_eventSetTouchMethod_Parms
		{
			TEnumAsByte<EButtonTouchMethod::Type> InTouchMethod;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InTouchMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCheckBox_SetTouchMethod_Statics::NewProp_InTouchMethod = { "InTouchMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckBox_eventSetTouchMethod_Parms, InTouchMethod), Z_Construct_UEnum_SlateCore_EButtonTouchMethod, METADATA_PARAMS(nullptr, 0) }; // 922219495
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckBox_SetTouchMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckBox_SetTouchMethod_Statics::NewProp_InTouchMethod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckBox_SetTouchMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Button" },
		{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckBox_SetTouchMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckBox, nullptr, "SetTouchMethod", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCheckBox_SetTouchMethod_Statics::CheckBox_eventSetTouchMethod_Parms), Z_Construct_UFunction_UCheckBox_SetTouchMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckBox_SetTouchMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckBox_SetTouchMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckBox_SetTouchMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckBox_SetTouchMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCheckBox_SetTouchMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCheckBox);
	UClass* Z_Construct_UClass_UCheckBox_NoRegister()
	{
		return UCheckBox::StaticClass();
	}
	struct Z_Construct_UClass_UCheckBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CheckedState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckedState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CheckedState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckedStateDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_CheckedStateDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Style;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UncheckedImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UncheckedImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UncheckedHoveredImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UncheckedHoveredImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UncheckedPressedImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UncheckedPressedImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckedImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CheckedImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckedHoveredImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CheckedHoveredImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckedPressedImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CheckedPressedImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UndeterminedImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UndeterminedImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UndeterminedHoveredImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UndeterminedHoveredImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UndeterminedPressedImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UndeterminedPressedImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BorderBackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BorderBackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClickMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TouchMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TouchMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PressMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PressMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsFocusable_MetaData[];
#endif
		static void NewProp_IsFocusable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFocusable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCheckStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCheckStateChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCheckBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCheckBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCheckBox_GetCheckedState, "GetCheckedState" }, // 2763791995
		{ &Z_Construct_UFunction_UCheckBox_IsChecked, "IsChecked" }, // 1156504155
		{ &Z_Construct_UFunction_UCheckBox_IsPressed, "IsPressed" }, // 3490557815
		{ &Z_Construct_UFunction_UCheckBox_SetCheckedState, "SetCheckedState" }, // 3220393901
		{ &Z_Construct_UFunction_UCheckBox_SetClickMethod, "SetClickMethod" }, // 1998131294
		{ &Z_Construct_UFunction_UCheckBox_SetIsChecked, "SetIsChecked" }, // 116346516
		{ &Z_Construct_UFunction_UCheckBox_SetPressMethod, "SetPressMethod" }, // 3615775497
		{ &Z_Construct_UFunction_UCheckBox_SetTouchMethod, "SetTouchMethod" }, // 2702846614
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The checkbox widget allows you to display a toggled state of 'unchecked', 'checked' and \n * 'indeterminable.  You can use the checkbox for a classic checkbox, or as a toggle button,\n * or as radio buttons.\n * \n * * Single Child\n * * Toggle\n */" },
		{ "IncludePath", "Components/CheckBox.h" },
		{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
		{ "ToolTip", "The checkbox widget allows you to display a toggled state of 'unchecked', 'checked' and\n'indeterminable.  You can use the checkbox for a classic checkbox, or as a toggle button,\nor as radio buttons.\n\n* Single Child\n* Toggle" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCheckBox_Statics::NewProp_CheckedState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckBox_Statics::NewProp_CheckedState_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Whether the check box is currently in a checked state */" },
		{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
		{ "ToolTip", "Whether the check box is currently in a checked state" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCheckBox_Statics::NewProp_CheckedState = { "CheckedState", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckBox, CheckedState), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(Z_Construct_UClass_UCheckBox_Statics::NewProp_CheckedState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBox_Statics::NewProp_CheckedState_MetaData)) }; // 1662204813
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckBox_Statics::NewProp_CheckedStateDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate for the IsChecked. */" },
		{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
		{ "ToolTip", "A bindable delegate for the IsChecked." },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UCheckBox_Statics::NewProp_CheckedStateDelegate = { "CheckedStateDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckBox, CheckedStateDelegate), Z_Construct_UDelegateFunction_UWidget_GetCheckBoxState__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCheckBox_Statics::NewProp_CheckedStateDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBox_Statics::NewProp_CheckedStateDelegate_MetaData)) }; // 1138015733
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckBox_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The checkbox bar style */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
		{ "ToolTip", "The checkbox bar style" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCheckBox_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckBox, WidgetStyle), Z_Construct_UScriptStruct_FCheckBoxStyle, METADATA_PARAMS(Z_Construct_UClass_UCheckBox_Statics::NewProp_WidgetStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBox_Statics::NewProp_WidgetStyle_MetaData)) }; // 486413705
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckBox_Statics::NewProp_Style_MetaData[] = {
		{ "Comment", "/** Style of the check box */" },
		{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
		{ "ToolTip", "Style of the check box" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCheckBox_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckBox, Style_DEPRECATED), Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCheckBox_Statics::NewProp_Style_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBox_Statics::NewProp_Style_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckBox_Statics::NewProp_UncheckedImage_MetaData[] = {
		{ "Comment", "/** Image to use when the checkbox is unchecked */" },
		{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
		{ "ToolTip", "Image to use when the checkbox is unchecked" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCheckBox_Statics::NewProp_UncheckedImage = { "UncheckedImage", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckBox, UncheckedImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCheckBox_Statics::NewProp_UncheckedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBox_Statics::NewProp_UncheckedImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckBox_Statics::NewProp_UncheckedHoveredImage_MetaData[] = {
		{ "Comment", "/** Image to use when the checkbox is unchecked and hovered */" },
		{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
		{ "ToolTip", "Image to use when the checkbox is unchecked and hovered" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCheckBox_Statics::NewProp_UncheckedHoveredImage = { "UncheckedHoveredImage", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckBox, UncheckedHoveredImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCheckBox_Statics::NewProp_UncheckedHoveredImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBox_Statics::NewProp_UncheckedHoveredImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckBox_Statics::NewProp_UncheckedPressedImage_MetaData[] = {
		{ "Comment", "/** Image to use when the checkbox is unchecked and pressed */" },
		{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
		{ "ToolTip", "Image to use when the checkbox is unchecked and pressed" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCheckBox_Statics::NewProp_UncheckedPressedImage = { "UncheckedPressedImage", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckBox, UncheckedPressedImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCheckBox_Statics::NewProp_UncheckedPressedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBox_Statics::NewProp_UncheckedPressedImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckBox_Statics::NewProp_CheckedImage_MetaData[] = {
		{ "Comment", "/** Image to use when the checkbox is checked */" },
		{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
		{ "ToolTip", "Image to use when the checkbox is checked" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCheckBox_Statics::NewProp_CheckedImage = { "CheckedImage", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckBox, CheckedImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCheckBox_Statics::NewProp_CheckedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBox_Statics::NewProp_CheckedImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckBox_Statics::NewProp_CheckedHoveredImage_MetaData[] = {
		{ "Comment", "/** Image to use when the checkbox is checked and hovered */" },
		{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
		{ "ToolTip", "Image to use when the checkbox is checked and hovered" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCheckBox_Statics::NewProp_CheckedHoveredImage = { "CheckedHoveredImage", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckBox, CheckedHoveredImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCheckBox_Statics::NewProp_CheckedHoveredImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBox_Statics::NewProp_CheckedHoveredImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckBox_Statics::NewProp_CheckedPressedImage_MetaData[] = {
		{ "Comment", "/** Image to use when the checkbox is checked and pressed */" },
		{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
		{ "ToolTip", "Image to use when the checkbox is checked and pressed" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCheckBox_Statics::NewProp_CheckedPressedImage = { "CheckedPressedImage", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckBox, CheckedPressedImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCheckBox_Statics::NewProp_CheckedPressedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBox_Statics::NewProp_CheckedPressedImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckBox_Statics::NewProp_UndeterminedImage_MetaData[] = {
		{ "Comment", "/** Image to use when the checkbox is in an ambiguous state and hovered */" },
		{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
		{ "ToolTip", "Image to use when the checkbox is in an ambiguous state and hovered" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCheckBox_Statics::NewProp_UndeterminedImage = { "UndeterminedImage", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckBox, UndeterminedImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCheckBox_Statics::NewProp_UndeterminedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBox_Statics::NewProp_UndeterminedImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckBox_Statics::NewProp_UndeterminedHoveredImage_MetaData[] = {
		{ "Comment", "/** Image to use when the checkbox is checked and hovered */" },
		{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
		{ "ToolTip", "Image to use when the checkbox is checked and hovered" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCheckBox_Statics::NewProp_UndeterminedHoveredImage = { "UndeterminedHoveredImage", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckBox, UndeterminedHoveredImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCheckBox_Statics::NewProp_UndeterminedHoveredImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBox_Statics::NewProp_UndeterminedHoveredImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckBox_Statics::NewProp_UndeterminedPressedImage_MetaData[] = {
		{ "Comment", "/** Image to use when the checkbox is in an ambiguous state and pressed */" },
		{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
		{ "ToolTip", "Image to use when the checkbox is in an ambiguous state and pressed" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCheckBox_Statics::NewProp_UndeterminedPressedImage = { "UndeterminedPressedImage", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckBox, UndeterminedPressedImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCheckBox_Statics::NewProp_UndeterminedPressedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBox_Statics::NewProp_UndeterminedPressedImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckBox_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** How the content of the toggle button should align within the given space */" },
		{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
		{ "ToolTip", "How the content of the toggle button should align within the given space" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCheckBox_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckBox, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UCheckBox_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBox_Statics::NewProp_HorizontalAlignment_MetaData)) }; // 4247529014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckBox_Statics::NewProp_Padding_MetaData[] = {
		{ "Comment", "/** Spacing between the check box image and its content */" },
		{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
		{ "ToolTip", "Spacing between the check box image and its content" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCheckBox_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckBox, Padding_DEPRECATED), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UCheckBox_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBox_Statics::NewProp_Padding_MetaData)) }; // 451581171
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckBox_Statics::NewProp_BorderBackgroundColor_MetaData[] = {
		{ "Comment", "/** The color of the background border */" },
		{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
		{ "ToolTip", "The color of the background border" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCheckBox_Statics::NewProp_BorderBackgroundColor = { "BorderBackgroundColor", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckBox, BorderBackgroundColor_DEPRECATED), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UClass_UCheckBox_Statics::NewProp_BorderBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBox_Statics::NewProp_BorderBackgroundColor_MetaData)) }; // 1767155899
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckBox_Statics::NewProp_ClickMethod_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** The type of mouse action required by the user to trigger the buttons 'Click' */" },
		{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
		{ "ToolTip", "The type of mouse action required by the user to trigger the buttons 'Click'" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCheckBox_Statics::NewProp_ClickMethod = { "ClickMethod", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckBox, ClickMethod), Z_Construct_UEnum_SlateCore_EButtonClickMethod, METADATA_PARAMS(Z_Construct_UClass_UCheckBox_Statics::NewProp_ClickMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBox_Statics::NewProp_ClickMethod_MetaData)) }; // 4238010345
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckBox_Statics::NewProp_TouchMethod_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** The type of touch action required by the user to trigger the buttons 'Click' */" },
		{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
		{ "ToolTip", "The type of touch action required by the user to trigger the buttons 'Click'" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCheckBox_Statics::NewProp_TouchMethod = { "TouchMethod", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckBox, TouchMethod), Z_Construct_UEnum_SlateCore_EButtonTouchMethod, METADATA_PARAMS(Z_Construct_UClass_UCheckBox_Statics::NewProp_TouchMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBox_Statics::NewProp_TouchMethod_MetaData)) }; // 922219495
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckBox_Statics::NewProp_PressMethod_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** The type of keyboard/gamepad button press action required by the user to trigger the buttons 'Click' */" },
		{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
		{ "ToolTip", "The type of keyboard/gamepad button press action required by the user to trigger the buttons 'Click'" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCheckBox_Statics::NewProp_PressMethod = { "PressMethod", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckBox, PressMethod), Z_Construct_UEnum_SlateCore_EButtonPressMethod, METADATA_PARAMS(Z_Construct_UClass_UCheckBox_Statics::NewProp_PressMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBox_Statics::NewProp_PressMethod_MetaData)) }; // 73978870
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckBox_Statics::NewProp_IsFocusable_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** Sometimes a button should only be mouse-clickable and never keyboard focusable. */" },
		{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
		{ "ToolTip", "Sometimes a button should only be mouse-clickable and never keyboard focusable." },
	};
#endif
	void Z_Construct_UClass_UCheckBox_Statics::NewProp_IsFocusable_SetBit(void* Obj)
	{
		((UCheckBox*)Obj)->IsFocusable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCheckBox_Statics::NewProp_IsFocusable = { "IsFocusable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCheckBox), &Z_Construct_UClass_UCheckBox_Statics::NewProp_IsFocusable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCheckBox_Statics::NewProp_IsFocusable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBox_Statics::NewProp_IsFocusable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckBox_Statics::NewProp_OnCheckStateChanged_MetaData[] = {
		{ "Category", "CheckBox|Event" },
		{ "Comment", "/** Called when the checked state has changed */" },
		{ "ModuleRelativePath", "Public/Components/CheckBox.h" },
		{ "ToolTip", "Called when the checked state has changed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCheckBox_Statics::NewProp_OnCheckStateChanged = { "OnCheckStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckBox, OnCheckStateChanged), Z_Construct_UDelegateFunction_UMG_OnCheckBoxComponentStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCheckBox_Statics::NewProp_OnCheckStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBox_Statics::NewProp_OnCheckStateChanged_MetaData)) }; // 3503192685
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCheckBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckBox_Statics::NewProp_CheckedState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckBox_Statics::NewProp_CheckedState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckBox_Statics::NewProp_CheckedStateDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckBox_Statics::NewProp_WidgetStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckBox_Statics::NewProp_Style,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckBox_Statics::NewProp_UncheckedImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckBox_Statics::NewProp_UncheckedHoveredImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckBox_Statics::NewProp_UncheckedPressedImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckBox_Statics::NewProp_CheckedImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckBox_Statics::NewProp_CheckedHoveredImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckBox_Statics::NewProp_CheckedPressedImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckBox_Statics::NewProp_UndeterminedImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckBox_Statics::NewProp_UndeterminedHoveredImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckBox_Statics::NewProp_UndeterminedPressedImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckBox_Statics::NewProp_HorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckBox_Statics::NewProp_Padding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckBox_Statics::NewProp_BorderBackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckBox_Statics::NewProp_ClickMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckBox_Statics::NewProp_TouchMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckBox_Statics::NewProp_PressMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckBox_Statics::NewProp_IsFocusable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckBox_Statics::NewProp_OnCheckStateChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCheckBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCheckBox_Statics::ClassParams = {
		&UCheckBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCheckBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBox_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCheckBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCheckBox()
	{
		if (!Z_Registration_Info_UClass_UCheckBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCheckBox.OuterSingleton, Z_Construct_UClass_UCheckBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCheckBox.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UCheckBox>()
	{
		return UCheckBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckBox);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCheckBox, UCheckBox::StaticClass, TEXT("UCheckBox"), &Z_Registration_Info_UClass_UCheckBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCheckBox), 4239375776U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_1030542242(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CheckBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
