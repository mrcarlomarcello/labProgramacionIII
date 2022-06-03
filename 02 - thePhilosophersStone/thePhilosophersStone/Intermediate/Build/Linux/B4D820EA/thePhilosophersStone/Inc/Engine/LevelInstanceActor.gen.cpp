// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/LevelInstance/LevelInstanceActor.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelInstanceActor() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_ALevelInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ALevelInstance();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELevelInstanceRuntimeBehavior;
	static UEnum* ELevelInstanceRuntimeBehavior_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELevelInstanceRuntimeBehavior.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELevelInstanceRuntimeBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior, Z_Construct_UPackage__Script_Engine(), TEXT("ELevelInstanceRuntimeBehavior"));
		}
		return Z_Registration_Info_UEnum_ELevelInstanceRuntimeBehavior.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ELevelInstanceRuntimeBehavior>()
	{
		return ELevelInstanceRuntimeBehavior_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior_Statics::Enumerators[] = {
		{ "ELevelInstanceRuntimeBehavior::None", (int64)ELevelInstanceRuntimeBehavior::None },
		{ "ELevelInstanceRuntimeBehavior::Embedded_Deprecated", (int64)ELevelInstanceRuntimeBehavior::Embedded_Deprecated },
		{ "ELevelInstanceRuntimeBehavior::Partitioned", (int64)ELevelInstanceRuntimeBehavior::Partitioned },
		{ "ELevelInstanceRuntimeBehavior::LevelStreaming", (int64)ELevelInstanceRuntimeBehavior::LevelStreaming },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior_Statics::Enum_MetaDataParams[] = {
		{ "Embedded_Deprecated.Comment", "// Deprecated exists only to avoid breaking Actor Desc serialization\n" },
		{ "Embedded_Deprecated.Hidden", "" },
		{ "Embedded_Deprecated.Name", "ELevelInstanceRuntimeBehavior::Embedded_Deprecated" },
		{ "Embedded_Deprecated.ToolTip", "Deprecated exists only to avoid breaking Actor Desc serialization" },
		{ "LevelStreaming.Comment", "// Behavior only supported through Conversion Commandlet or on non OFPA Level Instances\n" },
		{ "LevelStreaming.Hidden", "" },
		{ "LevelStreaming.Name", "ELevelInstanceRuntimeBehavior::LevelStreaming" },
		{ "LevelStreaming.ToolTip", "Behavior only supported through Conversion Commandlet or on non OFPA Level Instances" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceActor.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "ELevelInstanceRuntimeBehavior::None" },
		{ "Partitioned.Comment", "// Default behavior is to move Level Instance level actors to the main world partition using World Partition clustering rules\n" },
		{ "Partitioned.Name", "ELevelInstanceRuntimeBehavior::Partitioned" },
		{ "Partitioned.ToolTip", "Default behavior is to move Level Instance level actors to the main world partition using World Partition clustering rules" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ELevelInstanceRuntimeBehavior",
		"ELevelInstanceRuntimeBehavior",
		Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior()
	{
		if (!Z_Registration_Info_UEnum_ELevelInstanceRuntimeBehavior.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELevelInstanceRuntimeBehavior.InnerSingleton, Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELevelInstanceRuntimeBehavior.InnerSingleton;
	}
	void ALevelInstance::StaticRegisterNativesALevelInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelInstance);
	UClass* Z_Construct_UClass_ALevelInstance_NoRegister()
	{
		return ALevelInstance::StaticClass();
	}
	struct Z_Construct_UClass_ALevelInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldAsset_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WorldAsset;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookedWorldAsset_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CookedWorldAsset;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_DesiredRuntimeBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredRuntimeBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DesiredRuntimeBehavior;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelInstance/LevelInstanceActor.h" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceActor.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelInstance_Statics::NewProp_WorldAsset_MetaData[] = {
		{ "Category", "Level" },
		{ "Comment", "/** Level LevelInstance */" },
		{ "DisplayName", "Level" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceActor.h" },
		{ "NoCreate", "" },
		{ "ToolTip", "Level LevelInstance" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ALevelInstance_Statics::NewProp_WorldAsset = { "WorldAsset", nullptr, (EPropertyFlags)0x0024080800000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelInstance, WorldAsset), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelInstance_Statics::NewProp_WorldAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelInstance_Statics::NewProp_WorldAsset_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelInstance_Statics::NewProp_CookedWorldAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceActor.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ALevelInstance_Statics::NewProp_CookedWorldAsset = { "CookedWorldAsset", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelInstance, CookedWorldAsset), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelInstance_Statics::NewProp_CookedWorldAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelInstance_Statics::NewProp_CookedWorldAsset_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALevelInstance_Statics::NewProp_DesiredRuntimeBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelInstance_Statics::NewProp_DesiredRuntimeBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALevelInstance_Statics::NewProp_DesiredRuntimeBehavior = { "DesiredRuntimeBehavior", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelInstance, DesiredRuntimeBehavior), Z_Construct_UEnum_Engine_ELevelInstanceRuntimeBehavior, METADATA_PARAMS(Z_Construct_UClass_ALevelInstance_Statics::NewProp_DesiredRuntimeBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelInstance_Statics::NewProp_DesiredRuntimeBehavior_MetaData)) }; // 52033108
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelInstance_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelInstance_Statics::NewProp_WorldAsset,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelInstance_Statics::NewProp_CookedWorldAsset,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelInstance_Statics::NewProp_DesiredRuntimeBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelInstance_Statics::NewProp_DesiredRuntimeBehavior,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelInstance_Statics::ClassParams = {
		&ALevelInstance::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALevelInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALevelInstance_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALevelInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALevelInstance()
	{
		if (!Z_Registration_Info_UClass_ALevelInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelInstance.OuterSingleton, Z_Construct_UClass_ALevelInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALevelInstance.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ALevelInstance>()
	{
		return ALevelInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelInstance);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ALevelInstance)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_Statics::EnumInfo[] = {
		{ ELevelInstanceRuntimeBehavior_StaticEnum, TEXT("ELevelInstanceRuntimeBehavior"), &Z_Registration_Info_UEnum_ELevelInstanceRuntimeBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 52033108U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALevelInstance, ALevelInstance::StaticClass, TEXT("ALevelInstance"), &Z_Registration_Info_UClass_ALevelInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelInstance), 3262813277U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_2950005715(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
