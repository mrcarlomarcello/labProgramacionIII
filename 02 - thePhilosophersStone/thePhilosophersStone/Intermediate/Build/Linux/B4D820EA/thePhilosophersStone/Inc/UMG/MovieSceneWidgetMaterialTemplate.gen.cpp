// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Private/Animation/MovieSceneWidgetMaterialTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneWidgetMaterialTemplate() {}
// Cross Module References
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_UMG();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneWidgetMaterialSectionTemplate>() == std::is_polymorphic<FMovieSceneParameterSectionTemplate>(), "USTRUCT FMovieSceneWidgetMaterialSectionTemplate cannot be polymorphic unless super FMovieSceneParameterSectionTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneWidgetMaterialSectionTemplate;
class UScriptStruct* FMovieSceneWidgetMaterialSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneWidgetMaterialSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneWidgetMaterialSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate, Z_Construct_UPackage__Script_UMG(), TEXT("MovieSceneWidgetMaterialSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneWidgetMaterialSectionTemplate.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FMovieSceneWidgetMaterialSectionTemplate>()
{
	return FMovieSceneWidgetMaterialSectionTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_BrushPropertyNamePath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushPropertyNamePath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BrushPropertyNamePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Animation/MovieSceneWidgetMaterialTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneWidgetMaterialSectionTemplate>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::NewProp_BrushPropertyNamePath_Inner = { "BrushPropertyNamePath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::NewProp_BrushPropertyNamePath_MetaData[] = {
		{ "ModuleRelativePath", "Private/Animation/MovieSceneWidgetMaterialTemplate.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::NewProp_BrushPropertyNamePath = { "BrushPropertyNamePath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneWidgetMaterialSectionTemplate, BrushPropertyNamePath), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::NewProp_BrushPropertyNamePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::NewProp_BrushPropertyNamePath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::NewProp_BrushPropertyNamePath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::NewProp_BrushPropertyNamePath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate,
		&NewStructOps,
		"MovieSceneWidgetMaterialSectionTemplate",
		sizeof(FMovieSceneWidgetMaterialSectionTemplate),
		alignof(FMovieSceneWidgetMaterialSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneWidgetMaterialSectionTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneWidgetMaterialSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneWidgetMaterialSectionTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Animation_MovieSceneWidgetMaterialTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Animation_MovieSceneWidgetMaterialTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneWidgetMaterialSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneWidgetMaterialSectionTemplate_Statics::NewStructOps, TEXT("MovieSceneWidgetMaterialSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneWidgetMaterialSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneWidgetMaterialSectionTemplate), 4118074957U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Animation_MovieSceneWidgetMaterialTemplate_h_1267652190(TEXT("/Script/UMG"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Animation_MovieSceneWidgetMaterialTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Animation_MovieSceneWidgetMaterialTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
