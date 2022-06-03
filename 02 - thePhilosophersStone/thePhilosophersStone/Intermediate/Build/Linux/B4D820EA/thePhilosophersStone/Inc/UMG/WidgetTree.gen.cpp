// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Blueprint/WidgetTree.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetTree() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UWidgetTree_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetTree();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
// End Cross Module References
	void UWidgetTree::StaticRegisterNativesUWidgetTree()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetTree);
	UClass* Z_Construct_UClass_UWidgetTree_NoRegister()
	{
		return UWidgetTree::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetTree_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootWidget;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllWidgets_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AllWidgets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllWidgets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllWidgets;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetTree_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetTree_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** The widget tree manages the collection of widgets in a blueprint widget. */" },
		{ "IncludePath", "Blueprint/WidgetTree.h" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetTree.h" },
		{ "ToolTip", "The widget tree manages the collection of widgets in a blueprint widget." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetTree_Statics::NewProp_RootWidget_MetaData[] = {
		{ "Comment", "/** The root widget of the tree */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetTree.h" },
		{ "ToolTip", "The root widget of the tree" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWidgetTree_Statics::NewProp_RootWidget = { "RootWidget", nullptr, (EPropertyFlags)0x0016000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetTree, RootWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetTree_Statics::NewProp_RootWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetTree_Statics::NewProp_RootWidget_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetTree_Statics::NewProp_AllWidgets_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetTree.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWidgetTree_Statics::NewProp_AllWidgets_Inner = { "AllWidgets", nullptr, (EPropertyFlags)0x0006000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetTree_Statics::NewProp_AllWidgets_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetTree_Statics::NewProp_AllWidgets_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetTree_Statics::NewProp_AllWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetTree.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidgetTree_Statics::NewProp_AllWidgets = { "AllWidgets", nullptr, (EPropertyFlags)0x0024088800000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetTree, AllWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWidgetTree_Statics::NewProp_AllWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetTree_Statics::NewProp_AllWidgets_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetTree_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetTree_Statics::NewProp_RootWidget,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetTree_Statics::NewProp_AllWidgets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetTree_Statics::NewProp_AllWidgets,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetTree_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetTree>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetTree_Statics::ClassParams = {
		&UWidgetTree::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWidgetTree_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetTree_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetTree_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetTree_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetTree()
	{
		if (!Z_Registration_Info_UClass_UWidgetTree.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetTree.OuterSingleton, Z_Construct_UClass_UWidgetTree_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetTree.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UWidgetTree>()
	{
		return UWidgetTree::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetTree);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetTree_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetTree_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetTree, UWidgetTree::StaticClass, TEXT("UWidgetTree"), &Z_Registration_Info_UClass_UWidgetTree, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetTree), 2857340515U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetTree_h_2022071955(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetTree_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetTree_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
