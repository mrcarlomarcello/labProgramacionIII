// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Classes/Landscape.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscape() {}
// Cross Module References
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeSetupErrors();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ERTDrawingType();
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_EHeightmapRTType();
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_EWeightmapRTType();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeLayerBrush();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeBlueprintBrushBase_NoRegister();
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeBlendMode();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeLayer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeComponent_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeSetupErrors;
	static UEnum* ELandscapeSetupErrors_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeSetupErrors.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELandscapeSetupErrors.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeSetupErrors, Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeSetupErrors"));
		}
		return Z_Registration_Info_UEnum_ELandscapeSetupErrors.OuterSingleton;
	}
	template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeSetupErrors>()
	{
		return ELandscapeSetupErrors_StaticEnum();
	}
	struct Z_Construct_UEnum_Landscape_ELandscapeSetupErrors_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Landscape_ELandscapeSetupErrors_Statics::Enumerators[] = {
		{ "LSE_None", (int64)LSE_None },
		{ "LSE_NoLandscapeInfo", (int64)LSE_NoLandscapeInfo },
		{ "LSE_CollsionXY", (int64)LSE_CollsionXY },
		{ "LSE_NoLayerInfo", (int64)LSE_NoLayerInfo },
		{ "LSE_MAX", (int64)LSE_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Landscape_ELandscapeSetupErrors_Statics::Enum_MetaDataParams[] = {
		{ "LSE_CollsionXY.Comment", "/** There was already component with same X,Y. */" },
		{ "LSE_CollsionXY.Name", "LSE_CollsionXY" },
		{ "LSE_CollsionXY.ToolTip", "There was already component with same X,Y." },
		{ "LSE_MAX.Name", "LSE_MAX" },
		{ "LSE_NoLandscapeInfo.Comment", "/** No Landscape Info available. */" },
		{ "LSE_NoLandscapeInfo.Name", "LSE_NoLandscapeInfo" },
		{ "LSE_NoLandscapeInfo.ToolTip", "No Landscape Info available." },
		{ "LSE_NoLayerInfo.Comment", "/** No Layer Info, need to add proper layers. */" },
		{ "LSE_NoLayerInfo.Name", "LSE_NoLayerInfo" },
		{ "LSE_NoLayerInfo.ToolTip", "No Layer Info, need to add proper layers." },
		{ "LSE_None.Name", "LSE_None" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_ELandscapeSetupErrors_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		"ELandscapeSetupErrors",
		"ELandscapeSetupErrors",
		Z_Construct_UEnum_Landscape_ELandscapeSetupErrors_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeSetupErrors_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Landscape_ELandscapeSetupErrors_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeSetupErrors_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Landscape_ELandscapeSetupErrors()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeSetupErrors.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeSetupErrors.InnerSingleton, Z_Construct_UEnum_Landscape_ELandscapeSetupErrors_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELandscapeSetupErrors.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERTDrawingType;
	static UEnum* ERTDrawingType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERTDrawingType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERTDrawingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ERTDrawingType, Z_Construct_UPackage__Script_Landscape(), TEXT("ERTDrawingType"));
		}
		return Z_Registration_Info_UEnum_ERTDrawingType.OuterSingleton;
	}
	template<> LANDSCAPE_API UEnum* StaticEnum<ERTDrawingType>()
	{
		return ERTDrawingType_StaticEnum();
	}
	struct Z_Construct_UEnum_Landscape_ERTDrawingType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Landscape_ERTDrawingType_Statics::Enumerators[] = {
		{ "ERTDrawingType::RTAtlas", (int64)ERTDrawingType::RTAtlas },
		{ "ERTDrawingType::RTAtlasToNonAtlas", (int64)ERTDrawingType::RTAtlasToNonAtlas },
		{ "ERTDrawingType::RTNonAtlasToAtlas", (int64)ERTDrawingType::RTNonAtlasToAtlas },
		{ "ERTDrawingType::RTNonAtlas", (int64)ERTDrawingType::RTNonAtlas },
		{ "ERTDrawingType::RTMips", (int64)ERTDrawingType::RTMips },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Landscape_ERTDrawingType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
		{ "RTAtlas.Name", "ERTDrawingType::RTAtlas" },
		{ "RTAtlasToNonAtlas.Name", "ERTDrawingType::RTAtlasToNonAtlas" },
		{ "RTMips.Name", "ERTDrawingType::RTMips" },
		{ "RTNonAtlas.Name", "ERTDrawingType::RTNonAtlas" },
		{ "RTNonAtlasToAtlas.Name", "ERTDrawingType::RTNonAtlasToAtlas" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_ERTDrawingType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		"ERTDrawingType",
		"ERTDrawingType",
		Z_Construct_UEnum_Landscape_ERTDrawingType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ERTDrawingType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Landscape_ERTDrawingType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ERTDrawingType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Landscape_ERTDrawingType()
	{
		if (!Z_Registration_Info_UEnum_ERTDrawingType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERTDrawingType.InnerSingleton, Z_Construct_UEnum_Landscape_ERTDrawingType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERTDrawingType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHeightmapRTType;
	static UEnum* EHeightmapRTType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHeightmapRTType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHeightmapRTType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_EHeightmapRTType, Z_Construct_UPackage__Script_Landscape(), TEXT("EHeightmapRTType"));
		}
		return Z_Registration_Info_UEnum_EHeightmapRTType.OuterSingleton;
	}
	template<> LANDSCAPE_API UEnum* StaticEnum<EHeightmapRTType>()
	{
		return EHeightmapRTType_StaticEnum();
	}
	struct Z_Construct_UEnum_Landscape_EHeightmapRTType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Landscape_EHeightmapRTType_Statics::Enumerators[] = {
		{ "EHeightmapRTType::HeightmapRT_CombinedAtlas", (int64)EHeightmapRTType::HeightmapRT_CombinedAtlas },
		{ "EHeightmapRTType::HeightmapRT_CombinedNonAtlas", (int64)EHeightmapRTType::HeightmapRT_CombinedNonAtlas },
		{ "EHeightmapRTType::HeightmapRT_Scratch1", (int64)EHeightmapRTType::HeightmapRT_Scratch1 },
		{ "EHeightmapRTType::HeightmapRT_Scratch2", (int64)EHeightmapRTType::HeightmapRT_Scratch2 },
		{ "EHeightmapRTType::HeightmapRT_Scratch3", (int64)EHeightmapRTType::HeightmapRT_Scratch3 },
		{ "EHeightmapRTType::HeightmapRT_Mip1", (int64)EHeightmapRTType::HeightmapRT_Mip1 },
		{ "EHeightmapRTType::HeightmapRT_Mip2", (int64)EHeightmapRTType::HeightmapRT_Mip2 },
		{ "EHeightmapRTType::HeightmapRT_Mip3", (int64)EHeightmapRTType::HeightmapRT_Mip3 },
		{ "EHeightmapRTType::HeightmapRT_Mip4", (int64)EHeightmapRTType::HeightmapRT_Mip4 },
		{ "EHeightmapRTType::HeightmapRT_Mip5", (int64)EHeightmapRTType::HeightmapRT_Mip5 },
		{ "EHeightmapRTType::HeightmapRT_Mip6", (int64)EHeightmapRTType::HeightmapRT_Mip6 },
		{ "EHeightmapRTType::HeightmapRT_Mip7", (int64)EHeightmapRTType::HeightmapRT_Mip7 },
		{ "EHeightmapRTType::HeightmapRT_Count", (int64)EHeightmapRTType::HeightmapRT_Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Landscape_EHeightmapRTType_Statics::Enum_MetaDataParams[] = {
		{ "HeightmapRT_CombinedAtlas.Name", "EHeightmapRTType::HeightmapRT_CombinedAtlas" },
		{ "HeightmapRT_CombinedNonAtlas.Name", "EHeightmapRTType::HeightmapRT_CombinedNonAtlas" },
		{ "HeightmapRT_Count.Name", "EHeightmapRTType::HeightmapRT_Count" },
		{ "HeightmapRT_Mip1.Comment", "// Mips RT\n" },
		{ "HeightmapRT_Mip1.Name", "EHeightmapRTType::HeightmapRT_Mip1" },
		{ "HeightmapRT_Mip1.ToolTip", "Mips RT" },
		{ "HeightmapRT_Mip2.Name", "EHeightmapRTType::HeightmapRT_Mip2" },
		{ "HeightmapRT_Mip3.Name", "EHeightmapRTType::HeightmapRT_Mip3" },
		{ "HeightmapRT_Mip4.Name", "EHeightmapRTType::HeightmapRT_Mip4" },
		{ "HeightmapRT_Mip5.Name", "EHeightmapRTType::HeightmapRT_Mip5" },
		{ "HeightmapRT_Mip6.Name", "EHeightmapRTType::HeightmapRT_Mip6" },
		{ "HeightmapRT_Mip7.Name", "EHeightmapRTType::HeightmapRT_Mip7" },
		{ "HeightmapRT_Scratch1.Name", "EHeightmapRTType::HeightmapRT_Scratch1" },
		{ "HeightmapRT_Scratch2.Name", "EHeightmapRTType::HeightmapRT_Scratch2" },
		{ "HeightmapRT_Scratch3.Name", "EHeightmapRTType::HeightmapRT_Scratch3" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_EHeightmapRTType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		"EHeightmapRTType",
		"EHeightmapRTType",
		Z_Construct_UEnum_Landscape_EHeightmapRTType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_EHeightmapRTType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Landscape_EHeightmapRTType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_EHeightmapRTType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Landscape_EHeightmapRTType()
	{
		if (!Z_Registration_Info_UEnum_EHeightmapRTType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHeightmapRTType.InnerSingleton, Z_Construct_UEnum_Landscape_EHeightmapRTType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHeightmapRTType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeightmapRTType;
	static UEnum* EWeightmapRTType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWeightmapRTType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWeightmapRTType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_EWeightmapRTType, Z_Construct_UPackage__Script_Landscape(), TEXT("EWeightmapRTType"));
		}
		return Z_Registration_Info_UEnum_EWeightmapRTType.OuterSingleton;
	}
	template<> LANDSCAPE_API UEnum* StaticEnum<EWeightmapRTType>()
	{
		return EWeightmapRTType_StaticEnum();
	}
	struct Z_Construct_UEnum_Landscape_EWeightmapRTType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Landscape_EWeightmapRTType_Statics::Enumerators[] = {
		{ "EWeightmapRTType::WeightmapRT_Scratch_RGBA", (int64)EWeightmapRTType::WeightmapRT_Scratch_RGBA },
		{ "EWeightmapRTType::WeightmapRT_Scratch1", (int64)EWeightmapRTType::WeightmapRT_Scratch1 },
		{ "EWeightmapRTType::WeightmapRT_Scratch2", (int64)EWeightmapRTType::WeightmapRT_Scratch2 },
		{ "EWeightmapRTType::WeightmapRT_Scratch3", (int64)EWeightmapRTType::WeightmapRT_Scratch3 },
		{ "EWeightmapRTType::WeightmapRT_Mip0", (int64)EWeightmapRTType::WeightmapRT_Mip0 },
		{ "EWeightmapRTType::WeightmapRT_Mip1", (int64)EWeightmapRTType::WeightmapRT_Mip1 },
		{ "EWeightmapRTType::WeightmapRT_Mip2", (int64)EWeightmapRTType::WeightmapRT_Mip2 },
		{ "EWeightmapRTType::WeightmapRT_Mip3", (int64)EWeightmapRTType::WeightmapRT_Mip3 },
		{ "EWeightmapRTType::WeightmapRT_Mip4", (int64)EWeightmapRTType::WeightmapRT_Mip4 },
		{ "EWeightmapRTType::WeightmapRT_Mip5", (int64)EWeightmapRTType::WeightmapRT_Mip5 },
		{ "EWeightmapRTType::WeightmapRT_Mip6", (int64)EWeightmapRTType::WeightmapRT_Mip6 },
		{ "EWeightmapRTType::WeightmapRT_Mip7", (int64)EWeightmapRTType::WeightmapRT_Mip7 },
		{ "EWeightmapRTType::WeightmapRT_Count", (int64)EWeightmapRTType::WeightmapRT_Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Landscape_EWeightmapRTType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
		{ "WeightmapRT_Count.Name", "EWeightmapRTType::WeightmapRT_Count" },
		{ "WeightmapRT_Mip0.Comment", "// Mips RT\n" },
		{ "WeightmapRT_Mip0.Name", "EWeightmapRTType::WeightmapRT_Mip0" },
		{ "WeightmapRT_Mip0.ToolTip", "Mips RT" },
		{ "WeightmapRT_Mip1.Name", "EWeightmapRTType::WeightmapRT_Mip1" },
		{ "WeightmapRT_Mip2.Name", "EWeightmapRTType::WeightmapRT_Mip2" },
		{ "WeightmapRT_Mip3.Name", "EWeightmapRTType::WeightmapRT_Mip3" },
		{ "WeightmapRT_Mip4.Name", "EWeightmapRTType::WeightmapRT_Mip4" },
		{ "WeightmapRT_Mip5.Name", "EWeightmapRTType::WeightmapRT_Mip5" },
		{ "WeightmapRT_Mip6.Name", "EWeightmapRTType::WeightmapRT_Mip6" },
		{ "WeightmapRT_Mip7.Name", "EWeightmapRTType::WeightmapRT_Mip7" },
		{ "WeightmapRT_Scratch1.Name", "EWeightmapRTType::WeightmapRT_Scratch1" },
		{ "WeightmapRT_Scratch2.Name", "EWeightmapRTType::WeightmapRT_Scratch2" },
		{ "WeightmapRT_Scratch3.Name", "EWeightmapRTType::WeightmapRT_Scratch3" },
		{ "WeightmapRT_Scratch_RGBA.Name", "EWeightmapRTType::WeightmapRT_Scratch_RGBA" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_EWeightmapRTType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		"EWeightmapRTType",
		"EWeightmapRTType",
		Z_Construct_UEnum_Landscape_EWeightmapRTType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_EWeightmapRTType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Landscape_EWeightmapRTType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_EWeightmapRTType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Landscape_EWeightmapRTType()
	{
		if (!Z_Registration_Info_UEnum_EWeightmapRTType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeightmapRTType.InnerSingleton, Z_Construct_UEnum_Landscape_EWeightmapRTType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWeightmapRTType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapeLayerBrush;
class UScriptStruct* FLandscapeLayerBrush::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeLayerBrush.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapeLayerBrush.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeLayerBrush, Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeLayerBrush"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapeLayerBrush.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeLayerBrush>()
{
	return FLandscapeLayerBrush::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintBrush_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlueprintBrush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeLayerBrush>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::NewProp_BlueprintBrush_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::NewProp_BlueprintBrush = { "BlueprintBrush", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeLayerBrush, BlueprintBrush), Z_Construct_UClass_ALandscapeBlueprintBrushBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::NewProp_BlueprintBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::NewProp_BlueprintBrush_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::NewProp_BlueprintBrush,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"LandscapeLayerBrush",
		sizeof(FLandscapeLayerBrush),
		alignof(FLandscapeLayerBrush),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeLayerBrush()
	{
		if (!Z_Registration_Info_UScriptStruct_LandscapeLayerBrush.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapeLayerBrush.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LandscapeLayerBrush.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeBlendMode;
	static UEnum* ELandscapeBlendMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeBlendMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELandscapeBlendMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeBlendMode, Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeBlendMode"));
		}
		return Z_Registration_Info_UEnum_ELandscapeBlendMode.OuterSingleton;
	}
	template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeBlendMode>()
	{
		return ELandscapeBlendMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Landscape_ELandscapeBlendMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Landscape_ELandscapeBlendMode_Statics::Enumerators[] = {
		{ "LSBM_AdditiveBlend", (int64)LSBM_AdditiveBlend },
		{ "LSBM_AlphaBlend", (int64)LSBM_AlphaBlend },
		{ "LSBM_MAX", (int64)LSBM_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Landscape_ELandscapeBlendMode_Statics::Enum_MetaDataParams[] = {
		{ "LSBM_AdditiveBlend.Name", "LSBM_AdditiveBlend" },
		{ "LSBM_AlphaBlend.Name", "LSBM_AlphaBlend" },
		{ "LSBM_MAX.Name", "LSBM_MAX" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_ELandscapeBlendMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		"ELandscapeBlendMode",
		"ELandscapeBlendMode",
		Z_Construct_UEnum_Landscape_ELandscapeBlendMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeBlendMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Landscape_ELandscapeBlendMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeBlendMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Landscape_ELandscapeBlendMode()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeBlendMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeBlendMode.InnerSingleton, Z_Construct_UEnum_Landscape_ELandscapeBlendMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELandscapeBlendMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapeLayer;
class UScriptStruct* FLandscapeLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapeLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeLayer, Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeLayer"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapeLayer.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeLayer>()
{
	return FLandscapeLayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLandscapeLayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[];
#endif
		static void NewProp_bLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightmapAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightmapAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Brushes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Brushes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Brushes;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WeightmapLayerAllocationBlend_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WeightmapLayerAllocationBlend_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapLayerAllocationBlend_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_WeightmapLayerAllocationBlend;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeLayer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Guid_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeLayer, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeLayer, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bVisible_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((FLandscapeLayer*)Obj)->bVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLandscapeLayer), &Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bLocked_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bLocked_SetBit(void* Obj)
	{
		((FLandscapeLayer*)Obj)->bLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLandscapeLayer), &Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bLocked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_HeightmapAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_HeightmapAlpha = { "HeightmapAlpha", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeLayer, HeightmapAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_HeightmapAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_HeightmapAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapAlpha = { "WeightmapAlpha", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeLayer, WeightmapAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_BlendMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeLayer, BlendMode), Z_Construct_UEnum_Landscape_ELandscapeBlendMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_BlendMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_BlendMode_MetaData)) }; // 2659959532
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Brushes_Inner = { "Brushes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLandscapeLayerBrush, METADATA_PARAMS(nullptr, 0) }; // 67599205
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Brushes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Brushes = { "Brushes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeLayer, Brushes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Brushes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Brushes_MetaData)) }; // 67599205
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapLayerAllocationBlend_ValueProp = { "WeightmapLayerAllocationBlend", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapLayerAllocationBlend_Key_KeyProp = { "WeightmapLayerAllocationBlend_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapLayerAllocationBlend_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapLayerAllocationBlend = { "WeightmapLayerAllocationBlend", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeLayer, WeightmapLayerAllocationBlend), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapLayerAllocationBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapLayerAllocationBlend_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Guid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bLocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_HeightmapAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_BlendMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Brushes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Brushes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapLayerAllocationBlend_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapLayerAllocationBlend_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapLayerAllocationBlend,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"LandscapeLayer",
		sizeof(FLandscapeLayer),
		alignof(FLandscapeLayer),
		Z_Construct_UScriptStruct_FLandscapeLayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeLayer()
	{
		if (!Z_Registration_Info_UScriptStruct_LandscapeLayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapeLayer.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeLayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LandscapeLayer.InnerSingleton;
	}
	void ALandscape::StaticRegisterNativesALandscape()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALandscape);
	UClass* Z_Construct_UClass_ALandscape_NoRegister()
	{
		return ALandscape::StaticClass();
	}
	struct Z_Construct_UClass_ALandscape_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanHaveLayersContent_MetaData[];
#endif
		static void NewProp_bCanHaveLayersContent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanHaveLayersContent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeSplinesTargetLayerGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LandscapeSplinesTargetLayerGuid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LandscapeLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LandscapeLayers;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HeightmapRTList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapRTList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HeightmapRTList;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WeightmapRTList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapRTList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightmapRTList;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TrackedStreamingInTextures_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackedStreamingInTextures_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_TrackedStreamingInTextures;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LandscapeSplinesAffectedComponents_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeSplinesAffectedComponents_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_LandscapeSplinesAffectedComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeLayersAreInitialized_MetaData[];
#endif
		static void NewProp_bLandscapeLayersAreInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeLayersAreInitialized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeLayersAreUsingLocalMerge_MetaData[];
#endif
		static void NewProp_bLandscapeLayersAreUsingLocalMerge_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeLayersAreUsingLocalMerge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WasCompilingShaders_MetaData[];
#endif
		static void NewProp_WasCompilingShaders_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WasCompilingShaders;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerContentUpdateModes_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_LayerContentUpdateModes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSplineLayerUpdateRequested_MetaData[];
#endif
		static void NewProp_bSplineLayerUpdateRequested_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplineLayerUpdateRequested;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALandscape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALandscapeProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscape_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility HLOD Attachment Physics Debug Mobility" },
		{ "IncludePath", "Landscape.h" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscape_Statics::NewProp_bCanHaveLayersContent_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	void Z_Construct_UClass_ALandscape_Statics::NewProp_bCanHaveLayersContent_SetBit(void* Obj)
	{
		((ALandscape*)Obj)->bCanHaveLayersContent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_bCanHaveLayersContent = { "bCanHaveLayersContent", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALandscape), &Z_Construct_UClass_ALandscape_Statics::NewProp_bCanHaveLayersContent_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscape_Statics::NewProp_bCanHaveLayersContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::NewProp_bCanHaveLayersContent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeSplinesTargetLayerGuid_MetaData[] = {
		{ "Comment", "/** Target Landscape Layer for Landscape Splines */" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
		{ "ToolTip", "Target Landscape Layer for Landscape Splines" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeSplinesTargetLayerGuid = { "LandscapeSplinesTargetLayerGuid", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscape, LandscapeSplinesTargetLayerGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeSplinesTargetLayerGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeSplinesTargetLayerGuid_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeLayers_Inner = { "LandscapeLayers", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLandscapeLayer, METADATA_PARAMS(nullptr, 0) }; // 104966545
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeLayers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeLayers = { "LandscapeLayers", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscape, LandscapeLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeLayers_MetaData)) }; // 104966545
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_HeightmapRTList_Inner = { "HeightmapRTList", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscape_Statics::NewProp_HeightmapRTList_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_HeightmapRTList = { "HeightmapRTList", nullptr, (EPropertyFlags)0x0014000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscape, HeightmapRTList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALandscape_Statics::NewProp_HeightmapRTList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::NewProp_HeightmapRTList_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_WeightmapRTList_Inner = { "WeightmapRTList", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscape_Statics::NewProp_WeightmapRTList_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_WeightmapRTList = { "WeightmapRTList", nullptr, (EPropertyFlags)0x0014000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscape, WeightmapRTList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALandscape_Statics::NewProp_WeightmapRTList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::NewProp_WeightmapRTList_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_TrackedStreamingInTextures_ElementProp = { "TrackedStreamingInTextures", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscape_Statics::NewProp_TrackedStreamingInTextures_MetaData[] = {
		{ "Comment", "/** List of textures that are not fully streamed in yet (updated every frame to track textures that have finished streaming in) */" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
		{ "ToolTip", "List of textures that are not fully streamed in yet (updated every frame to track textures that have finished streaming in)" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_TrackedStreamingInTextures = { "TrackedStreamingInTextures", nullptr, (EPropertyFlags)0x0014400800202000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscape, TrackedStreamingInTextures), METADATA_PARAMS(Z_Construct_UClass_ALandscape_Statics::NewProp_TrackedStreamingInTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::NewProp_TrackedStreamingInTextures_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeSplinesAffectedComponents_ElementProp = { "LandscapeSplinesAffectedComponents", nullptr, (EPropertyFlags)0x0004000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULandscapeComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeSplinesAffectedComponents_MetaData[] = {
		{ "Comment", "/** Components affected by landscape splines (used to partially clear Layer Reserved for Splines) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
		{ "ToolTip", "Components affected by landscape splines (used to partially clear Layer Reserved for Splines)" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeSplinesAffectedComponents = { "LandscapeSplinesAffectedComponents", nullptr, (EPropertyFlags)0x0044008800002008, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscape, LandscapeSplinesAffectedComponents), METADATA_PARAMS(Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeSplinesAffectedComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeSplinesAffectedComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	void Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreInitialized_SetBit(void* Obj)
	{
		((ALandscape*)Obj)->bLandscapeLayersAreInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreInitialized = { "bLandscapeLayersAreInitialized", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALandscape), &Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreInitialized_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreUsingLocalMerge_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	void Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreUsingLocalMerge_SetBit(void* Obj)
	{
		((ALandscape*)Obj)->bLandscapeLayersAreUsingLocalMerge = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreUsingLocalMerge = { "bLandscapeLayersAreUsingLocalMerge", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALandscape), &Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreUsingLocalMerge_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreUsingLocalMerge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreUsingLocalMerge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscape_Statics::NewProp_WasCompilingShaders_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	void Z_Construct_UClass_ALandscape_Statics::NewProp_WasCompilingShaders_SetBit(void* Obj)
	{
		((ALandscape*)Obj)->WasCompilingShaders = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_WasCompilingShaders = { "WasCompilingShaders", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALandscape), &Z_Construct_UClass_ALandscape_Statics::NewProp_WasCompilingShaders_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscape_Statics::NewProp_WasCompilingShaders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::NewProp_WasCompilingShaders_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscape_Statics::NewProp_LayerContentUpdateModes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_LayerContentUpdateModes = { "LayerContentUpdateModes", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscape, LayerContentUpdateModes), METADATA_PARAMS(Z_Construct_UClass_ALandscape_Statics::NewProp_LayerContentUpdateModes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::NewProp_LayerContentUpdateModes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscape_Statics::NewProp_bSplineLayerUpdateRequested_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	void Z_Construct_UClass_ALandscape_Statics::NewProp_bSplineLayerUpdateRequested_SetBit(void* Obj)
	{
		((ALandscape*)Obj)->bSplineLayerUpdateRequested = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_bSplineLayerUpdateRequested = { "bSplineLayerUpdateRequested", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALandscape), &Z_Construct_UClass_ALandscape_Statics::NewProp_bSplineLayerUpdateRequested_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscape_Statics::NewProp_bSplineLayerUpdateRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::NewProp_bSplineLayerUpdateRequested_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALandscape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_bCanHaveLayersContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeSplinesTargetLayerGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_HeightmapRTList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_HeightmapRTList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_WeightmapRTList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_WeightmapRTList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_TrackedStreamingInTextures_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_TrackedStreamingInTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeSplinesAffectedComponents_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeSplinesAffectedComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreInitialized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreUsingLocalMerge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_WasCompilingShaders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_LayerContentUpdateModes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_bSplineLayerUpdateRequested,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALandscape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscape>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALandscape_Statics::ClassParams = {
		&ALandscape::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ALandscape_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::PropPointers), 0),
		0,
		0x008802A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALandscape_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALandscape()
	{
		if (!Z_Registration_Info_UClass_ALandscape.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALandscape.OuterSingleton, Z_Construct_UClass_ALandscape_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALandscape.OuterSingleton;
	}
	template<> LANDSCAPE_API UClass* StaticClass<ALandscape>()
	{
		return ALandscape::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscape);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_Statics::EnumInfo[] = {
		{ ELandscapeSetupErrors_StaticEnum, TEXT("ELandscapeSetupErrors"), &Z_Registration_Info_UEnum_ELandscapeSetupErrors, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3142937995U) },
		{ ERTDrawingType_StaticEnum, TEXT("ERTDrawingType"), &Z_Registration_Info_UEnum_ERTDrawingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1479816216U) },
		{ EHeightmapRTType_StaticEnum, TEXT("EHeightmapRTType"), &Z_Registration_Info_UEnum_EHeightmapRTType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2771326471U) },
		{ EWeightmapRTType_StaticEnum, TEXT("EWeightmapRTType"), &Z_Registration_Info_UEnum_EWeightmapRTType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 394878236U) },
		{ ELandscapeBlendMode_StaticEnum, TEXT("ELandscapeBlendMode"), &Z_Registration_Info_UEnum_ELandscapeBlendMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2659959532U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_Statics::ScriptStructInfo[] = {
		{ FLandscapeLayerBrush::StaticStruct, Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::NewStructOps, TEXT("LandscapeLayerBrush"), &Z_Registration_Info_UScriptStruct_LandscapeLayerBrush, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeLayerBrush), 67599205U) },
		{ FLandscapeLayer::StaticStruct, Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewStructOps, TEXT("LandscapeLayer"), &Z_Registration_Info_UScriptStruct_LandscapeLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeLayer), 104966545U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALandscape, ALandscape::StaticClass, TEXT("ALandscape"), &Z_Registration_Info_UClass_ALandscape, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALandscape), 251452875U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_539920400(TEXT("/Script/Landscape"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
