// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsField/PhysicsFieldComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsFieldComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsFieldComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsFieldComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UPhysicsFieldComponent::StaticRegisterNativesUPhysicsFieldComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsFieldComponent);
	UClass* Z_Construct_UClass_UPhysicsFieldComponent_NoRegister()
	{
		return UPhysicsFieldComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsFieldComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsFieldComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsFieldComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n*\x09PhysicsFieldComponent\n*/" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "PhysicsField/PhysicsFieldComponent.h" },
		{ "ModuleRelativePath", "Classes/PhysicsField/PhysicsFieldComponent.h" },
		{ "ToolTip", "PhysicsFieldComponent" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsFieldComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsFieldComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsFieldComponent_Statics::ClassParams = {
		&UPhysicsFieldComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsFieldComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsFieldComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsFieldComponent()
	{
		if (!Z_Registration_Info_UClass_UPhysicsFieldComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsFieldComponent.OuterSingleton, Z_Construct_UClass_UPhysicsFieldComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicsFieldComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPhysicsFieldComponent>()
	{
		return UPhysicsFieldComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsFieldComponent);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsField_PhysicsFieldComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsField_PhysicsFieldComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsFieldComponent, UPhysicsFieldComponent::StaticClass, TEXT("UPhysicsFieldComponent"), &Z_Registration_Info_UClass_UPhysicsFieldComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsFieldComponent), 1312315738U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsField_PhysicsFieldComponent_h_3803945215(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsField_PhysicsFieldComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsField_PhysicsFieldComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
