// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Private/Evaluation/MovieSceneMaterialParameterCollectionTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMaterialParameterCollectionTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneMaterialParameterCollectionTemplate>() == std::is_polymorphic<FMovieSceneParameterSectionTemplate>(), "USTRUCT FMovieSceneMaterialParameterCollectionTemplate cannot be polymorphic unless super FMovieSceneParameterSectionTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneMaterialParameterCollectionTemplate;
class UScriptStruct* FMovieSceneMaterialParameterCollectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneMaterialParameterCollectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneMaterialParameterCollectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneMaterialParameterCollectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneMaterialParameterCollectionTemplate.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneMaterialParameterCollectionTemplate>()
{
	return FMovieSceneMaterialParameterCollectionTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MPC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MPC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneMaterialParameterCollectionTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneMaterialParameterCollectionTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Statics::NewProp_MPC_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneMaterialParameterCollectionTemplate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Statics::NewProp_MPC = { "MPC", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneMaterialParameterCollectionTemplate, MPC), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Statics::NewProp_MPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Statics::NewProp_MPC_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Statics::NewProp_MPC,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate,
		&NewStructOps,
		"MovieSceneMaterialParameterCollectionTemplate",
		sizeof(FMovieSceneMaterialParameterCollectionTemplate),
		alignof(FMovieSceneMaterialParameterCollectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneMaterialParameterCollectionTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneMaterialParameterCollectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneMaterialParameterCollectionTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneMaterialParameterCollectionTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneMaterialParameterCollectionTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneMaterialParameterCollectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_Statics::NewStructOps, TEXT("MovieSceneMaterialParameterCollectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneMaterialParameterCollectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneMaterialParameterCollectionTemplate), 930089047U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneMaterialParameterCollectionTemplate_h_2718602529(TEXT("/Script/MovieSceneTracks"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneMaterialParameterCollectionTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneMaterialParameterCollectionTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
