// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionStrata.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionStrata() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStrataBSDF_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStrataBSDF();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	ENGINE_API UClass* Z_Construct_UClass_USubsurfaceProfile_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStrataMaterialInfo();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStrataUnlitBSDF_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStrataUnlitBSDF();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStrataHairBSDF();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStrataAdd_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStrataAdd();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStrataWeight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStrataWeight();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStrataTransmittanceToMFP_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionStrataTransmittanceToMFP();
// End Cross Module References
	void UMaterialExpressionStrataBSDF::StaticRegisterNativesUMaterialExpressionStrataBSDF()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionStrataBSDF);
	UClass* Z_Construct_UClass_UMaterialExpressionStrataBSDF_NoRegister()
	{
		return UMaterialExpressionStrataBSDF::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionStrataBSDF_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionStrataBSDF_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataBSDF_Statics::Class_MetaDataParams[] = {
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n// BSDF nodes\n" },
		{ "DisplayName", "Strata Expression" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionStrata.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "/\n BSDF nodes" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionStrataBSDF_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionStrataBSDF>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionStrataBSDF_Statics::ClassParams = {
		&UMaterialExpressionStrataBSDF::StaticClass,
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
		0x000820A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataBSDF_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataBSDF_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionStrataBSDF()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionStrataBSDF.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionStrataBSDF.OuterSingleton, Z_Construct_UClass_UMaterialExpressionStrataBSDF_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionStrataBSDF.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionStrataBSDF>()
	{
		return UMaterialExpressionStrataBSDF::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionStrataBSDF);
	void UMaterialExpressionStrataLegacyConversion::StaticRegisterNativesUMaterialExpressionStrataLegacyConversion()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionStrataLegacyConversion);
	UClass* Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_NoRegister()
	{
		return UMaterialExpressionStrataLegacyConversion::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metallic_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Metallic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Specular_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Specular;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Roughness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Roughness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anisotropy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Anisotropy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmissiveColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EmissiveColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tangent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubSurfaceColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubSurfaceColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClearCoat_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClearCoat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClearCoatRoughness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClearCoatRoughness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Opacity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Opacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransmittanceColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransmittanceColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterScatteringCoefficients_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaterScatteringCoefficients;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterAbsorptionCoefficients_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaterAbsorptionCoefficients;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterPhaseG_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaterPhaseG;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorScaleBehindWater_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorScaleBehindWater;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClearCoatNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClearCoatNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadingModel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShadingModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubsurfaceProfile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubsurfaceProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConvertedStrataMaterialInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConvertedStrataMaterialInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionStrataBSDF,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Strata Slab" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionStrata.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_BaseColor_MetaData[] = {
		{ "Comment", "/**\n\x09 * Defines the overall color of the Material. (type = float3, unit = unitless, defaults to 0.18)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Defines the overall color of the Material. (type = float3, unit = unitless, defaults to 0.18)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_BaseColor = { "BaseColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataLegacyConversion, BaseColor), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_BaseColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_BaseColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Metallic_MetaData[] = {
		{ "Comment", "/**\n\x09 * Controls how \\\"metal-like\\\" your surface looks like. 0 means dielectric, 1 means conductor (type = float, unit = unitless, defaults to 0)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Controls how \\\"metal-like\\\" your surface looks like. 0 means dielectric, 1 means conductor (type = float, unit = unitless, defaults to 0)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Metallic = { "Metallic", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataLegacyConversion, Metallic), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Metallic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Metallic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Specular_MetaData[] = {
		{ "Comment", "/**\n\x09 * Used to scale the current amount of specularity on non-metallic surfaces and is a value between 0 and 1 (type = float, unit = unitless, defaults to plastic 0.5)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Used to scale the current amount of specularity on non-metallic surfaces and is a value between 0 and 1 (type = float, unit = unitless, defaults to plastic 0.5)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Specular = { "Specular", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataLegacyConversion, Specular), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Specular_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Specular_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Roughness_MetaData[] = {
		{ "Comment", "/**\n\x09 * Controls how rough the Material is. Roughness of 0 (smooth) is a mirror reflection and 1 (rough) is completely matte or diffuse. When using anisotropy, it is the roughness used along the Tangent axis. (type = float, unit = unitless, defaults to 0.5)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Controls how rough the Material is. Roughness of 0 (smooth) is a mirror reflection and 1 (rough) is completely matte or diffuse. When using anisotropy, it is the roughness used along the Tangent axis. (type = float, unit = unitless, defaults to 0.5)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Roughness = { "Roughness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataLegacyConversion, Roughness), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Roughness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Roughness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Anisotropy_MetaData[] = {
		{ "Comment", "/**\n\x09 * Controls the anisotropy factor of the roughness. Positive value elongates the specular lobe along the Tangent vector, Negative value elongates the specular lobe along the perpendicular of the Tangent. (type = float, unit = unitless).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Controls the anisotropy factor of the roughness. Positive value elongates the specular lobe along the Tangent vector, Negative value elongates the specular lobe along the perpendicular of the Tangent. (type = float, unit = unitless)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Anisotropy = { "Anisotropy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataLegacyConversion, Anisotropy), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Anisotropy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Anisotropy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_EmissiveColor_MetaData[] = {
		{ "Comment", "/**\n\x09 * Emissive color on top of the surface (type = float3, unit = luminance, default = 0)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Emissive color on top of the surface (type = float3, unit = luminance, default = 0)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_EmissiveColor = { "EmissiveColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataLegacyConversion, EmissiveColor), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_EmissiveColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_EmissiveColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Normal_MetaData[] = {
		{ "Comment", "/**\n\x09 * Take the surface normal as input. The normal is considered tangent or world space according to the space properties on the main material node. (type = float3, unit = unitless, defaults to vertex normal)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Take the surface normal as input. The normal is considered tangent or world space according to the space properties on the main material node. (type = float3, unit = unitless, defaults to vertex normal)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataLegacyConversion, Normal), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Tangent_MetaData[] = {
		{ "Comment", "/**\n\x09* Take a surface tangent as input. The tangent is considered tangent or world space according to the space properties on the main material node. (type = float3, unit = unitless, defaults to vertex tangent)\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Take a surface tangent as input. The tangent is considered tangent or world space according to the space properties on the main material node. (type = float3, unit = unitless, defaults to vertex tangent)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataLegacyConversion, Tangent), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Tangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Tangent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_SubSurfaceColor_MetaData[] = {
		{ "Comment", "/**\n\x09 * Scale the mean free path radius of the SSS profile according to a value between 0 and 1. Always used, when a subsurface profile is provided or not. (type = float, unitless, defaults to 1)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Scale the mean free path radius of the SSS profile according to a value between 0 and 1. Always used, when a subsurface profile is provided or not. (type = float, unitless, defaults to 1)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_SubSurfaceColor = { "SubSurfaceColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataLegacyConversion, SubSurfaceColor), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_SubSurfaceColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_SubSurfaceColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_ClearCoat_MetaData[] = {
		{ "Comment", "/**\n\x09 * Emissive color on top of the surface (type = float3, unit = luminance, default = 0)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Emissive color on top of the surface (type = float3, unit = luminance, default = 0)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_ClearCoat = { "ClearCoat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataLegacyConversion, ClearCoat), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_ClearCoat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_ClearCoat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_ClearCoatRoughness_MetaData[] = {
		{ "Comment", "/**\n\x09 * The amount of fuzz on top of the surface used to simulate cloth-like appearance.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "The amount of fuzz on top of the surface used to simulate cloth-like appearance." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_ClearCoatRoughness = { "ClearCoatRoughness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataLegacyConversion, ClearCoatRoughness), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_ClearCoatRoughness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_ClearCoatRoughness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Opacity_MetaData[] = {
		{ "Comment", "/**\n\x09 * Opacity of the material\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Opacity of the material" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Opacity = { "Opacity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataLegacyConversion, Opacity), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Opacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Opacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_TransmittanceColor_MetaData[] = {
		{ "Comment", "/**\n\x09 * The amount of transmitted light from the back side of the surface to the front side of the surface (type = float3, unit = unitless, defaults to 1)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "The amount of transmitted light from the back side of the surface to the front side of the surface (type = float3, unit = unitless, defaults to 1)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_TransmittanceColor = { "TransmittanceColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataLegacyConversion, TransmittanceColor), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_TransmittanceColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_TransmittanceColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_WaterScatteringCoefficients_MetaData[] = {
		{ "Comment", "/**\n\x09* The single scattering Albedo defining the overall color of the Material (type = float3, unit = unitless, default = 0)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "The single scattering Albedo defining the overall color of the Material (type = float3, unit = unitless, default = 0)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_WaterScatteringCoefficients = { "WaterScatteringCoefficients", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataLegacyConversion, WaterScatteringCoefficients), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_WaterScatteringCoefficients_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_WaterScatteringCoefficients_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_WaterAbsorptionCoefficients_MetaData[] = {
		{ "Comment", "/**\n\x09 * The rate at which light is absorbed or out-scattered by the medium. Mean Free Path = 1 / Extinction. (type = float3, unit = 1/cm, default = 0)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "The rate at which light is absorbed or out-scattered by the medium. Mean Free Path = 1 / Extinction. (type = float3, unit = 1/cm, default = 0)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_WaterAbsorptionCoefficients = { "WaterAbsorptionCoefficients", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataLegacyConversion, WaterAbsorptionCoefficients), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_WaterAbsorptionCoefficients_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_WaterAbsorptionCoefficients_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_WaterPhaseG_MetaData[] = {
		{ "Comment", "/**\n\x09 * Anisotropy of the volume with values lower than 0 representing back-scattering, equal 0 representing isotropic scattering and greater than 0 representing forward scattering. (type = float, unit = unitless, defaults to 0)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Anisotropy of the volume with values lower than 0 representing back-scattering, equal 0 representing isotropic scattering and greater than 0 representing forward scattering. (type = float, unit = unitless, defaults to 0)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_WaterPhaseG = { "WaterPhaseG", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataLegacyConversion, WaterPhaseG), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_WaterPhaseG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_WaterPhaseG_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_ColorScaleBehindWater_MetaData[] = {
		{ "Comment", "/**\n\x09 * A scale to apply on the scene color behind the water surface. It can be used to approximate caustics for instance. (type = float3, unit = unitless, defaults to 1)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "A scale to apply on the scene color behind the water surface. It can be used to approximate caustics for instance. (type = float3, unit = unitless, defaults to 1)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_ColorScaleBehindWater = { "ColorScaleBehindWater", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataLegacyConversion, ColorScaleBehindWater), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_ColorScaleBehindWater_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_ColorScaleBehindWater_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_ClearCoatNormal_MetaData[] = {
		{ "Comment", "/**\n\x09 * Take the bottom clear coat surface normal as input. The normal is considered tangent or world space according to the space properties on the main material node. (type = float3, unit = unitless, defaults to vertex normal)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Take the bottom clear coat surface normal as input. The normal is considered tangent or world space according to the space properties on the main material node. (type = float3, unit = unitless, defaults to vertex normal)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_ClearCoatNormal = { "ClearCoatNormal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataLegacyConversion, ClearCoatNormal), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_ClearCoatNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_ClearCoatNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_ShadingModel_MetaData[] = {
		{ "Comment", "/**\n\x09 * Shading models\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Shading models" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_ShadingModel = { "ShadingModel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataLegacyConversion, ShadingModel), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_ShadingModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_ShadingModel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_SubsurfaceProfile_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** SubsurfaceProfile, for Screen Space Subsurface Scattering. The profile needs to be set up on both the Strata diffuse node, and the material node at the moment. */" },
		{ "DisplayName", "Subsurface Profile" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "SubsurfaceProfile, for Screen Space Subsurface Scattering. The profile needs to be set up on both the Strata diffuse node, and the material node at the moment." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_SubsurfaceProfile = { "SubsurfaceProfile", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataLegacyConversion, SubsurfaceProfile), Z_Construct_UClass_USubsurfaceProfile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_SubsurfaceProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_SubsurfaceProfile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_ConvertedStrataMaterialInfo_MetaData[] = {
		{ "Comment", "/** Store converted material models. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Store converted material models." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_ConvertedStrataMaterialInfo = { "ConvertedStrataMaterialInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataLegacyConversion, ConvertedStrataMaterialInfo), Z_Construct_UScriptStruct_FStrataMaterialInfo, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_ConvertedStrataMaterialInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_ConvertedStrataMaterialInfo_MetaData)) }; // 989789891
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_BaseColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Metallic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Specular,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Roughness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Anisotropy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_EmissiveColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Tangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_SubSurfaceColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_ClearCoat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_ClearCoatRoughness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_Opacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_TransmittanceColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_WaterScatteringCoefficients,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_WaterAbsorptionCoefficients,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_WaterPhaseG,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_ColorScaleBehindWater,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_ClearCoatNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_ShadingModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_SubsurfaceProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::NewProp_ConvertedStrataMaterialInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionStrataLegacyConversion>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::ClassParams = {
		&UMaterialExpressionStrataLegacyConversion::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::PropPointers),
		0,
		0x000820A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionStrataLegacyConversion.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionStrataLegacyConversion.OuterSingleton, Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionStrataLegacyConversion.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionStrataLegacyConversion>()
	{
		return UMaterialExpressionStrataLegacyConversion::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionStrataLegacyConversion);
	void UMaterialExpressionStrataSlabBSDF::StaticRegisterNativesUMaterialExpressionStrataSlabBSDF()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionStrataSlabBSDF);
	UClass* Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_NoRegister()
	{
		return UMaterialExpressionStrataSlabBSDF::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metallic_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Metallic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Specular_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Specular;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiffuseAlbedo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DiffuseAlbedo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_F0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_F0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_F90_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_F90;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Roughness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Roughness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anisotropy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Anisotropy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tangent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SSSDMFP_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SSSDMFP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SSSDMFPScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SSSDMFPScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmissiveColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EmissiveColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Haziness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Haziness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThinFilmThickness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ThinFilmThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FuzzAmount_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FuzzAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FuzzColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FuzzColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubsurfaceProfile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubsurfaceProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMetalness_MetaData[];
#endif
		static void NewProp_bUseMetalness_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMetalness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionStrataBSDF,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Strata Slab" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionStrata.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_BaseColor_MetaData[] = {
		{ "Comment", "/**\n\x09 * Defines the overall color of the Material. (type = float3, unit = unitless, defaults to 0.18)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Defines the overall color of the Material. (type = float3, unit = unitless, defaults to 0.18)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_BaseColor = { "BaseColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataSlabBSDF, BaseColor), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_BaseColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_BaseColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_EdgeColor_MetaData[] = {
		{ "Comment", "/**\n\x09 * Defines the edge color of the Material. This is only applied on metallic material (type = float3, unit = unitless, defaults to 1.0)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Defines the edge color of the Material. This is only applied on metallic material (type = float3, unit = unitless, defaults to 1.0)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_EdgeColor = { "EdgeColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataSlabBSDF, EdgeColor), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_EdgeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_EdgeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Metallic_MetaData[] = {
		{ "Comment", "/**\n\x09 * Controls how \\\"metal-like\\\" your surface looks like. 0 means dielectric, 1 means conductor (type = float, unit = unitless, defaults to 0)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Controls how \\\"metal-like\\\" your surface looks like. 0 means dielectric, 1 means conductor (type = float, unit = unitless, defaults to 0)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Metallic = { "Metallic", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataSlabBSDF, Metallic), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Metallic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Metallic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Specular_MetaData[] = {
		{ "Comment", "/**\n\x09 * Used to scale the current amount of specularity on non-metallic surfaces and is a value between 0 and 1 (type = float, unit = unitless, defaults to plastic 0.5)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Used to scale the current amount of specularity on non-metallic surfaces and is a value between 0 and 1 (type = float, unit = unitless, defaults to plastic 0.5)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Specular = { "Specular", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataSlabBSDF, Specular), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Specular_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Specular_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_DiffuseAlbedo_MetaData[] = {
		{ "Comment", "/**\n\x09 * Defines the diffused albedo, the percentage of light reflected as diffuse from the surface. (type = float3, unit = unitless, defaults to 0.18)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Defines the diffused albedo, the percentage of light reflected as diffuse from the surface. (type = float3, unit = unitless, defaults to 0.18)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_DiffuseAlbedo = { "DiffuseAlbedo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataSlabBSDF, DiffuseAlbedo), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_DiffuseAlbedo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_DiffuseAlbedo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_F0_MetaData[] = {
		{ "Comment", "/**\n\x09 * Defines F0, the percentage of light reflected as specular from a surface when the view is perpendicular to the surface. (type = float3, unit = unitless, defaults to plastic 0.04)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Defines F0, the percentage of light reflected as specular from a surface when the view is perpendicular to the surface. (type = float3, unit = unitless, defaults to plastic 0.04)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_F0 = { "F0", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataSlabBSDF, F0), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_F0_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_F0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_F90_MetaData[] = {
		{ "Comment", "/**\n\x09 * Defines F90, the percentage of light reflected as specular from a surface when the view is tangent to the surface. (type = float3, unit = unitless, defaults to 1.0f)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Defines F90, the percentage of light reflected as specular from a surface when the view is tangent to the surface. (type = float3, unit = unitless, defaults to 1.0f)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_F90 = { "F90", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataSlabBSDF, F90), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_F90_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_F90_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Roughness_MetaData[] = {
		{ "Comment", "/**\n\x09 * Controls how rough the Material is. Roughness of 0 (smooth) is a mirror reflection and 1 (rough) is completely matte or diffuse. When using anisotropy, it is the roughness used along the Tangent axis. (type = float, unit = unitless, defaults to 0.5)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Controls how rough the Material is. Roughness of 0 (smooth) is a mirror reflection and 1 (rough) is completely matte or diffuse. When using anisotropy, it is the roughness used along the Tangent axis. (type = float, unit = unitless, defaults to 0.5)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Roughness = { "Roughness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataSlabBSDF, Roughness), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Roughness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Roughness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Anisotropy_MetaData[] = {
		{ "Comment", "/**\n\x09 * Controls the anisotropy factor of the roughness. Positive value elongates the specular lobe along the Tangent vector, Negative value elongates the specular lobe along the perpendicular of the Tangent. (type = float, unit = unitless).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Controls the anisotropy factor of the roughness. Positive value elongates the specular lobe along the Tangent vector, Negative value elongates the specular lobe along the perpendicular of the Tangent. (type = float, unit = unitless)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Anisotropy = { "Anisotropy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataSlabBSDF, Anisotropy), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Anisotropy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Anisotropy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Normal_MetaData[] = {
		{ "Comment", "/**\n\x09 * Take the surface normal as input. The normal is considered tangent or world space according to the space properties on the main material node. (type = float3, unit = unitless, defaults to vertex normal)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Take the surface normal as input. The normal is considered tangent or world space according to the space properties on the main material node. (type = float3, unit = unitless, defaults to vertex normal)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataSlabBSDF, Normal), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Tangent_MetaData[] = {
		{ "Comment", "/**\n\x09* Take a surface tangent as input. The tangent is considered tangent or world space according to the space properties on the main material node. (type = float3, unit = unitless, defaults to vertex tangent)\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Take a surface tangent as input. The tangent is considered tangent or world space according to the space properties on the main material node. (type = float3, unit = unitless, defaults to vertex tangent)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataSlabBSDF, Tangent), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Tangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Tangent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_SSSDMFP_MetaData[] = {
		{ "Comment", "/**\n\x09 * Chromatic mean free path . Only used when there is not any sub-surface profile provided. (type = float3, unit = centimeters, default = 0)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Chromatic mean free path . Only used when there is not any sub-surface profile provided. (type = float3, unit = centimeters, default = 0)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_SSSDMFP = { "SSSDMFP", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataSlabBSDF, SSSDMFP), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_SSSDMFP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_SSSDMFP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_SSSDMFPScale_MetaData[] = {
		{ "Comment", "/**\n\x09 * Scale the mean free path radius of the SSS profile according to a value between 0 and 1. Always used, when a subsurface profile is provided or not. (type = float, unitless, defaults to 1)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Scale the mean free path radius of the SSS profile according to a value between 0 and 1. Always used, when a subsurface profile is provided or not. (type = float, unitless, defaults to 1)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_SSSDMFPScale = { "SSSDMFPScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataSlabBSDF, SSSDMFPScale), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_SSSDMFPScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_SSSDMFPScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_EmissiveColor_MetaData[] = {
		{ "Comment", "/**\n\x09 * Emissive color on top of the surface (type = float3, unit = luminance, default = 0)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Emissive color on top of the surface (type = float3, unit = luminance, default = 0)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_EmissiveColor = { "EmissiveColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataSlabBSDF, EmissiveColor), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_EmissiveColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_EmissiveColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Haziness_MetaData[] = {
		{ "Comment", "/**\n\x09 * Haziness controls the relative roughness of a second specular lobe. 0 means disabled and 1 means the second lobe specular lobe will lerp the current roughness to fully rough. (type = float, unitless, default = 0)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Haziness controls the relative roughness of a second specular lobe. 0 means disabled and 1 means the second lobe specular lobe will lerp the current roughness to fully rough. (type = float, unitless, default = 0)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Haziness = { "Haziness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataSlabBSDF, Haziness), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Haziness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Haziness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_ThinFilmThickness_MetaData[] = {
		{ "Comment", "/**\n\x09 * Thin film controls the thin film layer coating the current slab. 0 means disabled and 1 means a coating layer of 10 micrometer. (type = float, unitless, default = 0)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Thin film controls the thin film layer coating the current slab. 0 means disabled and 1 means a coating layer of 10 micrometer. (type = float, unitless, default = 0)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_ThinFilmThickness = { "ThinFilmThickness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataSlabBSDF, ThinFilmThickness), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_ThinFilmThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_ThinFilmThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Thickness_MetaData[] = {
		{ "Comment", "/**\n\x09 * The slab thickness. (type = float, centimeters, default = 0.01 centimeter = 0.1 millimeter)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "The slab thickness. (type = float, centimeters, default = 0.01 centimeter = 0.1 millimeter)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataSlabBSDF, Thickness), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_FuzzAmount_MetaData[] = {
		{ "Comment", "/**\n\x09 * The amount of fuzz on top of the surface used to simulate cloth-like appearance.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "The amount of fuzz on top of the surface used to simulate cloth-like appearance." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_FuzzAmount = { "FuzzAmount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataSlabBSDF, FuzzAmount), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_FuzzAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_FuzzAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_FuzzColor_MetaData[] = {
		{ "Comment", "/**\n\x09 * The base color of the fuzz.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "The base color of the fuzz." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_FuzzColor = { "FuzzColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataSlabBSDF, FuzzColor), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_FuzzColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_FuzzColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_SubsurfaceProfile_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** SubsurfaceProfile, for Screen Space Subsurface Scattering. The profile needs to be set up on both the Strata diffuse node, and the material node at the moment. */" },
		{ "DisplayName", "Subsurface Profile" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "SubsurfaceProfile, for Screen Space Subsurface Scattering. The profile needs to be set up on both the Strata diffuse node, and the material node at the moment." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_SubsurfaceProfile = { "SubsurfaceProfile", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataSlabBSDF, SubsurfaceProfile), Z_Construct_UClass_USubsurfaceProfile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_SubsurfaceProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_SubsurfaceProfile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_bUseMetalness_MetaData[] = {
		{ "Category", "Mode" },
		{ "Comment", "/** Whether to use the metalness workflow relying on BaseColor, Specular, EdgeColor and Metallic inputs. Or use the DiffuseColor, F0 and F90 specification. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Whether to use the metalness workflow relying on BaseColor, Specular, EdgeColor and Metallic inputs. Or use the DiffuseColor, F0 and F90 specification." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_bUseMetalness_SetBit(void* Obj)
	{
		((UMaterialExpressionStrataSlabBSDF*)Obj)->bUseMetalness = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_bUseMetalness = { "bUseMetalness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialExpressionStrataSlabBSDF), &Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_bUseMetalness_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_bUseMetalness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_bUseMetalness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_BaseColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_EdgeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Metallic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Specular,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_DiffuseAlbedo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_F0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_F90,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Roughness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Anisotropy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Tangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_SSSDMFP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_SSSDMFPScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_EmissiveColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Haziness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_ThinFilmThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_FuzzAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_FuzzColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_SubsurfaceProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::NewProp_bUseMetalness,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionStrataSlabBSDF>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::ClassParams = {
		&UMaterialExpressionStrataSlabBSDF::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::PropPointers),
		0,
		0x000820A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionStrataSlabBSDF.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionStrataSlabBSDF.OuterSingleton, Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionStrataSlabBSDF.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionStrataSlabBSDF>()
	{
		return UMaterialExpressionStrataSlabBSDF::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionStrataSlabBSDF);
	void UMaterialExpressionStrataVolumetricFogCloudBSDF::StaticRegisterNativesUMaterialExpressionStrataVolumetricFogCloudBSDF()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionStrataVolumetricFogCloudBSDF);
	UClass* Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_NoRegister()
	{
		return UMaterialExpressionStrataVolumetricFogCloudBSDF::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Albedo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Albedo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extinction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extinction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmissiveColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EmissiveColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AmbientOcclusion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionStrataBSDF,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Strata Volumetric-Fog-Cloud BSDF" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionStrata.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_Statics::NewProp_Albedo_MetaData[] = {
		{ "Comment", "/**\n\x09* The single scattering Albedo defining the overall color of the Material (type = float3, unit = unitless, default = 0)\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "The single scattering Albedo defining the overall color of the Material (type = float3, unit = unitless, default = 0)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_Statics::NewProp_Albedo = { "Albedo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataVolumetricFogCloudBSDF, Albedo), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_Statics::NewProp_Albedo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_Statics::NewProp_Albedo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_Statics::NewProp_Extinction_MetaData[] = {
		{ "Comment", "/**\n\x09 * The rate at which light is absorbed or scattered by the medium. Mean Free Path = 1 / Extinction. (type = float3, unit = 1/m, default = 0)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "The rate at which light is absorbed or scattered by the medium. Mean Free Path = 1 / Extinction. (type = float3, unit = 1/m, default = 0)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_Statics::NewProp_Extinction = { "Extinction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataVolumetricFogCloudBSDF, Extinction), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_Statics::NewProp_Extinction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_Statics::NewProp_Extinction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_Statics::NewProp_EmissiveColor_MetaData[] = {
		{ "Comment", "/**\n\x09 * Emissive color of the medium (type = float3, unit = luminance, default = 0)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Emissive color of the medium (type = float3, unit = luminance, default = 0)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_Statics::NewProp_EmissiveColor = { "EmissiveColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataVolumetricFogCloudBSDF, EmissiveColor), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_Statics::NewProp_EmissiveColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_Statics::NewProp_EmissiveColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_Statics::NewProp_AmbientOcclusion_MetaData[] = {
		{ "Comment", "/**\n\x09 * Ambient occlusion: 1 means no occlusion while 0 means fully occluded. (type = float, unit = unitless, default = 1)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Ambient occlusion: 1 means no occlusion while 0 means fully occluded. (type = float, unit = unitless, default = 1)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_Statics::NewProp_AmbientOcclusion = { "AmbientOcclusion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataVolumetricFogCloudBSDF, AmbientOcclusion), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_Statics::NewProp_AmbientOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_Statics::NewProp_AmbientOcclusion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_Statics::NewProp_Albedo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_Statics::NewProp_Extinction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_Statics::NewProp_EmissiveColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_Statics::NewProp_AmbientOcclusion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionStrataVolumetricFogCloudBSDF>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_Statics::ClassParams = {
		&UMaterialExpressionStrataVolumetricFogCloudBSDF::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_Statics::PropPointers),
		0,
		0x000820A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF.OuterSingleton, Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionStrataVolumetricFogCloudBSDF>()
	{
		return UMaterialExpressionStrataVolumetricFogCloudBSDF::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionStrataVolumetricFogCloudBSDF);
	void UMaterialExpressionStrataUnlitBSDF::StaticRegisterNativesUMaterialExpressionStrataUnlitBSDF()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionStrataUnlitBSDF);
	UClass* Z_Construct_UClass_UMaterialExpressionStrataUnlitBSDF_NoRegister()
	{
		return UMaterialExpressionStrataUnlitBSDF::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionStrataUnlitBSDF_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmissiveColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EmissiveColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransmittanceColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransmittanceColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionStrataUnlitBSDF_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionStrataBSDF,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataUnlitBSDF_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Strata Unlit BSDF" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionStrata.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataUnlitBSDF_Statics::NewProp_EmissiveColor_MetaData[] = {
		{ "Comment", "/**\n\x09* Emissive color on top of the surface (type = float3, unit = Luminance, default = 0)\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Emissive color on top of the surface (type = float3, unit = Luminance, default = 0)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataUnlitBSDF_Statics::NewProp_EmissiveColor = { "EmissiveColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataUnlitBSDF, EmissiveColor), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataUnlitBSDF_Statics::NewProp_EmissiveColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataUnlitBSDF_Statics::NewProp_EmissiveColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataUnlitBSDF_Statics::NewProp_TransmittanceColor_MetaData[] = {
		{ "Comment", "/**\n\x09 * The amount of transmitted light from the back side of the surface to the front side of the surface (type = float3, unit = unitless, defaults to 1)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "The amount of transmitted light from the back side of the surface to the front side of the surface (type = float3, unit = unitless, defaults to 1)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataUnlitBSDF_Statics::NewProp_TransmittanceColor = { "TransmittanceColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataUnlitBSDF, TransmittanceColor), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataUnlitBSDF_Statics::NewProp_TransmittanceColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataUnlitBSDF_Statics::NewProp_TransmittanceColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionStrataUnlitBSDF_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataUnlitBSDF_Statics::NewProp_EmissiveColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataUnlitBSDF_Statics::NewProp_TransmittanceColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionStrataUnlitBSDF_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionStrataUnlitBSDF>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionStrataUnlitBSDF_Statics::ClassParams = {
		&UMaterialExpressionStrataUnlitBSDF::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionStrataUnlitBSDF_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataUnlitBSDF_Statics::PropPointers),
		0,
		0x000820A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataUnlitBSDF_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataUnlitBSDF_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionStrataUnlitBSDF()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionStrataUnlitBSDF.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionStrataUnlitBSDF.OuterSingleton, Z_Construct_UClass_UMaterialExpressionStrataUnlitBSDF_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionStrataUnlitBSDF.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionStrataUnlitBSDF>()
	{
		return UMaterialExpressionStrataUnlitBSDF::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionStrataUnlitBSDF);
	void UMaterialExpressionStrataHairBSDF::StaticRegisterNativesUMaterialExpressionStrataHairBSDF()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionStrataHairBSDF);
	UClass* Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_NoRegister()
	{
		return UMaterialExpressionStrataHairBSDF::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scatter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scatter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Specular_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Specular;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Roughness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Roughness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Backlit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Backlit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tangent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmissiveColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EmissiveColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionStrataBSDF,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Strata Hair BSDF" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionStrata.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_BaseColor_MetaData[] = {
		{ "Comment", "/**\n\x09 * Hair fiber base color resulting from single and multiple scattering combined. (type = float3, unit = unitless, defaults to black)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Hair fiber base color resulting from single and multiple scattering combined. (type = float3, unit = unitless, defaults to black)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_BaseColor = { "BaseColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataHairBSDF, BaseColor), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_BaseColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_BaseColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_Scatter_MetaData[] = {
		{ "Comment", "/**\n\x09 * Amount of light scattering, only available for non-HairStrand rendering (type = float, unit = unitless, defaults to 0.0)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Amount of light scattering, only available for non-HairStrand rendering (type = float, unit = unitless, defaults to 0.0)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_Scatter = { "Scatter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataHairBSDF, Scatter), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_Scatter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_Scatter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_Specular_MetaData[] = {
		{ "Comment", "/**\n\x09 * Specular (type = float, unit = unitless, defaults to 0.5)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Specular (type = float, unit = unitless, defaults to 0.5)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_Specular = { "Specular", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataHairBSDF, Specular), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_Specular_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_Specular_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_Roughness_MetaData[] = {
		{ "Comment", "/**\n\x09 * Controls how rough the Material is. Roughness of 0 (smooth) is a mirror reflection and 1 (rough) is completely matte or diffuse (type = float, unit = unitless, defaults to 0.5)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Controls how rough the Material is. Roughness of 0 (smooth) is a mirror reflection and 1 (rough) is completely matte or diffuse (type = float, unit = unitless, defaults to 0.5)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_Roughness = { "Roughness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataHairBSDF, Roughness), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_Roughness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_Roughness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_Backlit_MetaData[] = {
		{ "Comment", "/**\n\x09 * How much light contributs when lighting hairs from the back side opposite from the view, only available for HairStrand rendering (type = float3, unit = unitless, defaults to 0.0)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "How much light contributs when lighting hairs from the back side opposite from the view, only available for HairStrand rendering (type = float3, unit = unitless, defaults to 0.0)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_Backlit = { "Backlit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataHairBSDF, Backlit), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_Backlit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_Backlit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_Tangent_MetaData[] = {
		{ "Comment", "/**\n\x09 * Tangent (type = float3, unit = unitless, defaults to +X vector)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Tangent (type = float3, unit = unitless, defaults to +X vector)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataHairBSDF, Tangent), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_Tangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_Tangent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_EmissiveColor_MetaData[] = {
		{ "Comment", "/**\n\x09 * Emissive color on top of the surface (type = float3, unit = luminance, defaults to 0.0)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Emissive color on top of the surface (type = float3, unit = luminance, defaults to 0.0)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_EmissiveColor = { "EmissiveColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataHairBSDF, EmissiveColor), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_EmissiveColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_EmissiveColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_BaseColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_Scatter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_Specular,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_Roughness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_Backlit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_Tangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::NewProp_EmissiveColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionStrataHairBSDF>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::ClassParams = {
		&UMaterialExpressionStrataHairBSDF::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::PropPointers),
		0,
		0x000820A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionStrataHairBSDF()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionStrataHairBSDF.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionStrataHairBSDF.OuterSingleton, Z_Construct_UClass_UMaterialExpressionStrataHairBSDF_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionStrataHairBSDF.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionStrataHairBSDF>()
	{
		return UMaterialExpressionStrataHairBSDF::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionStrataHairBSDF);
	void UMaterialExpressionStrataSingleLayerWaterBSDF::StaticRegisterNativesUMaterialExpressionStrataSingleLayerWaterBSDF()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionStrataSingleLayerWaterBSDF);
	UClass* Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_NoRegister()
	{
		return UMaterialExpressionStrataSingleLayerWaterBSDF::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metallic_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Metallic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Specular_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Specular;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Roughness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Roughness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmissiveColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EmissiveColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopMaterialOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TopMaterialOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterAlbedo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaterAlbedo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterExtinction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaterExtinction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterPhaseG_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaterPhaseG;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorScaleBehindWater_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorScaleBehindWater;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionStrataBSDF,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Strata Single Layer Water BSDF" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionStrata.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_BaseColor_MetaData[] = {
		{ "Comment", "/**\n\x09 * Surface base color. (type = float3, unit = unitless, defaults to black)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Surface base color. (type = float3, unit = unitless, defaults to black)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_BaseColor = { "BaseColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataSingleLayerWaterBSDF, BaseColor), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_BaseColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_BaseColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_Metallic_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whether the surface represents a dielectric (such as plastic) or a conductor (such as metal). (type = float, unit = unitless, defaults to 0 = dielectric)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Whether the surface represents a dielectric (such as plastic) or a conductor (such as metal). (type = float, unit = unitless, defaults to 0 = dielectric)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_Metallic = { "Metallic", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataSingleLayerWaterBSDF, Metallic), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_Metallic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_Metallic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_Specular_MetaData[] = {
		{ "Comment", "/**\n\x09 * Specular amount (type = float, unit = unitless, defaults to 0.5)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Specular amount (type = float, unit = unitless, defaults to 0.5)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_Specular = { "Specular", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataSingleLayerWaterBSDF, Specular), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_Specular_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_Specular_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_Roughness_MetaData[] = {
		{ "Comment", "/**\n\x09 * Controls how rough the Material is. Roughness of 0 (smooth) is a mirror reflection and 1 (rough) is completely matte or diffuse (type = float, unit = unitless, defaults to 0.5)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Controls how rough the Material is. Roughness of 0 (smooth) is a mirror reflection and 1 (rough) is completely matte or diffuse (type = float, unit = unitless, defaults to 0.5)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_Roughness = { "Roughness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataSingleLayerWaterBSDF, Roughness), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_Roughness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_Roughness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_Normal_MetaData[] = {
		{ "Comment", "/**\n\x09 * The normal of the surface (type = float3, unit = unitless, defaults to +Z vector)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "The normal of the surface (type = float3, unit = unitless, defaults to +Z vector)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataSingleLayerWaterBSDF, Normal), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_EmissiveColor_MetaData[] = {
		{ "Comment", "/**\n\x09 * Emissive color on top of the surface (type = float3, unit = luminance, defaults to 0.0)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Emissive color on top of the surface (type = float3, unit = luminance, defaults to 0.0)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_EmissiveColor = { "EmissiveColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataSingleLayerWaterBSDF, EmissiveColor), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_EmissiveColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_EmissiveColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_TopMaterialOpacity_MetaData[] = {
		{ "Comment", "/**\n\x09 * Opacity of the material layered on top of the water (type = float3, unit = unitless, defaults to 0.0)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Opacity of the material layered on top of the water (type = float3, unit = unitless, defaults to 0.0)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_TopMaterialOpacity = { "TopMaterialOpacity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataSingleLayerWaterBSDF, TopMaterialOpacity), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_TopMaterialOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_TopMaterialOpacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_WaterAlbedo_MetaData[] = {
		{ "Comment", "/**\n\x09* The single scattering Albedo defining the overall color of the Material (type = float3, unit = unitless, default = 0)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "The single scattering Albedo defining the overall color of the Material (type = float3, unit = unitless, default = 0)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_WaterAlbedo = { "WaterAlbedo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataSingleLayerWaterBSDF, WaterAlbedo), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_WaterAlbedo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_WaterAlbedo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_WaterExtinction_MetaData[] = {
		{ "Comment", "/**\n\x09 * The rate at which light is absorbed or out-scattered by the medium. Mean Free Path = 1 / Extinction. (type = float3, unit = 1/cm, default = 0)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "The rate at which light is absorbed or out-scattered by the medium. Mean Free Path = 1 / Extinction. (type = float3, unit = 1/cm, default = 0)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_WaterExtinction = { "WaterExtinction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataSingleLayerWaterBSDF, WaterExtinction), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_WaterExtinction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_WaterExtinction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_WaterPhaseG_MetaData[] = {
		{ "Comment", "/**\n\x09 * Anisotropy of the volume with values lower than 0 representing back-scattering, equal 0 representing isotropic scattering and greater than 0 representing forward scattering. (type = float, unit = unitless, defaults to 0)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Anisotropy of the volume with values lower than 0 representing back-scattering, equal 0 representing isotropic scattering and greater than 0 representing forward scattering. (type = float, unit = unitless, defaults to 0)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_WaterPhaseG = { "WaterPhaseG", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataSingleLayerWaterBSDF, WaterPhaseG), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_WaterPhaseG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_WaterPhaseG_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_ColorScaleBehindWater_MetaData[] = {
		{ "Comment", "/**\n\x09 * A scale to apply on the scene color behind the water surface. It can be used to approximate caustics for instance. (type = float3, unit = unitless, defaults to 1)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "A scale to apply on the scene color behind the water surface. It can be used to approximate caustics for instance. (type = float3, unit = unitless, defaults to 1)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_ColorScaleBehindWater = { "ColorScaleBehindWater", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataSingleLayerWaterBSDF, ColorScaleBehindWater), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_ColorScaleBehindWater_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_ColorScaleBehindWater_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_BaseColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_Metallic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_Specular,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_Roughness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_EmissiveColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_TopMaterialOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_WaterAlbedo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_WaterExtinction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_WaterPhaseG,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::NewProp_ColorScaleBehindWater,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionStrataSingleLayerWaterBSDF>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::ClassParams = {
		&UMaterialExpressionStrataSingleLayerWaterBSDF::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::PropPointers),
		0,
		0x000820A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF.OuterSingleton, Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionStrataSingleLayerWaterBSDF>()
	{
		return UMaterialExpressionStrataSingleLayerWaterBSDF::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionStrataSingleLayerWaterBSDF);
	void UMaterialExpressionStrataHorizontalMixing::StaticRegisterNativesUMaterialExpressionStrataHorizontalMixing()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionStrataHorizontalMixing);
	UClass* Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_NoRegister()
	{
		return UMaterialExpressionStrataHorizontalMixing::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Background;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Foreground_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Foreground;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mix_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Mix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseParameterBlending_MetaData[];
#endif
		static void NewProp_bUseParameterBlending_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseParameterBlending;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionStrataBSDF,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::Class_MetaDataParams[] = {
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n// Operator nodes\n" },
		{ "DisplayName", "Strata BSDF Horizontal Blend" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionStrata.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "/\n Operator nodes" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::NewProp_Background_MetaData[] = {
		{ "Comment", "/**\n\x09 * Strata material\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Strata material" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::NewProp_Background = { "Background", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataHorizontalMixing, Background), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::NewProp_Background_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::NewProp_Background_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::NewProp_Foreground_MetaData[] = {
		{ "Comment", "/**\n\x09 * Strata material\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Strata material" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::NewProp_Foreground = { "Foreground", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataHorizontalMixing, Foreground), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::NewProp_Foreground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::NewProp_Foreground_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::NewProp_Mix_MetaData[] = {
		{ "Comment", "/**\n\x09 * Lerp factor between Background (Mix == 0) and Foreground (Mix == 1).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Lerp factor between Background (Mix == 0) and Foreground (Mix == 1)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::NewProp_Mix = { "Mix", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataHorizontalMixing, Mix), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::NewProp_Mix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::NewProp_Mix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::NewProp_bUseParameterBlending_MetaData[] = {
		{ "Category", "Mode" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::NewProp_bUseParameterBlending_SetBit(void* Obj)
	{
		((UMaterialExpressionStrataHorizontalMixing*)Obj)->bUseParameterBlending = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::NewProp_bUseParameterBlending = { "bUseParameterBlending", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialExpressionStrataHorizontalMixing), &Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::NewProp_bUseParameterBlending_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::NewProp_bUseParameterBlending_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::NewProp_bUseParameterBlending_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::NewProp_Background,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::NewProp_Foreground,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::NewProp_Mix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::NewProp_bUseParameterBlending,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionStrataHorizontalMixing>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::ClassParams = {
		&UMaterialExpressionStrataHorizontalMixing::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::PropPointers),
		0,
		0x000820A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionStrataHorizontalMixing.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionStrataHorizontalMixing.OuterSingleton, Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionStrataHorizontalMixing.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionStrataHorizontalMixing>()
	{
		return UMaterialExpressionStrataHorizontalMixing::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionStrataHorizontalMixing);
	void UMaterialExpressionStrataVerticalLayering::StaticRegisterNativesUMaterialExpressionStrataVerticalLayering()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionStrataVerticalLayering);
	UClass* Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering_NoRegister()
	{
		return UMaterialExpressionStrataVerticalLayering::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Top_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Top;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Base;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseParameterBlending_MetaData[];
#endif
		static void NewProp_bUseParameterBlending_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseParameterBlending;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionStrataBSDF,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Strata BSDF Vertical Layer" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionStrata.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering_Statics::NewProp_Top_MetaData[] = {
		{ "Comment", "/**\n\x09 * Strata material layer on top of the Base material layer\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Strata material layer on top of the Base material layer" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering_Statics::NewProp_Top = { "Top", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataVerticalLayering, Top), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering_Statics::NewProp_Top_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering_Statics::NewProp_Top_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering_Statics::NewProp_Base_MetaData[] = {
		{ "Comment", "/**\n\x09 * Strata material layer below the Top material layer\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Strata material layer below the Top material layer" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataVerticalLayering, Base), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering_Statics::NewProp_Base_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering_Statics::NewProp_Base_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering_Statics::NewProp_bUseParameterBlending_MetaData[] = {
		{ "Category", "Mode" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering_Statics::NewProp_bUseParameterBlending_SetBit(void* Obj)
	{
		((UMaterialExpressionStrataVerticalLayering*)Obj)->bUseParameterBlending = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering_Statics::NewProp_bUseParameterBlending = { "bUseParameterBlending", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialExpressionStrataVerticalLayering), &Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering_Statics::NewProp_bUseParameterBlending_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering_Statics::NewProp_bUseParameterBlending_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering_Statics::NewProp_bUseParameterBlending_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering_Statics::NewProp_Top,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering_Statics::NewProp_Base,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering_Statics::NewProp_bUseParameterBlending,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionStrataVerticalLayering>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering_Statics::ClassParams = {
		&UMaterialExpressionStrataVerticalLayering::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering_Statics::PropPointers),
		0,
		0x000820A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionStrataVerticalLayering.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionStrataVerticalLayering.OuterSingleton, Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionStrataVerticalLayering.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionStrataVerticalLayering>()
	{
		return UMaterialExpressionStrataVerticalLayering::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionStrataVerticalLayering);
	void UMaterialExpressionStrataAdd::StaticRegisterNativesUMaterialExpressionStrataAdd()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionStrataAdd);
	UClass* Z_Construct_UClass_UMaterialExpressionStrataAdd_NoRegister()
	{
		return UMaterialExpressionStrataAdd::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionStrataAdd_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseParameterBlending_MetaData[];
#endif
		static void NewProp_bUseParameterBlending_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseParameterBlending;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionStrataAdd_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionStrataBSDF,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataAdd_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Strata BSDF Add" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionStrata.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataAdd_Statics::NewProp_A_MetaData[] = {
		{ "Comment", "/**\n\x09 * Strata material\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Strata material" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataAdd_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataAdd, A), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataAdd_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataAdd_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataAdd_Statics::NewProp_B_MetaData[] = {
		{ "Comment", "/**\n\x09 * Strata material\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Strata material" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataAdd_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataAdd, B), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataAdd_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataAdd_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataAdd_Statics::NewProp_bUseParameterBlending_MetaData[] = {
		{ "Category", "Mode" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionStrataAdd_Statics::NewProp_bUseParameterBlending_SetBit(void* Obj)
	{
		((UMaterialExpressionStrataAdd*)Obj)->bUseParameterBlending = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionStrataAdd_Statics::NewProp_bUseParameterBlending = { "bUseParameterBlending", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMaterialExpressionStrataAdd), &Z_Construct_UClass_UMaterialExpressionStrataAdd_Statics::NewProp_bUseParameterBlending_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataAdd_Statics::NewProp_bUseParameterBlending_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataAdd_Statics::NewProp_bUseParameterBlending_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionStrataAdd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataAdd_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataAdd_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataAdd_Statics::NewProp_bUseParameterBlending,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionStrataAdd_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionStrataAdd>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionStrataAdd_Statics::ClassParams = {
		&UMaterialExpressionStrataAdd::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionStrataAdd_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataAdd_Statics::PropPointers),
		0,
		0x000820A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataAdd_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataAdd_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionStrataAdd()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionStrataAdd.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionStrataAdd.OuterSingleton, Z_Construct_UClass_UMaterialExpressionStrataAdd_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionStrataAdd.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionStrataAdd>()
	{
		return UMaterialExpressionStrataAdd::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionStrataAdd);
	void UMaterialExpressionStrataWeight::StaticRegisterNativesUMaterialExpressionStrataWeight()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionStrataWeight);
	UClass* Z_Construct_UClass_UMaterialExpressionStrataWeight_NoRegister()
	{
		return UMaterialExpressionStrataWeight::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionStrataWeight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionStrataWeight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionStrataBSDF,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataWeight_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Strata BSDF Weight" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionStrata.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataWeight_Statics::NewProp_A_MetaData[] = {
		{ "Comment", "/**\n\x09 * Strata material\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Strata material" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataWeight_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataWeight, A), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataWeight_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataWeight_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataWeight_Statics::NewProp_Weight_MetaData[] = {
		{ "Comment", "/**\n\x09 * Weight to apply to the strata material BSDFs\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "Weight to apply to the strata material BSDFs" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataWeight_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataWeight, Weight), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataWeight_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataWeight_Statics::NewProp_Weight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionStrataWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataWeight_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataWeight_Statics::NewProp_Weight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionStrataWeight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionStrataWeight>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionStrataWeight_Statics::ClassParams = {
		&UMaterialExpressionStrataWeight::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionStrataWeight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataWeight_Statics::PropPointers),
		0,
		0x000820A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataWeight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataWeight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionStrataWeight()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionStrataWeight.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionStrataWeight.OuterSingleton, Z_Construct_UClass_UMaterialExpressionStrataWeight_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionStrataWeight.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionStrataWeight>()
	{
		return UMaterialExpressionStrataWeight::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionStrataWeight);
	void UMaterialExpressionStrataTransmittanceToMFP::StaticRegisterNativesUMaterialExpressionStrataTransmittanceToMFP()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionStrataTransmittanceToMFP);
	UClass* Z_Construct_UClass_UMaterialExpressionStrataTransmittanceToMFP_NoRegister()
	{
		return UMaterialExpressionStrataTransmittanceToMFP::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionStrataTransmittanceToMFP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransmittanceColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransmittanceColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Thickness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionStrataTransmittanceToMFP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionStrataBSDF,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataTransmittanceToMFP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n// Utilities\n" },
		{ "DisplayName", "Strata Transmittance-To-MeanFreePath" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionStrata.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "/\n Utilities" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataTransmittanceToMFP_Statics::NewProp_TransmittanceColor_MetaData[] = {
		{ "Comment", "/**\n\x09* The colored transmittance for a view perpendicular to the surface. The transmittance or other view orientation will automatically deduced according to surface thickness.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "The colored transmittance for a view perpendicular to the surface. The transmittance or other view orientation will automatically deduced according to surface thickness." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataTransmittanceToMFP_Statics::NewProp_TransmittanceColor = { "TransmittanceColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataTransmittanceToMFP, TransmittanceColor), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataTransmittanceToMFP_Statics::NewProp_TransmittanceColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataTransmittanceToMFP_Statics::NewProp_TransmittanceColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionStrataTransmittanceToMFP_Statics::NewProp_Thickness_MetaData[] = {
		{ "Comment", "/**\n\x09* The desired thickness in centimers. This can be set lower than 0.1mm (= 0.01cm) to enable the Thin lighting model on the slab node for instance.\n\x09* Another use case exemple: the thickenss ouput can be modulated to have simple scattering/transmittance variation of the same material before it is plugged in a slab node.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionStrata.h" },
		{ "ToolTip", "The desired thickness in centimers. This can be set lower than 0.1mm (= 0.01cm) to enable the Thin lighting model on the slab node for instance.\nAnother use case exemple: the thickenss ouput can be modulated to have simple scattering/transmittance variation of the same material before it is plugged in a slab node." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionStrataTransmittanceToMFP_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionStrataTransmittanceToMFP, Thickness), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataTransmittanceToMFP_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataTransmittanceToMFP_Statics::NewProp_Thickness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionStrataTransmittanceToMFP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataTransmittanceToMFP_Statics::NewProp_TransmittanceColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionStrataTransmittanceToMFP_Statics::NewProp_Thickness,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionStrataTransmittanceToMFP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionStrataTransmittanceToMFP>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionStrataTransmittanceToMFP_Statics::ClassParams = {
		&UMaterialExpressionStrataTransmittanceToMFP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionStrataTransmittanceToMFP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataTransmittanceToMFP_Statics::PropPointers),
		0,
		0x000820A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionStrataTransmittanceToMFP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionStrataTransmittanceToMFP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionStrataTransmittanceToMFP()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionStrataTransmittanceToMFP.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionStrataTransmittanceToMFP.OuterSingleton, Z_Construct_UClass_UMaterialExpressionStrataTransmittanceToMFP_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionStrataTransmittanceToMFP.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionStrataTransmittanceToMFP>()
	{
		return UMaterialExpressionStrataTransmittanceToMFP::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionStrataTransmittanceToMFP);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStrata_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStrata_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionStrataBSDF, UMaterialExpressionStrataBSDF::StaticClass, TEXT("UMaterialExpressionStrataBSDF"), &Z_Registration_Info_UClass_UMaterialExpressionStrataBSDF, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionStrataBSDF), 1196234154U) },
		{ Z_Construct_UClass_UMaterialExpressionStrataLegacyConversion, UMaterialExpressionStrataLegacyConversion::StaticClass, TEXT("UMaterialExpressionStrataLegacyConversion"), &Z_Registration_Info_UClass_UMaterialExpressionStrataLegacyConversion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionStrataLegacyConversion), 2238385508U) },
		{ Z_Construct_UClass_UMaterialExpressionStrataSlabBSDF, UMaterialExpressionStrataSlabBSDF::StaticClass, TEXT("UMaterialExpressionStrataSlabBSDF"), &Z_Registration_Info_UClass_UMaterialExpressionStrataSlabBSDF, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionStrataSlabBSDF), 1402168880U) },
		{ Z_Construct_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF, UMaterialExpressionStrataVolumetricFogCloudBSDF::StaticClass, TEXT("UMaterialExpressionStrataVolumetricFogCloudBSDF"), &Z_Registration_Info_UClass_UMaterialExpressionStrataVolumetricFogCloudBSDF, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionStrataVolumetricFogCloudBSDF), 654955113U) },
		{ Z_Construct_UClass_UMaterialExpressionStrataUnlitBSDF, UMaterialExpressionStrataUnlitBSDF::StaticClass, TEXT("UMaterialExpressionStrataUnlitBSDF"), &Z_Registration_Info_UClass_UMaterialExpressionStrataUnlitBSDF, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionStrataUnlitBSDF), 2145611244U) },
		{ Z_Construct_UClass_UMaterialExpressionStrataHairBSDF, UMaterialExpressionStrataHairBSDF::StaticClass, TEXT("UMaterialExpressionStrataHairBSDF"), &Z_Registration_Info_UClass_UMaterialExpressionStrataHairBSDF, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionStrataHairBSDF), 1418019840U) },
		{ Z_Construct_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF, UMaterialExpressionStrataSingleLayerWaterBSDF::StaticClass, TEXT("UMaterialExpressionStrataSingleLayerWaterBSDF"), &Z_Registration_Info_UClass_UMaterialExpressionStrataSingleLayerWaterBSDF, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionStrataSingleLayerWaterBSDF), 930473171U) },
		{ Z_Construct_UClass_UMaterialExpressionStrataHorizontalMixing, UMaterialExpressionStrataHorizontalMixing::StaticClass, TEXT("UMaterialExpressionStrataHorizontalMixing"), &Z_Registration_Info_UClass_UMaterialExpressionStrataHorizontalMixing, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionStrataHorizontalMixing), 1545934929U) },
		{ Z_Construct_UClass_UMaterialExpressionStrataVerticalLayering, UMaterialExpressionStrataVerticalLayering::StaticClass, TEXT("UMaterialExpressionStrataVerticalLayering"), &Z_Registration_Info_UClass_UMaterialExpressionStrataVerticalLayering, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionStrataVerticalLayering), 1671027801U) },
		{ Z_Construct_UClass_UMaterialExpressionStrataAdd, UMaterialExpressionStrataAdd::StaticClass, TEXT("UMaterialExpressionStrataAdd"), &Z_Registration_Info_UClass_UMaterialExpressionStrataAdd, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionStrataAdd), 2956494195U) },
		{ Z_Construct_UClass_UMaterialExpressionStrataWeight, UMaterialExpressionStrataWeight::StaticClass, TEXT("UMaterialExpressionStrataWeight"), &Z_Registration_Info_UClass_UMaterialExpressionStrataWeight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionStrataWeight), 494533067U) },
		{ Z_Construct_UClass_UMaterialExpressionStrataTransmittanceToMFP, UMaterialExpressionStrataTransmittanceToMFP::StaticClass, TEXT("UMaterialExpressionStrataTransmittanceToMFP"), &Z_Registration_Info_UClass_UMaterialExpressionStrataTransmittanceToMFP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionStrataTransmittanceToMFP), 2463254762U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStrata_h_3849492804(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStrata_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStrata_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
