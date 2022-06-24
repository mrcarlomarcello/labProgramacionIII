// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "thePhilosophersStone/ShootingAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootingAIController() {}
// Cross Module References
	THEPHILOSOPHERSSTONE_API UClass* Z_Construct_UClass_AShootingAIController_NoRegister();
	THEPHILOSOPHERSSTONE_API UClass* Z_Construct_UClass_AShootingAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_thePhilosophersStone();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void AShootingAIController::StaticRegisterNativesAShootingAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShootingAIController);
	UClass* Z_Construct_UClass_AShootingAIController_NoRegister()
	{
		return AShootingAIController::StaticClass();
	}
	struct Z_Construct_UClass_AShootingAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIBehavior;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShootingAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_thePhilosophersStone,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ShootingAIController.h" },
		{ "ModuleRelativePath", "ShootingAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingAIController_Statics::NewProp_AIBehavior_MetaData[] = {
		{ "Category", "ShootingAIController" },
		{ "Comment", "//float AcceptanceRadius = 200;\x09\n" },
		{ "ModuleRelativePath", "ShootingAIController.h" },
		{ "ToolTip", "float AcceptanceRadius = 200;" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootingAIController_Statics::NewProp_AIBehavior = { "AIBehavior", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootingAIController, AIBehavior), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShootingAIController_Statics::NewProp_AIBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingAIController_Statics::NewProp_AIBehavior_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShootingAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingAIController_Statics::NewProp_AIBehavior,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShootingAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootingAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShootingAIController_Statics::ClassParams = {
		&AShootingAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShootingAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShootingAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShootingAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShootingAIController()
	{
		if (!Z_Registration_Info_UClass_AShootingAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShootingAIController.OuterSingleton, Z_Construct_UClass_AShootingAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShootingAIController.OuterSingleton;
	}
	template<> THEPHILOSOPHERSSTONE_API UClass* StaticClass<AShootingAIController>()
	{
		return AShootingAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShootingAIController);
	struct Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_ShootingAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_ShootingAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShootingAIController, AShootingAIController::StaticClass, TEXT("AShootingAIController"), &Z_Registration_Info_UClass_AShootingAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShootingAIController), 1580382200U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_ShootingAIController_h_1077521047(TEXT("/Script/thePhilosophersStone"),
		Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_ShootingAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_ShootingAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
