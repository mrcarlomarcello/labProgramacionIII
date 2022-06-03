// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/VolumeTexture.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVolumeTexture() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UVolumeTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVolumeTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UVolumeTexture::StaticRegisterNativesUVolumeTexture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVolumeTexture);
	UClass* Z_Construct_UClass_UVolumeTexture_NoRegister()
	{
		return UVolumeTexture::StaticClass();
	}
	struct Z_Construct_UClass_UVolumeTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source2DTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Source2DTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceLightingGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceLightingGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source2DTileSizeX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Source2DTileSizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source2DTileSizeY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Source2DTileSizeY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVolumeTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeTexture_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Compositing ImportSettings" },
		{ "IncludePath", "Engine/VolumeTexture.h" },
		{ "ModuleRelativePath", "Classes/Engine/VolumeTexture.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTexture_MetaData[] = {
		{ "Category", "Source2D" },
		{ "Comment", "/** A (optional) reference texture from which the volume texture was built */" },
		{ "DisplayName", "Source Texture" },
		{ "ModuleRelativePath", "Classes/Engine/VolumeTexture.h" },
		{ "ToolTip", "A (optional) reference texture from which the volume texture was built" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTexture = { "Source2DTexture", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVolumeTexture, Source2DTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeTexture_Statics::NewProp_SourceLightingGuid_MetaData[] = {
		{ "Comment", "/** The lighting Guid of the source 2D texture, used to trigger rebuild when the source changes. */" },
		{ "ModuleRelativePath", "Classes/Engine/VolumeTexture.h" },
		{ "ToolTip", "The lighting Guid of the source 2D texture, used to trigger rebuild when the source changes." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVolumeTexture_Statics::NewProp_SourceLightingGuid = { "SourceLightingGuid", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVolumeTexture, SourceLightingGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UVolumeTexture_Statics::NewProp_SourceLightingGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeTexture_Statics::NewProp_SourceLightingGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTileSizeX_MetaData[] = {
		{ "Category", "Source2D" },
		{ "Comment", "/** The reference texture tile size X */" },
		{ "DisplayName", "Tile Size X" },
		{ "ModuleRelativePath", "Classes/Engine/VolumeTexture.h" },
		{ "ToolTip", "The reference texture tile size X" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTileSizeX = { "Source2DTileSizeX", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVolumeTexture, Source2DTileSizeX), METADATA_PARAMS(Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTileSizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTileSizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTileSizeY_MetaData[] = {
		{ "Category", "Source2D" },
		{ "Comment", "/** The reference texture tile size Y */" },
		{ "DisplayName", "Tile Size Y" },
		{ "ModuleRelativePath", "Classes/Engine/VolumeTexture.h" },
		{ "ToolTip", "The reference texture tile size Y" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTileSizeY = { "Source2DTileSizeY", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVolumeTexture, Source2DTileSizeY), METADATA_PARAMS(Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTileSizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTileSizeY_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVolumeTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeTexture_Statics::NewProp_SourceLightingGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTileSizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumeTexture_Statics::NewProp_Source2DTileSizeY,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVolumeTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVolumeTexture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVolumeTexture_Statics::ClassParams = {
		&UVolumeTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UVolumeTexture_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeTexture_Statics::PropPointers), 0),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVolumeTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumeTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVolumeTexture()
	{
		if (!Z_Registration_Info_UClass_UVolumeTexture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVolumeTexture.OuterSingleton, Z_Construct_UClass_UVolumeTexture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVolumeTexture.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UVolumeTexture>()
	{
		return UVolumeTexture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVolumeTexture);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UVolumeTexture)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVolumeTexture, UVolumeTexture::StaticClass, TEXT("UVolumeTexture"), &Z_Registration_Info_UClass_UVolumeTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVolumeTexture), 4081015361U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_1991093487(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
