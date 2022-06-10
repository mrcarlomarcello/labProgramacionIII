// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "thePhilosophersStone/ShootingCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootingCharacter() {}
// Cross Module References
	THEPHILOSOPHERSSTONE_API UClass* Z_Construct_UClass_AShootingCharacter_NoRegister();
	THEPHILOSOPHERSSTONE_API UClass* Z_Construct_UClass_AShootingCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_thePhilosophersStone();
// End Cross Module References
	void AShootingCharacter::StaticRegisterNativesAShootingCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShootingCharacter);
	UClass* Z_Construct_UClass_AShootingCharacter_NoRegister()
	{
		return AShootingCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AShootingCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShootingCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_thePhilosophersStone,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ShootingCharacter.h" },
		{ "ModuleRelativePath", "ShootingCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingCharacter_Statics::NewProp_RotationRate_MetaData[] = {
		{ "Category", "ShootingCharacter" },
		{ "Comment", "//ESTA PROPIEDAD TENDREMOS QUE AGREGARLA A SETTINGS DESPUES!!!\n" },
		{ "ModuleRelativePath", "ShootingCharacter.h" },
		{ "ToolTip", "ESTA PROPIEDAD TENDREMOS QUE AGREGARLA A SETTINGS DESPUES!!!" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShootingCharacter_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootingCharacter, RotationRate), METADATA_PARAMS(Z_Construct_UClass_AShootingCharacter_Statics::NewProp_RotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingCharacter_Statics::NewProp_RotationRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShootingCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingCharacter_Statics::NewProp_RotationRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShootingCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootingCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShootingCharacter_Statics::ClassParams = {
		&AShootingCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShootingCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShootingCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShootingCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShootingCharacter()
	{
		if (!Z_Registration_Info_UClass_AShootingCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShootingCharacter.OuterSingleton, Z_Construct_UClass_AShootingCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShootingCharacter.OuterSingleton;
	}
	template<> THEPHILOSOPHERSSTONE_API UClass* StaticClass<AShootingCharacter>()
	{
		return AShootingCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShootingCharacter);
	struct Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_ShootingCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_ShootingCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShootingCharacter, AShootingCharacter::StaticClass, TEXT("AShootingCharacter"), &Z_Registration_Info_UClass_AShootingCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShootingCharacter), 1901325391U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_ShootingCharacter_h_4212047111(TEXT("/Script/thePhilosophersStone"),
		Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_ShootingCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_ShootingCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
