// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/MeshDeformer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshDeformer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMeshDeformer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshDeformer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMeshDeformer::StaticRegisterNativesUMeshDeformer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshDeformer);
	UClass* Z_Construct_UClass_UMeshDeformer_NoRegister()
	{
		return UMeshDeformer::StaticClass();
	}
	struct Z_Construct_UClass_UMeshDeformer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshDeformer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshDeformer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Base class for mesh deformer assets.\n * Mesh deformers can be added to mesh components to implement flexible deformation systems.\n * A UMeshDeformer needs to implement creation of a UMeshDeformerInstance which will apply deformer actions and store deformer state.\n */" },
		{ "IncludePath", "Animation/MeshDeformer.h" },
		{ "ModuleRelativePath", "Classes/Animation/MeshDeformer.h" },
		{ "ToolTip", "Base class for mesh deformer assets.\nMesh deformers can be added to mesh components to implement flexible deformation systems.\nA UMeshDeformer needs to implement creation of a UMeshDeformerInstance which will apply deformer actions and store deformer state." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshDeformer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshDeformer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshDeformer_Statics::ClassParams = {
		&UMeshDeformer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMeshDeformer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshDeformer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshDeformer()
	{
		if (!Z_Registration_Info_UClass_UMeshDeformer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshDeformer.OuterSingleton, Z_Construct_UClass_UMeshDeformer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshDeformer.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMeshDeformer>()
	{
		return UMeshDeformer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshDeformer);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MeshDeformer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MeshDeformer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshDeformer, UMeshDeformer::StaticClass, TEXT("UMeshDeformer"), &Z_Registration_Info_UClass_UMeshDeformer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshDeformer), 709170823U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MeshDeformer_h_496270365(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MeshDeformer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MeshDeformer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
