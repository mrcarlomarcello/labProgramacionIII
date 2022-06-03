// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMCore/RigVMMemoryStorage.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMMemoryStorage() {}
// Cross Module References
	RIGVM_API UClass* Z_Construct_UClass_URigVMMemoryStorageGeneratorClass_NoRegister();
	RIGVM_API UClass* Z_Construct_UClass_URigVMMemoryStorageGeneratorClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UPackage* Z_Construct_UPackage__Script_RigVM();
	RIGVM_API UClass* Z_Construct_UClass_URigVMMemoryStorage_NoRegister();
	RIGVM_API UClass* Z_Construct_UClass_URigVMMemoryStorage();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	void URigVMMemoryStorageGeneratorClass::StaticRegisterNativesURigVMMemoryStorageGeneratorClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMMemoryStorageGeneratorClass);
	UClass* Z_Construct_UClass_URigVMMemoryStorageGeneratorClass_NoRegister()
	{
		return URigVMMemoryStorageGeneratorClass::StaticClass();
	}
	struct Z_Construct_UClass_URigVMMemoryStorageGeneratorClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMMemoryStorageGeneratorClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClass,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMMemoryStorageGeneratorClass_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The URigVMMemoryStorageGeneratorClass is used to create / represent heterogeneous\n * memory storages. The generator can produce a UClass which contains a series of\n * properties. This UClass is then used to instantiate URigVMMemoryStorage objects\n * to be consumed by the RigVM. The memory storage objects can contain the literals\n * / constant values used by the virtual machine or work state.\n */" },
		{ "IncludePath", "RigVMCore/RigVMMemoryStorage.h" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryStorage.h" },
		{ "ToolTip", "The URigVMMemoryStorageGeneratorClass is used to create / represent heterogeneous\nmemory storages. The generator can produce a UClass which contains a series of\nproperties. This UClass is then used to instantiate URigVMMemoryStorage objects\nto be consumed by the RigVM. The memory storage objects can contain the literals\n/ constant values used by the virtual machine or work state." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMMemoryStorageGeneratorClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMMemoryStorageGeneratorClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMMemoryStorageGeneratorClass_Statics::ClassParams = {
		&URigVMMemoryStorageGeneratorClass::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URigVMMemoryStorageGeneratorClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMMemoryStorageGeneratorClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMMemoryStorageGeneratorClass()
	{
		if (!Z_Registration_Info_UClass_URigVMMemoryStorageGeneratorClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMMemoryStorageGeneratorClass.OuterSingleton, Z_Construct_UClass_URigVMMemoryStorageGeneratorClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMMemoryStorageGeneratorClass.OuterSingleton;
	}
	template<> RIGVM_API UClass* StaticClass<URigVMMemoryStorageGeneratorClass>()
	{
		return URigVMMemoryStorageGeneratorClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMMemoryStorageGeneratorClass);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(URigVMMemoryStorageGeneratorClass)
	void URigVMMemoryStorage::StaticRegisterNativesURigVMMemoryStorage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMMemoryStorage);
	UClass* Z_Construct_UClass_URigVMMemoryStorage_NoRegister()
	{
		return URigVMMemoryStorage::StaticClass();
	}
	struct Z_Construct_UClass_URigVMMemoryStorage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMMemoryStorage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMMemoryStorage_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The URigVMMemoryStorage represents an instance of heterogeneous memory.\n * The memory layout is defined by the URigVMMemoryStorageGeneratorClass.\n */" },
		{ "IncludePath", "RigVMCore/RigVMMemoryStorage.h" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMMemoryStorage.h" },
		{ "ToolTip", "The URigVMMemoryStorage represents an instance of heterogeneous memory.\nThe memory layout is defined by the URigVMMemoryStorageGeneratorClass." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMMemoryStorage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMMemoryStorage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMMemoryStorage_Statics::ClassParams = {
		&URigVMMemoryStorage::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URigVMMemoryStorage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMMemoryStorage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMMemoryStorage()
	{
		if (!Z_Registration_Info_UClass_URigVMMemoryStorage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMMemoryStorage.OuterSingleton, Z_Construct_UClass_URigVMMemoryStorage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMMemoryStorage.OuterSingleton;
	}
	template<> RIGVM_API UClass* StaticClass<URigVMMemoryStorage>()
	{
		return URigVMMemoryStorage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMMemoryStorage);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMMemoryStorageGeneratorClass, URigVMMemoryStorageGeneratorClass::StaticClass, TEXT("URigVMMemoryStorageGeneratorClass"), &Z_Registration_Info_UClass_URigVMMemoryStorageGeneratorClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMMemoryStorageGeneratorClass), 957240627U) },
		{ Z_Construct_UClass_URigVMMemoryStorage, URigVMMemoryStorage::StaticClass, TEXT("URigVMMemoryStorage"), &Z_Registration_Info_UClass_URigVMMemoryStorage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMMemoryStorage), 3708341289U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_743572704(TEXT("/Script/RigVM"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMMemoryStorage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
