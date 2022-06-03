// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Private/Evaluation/MovieScenePrimitiveMaterialTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePrimitiveMaterialTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieScenePrimitiveMaterialTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieScenePrimitiveMaterialTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieScenePrimitiveMaterialTemplate;
class UScriptStruct* FMovieScenePrimitiveMaterialTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieScenePrimitiveMaterialTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieScenePrimitiveMaterialTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieScenePrimitiveMaterialTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieScenePrimitiveMaterialTemplate.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieScenePrimitiveMaterialTemplate>()
{
	return FMovieScenePrimitiveMaterialTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScenePrimitiveMaterialTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScenePrimitiveMaterialTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::NewProp_MaterialIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScenePrimitiveMaterialTemplate.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScenePrimitiveMaterialTemplate, MaterialIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::NewProp_MaterialIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::NewProp_MaterialIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::NewProp_MaterialChannel_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieScenePrimitiveMaterialTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::NewProp_MaterialChannel = { "MaterialChannel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieScenePrimitiveMaterialTemplate, MaterialChannel), Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::NewProp_MaterialChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::NewProp_MaterialChannel_MetaData)) }; // 774963505
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::NewProp_MaterialIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::NewProp_MaterialChannel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieScenePrimitiveMaterialTemplate",
		sizeof(FMovieScenePrimitiveMaterialTemplate),
		alignof(FMovieScenePrimitiveMaterialTemplate),
		Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieScenePrimitiveMaterialTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieScenePrimitiveMaterialTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieScenePrimitiveMaterialTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieScenePrimitiveMaterialTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieScenePrimitiveMaterialTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieScenePrimitiveMaterialTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieScenePrimitiveMaterialTemplate_Statics::NewStructOps, TEXT("MovieScenePrimitiveMaterialTemplate"), &Z_Registration_Info_UScriptStruct_MovieScenePrimitiveMaterialTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieScenePrimitiveMaterialTemplate), 2280981204U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieScenePrimitiveMaterialTemplate_h_1624289156(TEXT("/Script/MovieSceneTracks"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieScenePrimitiveMaterialTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieScenePrimitiveMaterialTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
