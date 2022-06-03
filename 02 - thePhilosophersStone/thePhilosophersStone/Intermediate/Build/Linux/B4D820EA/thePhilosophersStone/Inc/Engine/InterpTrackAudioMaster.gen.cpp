// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackAudioMaster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackAudioMaster() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackAudioMaster_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackAudioMaster();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVectorBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpTrackAudioMaster::StaticRegisterNativesUInterpTrackAudioMaster()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackAudioMaster);
	UClass* Z_Construct_UClass_UInterpTrackAudioMaster_NoRegister()
	{
		return UInterpTrackAudioMaster::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackAudioMaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackAudioMaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackVectorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackAudioMaster_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Audio Master Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackAudioMaster.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAudioMaster.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackAudioMaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackAudioMaster>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackAudioMaster_Statics::ClassParams = {
		&UInterpTrackAudioMaster::StaticClass,
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
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackAudioMaster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackAudioMaster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackAudioMaster()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackAudioMaster.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackAudioMaster.OuterSingleton, Z_Construct_UClass_UInterpTrackAudioMaster_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackAudioMaster.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackAudioMaster>()
	{
		return UInterpTrackAudioMaster::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackAudioMaster);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackAudioMaster_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackAudioMaster_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackAudioMaster, UInterpTrackAudioMaster::StaticClass, TEXT("UInterpTrackAudioMaster"), &Z_Registration_Info_UClass_UInterpTrackAudioMaster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackAudioMaster), 3992097264U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackAudioMaster_h_4278432601(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackAudioMaster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackAudioMaster_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
