// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CinematicCamera/Public/CineCameraComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCineCameraComponent() {}
// Cross Module References
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFilmbackSettings();
	UPackage* Z_Construct_UPackage__Script_CinematicCamera();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FNamedFilmbackPreset();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraLensSettings();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FNamedLensPreset();
	CINEMATICCAMERA_API UEnum* Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraTrackingFocusSettings();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFocusSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraFilmbackSettings;
class UScriptStruct* FCameraFilmbackSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraFilmbackSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraFilmbackSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraFilmbackSettings, Z_Construct_UPackage__Script_CinematicCamera(), TEXT("CameraFilmbackSettings"));
	}
	return Z_Registration_Info_UScriptStruct_CameraFilmbackSettings.OuterSingleton;
}
template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<FCameraFilmbackSettings>()
{
	return FCameraFilmbackSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SensorWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SensorWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SensorHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SensorHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SensorAspectRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SensorAspectRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** #note, this struct has a details customization in CameraFilmbackSettingsCustomization.cpp/h */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "#note, this struct has a details customization in CameraFilmbackSettingsCustomization.cpp/h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraFilmbackSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorWidth_MetaData[] = {
		{ "Category", "Filmback" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Horizontal size of filmback or digital sensor, in mm. */" },
		{ "ForceUnits", "mm" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Horizontal size of filmback or digital sensor, in mm." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorWidth = { "SensorWidth", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraFilmbackSettings, SensorWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorHeight_MetaData[] = {
		{ "Category", "Filmback" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Vertical size of filmback or digital sensor, in mm. */" },
		{ "ForceUnits", "mm" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Vertical size of filmback or digital sensor, in mm." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorHeight = { "SensorHeight", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraFilmbackSettings, SensorHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorAspectRatio_MetaData[] = {
		{ "Category", "Filmback" },
		{ "Comment", "/** Read-only. Computed from Sensor dimensions. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Read-only. Computed from Sensor dimensions." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorAspectRatio = { "SensorAspectRatio", nullptr, (EPropertyFlags)0x0010000200020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraFilmbackSettings, SensorAspectRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorAspectRatio_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorAspectRatio,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
		nullptr,
		&NewStructOps,
		"CameraFilmbackSettings",
		sizeof(FCameraFilmbackSettings),
		alignof(FCameraFilmbackSettings),
		Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraFilmbackSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_CameraFilmbackSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraFilmbackSettings.InnerSingleton, Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CameraFilmbackSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NamedFilmbackPreset;
class UScriptStruct* FNamedFilmbackPreset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NamedFilmbackPreset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NamedFilmbackPreset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedFilmbackPreset, Z_Construct_UPackage__Script_CinematicCamera(), TEXT("NamedFilmbackPreset"));
	}
	return Z_Registration_Info_UScriptStruct_NamedFilmbackPreset.OuterSingleton;
}
template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<FNamedFilmbackPreset>()
{
	return FNamedFilmbackPreset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilmbackSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilmbackSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A named bundle of filmback settings used to implement filmback presets */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "A named bundle of filmback settings used to implement filmback presets" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedFilmbackPreset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Filmback" },
		{ "Comment", "/** Name for the preset. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Name for the preset." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNamedFilmbackPreset, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewProp_FilmbackSettings_MetaData[] = {
		{ "Category", "Filmback" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewProp_FilmbackSettings = { "FilmbackSettings", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNamedFilmbackPreset, FilmbackSettings), Z_Construct_UScriptStruct_FCameraFilmbackSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewProp_FilmbackSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewProp_FilmbackSettings_MetaData)) }; // 561856777
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewProp_FilmbackSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
		nullptr,
		&NewStructOps,
		"NamedFilmbackPreset",
		sizeof(FNamedFilmbackPreset),
		alignof(FNamedFilmbackPreset),
		Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedFilmbackPreset()
	{
		if (!Z_Registration_Info_UScriptStruct_NamedFilmbackPreset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NamedFilmbackPreset.InnerSingleton, Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NamedFilmbackPreset.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraLensSettings;
class UScriptStruct* FCameraLensSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraLensSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraLensSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraLensSettings, Z_Construct_UPackage__Script_CinematicCamera(), TEXT("CameraLensSettings"));
	}
	return Z_Registration_Info_UScriptStruct_CameraLensSettings.OuterSingleton;
}
template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<FCameraLensSettings>()
{
	return FCameraLensSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCameraLensSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinFocalLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinFocalLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxFocalLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFocalLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinFStop_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinFStop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxFStop_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFStop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumFocusDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumFocusDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiaphragmBladeCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DiaphragmBladeCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLensSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * #note, this struct has a details customization in CameraLensSettingsCustomization.cpp/h\n */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "#note, this struct has a details customization in CameraLensSettingsCustomization.cpp/h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraLensSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinFocalLength_MetaData[] = {
		{ "Category", "Lens" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Minimum focal length for this lens */" },
		{ "ForceUnits", "mm" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Minimum focal length for this lens" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinFocalLength = { "MinFocalLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraLensSettings, MinFocalLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinFocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinFocalLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MaxFocalLength_MetaData[] = {
		{ "Category", "Lens" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Maximum focal length for this lens */" },
		{ "ForceUnits", "mm" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Maximum focal length for this lens" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MaxFocalLength = { "MaxFocalLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraLensSettings, MaxFocalLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MaxFocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MaxFocalLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinFStop_MetaData[] = {
		{ "Category", "Lens" },
		{ "Comment", "/** Minimum aperture for this lens (e.g. 2.8 for an f/2.8 lens) */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Minimum aperture for this lens (e.g. 2.8 for an f/2.8 lens)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinFStop = { "MinFStop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraLensSettings, MinFStop), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinFStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinFStop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MaxFStop_MetaData[] = {
		{ "Category", "Lens" },
		{ "Comment", "/** Maximum aperture for this lens (e.g. 2.8 for an f/2.8 lens) */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Maximum aperture for this lens (e.g. 2.8 for an f/2.8 lens)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MaxFStop = { "MaxFStop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraLensSettings, MaxFStop), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MaxFStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MaxFStop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinimumFocusDistance_MetaData[] = {
		{ "Category", "Lens" },
		{ "Comment", "/** Shortest distance this lens can focus on. */" },
		{ "ForceUnits", "mm" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Shortest distance this lens can focus on." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinimumFocusDistance = { "MinimumFocusDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraLensSettings, MinimumFocusDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinimumFocusDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinimumFocusDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_DiaphragmBladeCount_MetaData[] = {
		{ "Category", "Lens" },
		{ "ClampMax", "16" },
		{ "ClampMin", "4" },
		{ "Comment", "/** Number of blades of diaphragm. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Number of blades of diaphragm." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_DiaphragmBladeCount = { "DiaphragmBladeCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraLensSettings, DiaphragmBladeCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_DiaphragmBladeCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_DiaphragmBladeCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraLensSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinFocalLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MaxFocalLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinFStop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MaxFStop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinimumFocusDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_DiaphragmBladeCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraLensSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
		nullptr,
		&NewStructOps,
		"CameraLensSettings",
		sizeof(FCameraLensSettings),
		alignof(FCameraLensSettings),
		Z_Construct_UScriptStruct_FCameraLensSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraLensSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_CameraLensSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraLensSettings.InnerSingleton, Z_Construct_UScriptStruct_FCameraLensSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CameraLensSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NamedLensPreset;
class UScriptStruct* FNamedLensPreset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NamedLensPreset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NamedLensPreset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedLensPreset, Z_Construct_UPackage__Script_CinematicCamera(), TEXT("NamedLensPreset"));
	}
	return Z_Registration_Info_UScriptStruct_NamedLensPreset.OuterSingleton;
}
template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<FNamedLensPreset>()
{
	return FNamedLensPreset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNamedLensPreset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LensSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedLensPreset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A named bundle of lens settings used to implement lens presets. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "A named bundle of lens settings used to implement lens presets." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedLensPreset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Lens" },
		{ "Comment", "/** Name for the preset. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Name for the preset." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNamedLensPreset, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewProp_LensSettings_MetaData[] = {
		{ "Category", "Lens" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewProp_LensSettings = { "LensSettings", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNamedLensPreset, LensSettings), Z_Construct_UScriptStruct_FCameraLensSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewProp_LensSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewProp_LensSettings_MetaData)) }; // 3058093974
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedLensPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewProp_LensSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedLensPreset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
		nullptr,
		&NewStructOps,
		"NamedLensPreset",
		sizeof(FNamedLensPreset),
		alignof(FNamedLensPreset),
		Z_Construct_UScriptStruct_FNamedLensPreset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedLensPreset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedLensPreset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedLensPreset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedLensPreset()
	{
		if (!Z_Registration_Info_UScriptStruct_NamedLensPreset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NamedLensPreset.InnerSingleton, Z_Construct_UScriptStruct_FNamedLensPreset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NamedLensPreset.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraFocusMethod;
	static UEnum* ECameraFocusMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECameraFocusMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECameraFocusMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod, Z_Construct_UPackage__Script_CinematicCamera(), TEXT("ECameraFocusMethod"));
		}
		return Z_Registration_Info_UEnum_ECameraFocusMethod.OuterSingleton;
	}
	template<> CINEMATICCAMERA_API UEnum* StaticEnum<ECameraFocusMethod>()
	{
		return ECameraFocusMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod_Statics::Enumerators[] = {
		{ "ECameraFocusMethod::DoNotOverride", (int64)ECameraFocusMethod::DoNotOverride },
		{ "ECameraFocusMethod::Manual", (int64)ECameraFocusMethod::Manual },
		{ "ECameraFocusMethod::Tracking", (int64)ECameraFocusMethod::Tracking },
		{ "ECameraFocusMethod::Disable", (int64)ECameraFocusMethod::Disable },
		{ "ECameraFocusMethod::MAX", (int64)ECameraFocusMethod::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Supported methods for focusing the camera. */" },
		{ "Disable.Comment", "/** Disable depth of field entirely. */" },
		{ "Disable.Name", "ECameraFocusMethod::Disable" },
		{ "Disable.ToolTip", "Disable depth of field entirely." },
		{ "DoNotOverride.Comment", "/** Don't override, ie. allow post process volume settings to persist. */" },
		{ "DoNotOverride.Name", "ECameraFocusMethod::DoNotOverride" },
		{ "DoNotOverride.ToolTip", "Don't override, ie. allow post process volume settings to persist." },
		{ "Manual.Comment", "/** Allows for specifying or animating exact focus distances. */" },
		{ "Manual.Name", "ECameraFocusMethod::Manual" },
		{ "Manual.ToolTip", "Allows for specifying or animating exact focus distances." },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "ECameraFocusMethod::MAX" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Supported methods for focusing the camera." },
		{ "Tracking.Comment", "/** Locks focus to specific object. */" },
		{ "Tracking.Name", "ECameraFocusMethod::Tracking" },
		{ "Tracking.ToolTip", "Locks focus to specific object." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CinematicCamera,
		nullptr,
		"ECameraFocusMethod",
		"ECameraFocusMethod",
		Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod()
	{
		if (!Z_Registration_Info_UEnum_ECameraFocusMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraFocusMethod.InnerSingleton, Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECameraFocusMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraTrackingFocusSettings;
class UScriptStruct* FCameraTrackingFocusSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraTrackingFocusSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraTrackingFocusSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings, Z_Construct_UPackage__Script_CinematicCamera(), TEXT("CameraTrackingFocusSettings"));
	}
	return Z_Registration_Info_UScriptStruct_CameraTrackingFocusSettings.OuterSingleton;
}
template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<FCameraTrackingFocusSettings>()
{
	return FCameraTrackingFocusSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorToTrack_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ActorToTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugTrackingFocusPoint_MetaData[];
#endif
		static void NewProp_bDrawDebugTrackingFocusPoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugTrackingFocusPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Settings to control tracking-focus mode. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Settings to control tracking-focus mode." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraTrackingFocusSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_ActorToTrack_MetaData[] = {
		{ "Category", "Tracking Focus" },
		{ "Comment", "/** Focus distance will be tied to this actor's location. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Focus distance will be tied to this actor's location." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_ActorToTrack = { "ActorToTrack", nullptr, (EPropertyFlags)0x0014000200000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraTrackingFocusSettings, ActorToTrack), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_ActorToTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_ActorToTrack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_RelativeOffset_MetaData[] = {
		{ "Category", "Tracking Focus" },
		{ "Comment", "/** Offset from actor position to track. Relative to actor if tracking an actor, relative to world otherwise. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Offset from actor position to track. Relative to actor if tracking an actor, relative to world otherwise." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_RelativeOffset = { "RelativeOffset", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraTrackingFocusSettings, RelativeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_RelativeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_RelativeOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_bDrawDebugTrackingFocusPoint_MetaData[] = {
		{ "Category", "Tracking Focus" },
		{ "Comment", "/** True to draw a debug representation of the tracked position. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "True to draw a debug representation of the tracked position." },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_bDrawDebugTrackingFocusPoint_SetBit(void* Obj)
	{
		((FCameraTrackingFocusSettings*)Obj)->bDrawDebugTrackingFocusPoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_bDrawDebugTrackingFocusPoint = { "bDrawDebugTrackingFocusPoint", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FCameraTrackingFocusSettings), &Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_bDrawDebugTrackingFocusPoint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_bDrawDebugTrackingFocusPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_bDrawDebugTrackingFocusPoint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_ActorToTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_RelativeOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_bDrawDebugTrackingFocusPoint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
		nullptr,
		&NewStructOps,
		"CameraTrackingFocusSettings",
		sizeof(FCameraTrackingFocusSettings),
		alignof(FCameraTrackingFocusSettings),
		Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraTrackingFocusSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_CameraTrackingFocusSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraTrackingFocusSettings.InnerSingleton, Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CameraTrackingFocusSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraFocusSettings;
class UScriptStruct* FCameraFocusSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraFocusSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraFocusSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraFocusSettings, Z_Construct_UPackage__Script_CinematicCamera(), TEXT("CameraFocusSettings"));
	}
	return Z_Registration_Info_UScriptStruct_CameraFocusSettings.OuterSingleton;
}
template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<FCameraFocusSettings>()
{
	return FCameraFocusSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCameraFocusSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_FocusMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FocusMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManualFocusDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ManualFocusDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingFocusSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackingFocusSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugFocusPlane_MetaData[];
#endif
		static void NewProp_bDrawDebugFocusPlane_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugFocusPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugFocusPlaneColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugFocusPlaneColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSmoothFocusChanges_MetaData[];
#endif
		static void NewProp_bSmoothFocusChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothFocusChanges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusSmoothingInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusSmoothingInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Settings to control camera focus */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Settings to control camera focus" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraFocusSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusMethod_MetaData[] = {
		{ "Category", "Focus Method" },
		{ "Comment", "/** Which method to use to handle camera focus */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Which method to use to handle camera focus" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusMethod = { "FocusMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraFocusSettings, FocusMethod), Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusMethod_MetaData)) }; // 1572929330
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_ManualFocusDistance_MetaData[] = {
		{ "Category", "Manual Focus Settings" },
		{ "Comment", "/** Manually-controlled focus distance (manual focus mode only) */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Manually-controlled focus distance (manual focus mode only)" },
		{ "Units", "cm" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_ManualFocusDistance = { "ManualFocusDistance", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraFocusSettings, ManualFocusDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_ManualFocusDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_ManualFocusDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_TrackingFocusSettings_MetaData[] = {
		{ "Category", "Tracking Focus Settings" },
		{ "Comment", "/** Settings to control tracking focus (tracking focus mode only) */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Settings to control tracking focus (tracking focus mode only)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_TrackingFocusSettings = { "TrackingFocusSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraFocusSettings, TrackingFocusSettings), Z_Construct_UScriptStruct_FCameraTrackingFocusSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_TrackingFocusSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_TrackingFocusSettings_MetaData)) }; // 3805158512
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bDrawDebugFocusPlane_MetaData[] = {
		{ "Category", "Focus Settings" },
		{ "Comment", "/** True to draw a translucent plane at the current focus depth, for easy tweaking. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "True to draw a translucent plane at the current focus depth, for easy tweaking." },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bDrawDebugFocusPlane_SetBit(void* Obj)
	{
		((FCameraFocusSettings*)Obj)->bDrawDebugFocusPlane = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bDrawDebugFocusPlane = { "bDrawDebugFocusPlane", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FCameraFocusSettings), &Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bDrawDebugFocusPlane_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bDrawDebugFocusPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bDrawDebugFocusPlane_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_DebugFocusPlaneColor_MetaData[] = {
		{ "Category", "Focus Settings" },
		{ "Comment", "/** For customizing the focus plane color, in case the default doesn't show up well in your scene. */" },
		{ "EditCondition", "bDrawDebugFocusPlane" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "For customizing the focus plane color, in case the default doesn't show up well in your scene." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_DebugFocusPlaneColor = { "DebugFocusPlaneColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraFocusSettings, DebugFocusPlaneColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_DebugFocusPlaneColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_DebugFocusPlaneColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bSmoothFocusChanges_MetaData[] = {
		{ "Category", "Focus Settings" },
		{ "Comment", "/** True to use interpolation to smooth out changes in focus distance, false for focus distance changes to be instantaneous. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "True to use interpolation to smooth out changes in focus distance, false for focus distance changes to be instantaneous." },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bSmoothFocusChanges_SetBit(void* Obj)
	{
		((FCameraFocusSettings*)Obj)->bSmoothFocusChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bSmoothFocusChanges = { "bSmoothFocusChanges", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FCameraFocusSettings), &Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bSmoothFocusChanges_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bSmoothFocusChanges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bSmoothFocusChanges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusSmoothingInterpSpeed_MetaData[] = {
		{ "Category", "Focus Settings" },
		{ "Comment", "/** Controls interpolation speed when smoothing focus distance changes. Ignored if bSmoothFocusChanges is false. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Controls interpolation speed when smoothing focus distance changes. Ignored if bSmoothFocusChanges is false." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusSmoothingInterpSpeed = { "FocusSmoothingInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraFocusSettings, FocusSmoothingInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusSmoothingInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusSmoothingInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusOffset_MetaData[] = {
		{ "Category", "Focus Settings" },
		{ "Comment", "/** Additional focus depth offset, used for manually tweaking if your chosen focus method needs adjustment */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Additional focus depth offset, used for manually tweaking if your chosen focus method needs adjustment" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusOffset = { "FocusOffset", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraFocusSettings, FocusOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_ManualFocusDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_TrackingFocusSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bDrawDebugFocusPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_DebugFocusPlaneColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bSmoothFocusChanges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusSmoothingInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
		nullptr,
		&NewStructOps,
		"CameraFocusSettings",
		sizeof(FCameraFocusSettings),
		alignof(FCameraFocusSettings),
		Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraFocusSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_CameraFocusSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraFocusSettings.InnerSingleton, Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CameraFocusSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UCineCameraComponent::execGetLensPresetsCopy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FNamedLensPreset>*)Z_Param__Result=UCineCameraComponent::GetLensPresetsCopy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineCameraComponent::execGetFilmbackPresetsCopy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FNamedFilmbackPreset>*)Z_Param__Result=UCineCameraComponent::GetFilmbackPresetsCopy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineCameraComponent::execSetLensPresetByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPresetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLensPresetByName(Z_Param_InPresetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineCameraComponent::execGetLensPresetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLensPresetName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineCameraComponent::execSetFilmbackPresetByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPresetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFilmbackPresetByName(Z_Param_InPresetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineCameraComponent::execGetDefaultFilmbackPresetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDefaultFilmbackPresetName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineCameraComponent::execGetFilmbackPresetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFilmbackPresetName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineCameraComponent::execGetVerticalFieldOfView)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVerticalFieldOfView();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineCameraComponent::execGetHorizontalFieldOfView)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHorizontalFieldOfView();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineCameraComponent::execSetCurrentFocalLength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFocalLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentFocalLength(Z_Param_InFocalLength);
		P_NATIVE_END;
	}
	void UCineCameraComponent::StaticRegisterNativesUCineCameraComponent()
	{
		UClass* Class = UCineCameraComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDefaultFilmbackPresetName", &UCineCameraComponent::execGetDefaultFilmbackPresetName },
			{ "GetFilmbackPresetName", &UCineCameraComponent::execGetFilmbackPresetName },
			{ "GetFilmbackPresetsCopy", &UCineCameraComponent::execGetFilmbackPresetsCopy },
			{ "GetHorizontalFieldOfView", &UCineCameraComponent::execGetHorizontalFieldOfView },
			{ "GetLensPresetName", &UCineCameraComponent::execGetLensPresetName },
			{ "GetLensPresetsCopy", &UCineCameraComponent::execGetLensPresetsCopy },
			{ "GetVerticalFieldOfView", &UCineCameraComponent::execGetVerticalFieldOfView },
			{ "SetCurrentFocalLength", &UCineCameraComponent::execSetCurrentFocalLength },
			{ "SetFilmbackPresetByName", &UCineCameraComponent::execSetFilmbackPresetByName },
			{ "SetLensPresetByName", &UCineCameraComponent::execSetLensPresetByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics
	{
		struct CineCameraComponent_eventGetDefaultFilmbackPresetName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CineCameraComponent_eventGetDefaultFilmbackPresetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
		{ "Comment", "/** Returns the name of the default filmback preset. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Returns the name of the default filmback preset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "GetDefaultFilmbackPresetName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::CineCameraComponent_eventGetDefaultFilmbackPresetName_Parms), Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics
	{
		struct CineCameraComponent_eventGetFilmbackPresetName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CineCameraComponent_eventGetFilmbackPresetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
		{ "Comment", "/** Returns the filmback name of the camera with the current settings. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Returns the filmback name of the camera with the current settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "GetFilmbackPresetName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::CineCameraComponent_eventGetFilmbackPresetName_Parms), Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy_Statics
	{
		struct CineCameraComponent_eventGetFilmbackPresetsCopy_Parms
		{
			TArray<FNamedFilmbackPreset> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNamedFilmbackPreset, METADATA_PARAMS(nullptr, 0) }; // 3935679770
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CineCameraComponent_eventGetFilmbackPresetsCopy_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3935679770
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
		{ "Comment", "/** Returns a copy of the list of available filmback presets. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Returns a copy of the list of available filmback presets." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "GetFilmbackPresetsCopy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy_Statics::CineCameraComponent_eventGetFilmbackPresetsCopy_Parms), Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics
	{
		struct CineCameraComponent_eventGetHorizontalFieldOfView_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CineCameraComponent_eventGetHorizontalFieldOfView_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
		{ "Comment", "/** Returns the horizonal FOV of the camera with current settings. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Returns the horizonal FOV of the camera with current settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "GetHorizontalFieldOfView", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::CineCameraComponent_eventGetHorizontalFieldOfView_Parms), Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics
	{
		struct CineCameraComponent_eventGetLensPresetName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CineCameraComponent_eventGetLensPresetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
		{ "Comment", "/** Returns the lens name of the camera with the current settings. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Returns the lens name of the camera with the current settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "GetLensPresetName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::CineCameraComponent_eventGetLensPresetName_Parms), Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics
	{
		struct CineCameraComponent_eventGetLensPresetsCopy_Parms
		{
			TArray<FNamedLensPreset> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNamedLensPreset, METADATA_PARAMS(nullptr, 0) }; // 122356150
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CineCameraComponent_eventGetLensPresetsCopy_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 122356150
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
		{ "Comment", "/** Returns a copy of the list of available lens presets. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Returns a copy of the list of available lens presets." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "GetLensPresetsCopy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::CineCameraComponent_eventGetLensPresetsCopy_Parms), Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics
	{
		struct CineCameraComponent_eventGetVerticalFieldOfView_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CineCameraComponent_eventGetVerticalFieldOfView_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
		{ "Comment", "/** Returns the vertical FOV of the camera with current settings. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Returns the vertical FOV of the camera with current settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "GetVerticalFieldOfView", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::CineCameraComponent_eventGetVerticalFieldOfView_Parms), Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics
	{
		struct CineCameraComponent_eventSetCurrentFocalLength_Parms
		{
			float InFocalLength;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFocalLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::NewProp_InFocalLength = { "InFocalLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CineCameraComponent_eventSetCurrentFocalLength_Parms, InFocalLength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::NewProp_InFocalLength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Cine Camera" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "SetCurrentFocalLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::CineCameraComponent_eventSetCurrentFocalLength_Parms), Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics
	{
		struct CineCameraComponent_eventSetFilmbackPresetByName_Parms
		{
			FString InPresetName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPresetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InPresetName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::NewProp_InPresetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::NewProp_InPresetName = { "InPresetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CineCameraComponent_eventSetFilmbackPresetByName_Parms, InPresetName), METADATA_PARAMS(Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::NewProp_InPresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::NewProp_InPresetName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::NewProp_InPresetName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
		{ "Comment", "/** Set the current preset settings by preset name. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Set the current preset settings by preset name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "SetFilmbackPresetByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::CineCameraComponent_eventSetFilmbackPresetByName_Parms), Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics
	{
		struct CineCameraComponent_eventSetLensPresetByName_Parms
		{
			FString InPresetName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPresetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InPresetName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::NewProp_InPresetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::NewProp_InPresetName = { "InPresetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CineCameraComponent_eventSetLensPresetByName_Parms, InPresetName), METADATA_PARAMS(Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::NewProp_InPresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::NewProp_InPresetName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::NewProp_InPresetName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
		{ "Comment", "/** Set the current lens settings by preset name. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Set the current lens settings by preset name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "SetLensPresetByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::CineCameraComponent_eventSetLensPresetByName_Parms), Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCineCameraComponent);
	UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister()
	{
		return UCineCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCineCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilmbackSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilmbackSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filmback_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filmback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LensSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FocusSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFocalLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentFocalLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAperture_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentAperture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFocusDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentFocusDistance;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHorizontalFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHorizontalFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusPlaneVisualizationMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FocusPlaneVisualizationMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusPlaneVisualizationMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FocusPlaneVisualizationMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugFocusPlaneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DebugFocusPlaneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugFocusPlaneMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DebugFocusPlaneMID;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilmbackPresets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilmbackPresets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FilmbackPresets;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LensPresets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensPresets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LensPresets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFilmbackPresetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultFilmbackPresetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFilmbackPreset_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultFilmbackPreset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLensPresetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultLensPresetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLensFocalLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultLensFocalLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLensFStop_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultLensFStop;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCineCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCineCameraComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName, "GetDefaultFilmbackPresetName" }, // 3177384397
		{ &Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName, "GetFilmbackPresetName" }, // 3401882910
		{ &Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy, "GetFilmbackPresetsCopy" }, // 111386158
		{ &Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView, "GetHorizontalFieldOfView" }, // 3147555446
		{ &Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName, "GetLensPresetName" }, // 3207807424
		{ &Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy, "GetLensPresetsCopy" }, // 201863812
		{ &Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView, "GetVerticalFieldOfView" }, // 2154837338
		{ &Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength, "SetCurrentFocalLength" }, // 2089733647
		{ &Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName, "SetFilmbackPresetByName" }, // 3473005002
		{ &Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName, "SetLensPresetByName" }, // 3423388667
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Camera" },
		{ "Comment", "/**\n * A specialized version of a camera component, geared toward cinematic usage.\n */" },
		{ "HideCategories", "CameraSettings Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "HideFunctions", "SetFieldOfView SetAspectRatio" },
		{ "IncludePath", "CineCameraComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "A specialized version of a camera component, geared toward cinematic usage." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FilmbackSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FilmbackSettings = { "FilmbackSettings", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, FilmbackSettings_DEPRECATED), Z_Construct_UScriptStruct_FCameraFilmbackSettings, METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FilmbackSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FilmbackSettings_MetaData)) }; // 561856777
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_Filmback_MetaData[] = {
		{ "Category", "Current Camera Settings" },
		{ "Comment", "/** Controls the filmback of the camera. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Controls the filmback of the camera." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_Filmback = { "Filmback", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, Filmback), Z_Construct_UScriptStruct_FCameraFilmbackSettings, METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_Filmback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_Filmback_MetaData)) }; // 561856777
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_LensSettings_MetaData[] = {
		{ "Category", "Current Camera Settings" },
		{ "Comment", "/** Controls the camera's lens. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Controls the camera's lens." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_LensSettings = { "LensSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, LensSettings), Z_Construct_UScriptStruct_FCameraLensSettings, METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_LensSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_LensSettings_MetaData)) }; // 3058093974
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusSettings_MetaData[] = {
		{ "Category", "Current Camera Settings" },
		{ "Comment", "/** Controls the camera's focus. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Controls the camera's focus." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusSettings = { "FocusSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, FocusSettings), Z_Construct_UScriptStruct_FCameraFocusSettings, METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusSettings_MetaData)) }; // 441628049
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentFocalLength_MetaData[] = {
		{ "BlueprintSetter", "SetCurrentFocalLength" },
		{ "Category", "Current Camera Settings" },
		{ "Comment", "/** Current focal length of the camera (i.e. controls FoV, zoom) */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Current focal length of the camera (i.e. controls FoV, zoom)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentFocalLength = { "CurrentFocalLength", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, CurrentFocalLength), METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentFocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentFocalLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentAperture_MetaData[] = {
		{ "Category", "Current Camera Settings" },
		{ "Comment", "/** Current aperture, in terms of f-stop (e.g. 2.8 for f/2.8) */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Current aperture, in terms of f-stop (e.g. 2.8 for f/2.8)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentAperture = { "CurrentAperture", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, CurrentAperture), METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentAperture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentAperture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentFocusDistance_MetaData[] = {
		{ "Category", "Current Camera Settings" },
		{ "Comment", "/** Read-only. Control this value via FocusSettings. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Read-only. Control this value via FocusSettings." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentFocusDistance = { "CurrentFocusDistance", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, CurrentFocusDistance), METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentFocusDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentFocusDistance_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentHorizontalFOV_MetaData[] = {
		{ "Category", "Current Camera Settings" },
		{ "Comment", "/** Read-only. Control this value with CurrentFocalLength (and filmback settings). */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Read-only. Control this value with CurrentFocalLength (and filmback settings)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentHorizontalFOV = { "CurrentHorizontalFOV", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, CurrentHorizontalFOV), METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentHorizontalFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentHorizontalFOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusPlaneVisualizationMesh_MetaData[] = {
		{ "Comment", "/** Mesh used for debug focus plane visualization */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Mesh used for debug focus plane visualization" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusPlaneVisualizationMesh = { "FocusPlaneVisualizationMesh", nullptr, (EPropertyFlags)0x0024080800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, FocusPlaneVisualizationMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusPlaneVisualizationMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusPlaneVisualizationMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusPlaneVisualizationMaterial_MetaData[] = {
		{ "Comment", "/** Material used for debug focus plane visualization */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Material used for debug focus plane visualization" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusPlaneVisualizationMaterial = { "FocusPlaneVisualizationMaterial", nullptr, (EPropertyFlags)0x0024080800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, FocusPlaneVisualizationMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusPlaneVisualizationMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusPlaneVisualizationMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DebugFocusPlaneComponent_MetaData[] = {
		{ "Comment", "/** Component for the debug focus plane visualization */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Component for the debug focus plane visualization" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DebugFocusPlaneComponent = { "DebugFocusPlaneComponent", nullptr, (EPropertyFlags)0x0024080800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, DebugFocusPlaneComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DebugFocusPlaneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DebugFocusPlaneComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DebugFocusPlaneMID_MetaData[] = {
		{ "Comment", "/** Dynamic material instance for the debug focus plane visualization */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Dynamic material instance for the debug focus plane visualization" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DebugFocusPlaneMID = { "DebugFocusPlaneMID", nullptr, (EPropertyFlags)0x0024080800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, DebugFocusPlaneMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DebugFocusPlaneMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DebugFocusPlaneMID_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FilmbackPresets_Inner = { "FilmbackPresets", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNamedFilmbackPreset, METADATA_PARAMS(nullptr, 0) }; // 3935679770
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FilmbackPresets_MetaData[] = {
		{ "Comment", "/** List of available filmback presets */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "List of available filmback presets" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FilmbackPresets = { "FilmbackPresets", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, FilmbackPresets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FilmbackPresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FilmbackPresets_MetaData)) }; // 3935679770
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_LensPresets_Inner = { "LensPresets", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNamedLensPreset, METADATA_PARAMS(nullptr, 0) }; // 122356150
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_LensPresets_MetaData[] = {
		{ "Comment", "/** List of available lens presets */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "List of available lens presets" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_LensPresets = { "LensPresets", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, LensPresets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_LensPresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_LensPresets_MetaData)) }; // 122356150
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultFilmbackPresetName_MetaData[] = {
		{ "Comment", "/** Deprecated. See DefaultFilmbackPreset */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Deprecated. See DefaultFilmbackPreset" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultFilmbackPresetName = { "DefaultFilmbackPresetName", nullptr, (EPropertyFlags)0x0020080020004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, DefaultFilmbackPresetName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultFilmbackPresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultFilmbackPresetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultFilmbackPreset_MetaData[] = {
		{ "Comment", "/** Name of the default filmback preset */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Name of the default filmback preset" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultFilmbackPreset = { "DefaultFilmbackPreset", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, DefaultFilmbackPreset), METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultFilmbackPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultFilmbackPreset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensPresetName_MetaData[] = {
		{ "Comment", "/** Name of the default lens preset */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Name of the default lens preset" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensPresetName = { "DefaultLensPresetName", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, DefaultLensPresetName), METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensPresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensPresetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensFocalLength_MetaData[] = {
		{ "Comment", "/** Default focal length (will be constrained by default lens) */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Default focal length (will be constrained by default lens)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensFocalLength = { "DefaultLensFocalLength", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, DefaultLensFocalLength), METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensFocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensFocalLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensFStop_MetaData[] = {
		{ "Comment", "/** Default aperture (will be constrained by default lens) */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Default aperture (will be constrained by default lens)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensFStop = { "DefaultLensFStop", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCineCameraComponent, DefaultLensFStop), METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensFStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensFStop_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCineCameraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FilmbackSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_Filmback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_LensSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentFocalLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentAperture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentFocusDistance,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentHorizontalFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusPlaneVisualizationMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusPlaneVisualizationMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DebugFocusPlaneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DebugFocusPlaneMID,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FilmbackPresets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FilmbackPresets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_LensPresets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_LensPresets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultFilmbackPresetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultFilmbackPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensPresetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensFocalLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensFStop,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCineCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCineCameraComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCineCameraComponent_Statics::ClassParams = {
		&UCineCameraComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCineCameraComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCineCameraComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCineCameraComponent()
	{
		if (!Z_Registration_Info_UClass_UCineCameraComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCineCameraComponent.OuterSingleton, Z_Construct_UClass_UCineCameraComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCineCameraComponent.OuterSingleton;
	}
	template<> CINEMATICCAMERA_API UClass* StaticClass<UCineCameraComponent>()
	{
		return UCineCameraComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCineCameraComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCineCameraComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_Statics::EnumInfo[] = {
		{ ECameraFocusMethod_StaticEnum, TEXT("ECameraFocusMethod"), &Z_Registration_Info_UEnum_ECameraFocusMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1572929330U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_Statics::ScriptStructInfo[] = {
		{ FCameraFilmbackSettings::StaticStruct, Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewStructOps, TEXT("CameraFilmbackSettings"), &Z_Registration_Info_UScriptStruct_CameraFilmbackSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraFilmbackSettings), 561856777U) },
		{ FNamedFilmbackPreset::StaticStruct, Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewStructOps, TEXT("NamedFilmbackPreset"), &Z_Registration_Info_UScriptStruct_NamedFilmbackPreset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNamedFilmbackPreset), 3935679770U) },
		{ FCameraLensSettings::StaticStruct, Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewStructOps, TEXT("CameraLensSettings"), &Z_Registration_Info_UScriptStruct_CameraLensSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraLensSettings), 3058093974U) },
		{ FNamedLensPreset::StaticStruct, Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewStructOps, TEXT("NamedLensPreset"), &Z_Registration_Info_UScriptStruct_NamedLensPreset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNamedLensPreset), 122356150U) },
		{ FCameraTrackingFocusSettings::StaticStruct, Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewStructOps, TEXT("CameraTrackingFocusSettings"), &Z_Registration_Info_UScriptStruct_CameraTrackingFocusSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraTrackingFocusSettings), 3805158512U) },
		{ FCameraFocusSettings::StaticStruct, Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewStructOps, TEXT("CameraFocusSettings"), &Z_Registration_Info_UScriptStruct_CameraFocusSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraFocusSettings), 441628049U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCineCameraComponent, UCineCameraComponent::StaticClass, TEXT("UCineCameraComponent"), &Z_Registration_Info_UClass_UCineCameraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCineCameraComponent), 2103169076U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_1574726576(TEXT("/Script/CinematicCamera"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
