// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpFilter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpFilter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpFilter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpFilter::StaticRegisterNativesUInterpFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpFilter);
	UClass* Z_Construct_UClass_UInterpFilter_NoRegister()
	{
		return UInterpFilter::StaticClass();
	}
	struct Z_Construct_UClass_UInterpFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Caption_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Caption;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpFilter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpFilter.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpFilter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpFilter_Statics::NewProp_Caption_MetaData[] = {
		{ "Comment", "/** Caption for this filter. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpFilter.h" },
		{ "ToolTip", "Caption for this filter." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterpFilter_Statics::NewProp_Caption = { "Caption", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpFilter, Caption), METADATA_PARAMS(Z_Construct_UClass_UInterpFilter_Statics::NewProp_Caption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpFilter_Statics::NewProp_Caption_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpFilter_Statics::NewProp_Caption,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpFilter_Statics::ClassParams = {
		&UInterpFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpFilter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpFilter_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpFilter()
	{
		if (!Z_Registration_Info_UClass_UInterpFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpFilter.OuterSingleton, Z_Construct_UClass_UInterpFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpFilter.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpFilter>()
	{
		return UInterpFilter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpFilter);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpFilter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpFilter, UInterpFilter::StaticClass, TEXT("UInterpFilter"), &Z_Registration_Info_UClass_UInterpFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpFilter), 1689474085U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpFilter_h_3048232989(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpFilter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
