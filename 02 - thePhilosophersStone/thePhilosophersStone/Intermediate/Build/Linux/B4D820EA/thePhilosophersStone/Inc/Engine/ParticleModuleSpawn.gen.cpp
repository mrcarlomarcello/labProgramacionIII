// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSpawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawn();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawnBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleBurstMethod();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleBurst();
// End Cross Module References
	void UParticleModuleSpawn::StaticRegisterNativesUParticleModuleSpawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleSpawn);
	UClass* Z_Construct_UClass_UParticleModuleSpawn_NoRegister()
	{
		return UParticleModuleSpawn::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleSpawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RateScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RateScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleBurstMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ParticleBurstMethod;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BurstList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BurstList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BurstList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BurstScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BurstScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyGlobalSpawnRateScale_MetaData[];
#endif
		static void NewProp_bApplyGlobalSpawnRateScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyGlobalSpawnRateScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleSpawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleSpawnBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSpawn_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Spawn" },
		{ "HideCategories", "Object ParticleModuleSpawnBase Object Object" },
		{ "IncludePath", "Particles/Spawn/ParticleModuleSpawn.h" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_Rate_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/** The rate at which to spawn particles. */" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawn.h" },
		{ "ToolTip", "The rate at which to spawn particles." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSpawn, Rate), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_Rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_Rate_MetaData)) }; // 3468229032
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_RateScale_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/** The scalar to apply to the rate. */" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawn.h" },
		{ "ToolTip", "The scalar to apply to the rate." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_RateScale = { "RateScale", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSpawn, RateScale), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_RateScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_RateScale_MetaData)) }; // 3468229032
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_ParticleBurstMethod_MetaData[] = {
		{ "Category", "Burst" },
		{ "Comment", "/** The method to utilize when burst-emitting particles. */" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawn.h" },
		{ "ToolTip", "The method to utilize when burst-emitting particles." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_ParticleBurstMethod = { "ParticleBurstMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSpawn, ParticleBurstMethod), Z_Construct_UEnum_Engine_EParticleBurstMethod, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_ParticleBurstMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_ParticleBurstMethod_MetaData)) }; // 2836185684
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_BurstList_Inner = { "BurstList", nullptr, (EPropertyFlags)0x0000000000000008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FParticleBurst, METADATA_PARAMS(nullptr, 0) }; // 2409398269
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_BurstList_MetaData[] = {
		{ "Category", "Burst" },
		{ "Comment", "/** The array of burst entries. */" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawn.h" },
		{ "ToolTip", "The array of burst entries." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_BurstList = { "BurstList", nullptr, (EPropertyFlags)0x0010000002000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSpawn, BurstList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_BurstList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_BurstList_MetaData)) }; // 2409398269
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_BurstScale_MetaData[] = {
		{ "Category", "Burst" },
		{ "Comment", "/** Scale all burst entries by this amount. */" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawn.h" },
		{ "ToolTip", "Scale all burst entries by this amount." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_BurstScale = { "BurstScale", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleSpawn, BurstScale), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_BurstScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_BurstScale_MetaData)) }; // 3468229032
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_bApplyGlobalSpawnRateScale_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/**\x09If true, the SpawnRate will be scaled by the global CVar r.EmitterSpawnRateScale */" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawn.h" },
		{ "ToolTip", "If true, the SpawnRate will be scaled by the global CVar r.EmitterSpawnRateScale" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_bApplyGlobalSpawnRateScale_SetBit(void* Obj)
	{
		((UParticleModuleSpawn*)Obj)->bApplyGlobalSpawnRateScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_bApplyGlobalSpawnRateScale = { "bApplyGlobalSpawnRateScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UParticleModuleSpawn), &Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_bApplyGlobalSpawnRateScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_bApplyGlobalSpawnRateScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_bApplyGlobalSpawnRateScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleSpawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_Rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_RateScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_ParticleBurstMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_BurstList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_BurstList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_BurstScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawn_Statics::NewProp_bApplyGlobalSpawnRateScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleSpawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSpawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSpawn_Statics::ClassParams = {
		&UParticleModuleSpawn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleSpawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawn_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSpawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleSpawn()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleSpawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleSpawn.OuterSingleton, Z_Construct_UClass_UParticleModuleSpawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleSpawn.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleSpawn>()
	{
		return UParticleModuleSpawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSpawn);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleSpawn, UParticleModuleSpawn::StaticClass, TEXT("UParticleModuleSpawn"), &Z_Registration_Info_UClass_UParticleModuleSpawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleSpawn), 832211767U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawn_h_526252864(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
