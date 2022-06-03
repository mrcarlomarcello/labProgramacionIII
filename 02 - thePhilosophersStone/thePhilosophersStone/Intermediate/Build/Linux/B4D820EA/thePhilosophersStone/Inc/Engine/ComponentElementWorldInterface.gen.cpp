// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Elements/Component/ComponentElementWorldInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentElementWorldInterface() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UComponentElementWorldInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UComponentElementWorldInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UTypedElementWorldInterface_NoRegister();
// End Cross Module References
	void UComponentElementWorldInterface::StaticRegisterNativesUComponentElementWorldInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComponentElementWorldInterface);
	UClass* Z_Construct_UClass_UComponentElementWorldInterface_NoRegister()
	{
		return UComponentElementWorldInterface::StaticClass();
	}
	struct Z_Construct_UClass_UComponentElementWorldInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponentElementWorldInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponentElementWorldInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/Component/ComponentElementWorldInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/Component/ComponentElementWorldInterface.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UComponentElementWorldInterface_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTypedElementWorldInterface_NoRegister, (int32)VTABLE_OFFSET(UComponentElementWorldInterface, ITypedElementWorldInterface), false },  // 4086442413
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponentElementWorldInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponentElementWorldInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComponentElementWorldInterface_Statics::ClassParams = {
		&UComponentElementWorldInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UComponentElementWorldInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComponentElementWorldInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponentElementWorldInterface()
	{
		if (!Z_Registration_Info_UClass_UComponentElementWorldInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComponentElementWorldInterface.OuterSingleton, Z_Construct_UClass_UComponentElementWorldInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComponentElementWorldInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UComponentElementWorldInterface>()
	{
		return UComponentElementWorldInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponentElementWorldInterface);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementWorldInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementWorldInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComponentElementWorldInterface, UComponentElementWorldInterface::StaticClass, TEXT("UComponentElementWorldInterface"), &Z_Registration_Info_UClass_UComponentElementWorldInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComponentElementWorldInterface), 661026807U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementWorldInterface_h_1761285291(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementWorldInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementWorldInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
