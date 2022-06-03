// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TemplateSequence/Public/CameraAnimationSequenceSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraAnimationSequenceSubsystem() {}
// Cross Module References
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationSequenceSubsystem_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationSequenceSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_TemplateSequence();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister();
// End Cross Module References
	void UCameraAnimationSequenceSubsystem::StaticRegisterNativesUCameraAnimationSequenceSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraAnimationSequenceSubsystem);
	UClass* Z_Construct_UClass_UCameraAnimationSequenceSubsystem_NoRegister()
	{
		return UCameraAnimationSequenceSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Linker_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Linker;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * World subsystem that holds global objects for handling camera animation sequences.\n */" },
		{ "IncludePath", "CameraAnimationSequenceSubsystem.h" },
		{ "ModuleRelativePath", "Public/CameraAnimationSequenceSubsystem.h" },
		{ "ToolTip", "World subsystem that holds global objects for handling camera animation sequences." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::NewProp_Linker_MetaData[] = {
		{ "Comment", "/** The global Sequencer linker that contains all the shakes and camera animations */" },
		{ "ModuleRelativePath", "Public/CameraAnimationSequenceSubsystem.h" },
		{ "ToolTip", "The global Sequencer linker that contains all the shakes and camera animations" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::NewProp_Linker = { "Linker", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraAnimationSequenceSubsystem, Linker), Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::NewProp_Linker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::NewProp_Linker_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::NewProp_Linker,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraAnimationSequenceSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::ClassParams = {
		&UCameraAnimationSequenceSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraAnimationSequenceSubsystem()
	{
		if (!Z_Registration_Info_UClass_UCameraAnimationSequenceSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraAnimationSequenceSubsystem.OuterSingleton, Z_Construct_UClass_UCameraAnimationSequenceSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraAnimationSequenceSubsystem.OuterSingleton;
	}
	template<> TEMPLATESEQUENCE_API UClass* StaticClass<UCameraAnimationSequenceSubsystem>()
	{
		return UCameraAnimationSequenceSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraAnimationSequenceSubsystem);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequenceSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequenceSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraAnimationSequenceSubsystem, UCameraAnimationSequenceSubsystem::StaticClass, TEXT("UCameraAnimationSequenceSubsystem"), &Z_Registration_Info_UClass_UCameraAnimationSequenceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraAnimationSequenceSubsystem), 2802998021U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequenceSubsystem_h_3032262507(TEXT("/Script/TemplateSequence"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequenceSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_CameraAnimationSequenceSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
