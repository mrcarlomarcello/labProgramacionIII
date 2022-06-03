// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequence/Public/LevelSequenceAnimSequenceLink.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceAnimSequenceLink() {}
// Cross Module References
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceAnimSequenceLink_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceAnimSequenceLink();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelSequenceAnimSequenceLinkItem;
class UScriptStruct* FLevelSequenceAnimSequenceLinkItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSequenceAnimSequenceLinkItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelSequenceAnimSequenceLinkItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem, Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceAnimSequenceLinkItem"));
	}
	return Z_Registration_Info_UScriptStruct_LevelSequenceAnimSequenceLinkItem.OuterSingleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FLevelSequenceAnimSequenceLinkItem>()
{
	return FLevelSequenceAnimSequenceLinkItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkelTrackGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkelTrackGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathToAnimSequence_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathToAnimSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportTransforms_MetaData[];
#endif
		static void NewProp_bExportTransforms_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportTransforms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportMorphTargets_MetaData[];
#endif
		static void NewProp_bExportMorphTargets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportMorphTargets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportAttributeCurves_MetaData[];
#endif
		static void NewProp_bExportAttributeCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportAttributeCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportMaterialCurves_MetaData[];
#endif
		static void NewProp_bExportMaterialCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportMaterialCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecordInWorldSpace_MetaData[];
#endif
		static void NewProp_bRecordInWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordInWorldSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Link To Anim Sequence that we are linked too.*/" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
		{ "ToolTip", "Link To Anim Sequence that we are linked too." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceAnimSequenceLinkItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_SkelTrackGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_SkelTrackGuid = { "SkelTrackGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSequenceAnimSequenceLinkItem, SkelTrackGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_SkelTrackGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_SkelTrackGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_PathToAnimSequence_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_PathToAnimSequence = { "PathToAnimSequence", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelSequenceAnimSequenceLinkItem, PathToAnimSequence), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_PathToAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_PathToAnimSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportTransforms_MetaData[] = {
		{ "Comment", "//From Editor Only UAnimSeqExportOption we cache this since we can re-import dynamically\n" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
		{ "ToolTip", "From Editor Only UAnimSeqExportOption we cache this since we can re-import dynamically" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportTransforms_SetBit(void* Obj)
	{
		((FLevelSequenceAnimSequenceLinkItem*)Obj)->bExportTransforms = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportTransforms = { "bExportTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelSequenceAnimSequenceLinkItem), &Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportTransforms_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportTransforms_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportMorphTargets_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportMorphTargets_SetBit(void* Obj)
	{
		((FLevelSequenceAnimSequenceLinkItem*)Obj)->bExportMorphTargets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportMorphTargets = { "bExportMorphTargets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelSequenceAnimSequenceLinkItem), &Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportMorphTargets_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportMorphTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportMorphTargets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportAttributeCurves_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportAttributeCurves_SetBit(void* Obj)
	{
		((FLevelSequenceAnimSequenceLinkItem*)Obj)->bExportAttributeCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportAttributeCurves = { "bExportAttributeCurves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelSequenceAnimSequenceLinkItem), &Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportAttributeCurves_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportAttributeCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportAttributeCurves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportMaterialCurves_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportMaterialCurves_SetBit(void* Obj)
	{
		((FLevelSequenceAnimSequenceLinkItem*)Obj)->bExportMaterialCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportMaterialCurves = { "bExportMaterialCurves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelSequenceAnimSequenceLinkItem), &Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportMaterialCurves_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportMaterialCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportMaterialCurves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bRecordInWorldSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bRecordInWorldSpace_SetBit(void* Obj)
	{
		((FLevelSequenceAnimSequenceLinkItem*)Obj)->bRecordInWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bRecordInWorldSpace = { "bRecordInWorldSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLevelSequenceAnimSequenceLinkItem), &Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bRecordInWorldSpace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bRecordInWorldSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bRecordInWorldSpace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_SkelTrackGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_PathToAnimSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportTransforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportMorphTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportAttributeCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bExportMaterialCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewProp_bRecordInWorldSpace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
		nullptr,
		&NewStructOps,
		"LevelSequenceAnimSequenceLinkItem",
		sizeof(FLevelSequenceAnimSequenceLinkItem),
		alignof(FLevelSequenceAnimSequenceLinkItem),
		Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelSequenceAnimSequenceLinkItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelSequenceAnimSequenceLinkItem.InnerSingleton, Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelSequenceAnimSequenceLinkItem.InnerSingleton;
	}
	void ULevelSequenceAnimSequenceLink::StaticRegisterNativesULevelSequenceAnimSequenceLink()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSequenceAnimSequenceLink);
	UClass* Z_Construct_UClass_ULevelSequenceAnimSequenceLink_NoRegister()
	{
		return ULevelSequenceAnimSequenceLink::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimSequenceLinks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequenceLinks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimSequenceLinks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Link To Set of Anim Sequences that we may be linked to.*/" },
		{ "IncludePath", "LevelSequenceAnimSequenceLink.h" },
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
		{ "ToolTip", "Link To Set of Anim Sequences that we may be linked to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::NewProp_AnimSequenceLinks_Inner = { "AnimSequenceLinks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem, METADATA_PARAMS(nullptr, 0) }; // 2742703295
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::NewProp_AnimSequenceLinks_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceAnimSequenceLink.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::NewProp_AnimSequenceLinks = { "AnimSequenceLinks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelSequenceAnimSequenceLink, AnimSequenceLinks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::NewProp_AnimSequenceLinks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::NewProp_AnimSequenceLinks_MetaData)) }; // 2742703295
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::NewProp_AnimSequenceLinks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::NewProp_AnimSequenceLinks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceAnimSequenceLink>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::ClassParams = {
		&ULevelSequenceAnimSequenceLink::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequenceAnimSequenceLink()
	{
		if (!Z_Registration_Info_UClass_ULevelSequenceAnimSequenceLink.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSequenceAnimSequenceLink.OuterSingleton, Z_Construct_UClass_ULevelSequenceAnimSequenceLink_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSequenceAnimSequenceLink.OuterSingleton;
	}
	template<> LEVELSEQUENCE_API UClass* StaticClass<ULevelSequenceAnimSequenceLink>()
	{
		return ULevelSequenceAnimSequenceLink::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceAnimSequenceLink);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_Statics::ScriptStructInfo[] = {
		{ FLevelSequenceAnimSequenceLinkItem::StaticStruct, Z_Construct_UScriptStruct_FLevelSequenceAnimSequenceLinkItem_Statics::NewStructOps, TEXT("LevelSequenceAnimSequenceLinkItem"), &Z_Registration_Info_UScriptStruct_LevelSequenceAnimSequenceLinkItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelSequenceAnimSequenceLinkItem), 2742703295U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSequenceAnimSequenceLink, ULevelSequenceAnimSequenceLink::StaticClass, TEXT("ULevelSequenceAnimSequenceLink"), &Z_Registration_Info_UClass_ULevelSequenceAnimSequenceLink, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSequenceAnimSequenceLink), 1481324375U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_577990548(TEXT("/Script/LevelSequence"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceAnimSequenceLink_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
