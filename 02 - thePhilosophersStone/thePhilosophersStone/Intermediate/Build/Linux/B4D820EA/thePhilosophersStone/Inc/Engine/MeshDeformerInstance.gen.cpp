// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/MeshDeformerInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshDeformerInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMeshDeformerInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshDeformerInstance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMeshDeformerInstance::StaticRegisterNativesUMeshDeformerInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshDeformerInstance);
	UClass* Z_Construct_UClass_UMeshDeformerInstance_NoRegister()
	{
		return UMeshDeformerInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMeshDeformerInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshDeformerInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshDeformerInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Base class for mesh deformers instances.\n * This contains the per instance state for a UMeshDeformer.\n */" },
		{ "IncludePath", "Animation/MeshDeformerInstance.h" },
		{ "ModuleRelativePath", "Classes/Animation/MeshDeformerInstance.h" },
		{ "ToolTip", "Base class for mesh deformers instances.\nThis contains the per instance state for a UMeshDeformer." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshDeformerInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshDeformerInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshDeformerInstance_Statics::ClassParams = {
		&UMeshDeformerInstance::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshDeformerInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshDeformerInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshDeformerInstance()
	{
		if (!Z_Registration_Info_UClass_UMeshDeformerInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshDeformerInstance.OuterSingleton, Z_Construct_UClass_UMeshDeformerInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshDeformerInstance.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMeshDeformerInstance>()
	{
		return UMeshDeformerInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshDeformerInstance);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MeshDeformerInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MeshDeformerInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshDeformerInstance, UMeshDeformerInstance::StaticClass, TEXT("UMeshDeformerInstance"), &Z_Registration_Info_UClass_UMeshDeformerInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshDeformerInstance), 4256895204U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MeshDeformerInstance_h_1922976870(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MeshDeformerInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MeshDeformerInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
