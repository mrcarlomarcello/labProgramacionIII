// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieSceneCVarSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCVarSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCVarOverrides();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCVarSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCVarSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneCVarOverrides;
class UScriptStruct* FMovieSceneCVarOverrides::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneCVarOverrides.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneCVarOverrides.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCVarOverrides, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneCVarOverrides"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneCVarOverrides.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneCVarOverrides>()
{
	return FMovieSceneCVarOverrides::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_ValuesByCVar_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ValuesByCVar_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValuesByCVar_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ValuesByCVar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCVarSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneCVarOverrides>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::NewProp_ValuesByCVar_ValueProp = { "ValuesByCVar", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::NewProp_ValuesByCVar_Key_KeyProp = { "ValuesByCVar_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::NewProp_ValuesByCVar_MetaData[] = {
		{ "Category", "Console Variables" },
		{ "Comment", "/** The name of the console variable and the value, separated by ' ' or '=', ie: \"foo.bar=1\" or \"foo.bar 1\". */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCVarSection.h" },
		{ "ToolTip", "The name of the console variable and the value, separated by ' ' or '=', ie: \"foo.bar=1\" or \"foo.bar 1\"." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::NewProp_ValuesByCVar = { "ValuesByCVar", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCVarOverrides, ValuesByCVar), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::NewProp_ValuesByCVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::NewProp_ValuesByCVar_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::NewProp_ValuesByCVar_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::NewProp_ValuesByCVar_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::NewProp_ValuesByCVar,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneCVarOverrides",
		sizeof(FMovieSceneCVarOverrides),
		alignof(FMovieSceneCVarOverrides),
		Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCVarOverrides()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneCVarOverrides.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneCVarOverrides.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneCVarOverrides.InnerSingleton;
	}
	DEFINE_FUNCTION(UMovieSceneCVarSection::execGetString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneCVarSection::execSetFromString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFromString(Z_Param_InString);
		P_NATIVE_END;
	}
	void UMovieSceneCVarSection::StaticRegisterNativesUMovieSceneCVarSection()
	{
		UClass* Class = UMovieSceneCVarSection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetString", &UMovieSceneCVarSection::execGetString },
			{ "SetFromString", &UMovieSceneCVarSection::execSetFromString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneCVarSection_GetString_Statics
	{
		struct MovieSceneCVarSection_eventGetString_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneCVarSection_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneCVarSection_eventGetString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCVarSection_GetString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCVarSection_GetString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCVarSection_GetString_Statics::Function_MetaDataParams[] = {
		{ "Category", "CVars" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCVarSection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCVarSection_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCVarSection, nullptr, "GetString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneCVarSection_GetString_Statics::MovieSceneCVarSection_eventGetString_Parms), Z_Construct_UFunction_UMovieSceneCVarSection_GetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCVarSection_GetString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCVarSection_GetString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCVarSection_GetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCVarSection_GetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCVarSection_GetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString_Statics
	{
		struct MovieSceneCVarSection_eventSetFromString_Parms
		{
			FString InString;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString_Statics::NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneCVarSection_eventSetFromString_Parms, InString), METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString_Statics::NewProp_InString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString_Statics::NewProp_InString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString_Statics::NewProp_InString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString_Statics::Function_MetaDataParams[] = {
		{ "Category", "CVars" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCVarSection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneCVarSection, nullptr, "SetFromString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString_Statics::MovieSceneCVarSection_eventSetFromString_Parms), Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCVarSection);
	UClass* Z_Construct_UClass_UMovieSceneCVarSection_NoRegister()
	{
		return UMovieSceneCVarSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCVarSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConsoleVariables_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConsoleVariables;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCVarSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneCVarSection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneCVarSection_GetString, "GetString" }, // 2957510700
		{ &Z_Construct_UFunction_UMovieSceneCVarSection_SetFromString, "SetFromString" }, // 945599315
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCVarSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A CVar section is responsible for applying a user-supplied value to the specified cvar, and then restoring the previous value after the section ends.\n */" },
		{ "IncludePath", "Sections/MovieSceneCVarSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCVarSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A CVar section is responsible for applying a user-supplied value to the specified cvar, and then restoring the previous value after the section ends." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCVarSection_Statics::NewProp_ConsoleVariables_MetaData[] = {
		{ "Category", "Console Variables" },
		{ "Comment", "/** The name of the console variable and the value, separated by ' ' or '=', ie: \"foo.bar=1\" or \"foo.bar 1\". */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCVarSection.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "The name of the console variable and the value, separated by ' ' or '=', ie: \"foo.bar=1\" or \"foo.bar 1\"." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCVarSection_Statics::NewProp_ConsoleVariables = { "ConsoleVariables", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCVarSection, ConsoleVariables), Z_Construct_UScriptStruct_FMovieSceneCVarOverrides, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCVarSection_Statics::NewProp_ConsoleVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCVarSection_Statics::NewProp_ConsoleVariables_MetaData)) }; // 3536129337
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCVarSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCVarSection_Statics::NewProp_ConsoleVariables,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneCVarSection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneCVarSection, IMovieSceneEntityProvider), false },  // 1947645787
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCVarSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCVarSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCVarSection_Statics::ClassParams = {
		&UMovieSceneCVarSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieSceneCVarSection_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCVarSection_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCVarSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCVarSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCVarSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneCVarSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCVarSection.OuterSingleton, Z_Construct_UClass_UMovieSceneCVarSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneCVarSection.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneCVarSection>()
	{
		return UMovieSceneCVarSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCVarSection);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneCVarOverrides::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics::NewStructOps, TEXT("MovieSceneCVarOverrides"), &Z_Registration_Info_UScriptStruct_MovieSceneCVarOverrides, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneCVarOverrides), 3536129337U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCVarSection, UMovieSceneCVarSection::StaticClass, TEXT("UMovieSceneCVarSection"), &Z_Registration_Info_UClass_UMovieSceneCVarSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCVarSection), 1528419152U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_3631022253(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
