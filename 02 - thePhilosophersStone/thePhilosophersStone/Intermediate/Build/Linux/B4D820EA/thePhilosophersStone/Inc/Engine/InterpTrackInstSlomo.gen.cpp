// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInstSlomo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstSlomo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstSlomo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstSlomo();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpTrackInstSlomo::StaticRegisterNativesUInterpTrackInstSlomo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackInstSlomo);
	UClass* Z_Construct_UClass_UInterpTrackInstSlomo_NoRegister()
	{
		return UInterpTrackInstSlomo::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstSlomo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldTimeDilation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldTimeDilation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInstSlomo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstSlomo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInstSlomo.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstSlomo.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstSlomo_Statics::NewProp_OldTimeDilation_MetaData[] = {
		{ "Comment", "/** Backup of initial LevelInfo MatineeTimeDilation setting when interpolation started. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstSlomo.h" },
		{ "ToolTip", "Backup of initial LevelInfo MatineeTimeDilation setting when interpolation started." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpTrackInstSlomo_Statics::NewProp_OldTimeDilation = { "OldTimeDilation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstSlomo, OldTimeDilation), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstSlomo_Statics::NewProp_OldTimeDilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstSlomo_Statics::NewProp_OldTimeDilation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackInstSlomo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstSlomo_Statics::NewProp_OldTimeDilation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstSlomo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstSlomo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstSlomo_Statics::ClassParams = {
		&UInterpTrackInstSlomo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackInstSlomo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstSlomo_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstSlomo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstSlomo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstSlomo()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackInstSlomo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackInstSlomo.OuterSingleton, Z_Construct_UClass_UInterpTrackInstSlomo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackInstSlomo.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackInstSlomo>()
	{
		return UInterpTrackInstSlomo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstSlomo);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstSlomo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstSlomo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackInstSlomo, UInterpTrackInstSlomo::StaticClass, TEXT("UInterpTrackInstSlomo"), &Z_Registration_Info_UClass_UInterpTrackInstSlomo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackInstSlomo), 3864436439U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstSlomo_h_1524389792(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstSlomo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstSlomo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
