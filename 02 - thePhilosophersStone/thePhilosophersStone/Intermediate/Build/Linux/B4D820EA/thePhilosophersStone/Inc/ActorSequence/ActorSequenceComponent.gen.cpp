// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorSequence/Public/ActorSequenceComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorSequenceComponent() {}
// Cross Module References
	ACTORSEQUENCE_API UClass* Z_Construct_UClass_UActorSequenceComponent_NoRegister();
	ACTORSEQUENCE_API UClass* Z_Construct_UClass_UActorSequenceComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ActorSequence();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings();
	ACTORSEQUENCE_API UClass* Z_Construct_UClass_UActorSequence_NoRegister();
	ACTORSEQUENCE_API UClass* Z_Construct_UClass_UActorSequencePlayer_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequenceActor_NoRegister();
// End Cross Module References
	void UActorSequenceComponent::StaticRegisterNativesUActorSequenceComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorSequenceComponent);
	UClass* Z_Construct_UClass_UActorSequenceComponent_NoRegister()
	{
		return UActorSequenceComponent::StaticClass();
	}
	struct Z_Construct_UClass_UActorSequenceComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlaybackSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SequencePlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorSequenceComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ActorSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSequenceComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Sequence" },
		{ "Comment", "/**\n * Movie scene animation embedded within an actor.\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "HideCategories", "Collision Cooking Activation" },
		{ "IncludePath", "ActorSequenceComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ActorSequenceComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Movie scene animation embedded within an actor." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSequenceComponent_Statics::NewProp_PlaybackSettings_MetaData[] = {
		{ "Category", "Playback" },
		{ "ModuleRelativePath", "Public/ActorSequenceComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorSequenceComponent_Statics::NewProp_PlaybackSettings = { "PlaybackSettings", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorSequenceComponent, PlaybackSettings), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, METADATA_PARAMS(Z_Construct_UClass_UActorSequenceComponent_Statics::NewProp_PlaybackSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSequenceComponent_Statics::NewProp_PlaybackSettings_MetaData)) }; // 353246906
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSequenceComponent_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Embedded actor sequence data */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ActorSequenceComponent.h" },
		{ "ToolTip", "Embedded actor sequence data" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UActorSequenceComponent_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0026080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorSequenceComponent, Sequence), Z_Construct_UClass_UActorSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorSequenceComponent_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSequenceComponent_Statics::NewProp_Sequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSequenceComponent_Statics::NewProp_SequencePlayer_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/ActorSequenceComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UActorSequenceComponent_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x0024080000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorSequenceComponent, SequencePlayer), Z_Construct_UClass_UActorSequencePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorSequenceComponent_Statics::NewProp_SequencePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSequenceComponent_Statics::NewProp_SequencePlayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorSequenceComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSequenceComponent_Statics::NewProp_PlaybackSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSequenceComponent_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSequenceComponent_Statics::NewProp_SequencePlayer,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UActorSequenceComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneSequenceActor_NoRegister, (int32)VTABLE_OFFSET(UActorSequenceComponent, IMovieSceneSequenceActor), false },  // 497993495
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorSequenceComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorSequenceComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorSequenceComponent_Statics::ClassParams = {
		&UActorSequenceComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActorSequenceComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorSequenceComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UActorSequenceComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSequenceComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorSequenceComponent()
	{
		if (!Z_Registration_Info_UClass_UActorSequenceComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorSequenceComponent.OuterSingleton, Z_Construct_UClass_UActorSequenceComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorSequenceComponent.OuterSingleton;
	}
	template<> ACTORSEQUENCE_API UClass* StaticClass<UActorSequenceComponent>()
	{
		return UActorSequenceComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorSequenceComponent);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorSequenceComponent, UActorSequenceComponent::StaticClass, TEXT("UActorSequenceComponent"), &Z_Registration_Info_UClass_UActorSequenceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorSequenceComponent), 1199083031U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_4163116655(TEXT("/Script/ActorSequence"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
