// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInstDirector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstDirector() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstDirector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstDirector();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UInterpTrackInstDirector::StaticRegisterNativesUInterpTrackInstDirector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackInstDirector);
	UClass* Z_Construct_UClass_UInterpTrackInstDirector_NoRegister()
	{
		return UInterpTrackInstDirector::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldViewTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OldViewTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInstDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstDirector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInstDirector.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstDirector.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstDirector_Statics::NewProp_OldViewTarget_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstDirector.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterpTrackInstDirector_Statics::NewProp_OldViewTarget = { "OldViewTarget", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstDirector, OldViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstDirector_Statics::NewProp_OldViewTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstDirector_Statics::NewProp_OldViewTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackInstDirector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstDirector_Statics::NewProp_OldViewTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstDirector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstDirector_Statics::ClassParams = {
		&UInterpTrackInstDirector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackInstDirector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstDirector_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstDirector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstDirector()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackInstDirector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackInstDirector.OuterSingleton, Z_Construct_UClass_UInterpTrackInstDirector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackInstDirector.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackInstDirector>()
	{
		return UInterpTrackInstDirector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstDirector);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstDirector_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstDirector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackInstDirector, UInterpTrackInstDirector::StaticClass, TEXT("UInterpTrackInstDirector"), &Z_Registration_Info_UClass_UInterpTrackInstDirector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackInstDirector), 2364599107U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstDirector_h_3211862561(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstDirector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstDirector_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
