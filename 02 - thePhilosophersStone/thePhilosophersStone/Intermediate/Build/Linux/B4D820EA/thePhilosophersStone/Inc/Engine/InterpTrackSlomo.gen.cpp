// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackSlomo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackSlomo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackSlomo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackSlomo();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpTrackSlomo::StaticRegisterNativesUInterpTrackSlomo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackSlomo);
	UClass* Z_Construct_UClass_UInterpTrackSlomo_NoRegister()
	{
		return UInterpTrackSlomo::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackSlomo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackSlomo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackFloatBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackSlomo_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Slomo Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackSlomo.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSlomo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackSlomo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackSlomo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackSlomo_Statics::ClassParams = {
		&UInterpTrackSlomo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackSlomo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackSlomo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackSlomo()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackSlomo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackSlomo.OuterSingleton, Z_Construct_UClass_UInterpTrackSlomo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackSlomo.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackSlomo>()
	{
		return UInterpTrackSlomo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackSlomo);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSlomo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSlomo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackSlomo, UInterpTrackSlomo::StaticClass, TEXT("UInterpTrackSlomo"), &Z_Registration_Info_UClass_UInterpTrackSlomo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackSlomo), 2420664339U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSlomo_h_2700202068(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSlomo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSlomo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
