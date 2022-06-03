// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInstParticleReplay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstParticleReplay() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstParticleReplay_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstParticleReplay();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpTrackInstParticleReplay::StaticRegisterNativesUInterpTrackInstParticleReplay()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackInstParticleReplay);
	UClass* Z_Construct_UClass_UInterpTrackInstParticleReplay_NoRegister()
	{
		return UInterpTrackInstParticleReplay::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastUpdatePosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastUpdatePosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInstParticleReplay.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstParticleReplay.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics::NewProp_LastUpdatePosition_MetaData[] = {
		{ "Comment", "/** \n\x09 *\x09Position we were in last time we evaluated.\n\x09 *\x09""During UpdateTrack, events between this time and the current time will be processed.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstParticleReplay.h" },
		{ "ToolTip", "Position we were in last time we evaluated.\nDuring UpdateTrack, events between this time and the current time will be processed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics::NewProp_LastUpdatePosition = { "LastUpdatePosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstParticleReplay, LastUpdatePosition), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics::NewProp_LastUpdatePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics::NewProp_LastUpdatePosition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics::NewProp_LastUpdatePosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstParticleReplay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics::ClassParams = {
		&UInterpTrackInstParticleReplay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstParticleReplay()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackInstParticleReplay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackInstParticleReplay.OuterSingleton, Z_Construct_UClass_UInterpTrackInstParticleReplay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackInstParticleReplay.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackInstParticleReplay>()
	{
		return UInterpTrackInstParticleReplay::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstParticleReplay);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstParticleReplay_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstParticleReplay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackInstParticleReplay, UInterpTrackInstParticleReplay::StaticClass, TEXT("UInterpTrackInstParticleReplay"), &Z_Registration_Info_UClass_UInterpTrackInstParticleReplay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackInstParticleReplay), 3917268813U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstParticleReplay_h_1194904468(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstParticleReplay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstParticleReplay_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
