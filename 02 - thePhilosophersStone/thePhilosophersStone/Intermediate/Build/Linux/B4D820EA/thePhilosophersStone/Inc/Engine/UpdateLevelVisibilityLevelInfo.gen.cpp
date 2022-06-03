// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpdateLevelVisibilityLevelInfo() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UpdateLevelVisibilityLevelInfo;
class UScriptStruct* FUpdateLevelVisibilityLevelInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UpdateLevelVisibilityLevelInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UpdateLevelVisibilityLevelInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo, Z_Construct_UPackage__Script_Engine(), TEXT("UpdateLevelVisibilityLevelInfo"));
	}
	return Z_Registration_Info_UScriptStruct_UpdateLevelVisibilityLevelInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FUpdateLevelVisibilityLevelInfo>()
{
	return FUpdateLevelVisibilityLevelInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PackageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[];
#endif
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** This structure is used to pass arguments to ServerUpdateLevelVisibilty() and ServerUpdateMultipleLevelsVisibility() server RPC functions */" },
		{ "ModuleRelativePath", "Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h" },
		{ "ToolTip", "This structure is used to pass arguments to ServerUpdateLevelVisibilty() and ServerUpdateMultipleLevelsVisibility() server RPC functions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpdateLevelVisibilityLevelInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_PackageName_MetaData[] = {
		{ "Comment", "/** The name of the package for the level whose status changed. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h" },
		{ "ToolTip", "The name of the package for the level whose status changed." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUpdateLevelVisibilityLevelInfo, PackageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_PackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_PackageName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_FileName_MetaData[] = {
		{ "Comment", "/** The name / path of the asset file for the level whose status changed. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h" },
		{ "ToolTip", "The name / path of the asset file for the level whose status changed." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUpdateLevelVisibilityLevelInfo, FileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bIsVisible_MetaData[] = {
		{ "Comment", "/** The new visibility state for this level. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h" },
		{ "ToolTip", "The new visibility state for this level." },
	};
#endif
	void Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((FUpdateLevelVisibilityLevelInfo*)Obj)->bIsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FUpdateLevelVisibilityLevelInfo), &Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bIsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bIsVisible_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_PackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bIsVisible,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"UpdateLevelVisibilityLevelInfo",
		sizeof(FUpdateLevelVisibilityLevelInfo),
		alignof(FUpdateLevelVisibilityLevelInfo),
		Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_UpdateLevelVisibilityLevelInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UpdateLevelVisibilityLevelInfo.InnerSingleton, Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UpdateLevelVisibilityLevelInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_UpdateLevelVisibilityLevelInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_UpdateLevelVisibilityLevelInfo_h_Statics::ScriptStructInfo[] = {
		{ FUpdateLevelVisibilityLevelInfo::StaticStruct, Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewStructOps, TEXT("UpdateLevelVisibilityLevelInfo"), &Z_Registration_Info_UScriptStruct_UpdateLevelVisibilityLevelInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUpdateLevelVisibilityLevelInfo), 4051931752U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_UpdateLevelVisibilityLevelInfo_h_1682534224(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_UpdateLevelVisibilityLevelInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_UpdateLevelVisibilityLevelInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
