// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/Texture.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexture() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureFilter();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureMipCount();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureSourceArtType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureCompressionQuality();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureSourceBlock();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureSource();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureSourceCompressionFormat();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureSourceFormat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTexturePlatformData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureFormatSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureCompressionSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureSourceColorSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureSourceEncoding();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureColorSpace();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureChromaticAdaptationMethod();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	ENGINE_API UClass* Z_Construct_UClass_UStreamableRenderAsset();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureLossyCompressionAmount();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETexturePowerOfTwoSetting();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureMipGenSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECompositeTextureMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureMipLoadOptions();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureGroup();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureDownscaleOptions();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AsyncCompilation_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_TextureFilter;
	static UEnum* TextureFilter_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_TextureFilter.OuterSingleton)
		{
			Z_Registration_Info_UEnum_TextureFilter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_TextureFilter, Z_Construct_UPackage__Script_Engine(), TEXT("TextureFilter"));
		}
		return Z_Registration_Info_UEnum_TextureFilter.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<TextureFilter>()
	{
		return TextureFilter_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_TextureFilter_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_TextureFilter_Statics::Enumerators[] = {
		{ "TF_Nearest", (int64)TF_Nearest },
		{ "TF_Bilinear", (int64)TF_Bilinear },
		{ "TF_Trilinear", (int64)TF_Trilinear },
		{ "TF_Default", (int64)TF_Default },
		{ "TF_MAX", (int64)TF_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_TextureFilter_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "TF_Bilinear.DisplayName", "Bi-linear" },
		{ "TF_Bilinear.Name", "TF_Bilinear" },
		{ "TF_Default.Comment", "/** Use setting from the Texture Group. */" },
		{ "TF_Default.DisplayName", "Default (from Texture Group)" },
		{ "TF_Default.Name", "TF_Default" },
		{ "TF_Default.ToolTip", "Use setting from the Texture Group." },
		{ "TF_MAX.Name", "TF_MAX" },
		{ "TF_Nearest.DisplayName", "Nearest" },
		{ "TF_Nearest.Name", "TF_Nearest" },
		{ "TF_Trilinear.DisplayName", "Tri-linear" },
		{ "TF_Trilinear.Name", "TF_Trilinear" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_TextureFilter_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"TextureFilter",
		"TextureFilter",
		Z_Construct_UEnum_Engine_TextureFilter_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_TextureFilter_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_TextureFilter_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_TextureFilter_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_TextureFilter()
	{
		if (!Z_Registration_Info_UEnum_TextureFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_TextureFilter.InnerSingleton, Z_Construct_UEnum_Engine_TextureFilter_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_TextureFilter.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_TextureAddress;
	static UEnum* TextureAddress_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_TextureAddress.OuterSingleton)
		{
			Z_Registration_Info_UEnum_TextureAddress.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_TextureAddress, Z_Construct_UPackage__Script_Engine(), TEXT("TextureAddress"));
		}
		return Z_Registration_Info_UEnum_TextureAddress.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<TextureAddress>()
	{
		return TextureAddress_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_TextureAddress_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_TextureAddress_Statics::Enumerators[] = {
		{ "TA_Wrap", (int64)TA_Wrap },
		{ "TA_Clamp", (int64)TA_Clamp },
		{ "TA_Mirror", (int64)TA_Mirror },
		{ "TA_MAX", (int64)TA_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_TextureAddress_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "TA_Clamp.DisplayName", "Clamp" },
		{ "TA_Clamp.Name", "TA_Clamp" },
		{ "TA_MAX.Name", "TA_MAX" },
		{ "TA_Mirror.DisplayName", "Mirror" },
		{ "TA_Mirror.Name", "TA_Mirror" },
		{ "TA_Wrap.DisplayName", "Wrap" },
		{ "TA_Wrap.Name", "TA_Wrap" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_TextureAddress_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"TextureAddress",
		"TextureAddress",
		Z_Construct_UEnum_Engine_TextureAddress_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_TextureAddress_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_TextureAddress_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_TextureAddress_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_TextureAddress()
	{
		if (!Z_Registration_Info_UEnum_TextureAddress.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_TextureAddress.InnerSingleton, Z_Construct_UEnum_Engine_TextureAddress_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_TextureAddress.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureMipCount;
	static UEnum* ETextureMipCount_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureMipCount.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureMipCount.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureMipCount, Z_Construct_UPackage__Script_Engine(), TEXT("ETextureMipCount"));
		}
		return Z_Registration_Info_UEnum_ETextureMipCount.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETextureMipCount>()
	{
		return ETextureMipCount_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETextureMipCount_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETextureMipCount_Statics::Enumerators[] = {
		{ "TMC_ResidentMips", (int64)TMC_ResidentMips },
		{ "TMC_AllMips", (int64)TMC_AllMips },
		{ "TMC_AllMipsBiased", (int64)TMC_AllMipsBiased },
		{ "TMC_MAX", (int64)TMC_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETextureMipCount_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "TMC_AllMips.Name", "TMC_AllMips" },
		{ "TMC_AllMipsBiased.Name", "TMC_AllMipsBiased" },
		{ "TMC_MAX.Name", "TMC_MAX" },
		{ "TMC_ResidentMips.Name", "TMC_ResidentMips" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETextureMipCount_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETextureMipCount",
		"ETextureMipCount",
		Z_Construct_UEnum_Engine_ETextureMipCount_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureMipCount_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETextureMipCount_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureMipCount_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETextureMipCount()
	{
		if (!Z_Registration_Info_UEnum_ETextureMipCount.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureMipCount.InnerSingleton, Z_Construct_UEnum_Engine_ETextureMipCount_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureMipCount.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureSourceArtType;
	static UEnum* ETextureSourceArtType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureSourceArtType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureSourceArtType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureSourceArtType, Z_Construct_UPackage__Script_Engine(), TEXT("ETextureSourceArtType"));
		}
		return Z_Registration_Info_UEnum_ETextureSourceArtType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETextureSourceArtType>()
	{
		return ETextureSourceArtType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETextureSourceArtType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETextureSourceArtType_Statics::Enumerators[] = {
		{ "TSAT_Uncompressed", (int64)TSAT_Uncompressed },
		{ "TSAT_PNGCompressed", (int64)TSAT_PNGCompressed },
		{ "TSAT_DDSFile", (int64)TSAT_DDSFile },
		{ "TSAT_MAX", (int64)TSAT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETextureSourceArtType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "TSAT_DDSFile.Comment", "/** DDS file with header. */" },
		{ "TSAT_DDSFile.Name", "TSAT_DDSFile" },
		{ "TSAT_DDSFile.ToolTip", "DDS file with header." },
		{ "TSAT_MAX.Name", "TSAT_MAX" },
		{ "TSAT_PNGCompressed.Comment", "/** PNG compresed version of FColor Data[SrcWidth * SrcHeight]. */" },
		{ "TSAT_PNGCompressed.Name", "TSAT_PNGCompressed" },
		{ "TSAT_PNGCompressed.ToolTip", "PNG compresed version of FColor Data[SrcWidth * SrcHeight]." },
		{ "TSAT_Uncompressed.Comment", "/** FColor Data[SrcWidth * SrcHeight]. */" },
		{ "TSAT_Uncompressed.Name", "TSAT_Uncompressed" },
		{ "TSAT_Uncompressed.ToolTip", "FColor Data[SrcWidth * SrcHeight]." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETextureSourceArtType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETextureSourceArtType",
		"ETextureSourceArtType",
		Z_Construct_UEnum_Engine_ETextureSourceArtType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureSourceArtType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETextureSourceArtType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureSourceArtType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETextureSourceArtType()
	{
		if (!Z_Registration_Info_UEnum_ETextureSourceArtType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureSourceArtType.InnerSingleton, Z_Construct_UEnum_Engine_ETextureSourceArtType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureSourceArtType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureCompressionQuality;
	static UEnum* ETextureCompressionQuality_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureCompressionQuality.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureCompressionQuality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureCompressionQuality, Z_Construct_UPackage__Script_Engine(), TEXT("ETextureCompressionQuality"));
		}
		return Z_Registration_Info_UEnum_ETextureCompressionQuality.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETextureCompressionQuality>()
	{
		return ETextureCompressionQuality_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETextureCompressionQuality_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETextureCompressionQuality_Statics::Enumerators[] = {
		{ "TCQ_Default", (int64)TCQ_Default },
		{ "TCQ_Lowest", (int64)TCQ_Lowest },
		{ "TCQ_Low", (int64)TCQ_Low },
		{ "TCQ_Medium", (int64)TCQ_Medium },
		{ "TCQ_High", (int64)TCQ_High },
		{ "TCQ_Highest", (int64)TCQ_Highest },
		{ "TCQ_MAX", (int64)TCQ_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETextureCompressionQuality_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "TCQ_Default.DisplayName", "Default" },
		{ "TCQ_Default.Name", "TCQ_Default" },
		{ "TCQ_High.DisplayName", "High" },
		{ "TCQ_High.Name", "TCQ_High" },
		{ "TCQ_Highest.DisplayName", "Highest" },
		{ "TCQ_Highest.Name", "TCQ_Highest" },
		{ "TCQ_Low.DisplayName", "Low" },
		{ "TCQ_Low.Name", "TCQ_Low" },
		{ "TCQ_Lowest.DisplayName", "Lowest" },
		{ "TCQ_Lowest.Name", "TCQ_Lowest" },
		{ "TCQ_MAX.Name", "TCQ_MAX" },
		{ "TCQ_Medium.DisplayName", "Medium" },
		{ "TCQ_Medium.Name", "TCQ_Medium" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETextureCompressionQuality_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETextureCompressionQuality",
		"ETextureCompressionQuality",
		Z_Construct_UEnum_Engine_ETextureCompressionQuality_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureCompressionQuality_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETextureCompressionQuality_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureCompressionQuality_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETextureCompressionQuality()
	{
		if (!Z_Registration_Info_UEnum_ETextureCompressionQuality.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureCompressionQuality.InnerSingleton, Z_Construct_UEnum_Engine_ETextureCompressionQuality_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureCompressionQuality.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextureSourceBlock;
class UScriptStruct* FTextureSourceBlock::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextureSourceBlock.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextureSourceBlock.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureSourceBlock, Z_Construct_UPackage__Script_Engine(), TEXT("TextureSourceBlock"));
	}
	return Z_Registration_Info_UScriptStruct_TextureSourceBlock.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTextureSourceBlock>()
{
	return FTextureSourceBlock::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTextureSourceBlock_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BlockX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BlockY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSlices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSlices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumMips_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumMips;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureSourceBlock>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_BlockX_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_BlockX = { "BlockX", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSourceBlock, BlockX), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_BlockX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_BlockX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_BlockY_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_BlockY = { "BlockY", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSourceBlock, BlockY), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_BlockY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_BlockY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_SizeX_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSourceBlock, SizeX), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_SizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_SizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_SizeY_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSourceBlock, SizeY), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_SizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_SizeY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_NumSlices_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_NumSlices = { "NumSlices", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSourceBlock, NumSlices), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_NumSlices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_NumSlices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_NumMips_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_NumMips = { "NumMips", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSourceBlock, NumMips), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_NumMips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_NumMips_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_BlockX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_BlockY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_SizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_SizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_NumSlices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewProp_NumMips,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TextureSourceBlock",
		sizeof(FTextureSourceBlock),
		alignof(FTextureSourceBlock),
		Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTextureSourceBlock()
	{
		if (!Z_Registration_Info_UScriptStruct_TextureSourceBlock.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextureSourceBlock.InnerSingleton, Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TextureSourceBlock.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextureSource;
class UScriptStruct* FTextureSource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextureSource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextureSource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureSource, Z_Construct_UPackage__Script_Engine(), TEXT("TextureSource"));
	}
	return Z_Registration_Info_UScriptStruct_TextureSource.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTextureSource>()
{
	return FTextureSource::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTextureSource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseBlockX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BaseBlockX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseBlockY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BaseBlockY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSlices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSlices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumMips_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumMips;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumLayers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPNGCompressed_MetaData[];
#endif
		static void NewProp_bPNGCompressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPNGCompressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLongLatCubemap_MetaData[];
#endif
		static void NewProp_bLongLatCubemap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLongLatCubemap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionFormat_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CompressionFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGuidIsHash_MetaData[];
#endif
		static void NewProp_bGuidIsHash_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGuidIsHash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Format;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LayerFormat_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerFormat_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerFormat;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Blocks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blocks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Blocks;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_BlockDataOffsets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockDataOffsets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BlockDataOffsets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSource_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Texture source data management.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Texture source data management." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextureSource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureSource>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** GUID used to track changes to the source data. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "GUID used to track changes to the source data." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSource, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BaseBlockX_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Position of texture block0, only relevant if source has multiple blocks */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Position of texture block0, only relevant if source has multiple blocks" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BaseBlockX = { "BaseBlockX", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSource, BaseBlockX), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BaseBlockX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BaseBlockX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BaseBlockY_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BaseBlockY = { "BaseBlockY", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSource, BaseBlockY), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BaseBlockY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BaseBlockY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_SizeX_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Width of the texture. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Width of the texture." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSource, SizeX), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_SizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_SizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_SizeY_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Height of the texture. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Height of the texture." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSource, SizeY), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_SizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_SizeY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumSlices_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Depth (volume textures) or faces (cube maps). */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Depth (volume textures) or faces (cube maps)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumSlices = { "NumSlices", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSource, NumSlices), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumSlices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumSlices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumMips_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Number of mips provided as source data for the texture. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Number of mips provided as source data for the texture." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumMips = { "NumMips", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSource, NumMips), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumMips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumMips_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumLayers_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Number of layers (for multi-layered virtual textures) provided as source data for the texture. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Number of layers (for multi-layered virtual textures) provided as source data for the texture." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumLayers = { "NumLayers", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSource, NumLayers), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumLayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bPNGCompressed_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** RGBA8 source data is optionally compressed as PNG. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "RGBA8 source data is optionally compressed as PNG." },
	};
#endif
	void Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bPNGCompressed_SetBit(void* Obj)
	{
		((FTextureSource*)Obj)->bPNGCompressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bPNGCompressed = { "bPNGCompressed", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTextureSource), &Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bPNGCompressed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bPNGCompressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bPNGCompressed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bLongLatCubemap_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/**\n\x09 * Source represents a cubemap in long/lat format, will have only 1 slice per cube, rather than 6 slices.\n\x09 * Not needed for non-array cubemaps, since we can just look at NumSlices == 1 or 6\n\x09 * But for cube arrays, no way of determining whether NumSlices=6 means 1 cubemap, or 6 long/lat cubemaps\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Source represents a cubemap in long/lat format, will have only 1 slice per cube, rather than 6 slices.\nNot needed for non-array cubemaps, since we can just look at NumSlices == 1 or 6\nBut for cube arrays, no way of determining whether NumSlices=6 means 1 cubemap, or 6 long/lat cubemaps" },
	};
#endif
	void Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bLongLatCubemap_SetBit(void* Obj)
	{
		((FTextureSource*)Obj)->bLongLatCubemap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bLongLatCubemap = { "bLongLatCubemap", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTextureSource), &Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bLongLatCubemap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bLongLatCubemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bLongLatCubemap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_CompressionFormat_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Compression format that source data is stored as. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Compression format that source data is stored as." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_CompressionFormat = { "CompressionFormat", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSource, CompressionFormat), Z_Construct_UEnum_Engine_ETextureSourceCompressionFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_CompressionFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_CompressionFormat_MetaData)) }; // 2293816384
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bGuidIsHash_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Uses hash instead of guid to identify content to improve DDC cache hit. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Uses hash instead of guid to identify content to improve DDC cache hit." },
	};
#endif
	void Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bGuidIsHash_SetBit(void* Obj)
	{
		((FTextureSource*)Obj)->bGuidIsHash = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bGuidIsHash = { "bGuidIsHash", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTextureSource), &Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bGuidIsHash_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bGuidIsHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bGuidIsHash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Format_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** Format in which the source data is stored. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Format in which the source data is stored." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSource, Format), Z_Construct_UEnum_Engine_ETextureSourceFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Format_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Format_MetaData)) }; // 2116497036
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_LayerFormat_Inner = { "LayerFormat", nullptr, (EPropertyFlags)0x0000000800020000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_ETextureSourceFormat, METADATA_PARAMS(nullptr, 0) }; // 2116497036
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_LayerFormat_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/** For multi-layered sources, each layer may have a different format (in this case LayerFormat[0] == Format) . */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "For multi-layered sources, each layer may have a different format (in this case LayerFormat[0] == Format) ." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_LayerFormat = { "LayerFormat", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSource, LayerFormat), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_LayerFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_LayerFormat_MetaData)) }; // 2116497036
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Blocks_Inner = { "Blocks", nullptr, (EPropertyFlags)0x0000000800020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTextureSourceBlock, METADATA_PARAMS(nullptr, 0) }; // 1146004261
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Blocks_MetaData[] = {
		{ "Category", "TextureSource" },
		{ "Comment", "/**\n\x09 * All sources have 1 implicit block defined by BaseBlockXY/SizeXY members.  Textures imported as UDIM may have additional blocks defined here.\n\x09 * These are stored sequentially in the source's bulk data.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "All sources have 1 implicit block defined by BaseBlockXY/SizeXY members.  Textures imported as UDIM may have additional blocks defined here.\nThese are stored sequentially in the source's bulk data." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Blocks = { "Blocks", nullptr, (EPropertyFlags)0x0040000800020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSource, Blocks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Blocks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Blocks_MetaData)) }; // 1146004261
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BlockDataOffsets_Inner = { "BlockDataOffsets", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BlockDataOffsets_MetaData[] = {
		{ "Comment", "/**\n\x09 * Offsets of each block (including Block0) in the bulk data.\n\x09 * Blocks are not necessarily stored in order, since block indices are sorted by X/Y location.\n\x09 * For non-UDIM textures, this will always have a single entry equal to 0\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Offsets of each block (including Block0) in the bulk data.\nBlocks are not necessarily stored in order, since block indices are sorted by X/Y location.\nFor non-UDIM textures, this will always have a single entry equal to 0" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BlockDataOffsets = { "BlockDataOffsets", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSource, BlockDataOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BlockDataOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BlockDataOffsets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BaseBlockX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BaseBlockY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_SizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_SizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumSlices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumMips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_NumLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bPNGCompressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bLongLatCubemap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_CompressionFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_bGuidIsHash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Format,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_LayerFormat_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_LayerFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Blocks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_Blocks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BlockDataOffsets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSource_Statics::NewProp_BlockDataOffsets,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureSource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TextureSource",
		sizeof(FTextureSource),
		alignof(FTextureSource),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FTextureSource_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSource_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSource_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTextureSource()
	{
		if (!Z_Registration_Info_UScriptStruct_TextureSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextureSource.InnerSingleton, Z_Construct_UScriptStruct_FTextureSource_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TextureSource.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TexturePlatformData;
class UScriptStruct* FTexturePlatformData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TexturePlatformData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TexturePlatformData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTexturePlatformData, Z_Construct_UPackage__Script_Engine(), TEXT("TexturePlatformData"));
	}
	return Z_Registration_Info_UScriptStruct_TexturePlatformData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTexturePlatformData>()
{
	return FTexturePlatformData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTexturePlatformData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTexturePlatformData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Platform-specific data used by the texture resource at runtime.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Platform-specific data used by the texture resource at runtime." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTexturePlatformData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTexturePlatformData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTexturePlatformData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TexturePlatformData",
		sizeof(FTexturePlatformData),
		alignof(FTexturePlatformData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTexturePlatformData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturePlatformData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTexturePlatformData()
	{
		if (!Z_Registration_Info_UScriptStruct_TexturePlatformData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TexturePlatformData.InnerSingleton, Z_Construct_UScriptStruct_FTexturePlatformData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TexturePlatformData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextureFormatSettings;
class UScriptStruct* FTextureFormatSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextureFormatSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextureFormatSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureFormatSettings, Z_Construct_UPackage__Script_Engine(), TEXT("TextureFormatSettings"));
	}
	return Z_Registration_Info_UScriptStruct_TextureFormatSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTextureFormatSettings>()
{
	return FTextureFormatSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTextureFormatSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CompressionSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionNoAlpha_MetaData[];
#endif
		static void NewProp_CompressionNoAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CompressionNoAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionForceAlpha_MetaData[];
#endif
		static void NewProp_CompressionForceAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CompressionForceAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionNone_MetaData[];
#endif
		static void NewProp_CompressionNone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CompressionNone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionYCoCg_MetaData[];
#endif
		static void NewProp_CompressionYCoCg_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CompressionYCoCg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SRGB_MetaData[];
#endif
		static void NewProp_SRGB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SRGB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Collection of values that contribute to pixel format chosen for texture\n */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Collection of values that contribute to pixel format chosen for texture" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureFormatSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionSettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionSettings = { "CompressionSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureFormatSettings, CompressionSettings), Z_Construct_UEnum_Engine_TextureCompressionSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionSettings_MetaData)) }; // 2773143375
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNoAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNoAlpha_SetBit(void* Obj)
	{
		((FTextureFormatSettings*)Obj)->CompressionNoAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNoAlpha = { "CompressionNoAlpha", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FTextureFormatSettings), &Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNoAlpha_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNoAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNoAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionForceAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionForceAlpha_SetBit(void* Obj)
	{
		((FTextureFormatSettings*)Obj)->CompressionForceAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionForceAlpha = { "CompressionForceAlpha", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FTextureFormatSettings), &Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionForceAlpha_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionForceAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionForceAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNone_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNone_SetBit(void* Obj)
	{
		((FTextureFormatSettings*)Obj)->CompressionNone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNone = { "CompressionNone", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FTextureFormatSettings), &Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNone_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionYCoCg_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionYCoCg_SetBit(void* Obj)
	{
		((FTextureFormatSettings*)Obj)->CompressionYCoCg = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionYCoCg = { "CompressionYCoCg", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FTextureFormatSettings), &Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionYCoCg_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionYCoCg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionYCoCg_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_SRGB_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_SRGB_SetBit(void* Obj)
	{
		((FTextureFormatSettings*)Obj)->SRGB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_SRGB = { "SRGB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FTextureFormatSettings), &Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_SRGB_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_SRGB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_SRGB_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNoAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionForceAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionNone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_CompressionYCoCg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewProp_SRGB,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TextureFormatSettings",
		sizeof(FTextureFormatSettings),
		alignof(FTextureFormatSettings),
		Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTextureFormatSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_TextureFormatSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextureFormatSettings.InnerSingleton, Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TextureFormatSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextureSourceColorSettings;
class UScriptStruct* FTextureSourceColorSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextureSourceColorSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextureSourceColorSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureSourceColorSettings, Z_Construct_UPackage__Script_Engine(), TEXT("TextureSourceColorSettings"));
	}
	return Z_Registration_Info_UScriptStruct_TextureSourceColorSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTextureSourceColorSettings>()
{
	return FTextureSourceColorSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_EncodingOverride_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EncodingOverride_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EncodingOverride;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColorSpace_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorSpace_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedChromaticityCoordinate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RedChromaticityCoordinate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GreenChromaticityCoordinate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GreenChromaticityCoordinate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueChromaticityCoordinate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlueChromaticityCoordinate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WhiteChromaticityCoordinate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WhiteChromaticityCoordinate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChromaticAdaptationMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChromaticAdaptationMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ChromaticAdaptationMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureSourceColorSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_EncodingOverride_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_EncodingOverride_MetaData[] = {
		{ "Category", "ColorManagement" },
		{ "Comment", "/** Source encoding of the texture, exposing more options than just sRGB. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Source encoding of the texture, exposing more options than just sRGB." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_EncodingOverride = { "EncodingOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSourceColorSettings, EncodingOverride), Z_Construct_UEnum_Engine_ETextureSourceEncoding, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_EncodingOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_EncodingOverride_MetaData)) }; // 3747482882
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_ColorSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_ColorSpace_MetaData[] = {
		{ "Category", "ColorManagement" },
		{ "Comment", "/** Source color space of the texture. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Source color space of the texture." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_ColorSpace = { "ColorSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSourceColorSettings, ColorSpace), Z_Construct_UEnum_Engine_ETextureColorSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_ColorSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_ColorSpace_MetaData)) }; // 2172019913
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_RedChromaticityCoordinate_MetaData[] = {
		{ "Category", "ColorManagement" },
		{ "Comment", "/** Red chromaticity coordinate of the source color space. */" },
		{ "EditCondition", "ColorSpace == ETextureColorSpace::TCS_Custom" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Red chromaticity coordinate of the source color space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_RedChromaticityCoordinate = { "RedChromaticityCoordinate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSourceColorSettings, RedChromaticityCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_RedChromaticityCoordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_RedChromaticityCoordinate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_GreenChromaticityCoordinate_MetaData[] = {
		{ "Category", "ColorManagement" },
		{ "Comment", "/** Green chromaticity coordinate of the source color space. */" },
		{ "EditCondition", "ColorSpace == ETextureColorSpace::TCS_Custom" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Green chromaticity coordinate of the source color space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_GreenChromaticityCoordinate = { "GreenChromaticityCoordinate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSourceColorSettings, GreenChromaticityCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_GreenChromaticityCoordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_GreenChromaticityCoordinate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_BlueChromaticityCoordinate_MetaData[] = {
		{ "Category", "ColorManagement" },
		{ "Comment", "/** Blue chromaticity coordinate of the source color space. */" },
		{ "EditCondition", "ColorSpace == ETextureColorSpace::TCS_Custom" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Blue chromaticity coordinate of the source color space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_BlueChromaticityCoordinate = { "BlueChromaticityCoordinate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSourceColorSettings, BlueChromaticityCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_BlueChromaticityCoordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_BlueChromaticityCoordinate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_WhiteChromaticityCoordinate_MetaData[] = {
		{ "Category", "ColorManagement" },
		{ "Comment", "/** White chromaticity coordinate of the source color space. */" },
		{ "EditCondition", "ColorSpace == ETextureColorSpace::TCS_Custom" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "White chromaticity coordinate of the source color space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_WhiteChromaticityCoordinate = { "WhiteChromaticityCoordinate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSourceColorSettings, WhiteChromaticityCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_WhiteChromaticityCoordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_WhiteChromaticityCoordinate_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_ChromaticAdaptationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_ChromaticAdaptationMethod_MetaData[] = {
		{ "Category", "ColorManagement" },
		{ "Comment", "/** Chromatic adaption method applied if the source white point differs from the working color space white point. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Chromatic adaption method applied if the source white point differs from the working color space white point." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_ChromaticAdaptationMethod = { "ChromaticAdaptationMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextureSourceColorSettings, ChromaticAdaptationMethod), Z_Construct_UEnum_Engine_ETextureChromaticAdaptationMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_ChromaticAdaptationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_ChromaticAdaptationMethod_MetaData)) }; // 171705
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_EncodingOverride_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_EncodingOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_ColorSpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_ColorSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_RedChromaticityCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_GreenChromaticityCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_BlueChromaticityCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_WhiteChromaticityCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_ChromaticAdaptationMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewProp_ChromaticAdaptationMethod,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TextureSourceColorSettings",
		sizeof(FTextureSourceColorSettings),
		alignof(FTextureSourceColorSettings),
		Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTextureSourceColorSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_TextureSourceColorSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextureSourceColorSettings.InnerSingleton, Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TextureSourceColorSettings.InnerSingleton;
	}
	void UTexture::StaticRegisterNativesUTexture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTexture);
	UClass* Z_Construct_UClass_UTexture_NoRegister()
	{
		return UTexture::StaticClass();
	}
	struct Z_Construct_UClass_UTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightingGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightingGuid;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetImportData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjustBrightness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustBrightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjustBrightnessCurve_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustBrightnessCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjustVibrance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustVibrance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjustSaturation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustSaturation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjustRGBCurve_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustRGBCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjustHue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustHue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjustMinAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustMinAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjustMaxAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustMaxAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionNoAlpha_MetaData[];
#endif
		static void NewProp_CompressionNoAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CompressionNoAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionNone_MetaData[];
#endif
		static void NewProp_CompressionNone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CompressionNone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeferCompression_MetaData[];
#endif
		static void NewProp_DeferCompression_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DeferCompression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LossyCompressionAmount_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LossyCompressionAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OodleTextureSdkVersion_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OodleTextureSdkVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTextureSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTextureSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionQuality_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CompressionQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDitherMipMapAlpha_MetaData[];
#endif
		static void NewProp_bDitherMipMapAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDitherMipMapAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoScaleMipsForAlphaCoverage_MetaData[];
#endif
		static void NewProp_bDoScaleMipsForAlphaCoverage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoScaleMipsForAlphaCoverage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaCoverageThresholds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaCoverageThresholds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveBorder_MetaData[];
#endif
		static void NewProp_bPreserveBorder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveBorder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlipGreenChannel_MetaData[];
#endif
		static void NewProp_bFlipGreenChannel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipGreenChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PowerOfTwoMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PowerOfTwoMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaddingColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PaddingColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bChromaKeyTexture_MetaData[];
#endif
		static void NewProp_bChromaKeyTexture_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bChromaKeyTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChromaKeyThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChromaKeyThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChromaKeyColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChromaKeyColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MipGenSettings_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MipGenSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompositeTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CompositeTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompositeTextureMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CompositeTextureMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompositePower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CompositePower;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayerFormatSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerFormatSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerFormatSettings;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LevelIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODBias_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CompressionSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Filter;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MipLoadOptions_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MipLoadOptions_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MipLoadOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODGroup_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LODGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Downscale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Downscale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DownscaleOptions_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownscaleOptions_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DownscaleOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SRGB_MetaData[];
#endif
		static void NewProp_SRGB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SRGB;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceColorSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceColorSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyGamma_MetaData[];
#endif
		static void NewProp_bUseLegacyGamma_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyGamma;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNoTiling_MetaData[];
#endif
		static void NewProp_bNoTiling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoTiling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureStreaming_MetaData[];
#endif
		static void NewProp_VirtualTextureStreaming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_VirtualTextureStreaming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionYCoCg_MetaData[];
#endif
		static void NewProp_CompressionYCoCg_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CompressionYCoCg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNotOfflineProcessed_MetaData[];
#endif
		static void NewProp_bNotOfflineProcessed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotOfflineProcessed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAsyncResourceReleaseHasBeenStarted_MetaData[];
#endif
		static void NewProp_bAsyncResourceReleaseHasBeenStarted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAsyncResourceReleaseHasBeenStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetUserData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStreamableRenderAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Engine/Texture.h" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_Source_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, Source), Z_Construct_UScriptStruct_FTextureSource, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_Source_MetaData)) }; // 3537380579
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_LightingGuid_MetaData[] = {
		{ "Comment", "/** Unique ID for this material, used for caching during distributed lighting */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Unique ID for this material, used for caching during distributed lighting" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_LightingGuid = { "LightingGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, LightingGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_LightingGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_LightingGuid_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_SourceFilePath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_SourceFilePath = { "SourceFilePath", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, SourceFilePath_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_SourceFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_SourceFilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_AssetImportData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_AdjustBrightness_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "Comment", "/** Static texture brightness adjustment (scales HSV value.)  (Non-destructive; Requires texture source art to be available.) */" },
		{ "DisplayName", "Brightness" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Static texture brightness adjustment (scales HSV value.)  (Non-destructive; Requires texture source art to be available.)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AdjustBrightness = { "AdjustBrightness", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, AdjustBrightness), METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustBrightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_AdjustBrightnessCurve_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "Comment", "/** Static texture curve adjustment (raises HSV value to the specified power.)  (Non-destructive; Requires texture source art to be available.)  */" },
		{ "DisplayName", "Brightness Curve" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Static texture curve adjustment (raises HSV value to the specified power.)  (Non-destructive; Requires texture source art to be available.)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AdjustBrightnessCurve = { "AdjustBrightnessCurve", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, AdjustBrightnessCurve), METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustBrightnessCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustBrightnessCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_AdjustVibrance_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Static texture \"vibrance\" adjustment (0 - 1) (HSV saturation algorithm adjustment.)  (Non-destructive; Requires texture source art to be available.)  */" },
		{ "DisplayName", "Vibrance" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Static texture \"vibrance\" adjustment (0 - 1) (HSV saturation algorithm adjustment.)  (Non-destructive; Requires texture source art to be available.)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AdjustVibrance = { "AdjustVibrance", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, AdjustVibrance), METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustVibrance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustVibrance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_AdjustSaturation_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "Comment", "/** Static texture saturation adjustment (scales HSV saturation.)  (Non-destructive; Requires texture source art to be available.)  */" },
		{ "DisplayName", "Saturation" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Static texture saturation adjustment (scales HSV saturation.)  (Non-destructive; Requires texture source art to be available.)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AdjustSaturation = { "AdjustSaturation", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, AdjustSaturation), METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustSaturation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustSaturation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_AdjustRGBCurve_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "Comment", "/** Static texture RGB curve adjustment (raises linear-space RGB color to the specified power.)  (Non-destructive; Requires texture source art to be available.)  */" },
		{ "DisplayName", "RGBCurve" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Static texture RGB curve adjustment (raises linear-space RGB color to the specified power.)  (Non-destructive; Requires texture source art to be available.)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AdjustRGBCurve = { "AdjustRGBCurve", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, AdjustRGBCurve), METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustRGBCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustRGBCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_AdjustHue_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Static texture hue adjustment (0 - 360) (offsets HSV hue by value in degrees.)  (Non-destructive; Requires texture source art to be available.)  */" },
		{ "DisplayName", "Hue" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Static texture hue adjustment (0 - 360) (offsets HSV hue by value in degrees.)  (Non-destructive; Requires texture source art to be available.)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AdjustHue = { "AdjustHue", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, AdjustHue), METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustHue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustHue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_AdjustMinAlpha_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "Comment", "/** Remaps the alpha to the specified min/max range, defines the new value of 0 (Non-destructive; Requires texture source art to be available.) */" },
		{ "DisplayName", "Min Alpha" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Remaps the alpha to the specified min/max range, defines the new value of 0 (Non-destructive; Requires texture source art to be available.)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AdjustMinAlpha = { "AdjustMinAlpha", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, AdjustMinAlpha), METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustMinAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustMinAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_AdjustMaxAlpha_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "Comment", "/** Remaps the alpha to the specified min/max range, defines the new value of 1 (Non-destructive; Requires texture source art to be available.) */" },
		{ "DisplayName", "Max Alpha" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Remaps the alpha to the specified min/max range, defines the new value of 1 (Non-destructive; Requires texture source art to be available.)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AdjustMaxAlpha = { "AdjustMaxAlpha", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, AdjustMaxAlpha), METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustMaxAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_AdjustMaxAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNoAlpha_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** If enabled, the texture's alpha channel will be discarded during compression */" },
		{ "DisplayName", "Compress Without Alpha" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "If enabled, the texture's alpha channel will be discarded during compression" },
	};
#endif
	void Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNoAlpha_SetBit(void* Obj)
	{
		((UTexture*)Obj)->CompressionNoAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNoAlpha = { "CompressionNoAlpha", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNoAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNoAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNoAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNone_MetaData[] = {
		{ "Comment", "/** If true, force the texture to be uncompressed no matter the format. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "If true, force the texture to be uncompressed no matter the format." },
	};
#endif
	void Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNone_SetBit(void* Obj)
	{
		((UTexture*)Obj)->CompressionNone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNone = { "CompressionNone", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNone_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_DeferCompression_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** If enabled, defer compression of the texture until save or manually compressed in the texture editor. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "If enabled, defer compression of the texture until save or manually compressed in the texture editor." },
	};
#endif
	void Z_Construct_UClass_UTexture_Statics::NewProp_DeferCompression_SetBit(void* Obj)
	{
		((UTexture*)Obj)->DeferCompression = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_DeferCompression = { "DeferCompression", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_DeferCompression_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_DeferCompression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_DeferCompression_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_LossyCompressionAmount_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** How aggressively should any relevant lossy compression be applied. For compressors that support EncodeSpeed (i.e. Oodle), this is only\n\x09*\x09""applied if enabled (see Project Settings -> Texture Encoding). Note that this is *in addition* to any\n\x09*\x09unavoidable loss due to the target format - selecting \"No Lossy Compression\" will not result in zero distortion for BCn formats.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "How aggressively should any relevant lossy compression be applied. For compressors that support EncodeSpeed (i.e. Oodle), this is only\n     applied if enabled (see Project Settings -> Texture Encoding). Note that this is *in addition* to any\n     unavoidable loss due to the target format - selecting \"No Lossy Compression\" will not result in zero distortion for BCn formats." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_LossyCompressionAmount = { "LossyCompressionAmount", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, LossyCompressionAmount), Z_Construct_UEnum_Engine_ETextureLossyCompressionAmount, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_LossyCompressionAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_LossyCompressionAmount_MetaData)) }; // 1037091311
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_OodleTextureSdkVersion_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** Oodle Texture SDK Version to encode with.  Enter 'latest' to update; 'None' preserves legacy encoding to avoid patches. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Oodle Texture SDK Version to encode with.  Enter 'latest' to update; 'None' preserves legacy encoding to avoid patches." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_OodleTextureSdkVersion = { "OodleTextureSdkVersion", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, OodleTextureSdkVersion), METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_OodleTextureSdkVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_OodleTextureSdkVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_MaxTextureSize_MetaData[] = {
		{ "Category", "Compression" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The maximum resolution for generated textures. A value of 0 means the maximum size for the format on each platform. */" },
		{ "DisplayName", "Maximum Texture Size" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "The maximum resolution for generated textures. A value of 0 means the maximum size for the format on each platform." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_MaxTextureSize = { "MaxTextureSize", nullptr, (EPropertyFlags)0x0010040800000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, MaxTextureSize), METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_MaxTextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_MaxTextureSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_CompressionQuality_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** The compression quality for generated ASTC textures (i.e. mobile platform textures). */" },
		{ "DisplayName", "ASTC Compression Quality" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "The compression quality for generated ASTC textures (i.e. mobile platform textures)." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_CompressionQuality = { "CompressionQuality", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, CompressionQuality), Z_Construct_UEnum_Engine_ETextureCompressionQuality, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_CompressionQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_CompressionQuality_MetaData)) }; // 2168794793
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_bDitherMipMapAlpha_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** When true, the alpha channel of mip-maps and the base image are dithered for smooth LOD transitions. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "When true, the alpha channel of mip-maps and the base image are dithered for smooth LOD transitions." },
	};
#endif
	void Z_Construct_UClass_UTexture_Statics::NewProp_bDitherMipMapAlpha_SetBit(void* Obj)
	{
		((UTexture*)Obj)->bDitherMipMapAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_bDitherMipMapAlpha = { "bDitherMipMapAlpha", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_bDitherMipMapAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_bDitherMipMapAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_bDitherMipMapAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_bDoScaleMipsForAlphaCoverage_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Whether mip RGBA should be scaled to preserve the number of pixels with Value >= AlphaCoverageThresholds.  AlphaCoverageThresholds are ignored if this is off. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Whether mip RGBA should be scaled to preserve the number of pixels with Value >= AlphaCoverageThresholds.  AlphaCoverageThresholds are ignored if this is off." },
	};
#endif
	void Z_Construct_UClass_UTexture_Statics::NewProp_bDoScaleMipsForAlphaCoverage_SetBit(void* Obj)
	{
		((UTexture*)Obj)->bDoScaleMipsForAlphaCoverage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_bDoScaleMipsForAlphaCoverage = { "bDoScaleMipsForAlphaCoverage", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_bDoScaleMipsForAlphaCoverage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_bDoScaleMipsForAlphaCoverage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_bDoScaleMipsForAlphaCoverage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_AlphaCoverageThresholds_MetaData[] = {
		{ "Category", "Texture" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Alpha values per channel to compare to when preserving alpha coverage. 0 means disable channel.  Typical good values in 0.5 - 0.9, not 1.0 */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Alpha values per channel to compare to when preserving alpha coverage. 0 means disable channel.  Typical good values in 0.5 - 0.9, not 1.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AlphaCoverageThresholds = { "AlphaCoverageThresholds", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, AlphaCoverageThresholds), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_AlphaCoverageThresholds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_AlphaCoverageThresholds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_bPreserveBorder_MetaData[] = {
		{ "Category", "LevelOfDetail" },
		{ "Comment", "/** When true the texture's border will be preserved during mipmap generation. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "When true the texture's border will be preserved during mipmap generation." },
	};
#endif
	void Z_Construct_UClass_UTexture_Statics::NewProp_bPreserveBorder_SetBit(void* Obj)
	{
		((UTexture*)Obj)->bPreserveBorder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_bPreserveBorder = { "bPreserveBorder", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_bPreserveBorder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_bPreserveBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_bPreserveBorder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_bFlipGreenChannel_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** When true the texture's green channel will be inverted. This is useful for some normal maps. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "When true the texture's green channel will be inverted. This is useful for some normal maps." },
	};
#endif
	void Z_Construct_UClass_UTexture_Statics::NewProp_bFlipGreenChannel_SetBit(void* Obj)
	{
		((UTexture*)Obj)->bFlipGreenChannel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_bFlipGreenChannel = { "bFlipGreenChannel", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_bFlipGreenChannel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_bFlipGreenChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_bFlipGreenChannel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_PowerOfTwoMode_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** How to pad the texture to a power of 2 size (if necessary) */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "How to pad the texture to a power of 2 size (if necessary)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_PowerOfTwoMode = { "PowerOfTwoMode", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, PowerOfTwoMode), Z_Construct_UEnum_Engine_ETexturePowerOfTwoSetting, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_PowerOfTwoMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_PowerOfTwoMode_MetaData)) }; // 306375142
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_PaddingColor_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** The color used to pad the texture out if it is resized due to PowerOfTwoMode */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "The color used to pad the texture out if it is resized due to PowerOfTwoMode" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_PaddingColor = { "PaddingColor", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, PaddingColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_PaddingColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_PaddingColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_bChromaKeyTexture_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "Comment", "/** Whether to chroma key the image, replacing any pixels that match ChromaKeyColor with transparent black */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Whether to chroma key the image, replacing any pixels that match ChromaKeyColor with transparent black" },
	};
#endif
	void Z_Construct_UClass_UTexture_Statics::NewProp_bChromaKeyTexture_SetBit(void* Obj)
	{
		((UTexture*)Obj)->bChromaKeyTexture = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_bChromaKeyTexture = { "bChromaKeyTexture", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_bChromaKeyTexture_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_bChromaKeyTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_bChromaKeyTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_ChromaKeyThreshold_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The threshold that components have to match for the texel to be considered equal to the ChromaKeyColor when chroma keying (<=, set to 0 to require a perfect exact match) */" },
		{ "EditCondition", "bChromaKeyTexture" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "The threshold that components have to match for the texel to be considered equal to the ChromaKeyColor when chroma keying (<=, set to 0 to require a perfect exact match)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_ChromaKeyThreshold = { "ChromaKeyThreshold", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, ChromaKeyThreshold), METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_ChromaKeyThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_ChromaKeyThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_ChromaKeyColor_MetaData[] = {
		{ "Category", "Adjustments" },
		{ "Comment", "/** The color that will be replaced with transparent black if chroma keying is enabled */" },
		{ "EditCondition", "bChromaKeyTexture" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "The color that will be replaced with transparent black if chroma keying is enabled" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_ChromaKeyColor = { "ChromaKeyColor", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, ChromaKeyColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_ChromaKeyColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_ChromaKeyColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_MipGenSettings_MetaData[] = {
		{ "Category", "LevelOfDetail" },
		{ "Comment", "/** Per asset specific setting to define the mip-map generation properties like sharpening and kernel size. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Per asset specific setting to define the mip-map generation properties like sharpening and kernel size." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_MipGenSettings = { "MipGenSettings", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, MipGenSettings), Z_Construct_UEnum_Engine_TextureMipGenSettings, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_MipGenSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_MipGenSettings_MetaData)) }; // 3224170763
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_CompositeTexture_MetaData[] = {
		{ "Category", "Compositing" },
		{ "Comment", "/**\n\x09 * Can be defined to modify the roughness based on the normal map variation (mostly from mip maps).\n\x09 * MaxAlpha comes in handy to define a base roughness if no source alpha was there.\n\x09 * Make sure the normal map has at least as many mips as this texture.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Can be defined to modify the roughness based on the normal map variation (mostly from mip maps).\nMaxAlpha comes in handy to define a base roughness if no source alpha was there.\nMake sure the normal map has at least as many mips as this texture." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_CompositeTexture = { "CompositeTexture", nullptr, (EPropertyFlags)0x0014000800000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, CompositeTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_CompositeTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_CompositeTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_CompositeTextureMode_MetaData[] = {
		{ "Category", "Compositing" },
		{ "Comment", "/* defines how the CompositeTexture is applied, e.g. CTM_RoughnessFromNormalAlpha */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "defines how the CompositeTexture is applied, e.g. CTM_RoughnessFromNormalAlpha" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_CompositeTextureMode = { "CompositeTextureMode", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, CompositeTextureMode), Z_Construct_UEnum_Engine_ECompositeTextureMode, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_CompositeTextureMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_CompositeTextureMode_MetaData)) }; // 1321184244
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_CompositePower_MetaData[] = {
		{ "Category", "Compositing" },
		{ "Comment", "/**\n\x09 * default 1, high values result in a stronger effect e.g 1, 2, 4, 8\n\x09 * this is no slider because the texture update would not be fast enough\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "default 1, high values result in a stronger effect e.g 1, 2, 4, 8\nthis is no slider because the texture update would not be fast enough" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_CompositePower = { "CompositePower", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, CompositePower), METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_CompositePower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_CompositePower_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_LayerFormatSettings_Inner = { "LayerFormatSettings", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTextureFormatSettings, METADATA_PARAMS(nullptr, 0) }; // 3161851960
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_LayerFormatSettings_MetaData[] = {
		{ "Comment", "/**\n\x09 * Array of settings used to control the format of given layer\n\x09 * If this array doesn't include an entry for a given layer, values from UTexture will be used\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Array of settings used to control the format of given layer\nIf this array doesn't include an entry for a given layer, values from UTexture will be used" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_LayerFormatSettings = { "LayerFormatSettings", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, LayerFormatSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_LayerFormatSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_LayerFormatSettings_MetaData)) }; // 3161851960
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_LevelIndex_MetaData[] = {
		{ "Comment", "/*\n\x09 * Level scope index of this texture. It is used to reduce the amount of lookup to map a texture to its level index.\n\x09 * Useful when building texture streaming data, as well as when filling the texture streamer with precomputed data.\n     * It relates to FStreamingTextureBuildInfo::TextureLevelIndex and also the index in ULevel::StreamingTextureGuids. \n\x09 * Default value of -1, indicates that the texture has an unknown index (not yet processed). At level load time, \n\x09 * -2 is also used to indicate that the texture has been processed but no entry were found in the level table.\n\x09 * After any of these processes, the LevelIndex is reset to INDEX_NONE. Making it ready for the next level task.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "* Level scope index of this texture. It is used to reduce the amount of lookup to map a texture to its level index.\n* Useful when building texture streaming data, as well as when filling the texture streamer with precomputed data.\n* It relates to FStreamingTextureBuildInfo::TextureLevelIndex and also the index in ULevel::StreamingTextureGuids.\n* Default value of -1, indicates that the texture has an unknown index (not yet processed). At level load time,\n* -2 is also used to indicate that the texture has been processed but no entry were found in the level table.\n* After any of these processes, the LevelIndex is reset to INDEX_NONE. Making it ready for the next level task." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_LevelIndex = { "LevelIndex", nullptr, (EPropertyFlags)0x0010000400202000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, LevelIndex), METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_LevelIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_LevelIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_LODBias_MetaData[] = {
		{ "Category", "LevelOfDetail" },
		{ "Comment", "/** A bias to the index of the top mip level to use. */" },
		{ "DisplayName", "LOD Bias" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "A bias to the index of the top mip level to use." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_LODBias = { "LODBias", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, LODBias), METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_LODBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_LODBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_CompressionSettings_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** Compression settings to use when building the texture. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Compression settings to use when building the texture." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_CompressionSettings = { "CompressionSettings", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, CompressionSettings), Z_Construct_UEnum_Engine_TextureCompressionSettings, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_CompressionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_CompressionSettings_MetaData)) }; // 2773143375
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_Filter_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** The texture filtering mode to use when sampling this texture. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "The texture filtering mode to use when sampling this texture." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, Filter), Z_Construct_UEnum_Engine_TextureFilter, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_Filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_Filter_MetaData)) }; // 3285266737
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_MipLoadOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_MipLoadOptions_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** The texture mip load options. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "The texture mip load options." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_MipLoadOptions = { "MipLoadOptions", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, MipLoadOptions), Z_Construct_UEnum_Engine_ETextureMipLoadOptions, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_MipLoadOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_MipLoadOptions_MetaData)) }; // 1752741819
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_LODGroup_MetaData[] = {
		{ "Category", "LevelOfDetail" },
		{ "Comment", "/** Texture group this texture belongs to */" },
		{ "DisplayName", "Texture Group" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Texture group this texture belongs to" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_LODGroup = { "LODGroup", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, LODGroup), Z_Construct_UEnum_Engine_TextureGroup, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_LODGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_LODGroup_MetaData)) }; // 955158388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_Downscale_MetaData[] = {
		{ "Category", "LevelOfDetail" },
		{ "ClampMax", "8.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Downscale source texture, applied only to textures without mips \n\x09 * 0.0 - use scale value from texture group\n\x09 * 1.0 - do not scale texture\n\x09 * > 1.0 - scale texure\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Downscale source texture, applied only to textures without mips\n0.0 - use scale value from texture group\n1.0 - do not scale texture\n> 1.0 - scale texure" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_Downscale = { "Downscale", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, Downscale), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_Downscale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_Downscale_MetaData)) }; // 1815855046
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_DownscaleOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_DownscaleOptions_MetaData[] = {
		{ "Category", "LevelOfDetail" },
		{ "Comment", "/** Texture downscaling options */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Texture downscaling options" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_DownscaleOptions = { "DownscaleOptions", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, DownscaleOptions), Z_Construct_UEnum_Engine_ETextureDownscaleOptions, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_DownscaleOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_DownscaleOptions_MetaData)) }; // 15399735
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_SRGB_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** This should be unchecked if using alpha channels individually as masks. */" },
		{ "DisplayName", "sRGB" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "This should be unchecked if using alpha channels individually as masks." },
	};
#endif
	void Z_Construct_UClass_UTexture_Statics::NewProp_SRGB_SetBit(void* Obj)
	{
		((UTexture*)Obj)->SRGB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_SRGB = { "SRGB", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_SRGB_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_SRGB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_SRGB_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_SourceColorSettings_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Texture color management settings: source encoding and color space. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Texture color management settings: source encoding and color space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_SourceColorSettings = { "SourceColorSettings", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, SourceColorSettings), Z_Construct_UScriptStruct_FTextureSourceColorSettings, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_SourceColorSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_SourceColorSettings_MetaData)) }; // 1539187544
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_bUseLegacyGamma_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** A flag for using the simplified legacy gamma space e.g pow(color,1/2.2) for converting from FColor to FLinearColor, if we're doing sRGB. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "A flag for using the simplified legacy gamma space e.g pow(color,1/2.2) for converting from FColor to FLinearColor, if we're doing sRGB." },
	};
#endif
	void Z_Construct_UClass_UTexture_Statics::NewProp_bUseLegacyGamma_SetBit(void* Obj)
	{
		((UTexture*)Obj)->bUseLegacyGamma = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_bUseLegacyGamma = { "bUseLegacyGamma", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_bUseLegacyGamma_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_bUseLegacyGamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_bUseLegacyGamma_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_bNoTiling_MetaData[] = {
		{ "Comment", "/** If true, the RHI texture will be created using TexCreate_NoTiling */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "If true, the RHI texture will be created using TexCreate_NoTiling" },
	};
#endif
	void Z_Construct_UClass_UTexture_Statics::NewProp_bNoTiling_SetBit(void* Obj)
	{
		((UTexture*)Obj)->bNoTiling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_bNoTiling = { "bNoTiling", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_bNoTiling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_bNoTiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_bNoTiling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_VirtualTextureStreaming_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Is this texture streamed in using VT\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Is this texture streamed in using VT" },
	};
#endif
	void Z_Construct_UClass_UTexture_Statics::NewProp_VirtualTextureStreaming_SetBit(void* Obj)
	{
		((UTexture*)Obj)->VirtualTextureStreaming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_VirtualTextureStreaming = { "VirtualTextureStreaming", nullptr, (EPropertyFlags)0x0010050000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_VirtualTextureStreaming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_VirtualTextureStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_VirtualTextureStreaming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_CompressionYCoCg_MetaData[] = {
		{ "Comment", "/** If true the texture stores YCoCg. Blue channel will be filled with a precision scale during compression. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "If true the texture stores YCoCg. Blue channel will be filled with a precision scale during compression." },
	};
#endif
	void Z_Construct_UClass_UTexture_Statics::NewProp_CompressionYCoCg_SetBit(void* Obj)
	{
		((UTexture*)Obj)->CompressionYCoCg = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_CompressionYCoCg = { "CompressionYCoCg", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_CompressionYCoCg_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_CompressionYCoCg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_CompressionYCoCg_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_bNotOfflineProcessed_MetaData[] = {
		{ "Comment", "/** If true, the RHI texture will be created without TexCreate_OfflineProcessed. */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "If true, the RHI texture will be created without TexCreate_OfflineProcessed." },
	};
#endif
	void Z_Construct_UClass_UTexture_Statics::NewProp_bNotOfflineProcessed_SetBit(void* Obj)
	{
		((UTexture*)Obj)->bNotOfflineProcessed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_bNotOfflineProcessed = { "bNotOfflineProcessed", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_bNotOfflineProcessed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_bNotOfflineProcessed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_bNotOfflineProcessed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_bAsyncResourceReleaseHasBeenStarted_MetaData[] = {
		{ "Comment", "/** Whether the async resource release process has already been kicked off or not */" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Whether the async resource release process has already been kicked off or not" },
	};
#endif
	void Z_Construct_UClass_UTexture_Statics::NewProp_bAsyncResourceReleaseHasBeenStarted_SetBit(void* Obj)
	{
		((UTexture*)Obj)->bAsyncResourceReleaseHasBeenStarted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_bAsyncResourceReleaseHasBeenStarted = { "bAsyncResourceReleaseHasBeenStarted", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UTexture), &Z_Construct_UClass_UTexture_Statics::NewProp_bAsyncResourceReleaseHasBeenStarted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_bAsyncResourceReleaseHasBeenStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_bAsyncResourceReleaseHasBeenStarted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_AssetUserData_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_AssetUserData_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexture_Statics::NewProp_AssetUserData_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Texture.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTexture_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x00240c8000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTexture, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::NewProp_AssetUserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::NewProp_AssetUserData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTexture_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_Source,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_LightingGuid,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_SourceFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AssetImportData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AdjustBrightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AdjustBrightnessCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AdjustVibrance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AdjustSaturation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AdjustRGBCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AdjustHue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AdjustMinAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AdjustMaxAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNoAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_CompressionNone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_DeferCompression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_LossyCompressionAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_OodleTextureSdkVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_MaxTextureSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_CompressionQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_bDitherMipMapAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_bDoScaleMipsForAlphaCoverage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AlphaCoverageThresholds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_bPreserveBorder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_bFlipGreenChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_PowerOfTwoMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_PaddingColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_bChromaKeyTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_ChromaKeyThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_ChromaKeyColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_MipGenSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_CompositeTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_CompositeTextureMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_CompositePower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_LayerFormatSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_LayerFormatSettings,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_LevelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_LODBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_CompressionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_Filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_MipLoadOptions_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_MipLoadOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_LODGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_Downscale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_DownscaleOptions_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_DownscaleOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_SRGB,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_SourceColorSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_bUseLegacyGamma,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_bNoTiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_VirtualTextureStreaming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_CompressionYCoCg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_bNotOfflineProcessed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_bAsyncResourceReleaseHasBeenStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AssetUserData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexture_Statics::NewProp_AssetUserData,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTexture_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(UTexture, IInterface_AssetUserData), false },  // 1283872964
			{ Z_Construct_UClass_UInterface_AsyncCompilation_NoRegister, (int32)VTABLE_OFFSET(UTexture, IInterface_AsyncCompilation), false },  // 30865164
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTexture_Statics::ClassParams = {
		&UTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTexture_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTexture()
	{
		if (!Z_Registration_Info_UClass_UTexture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTexture.OuterSingleton, Z_Construct_UClass_UTexture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTexture.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UTexture>()
	{
		return UTexture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTexture);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UTexture)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_Statics::EnumInfo[] = {
		{ TextureFilter_StaticEnum, TEXT("TextureFilter"), &Z_Registration_Info_UEnum_TextureFilter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3285266737U) },
		{ TextureAddress_StaticEnum, TEXT("TextureAddress"), &Z_Registration_Info_UEnum_TextureAddress, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1007474672U) },
		{ ETextureMipCount_StaticEnum, TEXT("ETextureMipCount"), &Z_Registration_Info_UEnum_ETextureMipCount, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 988616284U) },
		{ ETextureSourceArtType_StaticEnum, TEXT("ETextureSourceArtType"), &Z_Registration_Info_UEnum_ETextureSourceArtType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3776481546U) },
		{ ETextureCompressionQuality_StaticEnum, TEXT("ETextureCompressionQuality"), &Z_Registration_Info_UEnum_ETextureCompressionQuality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2168794793U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_Statics::ScriptStructInfo[] = {
		{ FTextureSourceBlock::StaticStruct, Z_Construct_UScriptStruct_FTextureSourceBlock_Statics::NewStructOps, TEXT("TextureSourceBlock"), &Z_Registration_Info_UScriptStruct_TextureSourceBlock, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextureSourceBlock), 1146004261U) },
		{ FTextureSource::StaticStruct, Z_Construct_UScriptStruct_FTextureSource_Statics::NewStructOps, TEXT("TextureSource"), &Z_Registration_Info_UScriptStruct_TextureSource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextureSource), 3537380579U) },
		{ FTexturePlatformData::StaticStruct, Z_Construct_UScriptStruct_FTexturePlatformData_Statics::NewStructOps, TEXT("TexturePlatformData"), &Z_Registration_Info_UScriptStruct_TexturePlatformData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTexturePlatformData), 549932611U) },
		{ FTextureFormatSettings::StaticStruct, Z_Construct_UScriptStruct_FTextureFormatSettings_Statics::NewStructOps, TEXT("TextureFormatSettings"), &Z_Registration_Info_UScriptStruct_TextureFormatSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextureFormatSettings), 3161851960U) },
		{ FTextureSourceColorSettings::StaticStruct, Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics::NewStructOps, TEXT("TextureSourceColorSettings"), &Z_Registration_Info_UScriptStruct_TextureSourceColorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextureSourceColorSettings), 1539187544U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTexture, UTexture::StaticClass, TEXT("UTexture"), &Z_Registration_Info_UClass_UTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTexture), 2594653700U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1402949516(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
