// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackLinearColorBase.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackLinearColorBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackLinearColorBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackLinearColorBase();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveLinearColor();
// End Cross Module References
	void UInterpTrackLinearColorBase::StaticRegisterNativesUInterpTrackLinearColorBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackLinearColorBase);
	UClass* Z_Construct_UClass_UInterpTrackLinearColorBase_NoRegister()
	{
		return UInterpTrackLinearColorBase::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackLinearColorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearColorTrack_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearColorTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveTension_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveTension;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackLinearColorBase.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackLinearColorBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::NewProp_LinearColorTrack_MetaData[] = {
		{ "Comment", "/** Actually track data containing keyframes of a FVector as it varies over time. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackLinearColorBase.h" },
		{ "ToolTip", "Actually track data containing keyframes of a FVector as it varies over time." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::NewProp_LinearColorTrack = { "LinearColorTrack", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackLinearColorBase, LinearColorTrack), Z_Construct_UScriptStruct_FInterpCurveLinearColor, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::NewProp_LinearColorTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::NewProp_LinearColorTrack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::NewProp_CurveTension_MetaData[] = {
		{ "Category", "InterpTrackLinearColorBase" },
		{ "Comment", "/** Tension of curve, used for keypoints using automatic tangents. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackLinearColorBase.h" },
		{ "ToolTip", "Tension of curve, used for keypoints using automatic tangents." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::NewProp_CurveTension = { "CurveTension", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackLinearColorBase, CurveTension), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::NewProp_CurveTension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::NewProp_CurveTension_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::NewProp_LinearColorTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::NewProp_CurveTension,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackLinearColorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::ClassParams = {
		&UInterpTrackLinearColorBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::PropPointers),
		0,
		0x000820A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackLinearColorBase()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackLinearColorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackLinearColorBase.OuterSingleton, Z_Construct_UClass_UInterpTrackLinearColorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackLinearColorBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackLinearColorBase>()
	{
		return UInterpTrackLinearColorBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackLinearColorBase);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UInterpTrackLinearColorBase)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackLinearColorBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackLinearColorBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackLinearColorBase, UInterpTrackLinearColorBase::StaticClass, TEXT("UInterpTrackLinearColorBase"), &Z_Registration_Info_UClass_UInterpTrackLinearColorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackLinearColorBase), 793066544U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackLinearColorBase_h_430941581(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackLinearColorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackLinearColorBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
