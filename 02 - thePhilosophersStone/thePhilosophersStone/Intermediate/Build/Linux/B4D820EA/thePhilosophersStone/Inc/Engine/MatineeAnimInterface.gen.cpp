// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/MatineeAnimInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatineeAnimInterface() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMatineeAnimInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMatineeAnimInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMatineeAnimInterface::StaticRegisterNativesUMatineeAnimInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMatineeAnimInterface);
	UClass* Z_Construct_UClass_UMatineeAnimInterface_NoRegister()
	{
		return UMatineeAnimInterface::StaticClass();
	}
	struct Z_Construct_UClass_UMatineeAnimInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMatineeAnimInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatineeAnimInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeAnimInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMatineeAnimInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMatineeAnimInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMatineeAnimInterface_Statics::ClassParams = {
		&UMatineeAnimInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMatineeAnimInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMatineeAnimInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMatineeAnimInterface()
	{
		if (!Z_Registration_Info_UClass_UMatineeAnimInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMatineeAnimInterface.OuterSingleton, Z_Construct_UClass_UMatineeAnimInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMatineeAnimInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMatineeAnimInterface>()
	{
		return UMatineeAnimInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatineeAnimInterface);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeAnimInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeAnimInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMatineeAnimInterface, UMatineeAnimInterface::StaticClass, TEXT("UMatineeAnimInterface"), &Z_Registration_Info_UClass_UMatineeAnimInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMatineeAnimInterface), 359506904U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeAnimInterface_h_974056841(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeAnimInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeAnimInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
