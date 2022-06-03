// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/ReflectionCaptureComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReflectionCaptureComponent() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EReflectionSourceType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMobileReflectionCompression();
	ENGINE_API UClass* Z_Construct_UClass_UReflectionCaptureComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UReflectionCaptureComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReflectionSourceType;
	static UEnum* EReflectionSourceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EReflectionSourceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EReflectionSourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EReflectionSourceType, Z_Construct_UPackage__Script_Engine(), TEXT("EReflectionSourceType"));
		}
		return Z_Registration_Info_UEnum_EReflectionSourceType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EReflectionSourceType>()
	{
		return EReflectionSourceType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EReflectionSourceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EReflectionSourceType_Statics::Enumerators[] = {
		{ "EReflectionSourceType::CapturedScene", (int64)EReflectionSourceType::CapturedScene },
		{ "EReflectionSourceType::SpecifiedCubemap", (int64)EReflectionSourceType::SpecifiedCubemap },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EReflectionSourceType_Statics::Enum_MetaDataParams[] = {
		{ "CapturedScene.Comment", "/** Construct the reflection source from the captured scene*/" },
		{ "CapturedScene.Name", "EReflectionSourceType::CapturedScene" },
		{ "CapturedScene.ToolTip", "Construct the reflection source from the captured scene" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "SpecifiedCubemap.Comment", "/** Construct the reflection source from the specified cubemap. */" },
		{ "SpecifiedCubemap.Name", "EReflectionSourceType::SpecifiedCubemap" },
		{ "SpecifiedCubemap.ToolTip", "Construct the reflection source from the specified cubemap." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EReflectionSourceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EReflectionSourceType",
		"EReflectionSourceType",
		Z_Construct_UEnum_Engine_EReflectionSourceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EReflectionSourceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EReflectionSourceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EReflectionSourceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EReflectionSourceType()
	{
		if (!Z_Registration_Info_UEnum_EReflectionSourceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReflectionSourceType.InnerSingleton, Z_Construct_UEnum_Engine_EReflectionSourceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EReflectionSourceType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMobileReflectionCompression;
	static UEnum* EMobileReflectionCompression_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMobileReflectionCompression.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMobileReflectionCompression.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMobileReflectionCompression, Z_Construct_UPackage__Script_Engine(), TEXT("EMobileReflectionCompression"));
		}
		return Z_Registration_Info_UEnum_EMobileReflectionCompression.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMobileReflectionCompression>()
	{
		return EMobileReflectionCompression_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMobileReflectionCompression_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMobileReflectionCompression_Statics::Enumerators[] = {
		{ "EMobileReflectionCompression::Default", (int64)EMobileReflectionCompression::Default },
		{ "EMobileReflectionCompression::On", (int64)EMobileReflectionCompression::On },
		{ "EMobileReflectionCompression::Off", (int64)EMobileReflectionCompression::Off },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMobileReflectionCompression_Statics::Enum_MetaDataParams[] = {
		{ "Default.Name", "EMobileReflectionCompression::Default" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "Off.Name", "EMobileReflectionCompression::Off" },
		{ "On.Name", "EMobileReflectionCompression::On" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMobileReflectionCompression_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMobileReflectionCompression",
		"EMobileReflectionCompression",
		Z_Construct_UEnum_Engine_EMobileReflectionCompression_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMobileReflectionCompression_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMobileReflectionCompression_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMobileReflectionCompression_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMobileReflectionCompression()
	{
		if (!Z_Registration_Info_UEnum_EMobileReflectionCompression.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMobileReflectionCompression.InnerSingleton, Z_Construct_UEnum_Engine_EMobileReflectionCompression_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMobileReflectionCompression.InnerSingleton;
	}
	void UReflectionCaptureComponent::StaticRegisterNativesUReflectionCaptureComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReflectionCaptureComponent);
	UClass* Z_Construct_UClass_UReflectionCaptureComponent_NoRegister()
	{
		return UReflectionCaptureComponent::StaticClass();
	}
	struct Z_Construct_UClass_UReflectionCaptureComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureOffsetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CaptureOffsetComponent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReflectionSourceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionSourceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReflectionSourceType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MobileReflectionCompression_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MobileReflectionCompression_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MobileReflectionCompression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cubemap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Cubemap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceCubemapAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceCubemapAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Brightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bModifyMaxValueRGBM_MetaData[];
#endif
		static void NewProp_bModifyMaxValueRGBM_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bModifyMaxValueRGBM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxValueRGBM_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValueRGBM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CaptureOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapBuildDataId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MapBuildDataId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedEncodedHDRCubemap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedEncodedHDRCubemap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReflectionCaptureComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// -> will be exported to EngineDecalClasses.h\n" },
		{ "HideCategories", "Collision Object Physics SceneComponent Activation Components|Activation Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/ReflectionCaptureComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "-> will be exported to EngineDecalClasses.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffsetComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffsetComponent = { "CaptureOffsetComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReflectionCaptureComponent, CaptureOffsetComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffsetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffsetComponent_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_ReflectionSourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_ReflectionSourceType_MetaData[] = {
		{ "Category", "ReflectionCapture" },
		{ "Comment", "/** Indicates where to get the reflection source from. */" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "Indicates where to get the reflection source from." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_ReflectionSourceType = { "ReflectionSourceType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReflectionCaptureComponent, ReflectionSourceType), Z_Construct_UEnum_Engine_EReflectionSourceType, METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_ReflectionSourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_ReflectionSourceType_MetaData)) }; // 3368800989
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MobileReflectionCompression_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MobileReflectionCompression_MetaData[] = {
		{ "Category", "ReflectionCaptureMobile" },
		{ "Comment", "/** Indicates if the Reflection will be compressed for mobile. If set to default it will take the project wide setting.*/" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "Indicates if the Reflection will be compressed for mobile. If set to default it will take the project wide setting." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MobileReflectionCompression = { "MobileReflectionCompression", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReflectionCaptureComponent, MobileReflectionCompression), Z_Construct_UEnum_Engine_EMobileReflectionCompression, METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MobileReflectionCompression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MobileReflectionCompression_MetaData)) }; // 1759278589
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Cubemap_MetaData[] = {
		{ "Category", "ReflectionCapture" },
		{ "Comment", "/** Cubemap to use for reflection if ReflectionSourceType is set to RS_SpecifiedCubemap. */" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "Cubemap to use for reflection if ReflectionSourceType is set to RS_SpecifiedCubemap." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Cubemap = { "Cubemap", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReflectionCaptureComponent, Cubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Cubemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Cubemap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_SourceCubemapAngle_MetaData[] = {
		{ "Category", "ReflectionCapture" },
		{ "Comment", "/** Angle to rotate the source cubemap when SourceType is set to SLS_SpecifiedCubemap. */" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "Angle to rotate the source cubemap when SourceType is set to SLS_SpecifiedCubemap." },
		{ "UIMax", "360" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_SourceCubemapAngle = { "SourceCubemapAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReflectionCaptureComponent, SourceCubemapAngle), METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_SourceCubemapAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_SourceCubemapAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Brightness_MetaData[] = {
		{ "Category", "ReflectionCapture" },
		{ "Comment", "/** A brightness control to scale the captured scene's reflection intensity. */" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "A brightness control to scale the captured scene's reflection intensity." },
		{ "UIMax", "4" },
		{ "UIMin", ".5" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReflectionCaptureComponent, Brightness), METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Brightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Brightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_bModifyMaxValueRGBM_MetaData[] = {
		{ "Category", "ReflectionCaptureMobile" },
		{ "Comment", "/** Indicates if we want to manually modify the MaxRGBM value.*/" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "Indicates if we want to manually modify the MaxRGBM value." },
	};
#endif
	void Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_bModifyMaxValueRGBM_SetBit(void* Obj)
	{
		((UReflectionCaptureComponent*)Obj)->bModifyMaxValueRGBM = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_bModifyMaxValueRGBM = { "bModifyMaxValueRGBM", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UReflectionCaptureComponent), &Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_bModifyMaxValueRGBM_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_bModifyMaxValueRGBM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_bModifyMaxValueRGBM_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MaxValueRGBM_MetaData[] = {
		{ "Category", "ReflectionCaptureMobile" },
		{ "Comment", "/** M values for RGBM, it will dynamically be generated by taking the highest RGB value into account. Explictly modifying it will require a Reflection Re-Capture.*/" },
		{ "EditCondition", "bModifyMaxValueRGBM == true" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "M values for RGBM, it will dynamically be generated by taking the highest RGB value into account. Explictly modifying it will require a Reflection Re-Capture." },
		{ "UIMax", "16" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MaxValueRGBM = { "MaxValueRGBM", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReflectionCaptureComponent, MaxValueRGBM), METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MaxValueRGBM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MaxValueRGBM_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffset_MetaData[] = {
		{ "Category", "ReflectionCapture" },
		{ "Comment", "/** World space offset to apply before capturing. */" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "World space offset to apply before capturing." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffset = { "CaptureOffset", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReflectionCaptureComponent, CaptureOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MapBuildDataId_MetaData[] = {
		{ "Comment", "/** Guid for map build data */" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "Guid for map build data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MapBuildDataId = { "MapBuildDataId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReflectionCaptureComponent, MapBuildDataId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MapBuildDataId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MapBuildDataId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CachedEncodedHDRCubemap_MetaData[] = {
		{ "Comment", "/** Cached Cubemap texture from MapBuildData used for rendering with the encoded HDR values. */" },
		{ "ModuleRelativePath", "Classes/Components/ReflectionCaptureComponent.h" },
		{ "ToolTip", "Cached Cubemap texture from MapBuildData used for rendering with the encoded HDR values." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CachedEncodedHDRCubemap = { "CachedEncodedHDRCubemap", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UReflectionCaptureComponent, CachedEncodedHDRCubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CachedEncodedHDRCubemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CachedEncodedHDRCubemap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReflectionCaptureComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffsetComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_ReflectionSourceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_ReflectionSourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MobileReflectionCompression_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MobileReflectionCompression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Cubemap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_SourceCubemapAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_Brightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_bModifyMaxValueRGBM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MaxValueRGBM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CaptureOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_MapBuildDataId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReflectionCaptureComponent_Statics::NewProp_CachedEncodedHDRCubemap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReflectionCaptureComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReflectionCaptureComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReflectionCaptureComponent_Statics::ClassParams = {
		&UReflectionCaptureComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReflectionCaptureComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::PropPointers),
		0,
		0x00A800A5u,
		METADATA_PARAMS(Z_Construct_UClass_UReflectionCaptureComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReflectionCaptureComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReflectionCaptureComponent()
	{
		if (!Z_Registration_Info_UClass_UReflectionCaptureComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReflectionCaptureComponent.OuterSingleton, Z_Construct_UClass_UReflectionCaptureComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReflectionCaptureComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UReflectionCaptureComponent>()
	{
		return UReflectionCaptureComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReflectionCaptureComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UReflectionCaptureComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_Statics::EnumInfo[] = {
		{ EReflectionSourceType_StaticEnum, TEXT("EReflectionSourceType"), &Z_Registration_Info_UEnum_EReflectionSourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3368800989U) },
		{ EMobileReflectionCompression_StaticEnum, TEXT("EMobileReflectionCompression"), &Z_Registration_Info_UEnum_EMobileReflectionCompression, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1759278589U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReflectionCaptureComponent, UReflectionCaptureComponent::StaticClass, TEXT("UReflectionCaptureComponent"), &Z_Registration_Info_UClass_UReflectionCaptureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReflectionCaptureComponent), 1863823807U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_1147635591(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
