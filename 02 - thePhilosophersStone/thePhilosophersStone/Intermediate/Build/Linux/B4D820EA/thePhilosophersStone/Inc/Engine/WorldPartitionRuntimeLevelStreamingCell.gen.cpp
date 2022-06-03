// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/WorldPartition/WorldPartitionRuntimeLevelStreamingCell.h"
#include "Engine/Public/WorldPartition/WorldPartition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeLevelStreamingCell() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWorldPartitionRuntimeLevelStreamingCell::execOnLevelHidden)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelHidden();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWorldPartitionRuntimeLevelStreamingCell::execOnLevelShown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelShown();
		P_NATIVE_END;
	}
	void UWorldPartitionRuntimeLevelStreamingCell::StaticRegisterNativesUWorldPartitionRuntimeLevelStreamingCell()
	{
		UClass* Class = UWorldPartitionRuntimeLevelStreamingCell::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLevelHidden", &UWorldPartitionRuntimeLevelStreamingCell::execOnLevelHidden },
			{ "OnLevelShown", &UWorldPartitionRuntimeLevelStreamingCell::execOnLevelShown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelHidden_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelHidden_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeLevelStreamingCell.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell, nullptr, "OnLevelHidden", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelHidden_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelHidden_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelShown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelShown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeLevelStreamingCell.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelShown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell, nullptr, "OnLevelShown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelShown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelShown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelShown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelShown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionRuntimeLevelStreamingCell);
	UClass* Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_NoRegister()
	{
		return UWorldPartitionRuntimeLevelStreamingCell::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_Packages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Packages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Packages;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorFolders_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorFolders_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ActorFolders;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelStreaming_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LevelStreaming;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldPartitionRuntimeSpatialHashCell,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelHidden, "OnLevelHidden" }, // 3819479876
		{ &Z_Construct_UFunction_UWorldPartitionRuntimeLevelStreamingCell_OnLevelShown, "OnLevelShown" }, // 2780662501
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/WorldPartitionRuntimeLevelStreamingCell.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeLevelStreamingCell.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::NewProp_Packages_Inner = { "Packages", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping, METADATA_PARAMS(nullptr, 0) }; // 4258931674
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::NewProp_Packages_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeLevelStreamingCell.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::NewProp_Packages = { "Packages", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWorldPartitionRuntimeLevelStreamingCell, Packages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::NewProp_Packages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::NewProp_Packages_MetaData)) }; // 4258931674
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::NewProp_ActorFolders_ElementProp = { "ActorFolders", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::NewProp_ActorFolders_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeLevelStreamingCell.h" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FGuid>::Value, "The structure 'FGuid' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::NewProp_ActorFolders = { "ActorFolders", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWorldPartitionRuntimeLevelStreamingCell, ActorFolders), METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::NewProp_ActorFolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::NewProp_ActorFolders_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::NewProp_LevelStreaming_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeLevelStreamingCell.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::NewProp_LevelStreaming = { "LevelStreaming", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWorldPartitionRuntimeLevelStreamingCell, LevelStreaming), Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::NewProp_LevelStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::NewProp_LevelStreaming_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::NewProp_Packages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::NewProp_Packages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::NewProp_ActorFolders_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::NewProp_ActorFolders,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::NewProp_LevelStreaming,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionRuntimeLevelStreamingCell>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::ClassParams = {
		&UWorldPartitionRuntimeLevelStreamingCell::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionRuntimeLevelStreamingCell.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionRuntimeLevelStreamingCell.OuterSingleton, Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionRuntimeLevelStreamingCell.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UWorldPartitionRuntimeLevelStreamingCell>()
	{
		return UWorldPartitionRuntimeLevelStreamingCell::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionRuntimeLevelStreamingCell);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeLevelStreamingCell_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeLevelStreamingCell_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionRuntimeLevelStreamingCell, UWorldPartitionRuntimeLevelStreamingCell::StaticClass, TEXT("UWorldPartitionRuntimeLevelStreamingCell"), &Z_Registration_Info_UClass_UWorldPartitionRuntimeLevelStreamingCell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionRuntimeLevelStreamingCell), 4018462703U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeLevelStreamingCell_h_3865630883(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeLevelStreamingCell_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeLevelStreamingCell_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
