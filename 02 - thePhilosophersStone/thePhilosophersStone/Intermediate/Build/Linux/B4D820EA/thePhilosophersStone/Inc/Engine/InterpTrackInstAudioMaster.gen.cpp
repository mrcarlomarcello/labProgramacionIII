// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInstAudioMaster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstAudioMaster() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstAudioMaster_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstAudioMaster();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpTrackInstAudioMaster::StaticRegisterNativesUInterpTrackInstAudioMaster()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackInstAudioMaster);
	UClass* Z_Construct_UClass_UInterpTrackInstAudioMaster_NoRegister()
	{
		return UInterpTrackInstAudioMaster::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstAudioMaster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInstAudioMaster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstAudioMaster_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInstAudioMaster.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstAudioMaster.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstAudioMaster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstAudioMaster>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstAudioMaster_Statics::ClassParams = {
		&UInterpTrackInstAudioMaster::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstAudioMaster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstAudioMaster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstAudioMaster()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackInstAudioMaster.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackInstAudioMaster.OuterSingleton, Z_Construct_UClass_UInterpTrackInstAudioMaster_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackInstAudioMaster.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackInstAudioMaster>()
	{
		return UInterpTrackInstAudioMaster::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstAudioMaster);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstAudioMaster_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstAudioMaster_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackInstAudioMaster, UInterpTrackInstAudioMaster::StaticClass, TEXT("UInterpTrackInstAudioMaster"), &Z_Registration_Info_UClass_UInterpTrackInstAudioMaster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackInstAudioMaster), 3203432708U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstAudioMaster_h_2494880961(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstAudioMaster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstAudioMaster_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
