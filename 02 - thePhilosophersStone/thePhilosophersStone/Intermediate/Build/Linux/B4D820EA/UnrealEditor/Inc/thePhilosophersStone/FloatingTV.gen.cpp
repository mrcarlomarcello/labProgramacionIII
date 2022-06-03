// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "thePhilosophersStone/FloatingTV.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatingTV() {}
// Cross Module References
	THEPHILOSOPHERSSTONE_API UClass* Z_Construct_UClass_AFloatingTV_NoRegister();
	THEPHILOSOPHERSSTONE_API UClass* Z_Construct_UClass_AFloatingTV();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_thePhilosophersStone();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AFloatingTV::StaticRegisterNativesAFloatingTV()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFloatingTV);
	UClass* Z_Construct_UClass_AFloatingTV_NoRegister()
	{
		return AFloatingTV::StaticClass();
	}
	struct Z_Construct_UClass_AFloatingTV_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_distanceTravelled_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_distanceTravelled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloatingTV_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_thePhilosophersStone,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingTV_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FloatingTV.h" },
		{ "ModuleRelativePath", "FloatingTV.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingTV_Statics::NewProp_CurrentLocation_MetaData[] = {
		{ "Category", "Moving TV" },
		{ "ModuleRelativePath", "FloatingTV.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloatingTV_Statics::NewProp_CurrentLocation = { "CurrentLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloatingTV, CurrentLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFloatingTV_Statics::NewProp_CurrentLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingTV_Statics::NewProp_CurrentLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingTV_Statics::NewProp_PlatformSpeed_MetaData[] = {
		{ "Category", "Moving TV" },
		{ "Comment", "// = FVector(-2280.0,-1930.0,95);\n" },
		{ "ModuleRelativePath", "FloatingTV.h" },
		{ "ToolTip", "= FVector(-2280.0,-1930.0,95);" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloatingTV_Statics::NewProp_PlatformSpeed = { "PlatformSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloatingTV, PlatformSpeed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFloatingTV_Statics::NewProp_PlatformSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingTV_Statics::NewProp_PlatformSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingTV_Statics::NewProp_MoveDistance_MetaData[] = {
		{ "Category", "Moving TV" },
		{ "ModuleRelativePath", "FloatingTV.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFloatingTV_Statics::NewProp_MoveDistance = { "MoveDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloatingTV, MoveDistance), METADATA_PARAMS(Z_Construct_UClass_AFloatingTV_Statics::NewProp_MoveDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingTV_Statics::NewProp_MoveDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingTV_Statics::NewProp_distanceTravelled_MetaData[] = {
		{ "Category", "FloatingTV" },
		{ "ModuleRelativePath", "FloatingTV.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFloatingTV_Statics::NewProp_distanceTravelled = { "distanceTravelled", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloatingTV, distanceTravelled), METADATA_PARAMS(Z_Construct_UClass_AFloatingTV_Statics::NewProp_distanceTravelled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingTV_Statics::NewProp_distanceTravelled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloatingTV_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingTV_Statics::NewProp_CurrentLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingTV_Statics::NewProp_PlatformSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingTV_Statics::NewProp_MoveDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingTV_Statics::NewProp_distanceTravelled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloatingTV_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloatingTV>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFloatingTV_Statics::ClassParams = {
		&AFloatingTV::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFloatingTV_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingTV_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFloatingTV_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingTV_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFloatingTV()
	{
		if (!Z_Registration_Info_UClass_AFloatingTV.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFloatingTV.OuterSingleton, Z_Construct_UClass_AFloatingTV_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFloatingTV.OuterSingleton;
	}
	template<> THEPHILOSOPHERSSTONE_API UClass* StaticClass<AFloatingTV>()
	{
		return AFloatingTV::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloatingTV);
	struct Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_FloatingTV_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_FloatingTV_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFloatingTV, AFloatingTV::StaticClass, TEXT("AFloatingTV"), &Z_Registration_Info_UClass_AFloatingTV, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFloatingTV), 3541996021U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_FloatingTV_h_1929810453(TEXT("/Script/thePhilosophersStone"),
		Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_FloatingTV_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_FloatingTV_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
