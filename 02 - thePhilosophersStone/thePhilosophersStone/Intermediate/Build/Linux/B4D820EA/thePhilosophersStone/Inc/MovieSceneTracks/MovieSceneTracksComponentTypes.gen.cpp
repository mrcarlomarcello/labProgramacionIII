// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/MovieSceneTracksComponentTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTracksComponentTypes() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FLevelVisibilityComponentData();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneLevelVisibilitySection_NoRegister();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDataLayerSection_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelVisibilityComponentData;
class UScriptStruct* FLevelVisibilityComponentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelVisibilityComponentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelVisibilityComponentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelVisibilityComponentData, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("LevelVisibilityComponentData"));
	}
	return Z_Registration_Info_UScriptStruct_LevelVisibilityComponentData.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FLevelVisibilityComponentData>()
{
	return FLevelVisibilityComponentData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Section;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Component data for the level visibility system */" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "ToolTip", "Component data for the level visibility system" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelVisibilityComponentData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelVisibilityComponentData, Section), Z_Construct_UClass_UMovieSceneLevelVisibilitySection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::NewProp_Section,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"LevelVisibilityComponentData",
		sizeof(FLevelVisibilityComponentData),
		alignof(FLevelVisibilityComponentData),
		Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelVisibilityComponentData()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelVisibilityComponentData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelVisibilityComponentData.InnerSingleton, Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelVisibilityComponentData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneDataLayerComponentData;
class UScriptStruct* FMovieSceneDataLayerComponentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneDataLayerComponentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneDataLayerComponentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneDataLayerComponentData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneDataLayerComponentData.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneDataLayerComponentData>()
{
	return FMovieSceneDataLayerComponentData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Section;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Component data for the data layer system */" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "ToolTip", "Component data for the data layer system" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneDataLayerComponentData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneDataLayerComponentData, Section), Z_Construct_UClass_UMovieSceneDataLayerSection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::NewProp_Section,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneDataLayerComponentData",
		sizeof(FMovieSceneDataLayerComponentData),
		alignof(FMovieSceneDataLayerComponentData),
		Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneDataLayerComponentData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneDataLayerComponentData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneDataLayerComponentData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_MovieSceneTracksComponentTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_MovieSceneTracksComponentTypes_h_Statics::ScriptStructInfo[] = {
		{ FLevelVisibilityComponentData::StaticStruct, Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::NewStructOps, TEXT("LevelVisibilityComponentData"), &Z_Registration_Info_UScriptStruct_LevelVisibilityComponentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelVisibilityComponentData), 659587394U) },
		{ FMovieSceneDataLayerComponentData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::NewStructOps, TEXT("MovieSceneDataLayerComponentData"), &Z_Registration_Info_UScriptStruct_MovieSceneDataLayerComponentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneDataLayerComponentData), 3103477467U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_MovieSceneTracksComponentTypes_h_3216943981(TEXT("/Script/MovieSceneTracks"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_MovieSceneTracksComponentTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_MovieSceneTracksComponentTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
