// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Elements/Object/ObjectElementObjectInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectElementObjectInterface() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UObjectElementObjectInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UObjectElementObjectInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementObjectInterface_NoRegister();
// End Cross Module References
	void UObjectElementObjectInterface::StaticRegisterNativesUObjectElementObjectInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectElementObjectInterface);
	UClass* Z_Construct_UClass_UObjectElementObjectInterface_NoRegister()
	{
		return UObjectElementObjectInterface::StaticClass();
	}
	struct Z_Construct_UClass_UObjectElementObjectInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectElementObjectInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectElementObjectInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/Object/ObjectElementObjectInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/Object/ObjectElementObjectInterface.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UObjectElementObjectInterface_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTypedElementObjectInterface_NoRegister, (int32)VTABLE_OFFSET(UObjectElementObjectInterface, ITypedElementObjectInterface), false },  // 3436238367
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectElementObjectInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectElementObjectInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectElementObjectInterface_Statics::ClassParams = {
		&UObjectElementObjectInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UObjectElementObjectInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectElementObjectInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectElementObjectInterface()
	{
		if (!Z_Registration_Info_UClass_UObjectElementObjectInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectElementObjectInterface.OuterSingleton, Z_Construct_UClass_UObjectElementObjectInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjectElementObjectInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UObjectElementObjectInterface>()
	{
		return UObjectElementObjectInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectElementObjectInterface);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementObjectInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementObjectInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UObjectElementObjectInterface, UObjectElementObjectInterface::StaticClass, TEXT("UObjectElementObjectInterface"), &Z_Registration_Info_UClass_UObjectElementObjectInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectElementObjectInterface), 2624572556U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementObjectInterface_h_3980037449(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementObjectInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Object_ObjectElementObjectInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
