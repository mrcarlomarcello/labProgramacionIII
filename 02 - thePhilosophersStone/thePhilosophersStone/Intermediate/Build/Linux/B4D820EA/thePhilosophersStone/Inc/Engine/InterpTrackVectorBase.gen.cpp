// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackVectorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackVectorBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVectorBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVectorBase();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveVector();
// End Cross Module References
	void UInterpTrackVectorBase::StaticRegisterNativesUInterpTrackVectorBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackVectorBase);
	UClass* Z_Construct_UClass_UInterpTrackVectorBase_NoRegister()
	{
		return UInterpTrackVectorBase::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackVectorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorTrack_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveTension_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveTension;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackVectorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackVectorBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackVectorBase.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVectorBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackVectorBase_Statics::NewProp_VectorTrack_MetaData[] = {
		{ "Comment", "/** Actually track data containing keyframes of a FVector as it varies over time. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVectorBase.h" },
		{ "ToolTip", "Actually track data containing keyframes of a FVector as it varies over time." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackVectorBase_Statics::NewProp_VectorTrack = { "VectorTrack", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackVectorBase, VectorTrack), Z_Construct_UScriptStruct_FInterpCurveVector, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackVectorBase_Statics::NewProp_VectorTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackVectorBase_Statics::NewProp_VectorTrack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackVectorBase_Statics::NewProp_CurveTension_MetaData[] = {
		{ "Category", "InterpTrackVectorBase" },
		{ "Comment", "/** Tension of curve, used for keypoints using automatic tangents. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVectorBase.h" },
		{ "ToolTip", "Tension of curve, used for keypoints using automatic tangents." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpTrackVectorBase_Statics::NewProp_CurveTension = { "CurveTension", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackVectorBase, CurveTension), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackVectorBase_Statics::NewProp_CurveTension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackVectorBase_Statics::NewProp_CurveTension_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackVectorBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackVectorBase_Statics::NewProp_VectorTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackVectorBase_Statics::NewProp_CurveTension,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackVectorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackVectorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackVectorBase_Statics::ClassParams = {
		&UInterpTrackVectorBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackVectorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackVectorBase_Statics::PropPointers),
		0,
		0x001020A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackVectorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackVectorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackVectorBase()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackVectorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackVectorBase.OuterSingleton, Z_Construct_UClass_UInterpTrackVectorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackVectorBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackVectorBase>()
	{
		return UInterpTrackVectorBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackVectorBase);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVectorBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVectorBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackVectorBase, UInterpTrackVectorBase::StaticClass, TEXT("UInterpTrackVectorBase"), &Z_Registration_Info_UClass_UInterpTrackVectorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackVectorBase), 1065922611U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVectorBase_h_4064529553(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVectorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVectorBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
