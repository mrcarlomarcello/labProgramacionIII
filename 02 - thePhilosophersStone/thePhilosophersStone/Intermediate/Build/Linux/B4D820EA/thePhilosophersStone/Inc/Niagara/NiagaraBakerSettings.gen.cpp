// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraBakerSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraBakerSettings() {}
// Cross Module References
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBakerTextureSource();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerSettings_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraBakerViewMode;
	static UEnum* ENiagaraBakerViewMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraBakerViewMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraBakerViewMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraBakerViewMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraBakerViewMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraBakerViewMode>()
	{
		return ENiagaraBakerViewMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode_Statics::Enumerators[] = {
		{ "ENiagaraBakerViewMode::Perspective", (int64)ENiagaraBakerViewMode::Perspective },
		{ "ENiagaraBakerViewMode::OrthoFront", (int64)ENiagaraBakerViewMode::OrthoFront },
		{ "ENiagaraBakerViewMode::OrthoBack", (int64)ENiagaraBakerViewMode::OrthoBack },
		{ "ENiagaraBakerViewMode::OrthoLeft", (int64)ENiagaraBakerViewMode::OrthoLeft },
		{ "ENiagaraBakerViewMode::OrthoRight", (int64)ENiagaraBakerViewMode::OrthoRight },
		{ "ENiagaraBakerViewMode::OrthoTop", (int64)ENiagaraBakerViewMode::OrthoTop },
		{ "ENiagaraBakerViewMode::OrthoBottom", (int64)ENiagaraBakerViewMode::OrthoBottom },
		{ "ENiagaraBakerViewMode::Num", (int64)ENiagaraBakerViewMode::Num },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "Num.Name", "ENiagaraBakerViewMode::Num" },
		{ "OrthoBack.Name", "ENiagaraBakerViewMode::OrthoBack" },
		{ "OrthoBottom.Name", "ENiagaraBakerViewMode::OrthoBottom" },
		{ "OrthoFront.Name", "ENiagaraBakerViewMode::OrthoFront" },
		{ "OrthoLeft.Name", "ENiagaraBakerViewMode::OrthoLeft" },
		{ "OrthoRight.Name", "ENiagaraBakerViewMode::OrthoRight" },
		{ "OrthoTop.Name", "ENiagaraBakerViewMode::OrthoTop" },
		{ "Perspective.Name", "ENiagaraBakerViewMode::Perspective" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraBakerViewMode",
		"ENiagaraBakerViewMode",
		Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraBakerViewMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraBakerViewMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraBakerViewMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSource;
class UScriptStruct* FNiagaraBakerTextureSource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraBakerTextureSource, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraBakerTextureSource"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSource.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraBakerTextureSource>()
{
	return FNiagaraBakerTextureSource::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraBakerTextureSource>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::NewProp_SourceName_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraBakerTextureSource, SourceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::NewProp_SourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::NewProp_SourceName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::NewProp_SourceName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraBakerTextureSource",
		sizeof(FNiagaraBakerTextureSource),
		alignof(FNiagaraBakerTextureSource),
		Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBakerTextureSource()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSource.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSource.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSettings;
class UScriptStruct* FNiagaraBakerTextureSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraBakerTextureSettings"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSettings.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraBakerTextureSettings>()
{
	return FNiagaraBakerTextureSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFrameSize_MetaData[];
#endif
		static void NewProp_bUseFrameSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFrameSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GeneratedTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraBakerTextureSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_SourceBinding_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Source visualization we should capture, i.e. Scene Color, World Normal, etc */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Source visualization we should capture, i.e. Scene Color, World Normal, etc" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_SourceBinding = { "SourceBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraBakerTextureSettings, SourceBinding), Z_Construct_UScriptStruct_FNiagaraBakerTextureSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_SourceBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_SourceBinding_MetaData)) }; // 976600978
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_bUseFrameSize_MetaData[] = {
		{ "Category", "Texture" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_bUseFrameSize_SetBit(void* Obj)
	{
		((FNiagaraBakerTextureSettings*)Obj)->bUseFrameSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_bUseFrameSize = { "bUseFrameSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraBakerTextureSettings), &Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_bUseFrameSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_bUseFrameSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_bUseFrameSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_FrameSize_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Size of each frame generated. */" },
		{ "EditCondition", "bUseFrameSize" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Size of each frame generated." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_FrameSize = { "FrameSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraBakerTextureSettings, FrameSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_FrameSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_FrameSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_TextureSize_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Overall texture size that will be generated. */" },
		{ "EditCondition", "!bUseFrameSize" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Overall texture size that will be generated." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_TextureSize = { "TextureSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraBakerTextureSettings, TextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_TextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_TextureSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_GeneratedTexture_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Final texture generated, an existing entry will be updated with new capture data. */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Final texture generated, an existing entry will be updated with new capture data." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_GeneratedTexture = { "GeneratedTexture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraBakerTextureSettings, GeneratedTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_GeneratedTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_GeneratedTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_SourceBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_bUseFrameSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_FrameSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_TextureSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_GeneratedTexture,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraBakerTextureSettings",
		sizeof(FNiagaraBakerTextureSettings),
		alignof(FNiagaraBakerTextureSettings),
		Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSettings.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSettings.InnerSingleton;
	}
	void UNiagaraBakerSettings::StaticRegisterNativesUNiagaraBakerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraBakerSettings);
	UClass* Z_Construct_UClass_UNiagaraBakerSettings_NoRegister()
	{
		return UNiagaraBakerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraBakerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DurationSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FramesPerSecond_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FramesPerSecond;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewLooping_MetaData[];
#endif
		static void NewProp_bPreviewLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FramesPerDimension_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FramesPerDimension;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputTextures;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CameraViewportMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraViewportMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CameraViewportMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraViewportLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraViewportLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraViewportRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraViewportRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraOrbitDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraOrbitDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraOrthoWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraOrthoWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCameraAspectRatio_MetaData[];
#endif
		static void NewProp_bUseCameraAspectRatio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCameraAspectRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraAspectRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraAspectRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderComponentOnly_MetaData[];
#endif
		static void NewProp_bRenderComponentOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderComponentOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraBakerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraBakerSettings.h" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_StartSeconds_MetaData[] = {
		{ "Category", "Timeline" },
		{ "Comment", "/**\n\x09This is the start time of the simultion where we being the capture.\n\x09I.e. 2.0 would mean the simulation warms up by 2 seconds before we begin capturing.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "This is the start time of the simultion where we being the capture.\nI.e. 2.0 would mean the simulation warms up by 2 seconds before we begin capturing." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_StartSeconds = { "StartSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraBakerSettings, StartSeconds), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_StartSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_StartSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_DurationSeconds_MetaData[] = {
		{ "Category", "Timeline" },
		{ "Comment", "/** Duration in seconds to take the capture over. */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Duration in seconds to take the capture over." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_DurationSeconds = { "DurationSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraBakerSettings, DurationSeconds), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_DurationSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_DurationSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_FramesPerSecond_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ClampMax", "480" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09The frame rate to run the simulation at during capturing.\n\x09This is only used for the preview view and calculating the number of ticks to execute\n\x09""as we capture the generated texture.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "The frame rate to run the simulation at during capturing.\nThis is only used for the preview view and calculating the number of ticks to execute\nas we capture the generated texture." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_FramesPerSecond = { "FramesPerSecond", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraBakerSettings, FramesPerSecond), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_FramesPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_FramesPerSecond_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bPreviewLooping_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** Should the preview playback as looping or not. */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Should the preview playback as looping or not." },
	};
#endif
	void Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bPreviewLooping_SetBit(void* Obj)
	{
		((UNiagaraBakerSettings*)Obj)->bPreviewLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bPreviewLooping = { "bPreviewLooping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraBakerSettings), &Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bPreviewLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bPreviewLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bPreviewLooping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_FramesPerDimension_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Number of frames in each dimension. */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Number of frames in each dimension." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_FramesPerDimension = { "FramesPerDimension", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraBakerSettings, FramesPerDimension), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_FramesPerDimension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_FramesPerDimension_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_OutputTextures_Inner = { "OutputTextures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings, METADATA_PARAMS(nullptr, 0) }; // 326304887
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_OutputTextures_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** List of output textures we will generated. */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "List of output textures we will generated." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_OutputTextures = { "OutputTextures", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraBakerSettings, OutputTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_OutputTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_OutputTextures_MetaData)) }; // 326304887
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportMode_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Current active viewport we will render from. */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Current active viewport we will render from." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportMode = { "CameraViewportMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraBakerSettings, CameraViewportMode), Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportMode_MetaData)) }; // 3452555283
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportLocation_MetaData[] = {
		{ "ArraySizeEnum", "/Script/Niagara.ENiagaraBakerViewMode" },
		{ "Category", "Camera" },
		{ "Comment", "/** Per viewport camera position.. */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Per viewport camera position.." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportLocation = { "CameraViewportLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(CameraViewportLocation, UNiagaraBakerSettings), STRUCT_OFFSET(UNiagaraBakerSettings, CameraViewportLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportRotation_MetaData[] = {
		{ "ArraySizeEnum", "/Script/Niagara.ENiagaraBakerViewMode" },
		{ "Category", "Camera" },
		{ "Comment", "/** Per viewport camera rotation.. */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Per viewport camera rotation.." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportRotation = { "CameraViewportRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(CameraViewportRotation, UNiagaraBakerSettings), STRUCT_OFFSET(UNiagaraBakerSettings, CameraViewportRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraOrbitDistance_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Perspective camera orbit distance. */" },
		{ "EditCondition", "CameraViewportMode == ENiagaraBakerViewMode::Perspective" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Perspective camera orbit distance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraOrbitDistance = { "CameraOrbitDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraBakerSettings, CameraOrbitDistance), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraOrbitDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraOrbitDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraFOV_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Camera FOV to use when in perspective mode. */" },
		{ "EditCondition", "CameraViewportMode == ENiagaraBakerViewMode::Perspective" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Camera FOV to use when in perspective mode." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraFOV = { "CameraFOV", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraBakerSettings, CameraFOV), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraFOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraOrthoWidth_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Camera Orthographic width to use with in orthographic mode. */" },
		{ "EditCondition", "CameraViewportMode != ENiagaraBakerViewMode::Perspective" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Camera Orthographic width to use with in orthographic mode." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraOrthoWidth = { "CameraOrthoWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraBakerSettings, CameraOrthoWidth), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraOrthoWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraOrthoWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bUseCameraAspectRatio_MetaData[] = {
		{ "Category", "Camera" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bUseCameraAspectRatio_SetBit(void* Obj)
	{
		((UNiagaraBakerSettings*)Obj)->bUseCameraAspectRatio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bUseCameraAspectRatio = { "bUseCameraAspectRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraBakerSettings), &Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bUseCameraAspectRatio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bUseCameraAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bUseCameraAspectRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraAspectRatio_MetaData[] = {
		{ "Category", "Camera" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Custom aspect ratio to use rather than using the width & height to automatically calculate. */" },
		{ "EditCondition", "bUseCameraAspectRatio" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Custom aspect ratio to use rather than using the width & height to automatically calculate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraAspectRatio = { "CameraAspectRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraBakerSettings, CameraAspectRatio), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraAspectRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bRenderComponentOnly_MetaData[] = {
		{ "Category", "Environment" },
		{ "Comment", "/** Should we render just the component or the whole scene. */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Should we render just the component or the whole scene." },
	};
#endif
	void Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bRenderComponentOnly_SetBit(void* Obj)
	{
		((UNiagaraBakerSettings*)Obj)->bRenderComponentOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bRenderComponentOnly = { "bRenderComponentOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraBakerSettings), &Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bRenderComponentOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bRenderComponentOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bRenderComponentOnly_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraBakerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_StartSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_DurationSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_FramesPerSecond,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bPreviewLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_FramesPerDimension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_OutputTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_OutputTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraOrbitDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraOrthoWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bUseCameraAspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraAspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bRenderComponentOnly,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraBakerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraBakerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::ClassParams = {
		&UNiagaraBakerSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraBakerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraBakerSettings()
	{
		if (!Z_Registration_Info_UClass_UNiagaraBakerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraBakerSettings.OuterSingleton, Z_Construct_UClass_UNiagaraBakerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraBakerSettings.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraBakerSettings>()
	{
		return UNiagaraBakerSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraBakerSettings);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerSettings_h_Statics::EnumInfo[] = {
		{ ENiagaraBakerViewMode_StaticEnum, TEXT("ENiagaraBakerViewMode"), &Z_Registration_Info_UEnum_ENiagaraBakerViewMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3452555283U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerSettings_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraBakerTextureSource::StaticStruct, Z_Construct_UScriptStruct_FNiagaraBakerTextureSource_Statics::NewStructOps, TEXT("NiagaraBakerTextureSource"), &Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraBakerTextureSource), 976600978U) },
		{ FNiagaraBakerTextureSettings::StaticStruct, Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewStructOps, TEXT("NiagaraBakerTextureSettings"), &Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraBakerTextureSettings), 326304887U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraBakerSettings, UNiagaraBakerSettings::StaticClass, TEXT("UNiagaraBakerSettings"), &Z_Registration_Info_UClass_UNiagaraBakerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraBakerSettings), 2471937983U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerSettings_h_1628884947(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
