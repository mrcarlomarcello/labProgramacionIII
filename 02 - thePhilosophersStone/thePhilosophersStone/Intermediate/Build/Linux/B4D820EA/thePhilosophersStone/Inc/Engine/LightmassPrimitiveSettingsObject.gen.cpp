// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Lightmass/LightmassPrimitiveSettingsObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightmassPrimitiveSettingsObject() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULightmassPrimitiveSettingsObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULightmassPrimitiveSettingsObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassPrimitiveSettings();
// End Cross Module References
	void ULightmassPrimitiveSettingsObject::StaticRegisterNativesULightmassPrimitiveSettingsObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULightmassPrimitiveSettingsObject);
	UClass* Z_Construct_UClass_ULightmassPrimitiveSettingsObject_NoRegister()
	{
		return ULightmassPrimitiveSettingsObject::StaticClass();
	}
	struct Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightmassSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightmassSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Lightmass/LightmassPrimitiveSettingsObject.h" },
		{ "ModuleRelativePath", "Classes/Lightmass/LightmassPrimitiveSettingsObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::NewProp_LightmassSettings_MetaData[] = {
		{ "Category", "Lightmass" },
		{ "ModuleRelativePath", "Classes/Lightmass/LightmassPrimitiveSettingsObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::NewProp_LightmassSettings = { "LightmassSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULightmassPrimitiveSettingsObject, LightmassSettings), Z_Construct_UScriptStruct_FLightmassPrimitiveSettings, METADATA_PARAMS(Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::NewProp_LightmassSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::NewProp_LightmassSettings_MetaData)) }; // 2261334603
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::NewProp_LightmassSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightmassPrimitiveSettingsObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::ClassParams = {
		&ULightmassPrimitiveSettingsObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::PropPointers),
		0,
		0x000830A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightmassPrimitiveSettingsObject()
	{
		if (!Z_Registration_Info_UClass_ULightmassPrimitiveSettingsObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULightmassPrimitiveSettingsObject.OuterSingleton, Z_Construct_UClass_ULightmassPrimitiveSettingsObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULightmassPrimitiveSettingsObject.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ULightmassPrimitiveSettingsObject>()
	{
		return ULightmassPrimitiveSettingsObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightmassPrimitiveSettingsObject);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPrimitiveSettingsObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPrimitiveSettingsObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULightmassPrimitiveSettingsObject, ULightmassPrimitiveSettingsObject::StaticClass, TEXT("ULightmassPrimitiveSettingsObject"), &Z_Registration_Info_UClass_ULightmassPrimitiveSettingsObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULightmassPrimitiveSettingsObject), 2223152049U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPrimitiveSettingsObject_h_1751509687(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPrimitiveSettingsObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPrimitiveSettingsObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
