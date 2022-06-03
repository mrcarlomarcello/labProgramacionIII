// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Public/MovieSceneSequenceTickManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceTickManager() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequenceActor_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequenceActor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequenceTickManager_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequenceTickManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister();
// End Cross Module References
	void UMovieSceneSequenceActor::StaticRegisterNativesUMovieSceneSequenceActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSequenceActor);
	UClass* Z_Construct_UClass_UMovieSceneSequenceActor_NoRegister()
	{
		return UMovieSceneSequenceActor::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSequenceActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSequenceActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequenceActor_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSequenceTickManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSequenceActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneSequenceActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSequenceActor_Statics::ClassParams = {
		&UMovieSceneSequenceActor::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequenceActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequenceActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSequenceActor()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneSequenceActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSequenceActor.OuterSingleton, Z_Construct_UClass_UMovieSceneSequenceActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneSequenceActor.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneSequenceActor>()
	{
		return UMovieSceneSequenceActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSequenceActor);
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSequenceActorPointers;
class UScriptStruct* FMovieSceneSequenceActorPointers::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceActorPointers.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSequenceActorPointers.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers, Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceActorPointers"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequenceActorPointers.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequenceActorPointers>()
{
	return FMovieSceneSequenceActorPointers::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SequenceActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceActorInterface_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_SequenceActorInterface;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A structure for storing pointers to a sequence actor.\n */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequenceTickManager.h" },
		{ "ToolTip", "A structure for storing pointers to a sequence actor." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceActorPointers>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::NewProp_SequenceActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSequenceTickManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::NewProp_SequenceActor = { "SequenceActor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSequenceActorPointers, SequenceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::NewProp_SequenceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::NewProp_SequenceActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::NewProp_SequenceActorInterface_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSequenceTickManager.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::NewProp_SequenceActorInterface = { "SequenceActorInterface", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneSequenceActorPointers, SequenceActorInterface), Z_Construct_UClass_UMovieSceneSequenceActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::NewProp_SequenceActorInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::NewProp_SequenceActorInterface_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::NewProp_SequenceActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::NewProp_SequenceActorInterface,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSequenceActorPointers",
		sizeof(FMovieSceneSequenceActorPointers),
		alignof(FMovieSceneSequenceActorPointers),
		Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceActorPointers.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSequenceActorPointers.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneSequenceActorPointers.InnerSingleton;
	}
	void UMovieSceneSequenceTickManager::StaticRegisterNativesUMovieSceneSequenceTickManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSequenceTickManager);
	UClass* Z_Construct_UClass_UMovieSceneSequenceTickManager_NoRegister()
	{
		return UMovieSceneSequenceTickManager::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SequenceActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Linker_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Linker;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An automatically created global object that will manage all level sequence actors' updates.\n */" },
		{ "IncludePath", "MovieSceneSequenceTickManager.h" },
		{ "ModuleRelativePath", "Public/MovieSceneSequenceTickManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "An automatically created global object that will manage all level sequence actors' updates." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::NewProp_SequenceActors_Inner = { "SequenceActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers, METADATA_PARAMS(nullptr, 0) }; // 3346774834
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::NewProp_SequenceActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSequenceTickManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::NewProp_SequenceActors = { "SequenceActors", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSequenceTickManager, SequenceActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::NewProp_SequenceActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::NewProp_SequenceActors_MetaData)) }; // 3346774834
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::NewProp_Linker_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSequenceTickManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::NewProp_Linker = { "Linker", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneSequenceTickManager, Linker), Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::NewProp_Linker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::NewProp_Linker_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::NewProp_SequenceActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::NewProp_SequenceActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::NewProp_Linker,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSequenceTickManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::ClassParams = {
		&UMovieSceneSequenceTickManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSequenceTickManager()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneSequenceTickManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSequenceTickManager.OuterSingleton, Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneSequenceTickManager.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneSequenceTickManager>()
	{
		return UMovieSceneSequenceTickManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSequenceTickManager);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneSequenceActorPointers::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSequenceActorPointers_Statics::NewStructOps, TEXT("MovieSceneSequenceActorPointers"), &Z_Registration_Info_UScriptStruct_MovieSceneSequenceActorPointers, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSequenceActorPointers), 3346774834U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSequenceActor, UMovieSceneSequenceActor::StaticClass, TEXT("UMovieSceneSequenceActor"), &Z_Registration_Info_UClass_UMovieSceneSequenceActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSequenceActor), 497993495U) },
		{ Z_Construct_UClass_UMovieSceneSequenceTickManager, UMovieSceneSequenceTickManager::StaticClass, TEXT("UMovieSceneSequenceTickManager"), &Z_Registration_Info_UClass_UMovieSceneSequenceTickManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSequenceTickManager), 2232213758U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_1605973288(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
