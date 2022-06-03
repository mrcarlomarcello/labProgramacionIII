// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Distributions/DistributionFloatUniformCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistributionFloatUniformCurve() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatUniformCurve_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloatUniformCurve();
	ENGINE_API UClass* Z_Construct_UClass_UDistributionFloat();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveVector2D();
// End Cross Module References
	void UDistributionFloatUniformCurve::StaticRegisterNativesUDistributionFloatUniformCurve()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDistributionFloatUniformCurve);
	UClass* Z_Construct_UClass_UDistributionFloatUniformCurve_NoRegister()
	{
		return UDistributionFloatUniformCurve::StaticClass();
	}
	struct Z_Construct_UClass_UDistributionFloatUniformCurve_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstantCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstantCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDistributionFloat,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Distributions/DistributionFloatUniformCurve.h" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatUniformCurve.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::NewProp_ConstantCurve_MetaData[] = {
		{ "Category", "DistributionFloatUniformCurve" },
		{ "Comment", "/** Keyframe data for how output constant varies over time. */" },
		{ "ModuleRelativePath", "Classes/Distributions/DistributionFloatUniformCurve.h" },
		{ "ToolTip", "Keyframe data for how output constant varies over time." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::NewProp_ConstantCurve = { "ConstantCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDistributionFloatUniformCurve, ConstantCurve), Z_Construct_UScriptStruct_FInterpCurveVector2D, METADATA_PARAMS(Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::NewProp_ConstantCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::NewProp_ConstantCurve_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::NewProp_ConstantCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistributionFloatUniformCurve>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::ClassParams = {
		&UDistributionFloatUniformCurve::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::PropPointers),
		0,
		0x003030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDistributionFloatUniformCurve()
	{
		if (!Z_Registration_Info_UClass_UDistributionFloatUniformCurve.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDistributionFloatUniformCurve.OuterSingleton, Z_Construct_UClass_UDistributionFloatUniformCurve_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDistributionFloatUniformCurve.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDistributionFloatUniformCurve>()
	{
		return UDistributionFloatUniformCurve::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistributionFloatUniformCurve);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniformCurve_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniformCurve_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDistributionFloatUniformCurve, UDistributionFloatUniformCurve::StaticClass, TEXT("UDistributionFloatUniformCurve"), &Z_Registration_Info_UClass_UDistributionFloatUniformCurve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDistributionFloatUniformCurve), 3767749296U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniformCurve_h_3149914363(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniformCurve_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionFloatUniformCurve_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
