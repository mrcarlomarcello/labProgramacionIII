// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Classes/LandscapeSplineActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeSplineActor() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeSplineActor_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeSplineActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineInterface_NoRegister();
// End Cross Module References
	void ALandscapeSplineActor::StaticRegisterNativesALandscapeSplineActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALandscapeSplineActor);
	UClass* Z_Construct_UClass_ALandscapeSplineActor_NoRegister()
	{
		return ALandscapeSplineActor::StaticClass();
	}
	struct Z_Construct_UClass_ALandscapeSplineActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LandscapeGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALandscapeSplineActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeSplineActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Display Attachment Physics Debug Lighting Input" },
		{ "IncludePath", "LandscapeSplineActor.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeSplineActor_Statics::NewProp_LandscapeGuid_MetaData[] = {
		{ "Comment", "/** Guid for LandscapeInfo **/" },
		{ "ModuleRelativePath", "Classes/LandscapeSplineActor.h" },
		{ "ToolTip", "Guid for LandscapeInfo *" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeSplineActor_Statics::NewProp_LandscapeGuid = { "LandscapeGuid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeSplineActor, LandscapeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ALandscapeSplineActor_Statics::NewProp_LandscapeGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeSplineActor_Statics::NewProp_LandscapeGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALandscapeSplineActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeSplineActor_Statics::NewProp_LandscapeGuid,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALandscapeSplineActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULandscapeSplineInterface_NoRegister, (int32)VTABLE_OFFSET(ALandscapeSplineActor, ILandscapeSplineInterface), false },  // 2418703177
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALandscapeSplineActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscapeSplineActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALandscapeSplineActor_Statics::ClassParams = {
		&ALandscapeSplineActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALandscapeSplineActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeSplineActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008802A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALandscapeSplineActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeSplineActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALandscapeSplineActor()
	{
		if (!Z_Registration_Info_UClass_ALandscapeSplineActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALandscapeSplineActor.OuterSingleton, Z_Construct_UClass_ALandscapeSplineActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALandscapeSplineActor.OuterSingleton;
	}
	template<> LANDSCAPE_API UClass* StaticClass<ALandscapeSplineActor>()
	{
		return ALandscapeSplineActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapeSplineActor);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALandscapeSplineActor, ALandscapeSplineActor::StaticClass, TEXT("ALandscapeSplineActor"), &Z_Registration_Info_UClass_ALandscapeSplineActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALandscapeSplineActor), 3061707915U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineActor_h_4224921855(TEXT("/Script/Landscape"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeSplineActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
