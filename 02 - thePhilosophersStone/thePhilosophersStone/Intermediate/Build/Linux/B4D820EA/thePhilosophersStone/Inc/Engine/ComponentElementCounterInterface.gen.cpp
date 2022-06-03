// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Elements/Component/ComponentElementCounterInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentElementCounterInterface() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UComponentElementCounterInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UComponentElementCounterInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementCounterInterface_NoRegister();
// End Cross Module References
	void UComponentElementCounterInterface::StaticRegisterNativesUComponentElementCounterInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComponentElementCounterInterface);
	UClass* Z_Construct_UClass_UComponentElementCounterInterface_NoRegister()
	{
		return UComponentElementCounterInterface::StaticClass();
	}
	struct Z_Construct_UClass_UComponentElementCounterInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponentElementCounterInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponentElementCounterInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/Component/ComponentElementCounterInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/Component/ComponentElementCounterInterface.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UComponentElementCounterInterface_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTypedElementCounterInterface_NoRegister, (int32)VTABLE_OFFSET(UComponentElementCounterInterface, ITypedElementCounterInterface), false },  // 776443441
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponentElementCounterInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponentElementCounterInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComponentElementCounterInterface_Statics::ClassParams = {
		&UComponentElementCounterInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UComponentElementCounterInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComponentElementCounterInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponentElementCounterInterface()
	{
		if (!Z_Registration_Info_UClass_UComponentElementCounterInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComponentElementCounterInterface.OuterSingleton, Z_Construct_UClass_UComponentElementCounterInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComponentElementCounterInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UComponentElementCounterInterface>()
	{
		return UComponentElementCounterInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponentElementCounterInterface);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementCounterInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementCounterInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComponentElementCounterInterface, UComponentElementCounterInterface::StaticClass, TEXT("UComponentElementCounterInterface"), &Z_Registration_Info_UClass_UComponentElementCounterInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComponentElementCounterInterface), 1495616476U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementCounterInterface_h_1256146729(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementCounterInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Component_ComponentElementCounterInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
