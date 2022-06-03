// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequencerScripting/Public/SequencerBindingProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerBindingProxy() {}
// Cross Module References
	SEQUENCERSCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FSequencerBindingProxy();
	UPackage* Z_Construct_UPackage__Script_SequencerScripting();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SequencerBindingProxy;
class UScriptStruct* FSequencerBindingProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SequencerBindingProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SequencerBindingProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSequencerBindingProxy, Z_Construct_UPackage__Script_SequencerScripting(), TEXT("SequencerBindingProxy"));
	}
	return Z_Registration_Info_UScriptStruct_SequencerBindingProxy.OuterSingleton;
}
template<> SEQUENCERSCRIPTING_API UScriptStruct* StaticStruct<FSequencerBindingProxy>()
{
	return FSequencerBindingProxy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSequencerBindingProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequencerBindingProxy_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SequencerBindingProxy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSequencerBindingProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSequencerBindingProxy>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequencerBindingProxy_Statics::NewProp_BindingID_MetaData[] = {
		{ "ModuleRelativePath", "Public/SequencerBindingProxy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSequencerBindingProxy_Statics::NewProp_BindingID = { "BindingID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSequencerBindingProxy, BindingID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequencerBindingProxy_Statics::NewProp_BindingID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerBindingProxy_Statics::NewProp_BindingID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequencerBindingProxy_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Public/SequencerBindingProxy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSequencerBindingProxy_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSequencerBindingProxy, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequencerBindingProxy_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerBindingProxy_Statics::NewProp_Sequence_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSequencerBindingProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequencerBindingProxy_Statics::NewProp_BindingID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequencerBindingProxy_Statics::NewProp_Sequence,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSequencerBindingProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
		nullptr,
		&NewStructOps,
		"SequencerBindingProxy",
		sizeof(FSequencerBindingProxy),
		alignof(FSequencerBindingProxy),
		Z_Construct_UScriptStruct_FSequencerBindingProxy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerBindingProxy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSequencerBindingProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerBindingProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSequencerBindingProxy()
	{
		if (!Z_Registration_Info_UScriptStruct_SequencerBindingProxy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SequencerBindingProxy.InnerSingleton, Z_Construct_UScriptStruct_FSequencerBindingProxy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SequencerBindingProxy.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_SequencerBindingProxy_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_SequencerBindingProxy_h_Statics::ScriptStructInfo[] = {
		{ FSequencerBindingProxy::StaticStruct, Z_Construct_UScriptStruct_FSequencerBindingProxy_Statics::NewStructOps, TEXT("SequencerBindingProxy"), &Z_Registration_Info_UScriptStruct_SequencerBindingProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSequencerBindingProxy), 2674632323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_SequencerBindingProxy_h_1447881232(TEXT("/Script/SequencerScripting"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_SequencerBindingProxy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_SequencerBindingProxy_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
