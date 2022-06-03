// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSkyAtmosphereLightIlluminance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance();
// End Cross Module References
	void UMaterialExpressionSkyAtmosphereLightIlluminance::StaticRegisterNativesUMaterialExpressionSkyAtmosphereLightIlluminance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSkyAtmosphereLightIlluminance);
	UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_NoRegister()
	{
		return UMaterialExpressionSkyAtmosphereLightIlluminance::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LightIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::NewProp_LightIndex_MetaData[] = {
		{ "Category", "MaterialExpressionTextureCoordinate" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Index of the atmosphere light to sample. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
		{ "ToolTip", "Index of the atmosphere light to sample." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::NewProp_LightIndex = { "LightIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSkyAtmosphereLightIlluminance, LightIndex), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::NewProp_LightIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::NewProp_LightIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::NewProp_WorldPosition_MetaData[] = {
		{ "Comment", "/** World position of the sample. If not specified, the pixel world position will be used. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
		{ "ToolTip", "World position of the sample. If not specified, the pixel world position will be used." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSkyAtmosphereLightIlluminance, WorldPosition), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::NewProp_WorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::NewProp_WorldPosition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::NewProp_LightIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::NewProp_WorldPosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSkyAtmosphereLightIlluminance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::ClassParams = {
		&UMaterialExpressionSkyAtmosphereLightIlluminance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSkyAtmosphereLightIlluminance>()
	{
		return UMaterialExpressionSkyAtmosphereLightIlluminance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSkyAtmosphereLightIlluminance);
	void UMaterialExpressionSkyAtmosphereLightDiskLuminance::StaticRegisterNativesUMaterialExpressionSkyAtmosphereLightDiskLuminance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSkyAtmosphereLightDiskLuminance);
	UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_NoRegister()
	{
		return UMaterialExpressionSkyAtmosphereLightDiskLuminance::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LightIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::NewProp_LightIndex_MetaData[] = {
		{ "Category", "MaterialExpressionTextureCoordinate" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Index of the atmosphere light to sample. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
		{ "ToolTip", "Index of the atmosphere light to sample." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::NewProp_LightIndex = { "LightIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSkyAtmosphereLightDiskLuminance, LightIndex), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::NewProp_LightIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::NewProp_LightIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::NewProp_LightIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSkyAtmosphereLightDiskLuminance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::ClassParams = {
		&UMaterialExpressionSkyAtmosphereLightDiskLuminance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSkyAtmosphereLightDiskLuminance>()
	{
		return UMaterialExpressionSkyAtmosphereLightDiskLuminance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSkyAtmosphereLightDiskLuminance);
	void UMaterialExpressionSkyAtmosphereAerialPerspective::StaticRegisterNativesUMaterialExpressionSkyAtmosphereAerialPerspective()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSkyAtmosphereAerialPerspective);
	UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_NoRegister()
	{
		return UMaterialExpressionSkyAtmosphereAerialPerspective::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::NewProp_WorldPosition_MetaData[] = {
		{ "Comment", "/** World position of the sample. If not specified, the pixel world position will be used. Larger distance will result in more fog. Please make sure .SkyAtmosphere.AerialPerspectiveLUT.Depth is set far enough to have fog data.\n\x09\x09If you are scaling the sky dome pixel world position, make sure it is centered around the origin.*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
		{ "ToolTip", "World position of the sample. If not specified, the pixel world position will be used. Larger distance will result in more fog. Please make sure .SkyAtmosphere.AerialPerspectiveLUT.Depth is set far enough to have fog data.\n              If you are scaling the sky dome pixel world position, make sure it is centered around the origin." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionSkyAtmosphereAerialPerspective, WorldPosition), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::NewProp_WorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::NewProp_WorldPosition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::NewProp_WorldPosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSkyAtmosphereAerialPerspective>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::ClassParams = {
		&UMaterialExpressionSkyAtmosphereAerialPerspective::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSkyAtmosphereAerialPerspective>()
	{
		return UMaterialExpressionSkyAtmosphereAerialPerspective::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSkyAtmosphereAerialPerspective);
	void UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance::StaticRegisterNativesUMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance);
	UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance_NoRegister()
	{
		return UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSkyAtmosphereLightIlluminance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance_Statics::ClassParams = {
		&UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance>()
	{
		return UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSkyAtmosphereLightIlluminance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSkyAtmosphereLightIlluminance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance, UMaterialExpressionSkyAtmosphereLightIlluminance::StaticClass, TEXT("UMaterialExpressionSkyAtmosphereLightIlluminance"), &Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightIlluminance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSkyAtmosphereLightIlluminance), 2506646062U) },
		{ Z_Construct_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance, UMaterialExpressionSkyAtmosphereLightDiskLuminance::StaticClass, TEXT("UMaterialExpressionSkyAtmosphereLightDiskLuminance"), &Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereLightDiskLuminance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSkyAtmosphereLightDiskLuminance), 1885873507U) },
		{ Z_Construct_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective, UMaterialExpressionSkyAtmosphereAerialPerspective::StaticClass, TEXT("UMaterialExpressionSkyAtmosphereAerialPerspective"), &Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereAerialPerspective, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSkyAtmosphereAerialPerspective), 587894389U) },
		{ Z_Construct_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance, UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance::StaticClass, TEXT("UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance"), &Z_Registration_Info_UClass_UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSkyAtmosphereDistantLightScatteredLuminance), 2455598571U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSkyAtmosphereLightIlluminance_h_2489833834(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSkyAtmosphereLightIlluminance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSkyAtmosphereLightIlluminance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
