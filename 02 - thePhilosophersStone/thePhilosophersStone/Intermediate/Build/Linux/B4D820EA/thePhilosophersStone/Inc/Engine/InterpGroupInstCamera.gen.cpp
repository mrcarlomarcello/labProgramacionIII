// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpGroupInstCamera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpGroupInstCamera() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupInstCamera_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupInstCamera();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpGroupInstCamera::StaticRegisterNativesUInterpGroupInstCamera()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpGroupInstCamera);
	UClass* Z_Construct_UClass_UInterpGroupInstCamera_NoRegister()
	{
		return UInterpGroupInstCamera::StaticClass();
	}
	struct Z_Construct_UClass_UInterpGroupInstCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpGroupInstCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpGroupInst,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroupInstCamera_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpGroupInstCamera.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupInstCamera.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpGroupInstCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpGroupInstCamera>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpGroupInstCamera_Statics::ClassParams = {
		&UInterpGroupInstCamera::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpGroupInstCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpGroupInstCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpGroupInstCamera()
	{
		if (!Z_Registration_Info_UClass_UInterpGroupInstCamera.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpGroupInstCamera.OuterSingleton, Z_Construct_UClass_UInterpGroupInstCamera_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpGroupInstCamera.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpGroupInstCamera>()
	{
		return UInterpGroupInstCamera::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpGroupInstCamera);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupInstCamera_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupInstCamera_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpGroupInstCamera, UInterpGroupInstCamera::StaticClass, TEXT("UInterpGroupInstCamera"), &Z_Registration_Info_UClass_UInterpGroupInstCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpGroupInstCamera), 1048512957U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupInstCamera_h_1272258726(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupInstCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupInstCamera_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
