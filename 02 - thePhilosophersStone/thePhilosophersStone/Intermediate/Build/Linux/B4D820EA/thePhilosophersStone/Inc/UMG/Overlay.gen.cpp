// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/Overlay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverlay() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UOverlay();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UOverlaySlot_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UOverlay::execAddChildToOverlay)
	{
		P_GET_OBJECT(UWidget,Z_Param_Content);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOverlaySlot**)Z_Param__Result=P_THIS->AddChildToOverlay(Z_Param_Content);
		P_NATIVE_END;
	}
	void UOverlay::StaticRegisterNativesUOverlay()
	{
		UClass* Class = UOverlay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChildToOverlay", &UOverlay::execAddChildToOverlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics
	{
		struct Overlay_eventAddChildToOverlay_Parms
		{
			UWidget* Content;
			UOverlaySlot* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Overlay_eventAddChildToOverlay_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::NewProp_Content_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Overlay_eventAddChildToOverlay_Parms, ReturnValue), Z_Construct_UClass_UOverlaySlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/Overlay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverlay, nullptr, "AddChildToOverlay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::Overlay_eventAddChildToOverlay_Parms), Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOverlay_AddChildToOverlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOverlay_AddChildToOverlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOverlay);
	UClass* Z_Construct_UClass_UOverlay_NoRegister()
	{
		return UOverlay::StaticClass();
	}
	struct Z_Construct_UClass_UOverlay_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOverlay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOverlay_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOverlay_AddChildToOverlay, "AddChildToOverlay" }, // 3675784242
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlay_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Allows widgets to be stacked on top of each other, uses simple flow layout for content on each layer.\n */" },
		{ "IncludePath", "Components/Overlay.h" },
		{ "ModuleRelativePath", "Public/Components/Overlay.h" },
		{ "ToolTip", "Allows widgets to be stacked on top of each other, uses simple flow layout for content on each layer." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOverlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOverlay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOverlay_Statics::ClassParams = {
		&UOverlay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOverlay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOverlay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOverlay()
	{
		if (!Z_Registration_Info_UClass_UOverlay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOverlay.OuterSingleton, Z_Construct_UClass_UOverlay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOverlay.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UOverlay>()
	{
		return UOverlay::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOverlay);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOverlay, UOverlay::StaticClass, TEXT("UOverlay"), &Z_Registration_Info_UClass_UOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOverlay), 3115450780U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_393495507(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Overlay_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
