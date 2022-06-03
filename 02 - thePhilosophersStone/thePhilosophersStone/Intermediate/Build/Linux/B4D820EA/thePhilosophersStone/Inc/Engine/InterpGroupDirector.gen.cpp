// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpGroupDirector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpGroupDirector() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupDirector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupDirector();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroup();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpGroupDirector::StaticRegisterNativesUInterpGroupDirector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpGroupDirector);
	UClass* Z_Construct_UClass_UInterpGroupDirector_NoRegister()
	{
		return UInterpGroupDirector::StaticClass();
	}
	struct Z_Construct_UClass_UInterpGroupDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpGroupDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroupDirector_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Matinee/InterpGroupDirector.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupDirector.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpGroupDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpGroupDirector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpGroupDirector_Statics::ClassParams = {
		&UInterpGroupDirector::StaticClass,
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
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpGroupDirector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpGroupDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpGroupDirector()
	{
		if (!Z_Registration_Info_UClass_UInterpGroupDirector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpGroupDirector.OuterSingleton, Z_Construct_UClass_UInterpGroupDirector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpGroupDirector.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpGroupDirector>()
	{
		return UInterpGroupDirector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpGroupDirector);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupDirector_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupDirector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpGroupDirector, UInterpGroupDirector::StaticClass, TEXT("UInterpGroupDirector"), &Z_Registration_Info_UClass_UInterpGroupDirector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpGroupDirector), 1235034713U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupDirector_h_1748596377(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupDirector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupDirector_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
