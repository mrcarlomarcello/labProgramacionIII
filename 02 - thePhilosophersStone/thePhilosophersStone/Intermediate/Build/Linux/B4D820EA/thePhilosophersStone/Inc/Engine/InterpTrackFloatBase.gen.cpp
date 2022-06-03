// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackFloatBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackFloatBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatBase();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveFloat();
// End Cross Module References
	void UInterpTrackFloatBase::StaticRegisterNativesUInterpTrackFloatBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackFloatBase);
	UClass* Z_Construct_UClass_UInterpTrackFloatBase_NoRegister()
	{
		return UInterpTrackFloatBase::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackFloatBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatTrack_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveTension_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveTension;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackFloatBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackFloatBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackFloatBase.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackFloatBase_Statics::NewProp_FloatTrack_MetaData[] = {
		{ "Comment", "/** Actually track data containing keyframes of float as it varies over time. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatBase.h" },
		{ "ToolTip", "Actually track data containing keyframes of float as it varies over time." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackFloatBase_Statics::NewProp_FloatTrack = { "FloatTrack", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackFloatBase, FloatTrack), Z_Construct_UScriptStruct_FInterpCurveFloat, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackFloatBase_Statics::NewProp_FloatTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFloatBase_Statics::NewProp_FloatTrack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackFloatBase_Statics::NewProp_CurveTension_MetaData[] = {
		{ "Category", "InterpTrackFloatBase" },
		{ "Comment", "/** Tension of curve, used for keypoints using automatic tangents. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatBase.h" },
		{ "ToolTip", "Tension of curve, used for keypoints using automatic tangents." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpTrackFloatBase_Statics::NewProp_CurveTension = { "CurveTension", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackFloatBase, CurveTension), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackFloatBase_Statics::NewProp_CurveTension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFloatBase_Statics::NewProp_CurveTension_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackFloatBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackFloatBase_Statics::NewProp_FloatTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackFloatBase_Statics::NewProp_CurveTension,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackFloatBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackFloatBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackFloatBase_Statics::ClassParams = {
		&UInterpTrackFloatBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackFloatBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFloatBase_Statics::PropPointers),
		0,
		0x001020A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackFloatBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFloatBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackFloatBase()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackFloatBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackFloatBase.OuterSingleton, Z_Construct_UClass_UInterpTrackFloatBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackFloatBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackFloatBase>()
	{
		return UInterpTrackFloatBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackFloatBase);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackFloatBase, UInterpTrackFloatBase::StaticClass, TEXT("UInterpTrackFloatBase"), &Z_Registration_Info_UClass_UInterpTrackFloatBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackFloatBase), 1053512272U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatBase_h_2100971537(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
