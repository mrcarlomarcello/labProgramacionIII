// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackColorScale.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackColorScale() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackColorScale_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackColorScale();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVectorBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpTrackColorScale::StaticRegisterNativesUInterpTrackColorScale()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackColorScale);
	UClass* Z_Construct_UClass_UInterpTrackColorScale_NoRegister()
	{
		return UInterpTrackColorScale::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackColorScale_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackColorScale_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackVectorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackColorScale_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Color Scale Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackColorScale.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackColorScale.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackColorScale_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackColorScale>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackColorScale_Statics::ClassParams = {
		&UInterpTrackColorScale::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackColorScale_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackColorScale_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackColorScale()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackColorScale.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackColorScale.OuterSingleton, Z_Construct_UClass_UInterpTrackColorScale_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackColorScale.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackColorScale>()
	{
		return UInterpTrackColorScale::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackColorScale);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackColorScale_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackColorScale_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackColorScale, UInterpTrackColorScale::StaticClass, TEXT("UInterpTrackColorScale"), &Z_Registration_Info_UClass_UInterpTrackColorScale, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackColorScale), 1030032189U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackColorScale_h_875776976(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackColorScale_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackColorScale_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
