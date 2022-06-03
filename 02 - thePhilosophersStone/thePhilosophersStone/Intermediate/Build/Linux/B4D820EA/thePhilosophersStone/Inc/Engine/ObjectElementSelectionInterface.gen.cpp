// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Elements/Object/ObjectElementSelectionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectElementSelectionInterface() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UObjectElementSelectionInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UObjectElementSelectionInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementSelectionInterface_NoRegister();
// End Cross Module References
	void UObjectElementSelectionInterface::StaticRegisterNativesUObjectElementSelectionInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectElementSelectionInterface);
	UClass* Z_Construct_UClass_UObjectElementSelectionInterface_NoRegister()
	{
		return UObjectElementSelectionInterface::StaticClass();
	}
	struct Z_Construct_UClass_UObjectElementSelectionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectElementSelectionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectElementSelectionInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/Object/ObjectElementSelectionInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/Object/ObjectElementSelectionInterface.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UObjectElementSelectionInterface_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTypedElementSelectionInterface_NoRegister, (int32)VTABLE_OFFSET(UObjectElementSelectionInterface, ITypedElementSelectionInterface), false },  // 331894261
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectElementSelectionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectElementSelectionInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectElementSelectionInterface_Statics::ClassParams = {
		&UObjectElementSelectionInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UObjectElementSelectionInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectElementSelectionInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectElementSelectionInterface()
	{
		if (!Z_Registration_Info_UClass_UObjectElementSelectionInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectElementSelectionInterface.OuterSingleton, Z_Construct_UClass_UObjectElementSelectionInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjectElementSelectionInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UObjectElementSelectionInterface>()
	{
		return UObjectElementSelectionInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectElementSelectionInterface);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementSelectionInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementSelectionInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UObjectElementSelectionInterface, UObjectElementSelectionInterface::StaticClass, TEXT("UObjectElementSelectionInterface"), &Z_Registration_Info_UClass_UObjectElementSelectionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectElementSelectionInterface), 2638705392U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementSelectionInterface_h_3682210424(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementSelectionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementSelectionInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
