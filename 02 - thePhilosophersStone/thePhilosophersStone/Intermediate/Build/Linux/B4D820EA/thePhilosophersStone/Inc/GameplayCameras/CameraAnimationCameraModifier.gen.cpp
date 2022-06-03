// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCameras/Public/CameraAnimationCameraModifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraAnimationCameraModifier() {}
// Cross Module References
	GAMEPLAYCAMERAS_API UEnum* Z_Construct_UEnum_GameplayCameras_ECameraAnimationPlaySpace();
	UPackage* Z_Construct_UPackage__Script_GameplayCameras();
	GAMEPLAYCAMERAS_API UEnum* Z_Construct_UEnum_GameplayCameras_ECameraAnimationEasingType();
	GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraAnimationParams();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraAnimationHandle();
	GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FActiveCameraAnimationInfo();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationSequence_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationSequencePlayer_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_NoRegister();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraAnimationCameraModifier_NoRegister();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UCameraAnimationCameraModifier();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraAnimationPlaySpace;
	static UEnum* ECameraAnimationPlaySpace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECameraAnimationPlaySpace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECameraAnimationPlaySpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraAnimationPlaySpace, Z_Construct_UPackage__Script_GameplayCameras(), TEXT("ECameraAnimationPlaySpace"));
		}
		return Z_Registration_Info_UEnum_ECameraAnimationPlaySpace.OuterSingleton;
	}
	template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<ECameraAnimationPlaySpace>()
	{
		return ECameraAnimationPlaySpace_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayCameras_ECameraAnimationPlaySpace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayCameras_ECameraAnimationPlaySpace_Statics::Enumerators[] = {
		{ "ECameraAnimationPlaySpace::CameraLocal", (int64)ECameraAnimationPlaySpace::CameraLocal },
		{ "ECameraAnimationPlaySpace::World", (int64)ECameraAnimationPlaySpace::World },
		{ "ECameraAnimationPlaySpace::UserDefined", (int64)ECameraAnimationPlaySpace::UserDefined },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayCameras_ECameraAnimationPlaySpace_Statics::Enum_MetaDataParams[] = {
		{ "CameraLocal.Comment", "/** This anim is applied in camera space. */" },
		{ "CameraLocal.Name", "ECameraAnimationPlaySpace::CameraLocal" },
		{ "CameraLocal.ToolTip", "This anim is applied in camera space." },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "UserDefined.Comment", "/** This anim is applied in a user-specified space (defined by UserPlaySpaceMatrix). */" },
		{ "UserDefined.Name", "ECameraAnimationPlaySpace::UserDefined" },
		{ "UserDefined.ToolTip", "This anim is applied in a user-specified space (defined by UserPlaySpaceMatrix)." },
		{ "World.Comment", "/** This anim is applied in world space. */" },
		{ "World.Name", "ECameraAnimationPlaySpace::World" },
		{ "World.ToolTip", "This anim is applied in world space." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayCameras_ECameraAnimationPlaySpace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayCameras,
		nullptr,
		"ECameraAnimationPlaySpace",
		"ECameraAnimationPlaySpace",
		Z_Construct_UEnum_GameplayCameras_ECameraAnimationPlaySpace_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_ECameraAnimationPlaySpace_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayCameras_ECameraAnimationPlaySpace_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_ECameraAnimationPlaySpace_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayCameras_ECameraAnimationPlaySpace()
	{
		if (!Z_Registration_Info_UEnum_ECameraAnimationPlaySpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraAnimationPlaySpace.InnerSingleton, Z_Construct_UEnum_GameplayCameras_ECameraAnimationPlaySpace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECameraAnimationPlaySpace.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraAnimationEasingType;
	static UEnum* ECameraAnimationEasingType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECameraAnimationEasingType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECameraAnimationEasingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayCameras_ECameraAnimationEasingType, Z_Construct_UPackage__Script_GameplayCameras(), TEXT("ECameraAnimationEasingType"));
		}
		return Z_Registration_Info_UEnum_ECameraAnimationEasingType.OuterSingleton;
	}
	template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<ECameraAnimationEasingType>()
	{
		return ECameraAnimationEasingType_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayCameras_ECameraAnimationEasingType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayCameras_ECameraAnimationEasingType_Statics::Enumerators[] = {
		{ "ECameraAnimationEasingType::Linear", (int64)ECameraAnimationEasingType::Linear },
		{ "ECameraAnimationEasingType::Sinusoidal", (int64)ECameraAnimationEasingType::Sinusoidal },
		{ "ECameraAnimationEasingType::Quadratic", (int64)ECameraAnimationEasingType::Quadratic },
		{ "ECameraAnimationEasingType::Cubic", (int64)ECameraAnimationEasingType::Cubic },
		{ "ECameraAnimationEasingType::Quartic", (int64)ECameraAnimationEasingType::Quartic },
		{ "ECameraAnimationEasingType::Quintic", (int64)ECameraAnimationEasingType::Quintic },
		{ "ECameraAnimationEasingType::Exponential", (int64)ECameraAnimationEasingType::Exponential },
		{ "ECameraAnimationEasingType::Circular", (int64)ECameraAnimationEasingType::Circular },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayCameras_ECameraAnimationEasingType_Statics::Enum_MetaDataParams[] = {
		{ "Circular.Name", "ECameraAnimationEasingType::Circular" },
		{ "Cubic.Name", "ECameraAnimationEasingType::Cubic" },
		{ "Exponential.Name", "ECameraAnimationEasingType::Exponential" },
		{ "Linear.Name", "ECameraAnimationEasingType::Linear" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "Quadratic.Name", "ECameraAnimationEasingType::Quadratic" },
		{ "Quartic.Name", "ECameraAnimationEasingType::Quartic" },
		{ "Quintic.Name", "ECameraAnimationEasingType::Quintic" },
		{ "Sinusoidal.Name", "ECameraAnimationEasingType::Sinusoidal" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayCameras_ECameraAnimationEasingType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayCameras,
		nullptr,
		"ECameraAnimationEasingType",
		"ECameraAnimationEasingType",
		Z_Construct_UEnum_GameplayCameras_ECameraAnimationEasingType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_ECameraAnimationEasingType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayCameras_ECameraAnimationEasingType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_ECameraAnimationEasingType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayCameras_ECameraAnimationEasingType()
	{
		if (!Z_Registration_Info_UEnum_ECameraAnimationEasingType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraAnimationEasingType.InnerSingleton, Z_Construct_UEnum_GameplayCameras_ECameraAnimationEasingType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECameraAnimationEasingType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraAnimationParams;
class UScriptStruct* FCameraAnimationParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraAnimationParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraAnimationParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraAnimationParams, Z_Construct_UPackage__Script_GameplayCameras(), TEXT("CameraAnimationParams"));
	}
	return Z_Registration_Info_UScriptStruct_CameraAnimationParams.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FCameraAnimationParams>()
{
	return FCameraAnimationParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCameraAnimationParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EaseInType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EaseInType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EaseInType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EaseInDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EaseInDuration;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EaseOutType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EaseOutType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EaseOutType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EaseOutDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EaseOutDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomStartTime_MetaData[];
#endif
		static void NewProp_bRandomStartTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomStartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DurationOverride_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationOverride;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlaySpace_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaySpace_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaySpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserPlaySpaceRot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserPlaySpaceRot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Parameter struct for adding new camera animations to UCameraAnimationCameraModifier */" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "ToolTip", "Parameter struct for adding new camera animations to UCameraAnimationCameraModifier" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraAnimationParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Camera Animation" },
		{ "Comment", "/** Time scale for playing the new camera animation */" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "ToolTip", "Time scale for playing the new camera animation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraAnimationParams, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Camera Animation" },
		{ "Comment", "/** Global scale to use for the new camera animation */" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "ToolTip", "Global scale to use for the new camera animation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraAnimationParams, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_Scale_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_EaseInType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_EaseInType_MetaData[] = {
		{ "Category", "Camera Animation" },
		{ "Comment", "/** Ease-in function type */" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "ToolTip", "Ease-in function type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_EaseInType = { "EaseInType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraAnimationParams, EaseInType), Z_Construct_UEnum_GameplayCameras_ECameraAnimationEasingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_EaseInType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_EaseInType_MetaData)) }; // 2659138419
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_EaseInDuration_MetaData[] = {
		{ "Category", "Camera Animation" },
		{ "Comment", "/** Ease-in duration in seconds */" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "ToolTip", "Ease-in duration in seconds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_EaseInDuration = { "EaseInDuration", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraAnimationParams, EaseInDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_EaseInDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_EaseInDuration_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_EaseOutType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_EaseOutType_MetaData[] = {
		{ "Category", "Camera Animation" },
		{ "Comment", "/** Ease-out function type */" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "ToolTip", "Ease-out function type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_EaseOutType = { "EaseOutType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraAnimationParams, EaseOutType), Z_Construct_UEnum_GameplayCameras_ECameraAnimationEasingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_EaseOutType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_EaseOutType_MetaData)) }; // 2659138419
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_EaseOutDuration_MetaData[] = {
		{ "Category", "Camera Animation" },
		{ "Comment", "/** Ease-out duration in seconds */" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "ToolTip", "Ease-out duration in seconds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_EaseOutDuration = { "EaseOutDuration", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraAnimationParams, EaseOutDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_EaseOutDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_EaseOutDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "Camera Animation" },
		{ "Comment", "/** Whether the camera animation should loop */" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "ToolTip", "Whether the camera animation should loop" },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((FCameraAnimationParams*)Obj)->bLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCameraAnimationParams), &Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_bLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_bLoop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_bRandomStartTime_MetaData[] = {
		{ "Category", "Camera Animation" },
		{ "Comment", "/** Whether the camera animation should have a random start time */" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "ToolTip", "Whether the camera animation should have a random start time" },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_bRandomStartTime_SetBit(void* Obj)
	{
		((FCameraAnimationParams*)Obj)->bRandomStartTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_bRandomStartTime = { "bRandomStartTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCameraAnimationParams), &Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_bRandomStartTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_bRandomStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_bRandomStartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_DurationOverride_MetaData[] = {
		{ "Category", "Camera Animation" },
		{ "Comment", "/** Override the duration of the animation with a new duration (including blends) */" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "ToolTip", "Override the duration of the animation with a new duration (including blends)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_DurationOverride = { "DurationOverride", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraAnimationParams, DurationOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_DurationOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_DurationOverride_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_PlaySpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_PlaySpace_MetaData[] = {
		{ "Category", "Camera Animation" },
		{ "Comment", "/** The transform space to use for the new camera shake */" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "ToolTip", "The transform space to use for the new camera shake" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_PlaySpace = { "PlaySpace", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraAnimationParams, PlaySpace), Z_Construct_UEnum_GameplayCameras_ECameraAnimationPlaySpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_PlaySpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_PlaySpace_MetaData)) }; // 1884215140
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_UserPlaySpaceRot_MetaData[] = {
		{ "Category", "Camera Animation" },
		{ "Comment", "/** User space to use when PlaySpace is UserDefined */" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "ToolTip", "User space to use when PlaySpace is UserDefined" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_UserPlaySpaceRot = { "UserPlaySpaceRot", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraAnimationParams, UserPlaySpaceRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_UserPlaySpaceRot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_UserPlaySpaceRot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_EaseInType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_EaseInType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_EaseInDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_EaseOutType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_EaseOutType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_EaseOutDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_bLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_bRandomStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_DurationOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_PlaySpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_PlaySpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewProp_UserPlaySpaceRot,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
		nullptr,
		&NewStructOps,
		"CameraAnimationParams",
		sizeof(FCameraAnimationParams),
		alignof(FCameraAnimationParams),
		Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraAnimationParams()
	{
		if (!Z_Registration_Info_UScriptStruct_CameraAnimationParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraAnimationParams.InnerSingleton, Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CameraAnimationParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraAnimationHandle;
class UScriptStruct* FCameraAnimationHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraAnimationHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraAnimationHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraAnimationHandle, Z_Construct_UPackage__Script_GameplayCameras(), TEXT("CameraAnimationHandle"));
	}
	return Z_Registration_Info_UScriptStruct_CameraAnimationHandle.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FCameraAnimationHandle>()
{
	return FCameraAnimationHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCameraAnimationHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraAnimationHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A handle to a camera animation running in UCameraAnimationCameraModifier */" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "ToolTip", "A handle to a camera animation running in UCameraAnimationCameraModifier" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraAnimationHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraAnimationHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraAnimationHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
		nullptr,
		&NewStructOps,
		"CameraAnimationHandle",
		sizeof(FCameraAnimationHandle),
		alignof(FCameraAnimationHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraAnimationHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraAnimationHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraAnimationHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_CameraAnimationHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraAnimationHandle.InnerSingleton, Z_Construct_UScriptStruct_FCameraAnimationHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CameraAnimationHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActiveCameraAnimationInfo;
class UScriptStruct* FActiveCameraAnimationInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveCameraAnimationInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActiveCameraAnimationInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveCameraAnimationInfo, Z_Construct_UPackage__Script_GameplayCameras(), TEXT("ActiveCameraAnimationInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ActiveCameraAnimationInfo.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FActiveCameraAnimationInfo>()
{
	return FActiveCameraAnimationInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraStandIn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraStandIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EaseInCurrentTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EaseInCurrentTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EaseOutCurrentTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EaseOutCurrentTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEasingIn_MetaData[];
#endif
		static void NewProp_bIsEasingIn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEasingIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEasingOut_MetaData[];
#endif
		static void NewProp_bIsEasingOut_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEasingOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Information about an active camera animation inside UCameraAnimationCameraModifier.\n */" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "ToolTip", "Information about an active camera animation inside UCameraAnimationCameraModifier." },
	};
#endif
	void* Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveCameraAnimationInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_Sequence_MetaData[] = {
		{ "Comment", "/** The sequence to use for the animation. */" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "ToolTip", "The sequence to use for the animation." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActiveCameraAnimationInfo, Sequence), Z_Construct_UClass_UCameraAnimationSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_Sequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_Params_MetaData[] = {
		{ "Comment", "/** The parameters for playing the animation. */" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "ToolTip", "The parameters for playing the animation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActiveCameraAnimationInfo, Params), Z_Construct_UScriptStruct_FCameraAnimationParams, METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_Params_MetaData)) }; // 2958298690
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_Handle_MetaData[] = {
		{ "Comment", "/** A reference handle for use with UCameraAnimationCameraModifier. */" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "ToolTip", "A reference handle for use with UCameraAnimationCameraModifier." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActiveCameraAnimationInfo, Handle), Z_Construct_UScriptStruct_FCameraAnimationHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_Handle_MetaData)) }; // 2618801347
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_Player_MetaData[] = {
		{ "Comment", "/** The player for playing the animation. */" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "ToolTip", "The player for playing the animation." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActiveCameraAnimationInfo, Player), Z_Construct_UClass_UCameraAnimationSequencePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_Player_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_CameraStandIn_MetaData[] = {
		{ "Comment", "/** Standin for the camera actor and components */" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "ToolTip", "Standin for the camera actor and components" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_CameraStandIn = { "CameraStandIn", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActiveCameraAnimationInfo, CameraStandIn), Z_Construct_UClass_UCameraAnimationSequenceCameraStandIn_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_CameraStandIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_CameraStandIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_EaseInCurrentTime_MetaData[] = {
		{ "Comment", "/** Current time into easing in */" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "ToolTip", "Current time into easing in" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_EaseInCurrentTime = { "EaseInCurrentTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActiveCameraAnimationInfo, EaseInCurrentTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_EaseInCurrentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_EaseInCurrentTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_EaseOutCurrentTime_MetaData[] = {
		{ "Comment", "/** Current time into easing out */" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "ToolTip", "Current time into easing out" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_EaseOutCurrentTime = { "EaseOutCurrentTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActiveCameraAnimationInfo, EaseOutCurrentTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_EaseOutCurrentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_EaseOutCurrentTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_bIsEasingIn_MetaData[] = {
		{ "Comment", "/** Whether easing in is ongoing */" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "ToolTip", "Whether easing in is ongoing" },
	};
#endif
	void Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_bIsEasingIn_SetBit(void* Obj)
	{
		((FActiveCameraAnimationInfo*)Obj)->bIsEasingIn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_bIsEasingIn = { "bIsEasingIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FActiveCameraAnimationInfo), &Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_bIsEasingIn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_bIsEasingIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_bIsEasingIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_bIsEasingOut_MetaData[] = {
		{ "Comment", "/** Whether easing out is ongoing */" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "ToolTip", "Whether easing out is ongoing" },
	};
#endif
	void Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_bIsEasingOut_SetBit(void* Obj)
	{
		((FActiveCameraAnimationInfo*)Obj)->bIsEasingOut = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_bIsEasingOut = { "bIsEasingOut", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FActiveCameraAnimationInfo), &Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_bIsEasingOut_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_bIsEasingOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_bIsEasingOut_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_CameraStandIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_EaseInCurrentTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_EaseOutCurrentTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_bIsEasingIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewProp_bIsEasingOut,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
		nullptr,
		&NewStructOps,
		"ActiveCameraAnimationInfo",
		sizeof(FActiveCameraAnimationInfo),
		alignof(FActiveCameraAnimationInfo),
		Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActiveCameraAnimationInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ActiveCameraAnimationInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActiveCameraAnimationInfo.InnerSingleton, Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActiveCameraAnimationInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(UCameraAnimationCameraModifier::execGetCameraAnimationCameraModifierFromPlayerController)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraAnimationCameraModifier**)Z_Param__Result=UCameraAnimationCameraModifier::GetCameraAnimationCameraModifierFromPlayerController(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraAnimationCameraModifier::execGetCameraAnimationCameraModifierFromID)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraAnimationCameraModifier**)Z_Param__Result=UCameraAnimationCameraModifier::GetCameraAnimationCameraModifierFromID(Z_Param_WorldContextObject,Z_Param_ControllerID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraAnimationCameraModifier::execGetCameraAnimationCameraModifier)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraAnimationCameraModifier**)Z_Param__Result=UCameraAnimationCameraModifier::GetCameraAnimationCameraModifier(Z_Param_WorldContextObject,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraAnimationCameraModifier::execStopAllCameraAnimations)
	{
		P_GET_UBOOL(Z_Param_bImmediate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAllCameraAnimations(Z_Param_bImmediate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraAnimationCameraModifier::execStopAllCameraAnimationsOf)
	{
		P_GET_OBJECT(UCameraAnimationSequence,Z_Param_Sequence);
		P_GET_UBOOL(Z_Param_bImmediate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAllCameraAnimationsOf(Z_Param_Sequence,Z_Param_bImmediate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraAnimationCameraModifier::execStopCameraAnimation)
	{
		P_GET_STRUCT_REF(FCameraAnimationHandle,Z_Param_Out_Handle);
		P_GET_UBOOL(Z_Param_bImmediate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopCameraAnimation(Z_Param_Out_Handle,Z_Param_bImmediate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraAnimationCameraModifier::execIsCameraAnimationActive)
	{
		P_GET_STRUCT_REF(FCameraAnimationHandle,Z_Param_Out_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCameraAnimationActive(Z_Param_Out_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraAnimationCameraModifier::execPlayCameraAnimation)
	{
		P_GET_OBJECT(UCameraAnimationSequence,Z_Param_Sequence);
		P_GET_STRUCT(FCameraAnimationParams,Z_Param_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCameraAnimationHandle*)Z_Param__Result=P_THIS->PlayCameraAnimation(Z_Param_Sequence,Z_Param_Params);
		P_NATIVE_END;
	}
	void UCameraAnimationCameraModifier::StaticRegisterNativesUCameraAnimationCameraModifier()
	{
		UClass* Class = UCameraAnimationCameraModifier::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCameraAnimationCameraModifier", &UCameraAnimationCameraModifier::execGetCameraAnimationCameraModifier },
			{ "GetCameraAnimationCameraModifierFromID", &UCameraAnimationCameraModifier::execGetCameraAnimationCameraModifierFromID },
			{ "GetCameraAnimationCameraModifierFromPlayerController", &UCameraAnimationCameraModifier::execGetCameraAnimationCameraModifierFromPlayerController },
			{ "IsCameraAnimationActive", &UCameraAnimationCameraModifier::execIsCameraAnimationActive },
			{ "PlayCameraAnimation", &UCameraAnimationCameraModifier::execPlayCameraAnimation },
			{ "StopAllCameraAnimations", &UCameraAnimationCameraModifier::execStopAllCameraAnimations },
			{ "StopAllCameraAnimationsOf", &UCameraAnimationCameraModifier::execStopAllCameraAnimationsOf },
			{ "StopCameraAnimation", &UCameraAnimationCameraModifier::execStopCameraAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Statics
	{
		struct CameraAnimationCameraModifier_eventGetCameraAnimationCameraModifier_Parms
		{
			const UObject* WorldContextObject;
			int32 PlayerIndex;
			UCameraAnimationCameraModifier* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraAnimationCameraModifier_eventGetCameraAnimationCameraModifier_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraAnimationCameraModifier_eventGetCameraAnimationCameraModifier_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraAnimationCameraModifier_eventGetCameraAnimationCameraModifier_Parms, ReturnValue), Z_Construct_UClass_UCameraAnimationCameraModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Statics::NewProp_PlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Animation" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraAnimationCameraModifier, nullptr, "GetCameraAnimationCameraModifier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Statics::CameraAnimationCameraModifier_eventGetCameraAnimationCameraModifier_Parms), Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Statics
	{
		struct CameraAnimationCameraModifier_eventGetCameraAnimationCameraModifierFromID_Parms
		{
			const UObject* WorldContextObject;
			int32 ControllerID;
			UCameraAnimationCameraModifier* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerID;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraAnimationCameraModifier_eventGetCameraAnimationCameraModifierFromID_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Statics::NewProp_ControllerID = { "ControllerID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraAnimationCameraModifier_eventGetCameraAnimationCameraModifierFromID_Parms, ControllerID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraAnimationCameraModifier_eventGetCameraAnimationCameraModifierFromID_Parms, ReturnValue), Z_Construct_UClass_UCameraAnimationCameraModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Statics::NewProp_ControllerID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Animation" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraAnimationCameraModifier, nullptr, "GetCameraAnimationCameraModifierFromID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Statics::CameraAnimationCameraModifier_eventGetCameraAnimationCameraModifierFromID_Parms), Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController_Statics
	{
		struct CameraAnimationCameraModifier_eventGetCameraAnimationCameraModifierFromPlayerController_Parms
		{
			const APlayerController* PlayerController;
			UCameraAnimationCameraModifier* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController_Statics::NewProp_PlayerController_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraAnimationCameraModifier_eventGetCameraAnimationCameraModifierFromPlayerController_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController_Statics::NewProp_PlayerController_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraAnimationCameraModifier_eventGetCameraAnimationCameraModifierFromPlayerController_Parms, ReturnValue), Z_Construct_UClass_UCameraAnimationCameraModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Animation" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraAnimationCameraModifier, nullptr, "GetCameraAnimationCameraModifierFromPlayerController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController_Statics::CameraAnimationCameraModifier_eventGetCameraAnimationCameraModifierFromPlayerController_Parms), Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraAnimationCameraModifier_IsCameraAnimationActive_Statics
	{
		struct CameraAnimationCameraModifier_eventIsCameraAnimationActive_Parms
		{
			FCameraAnimationHandle Handle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraAnimationCameraModifier_IsCameraAnimationActive_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraAnimationCameraModifier_IsCameraAnimationActive_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraAnimationCameraModifier_eventIsCameraAnimationActive_Parms, Handle), Z_Construct_UScriptStruct_FCameraAnimationHandle, METADATA_PARAMS(Z_Construct_UFunction_UCameraAnimationCameraModifier_IsCameraAnimationActive_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimationCameraModifier_IsCameraAnimationActive_Statics::NewProp_Handle_MetaData)) }; // 2618801347
	void Z_Construct_UFunction_UCameraAnimationCameraModifier_IsCameraAnimationActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CameraAnimationCameraModifier_eventIsCameraAnimationActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraAnimationCameraModifier_IsCameraAnimationActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CameraAnimationCameraModifier_eventIsCameraAnimationActive_Parms), &Z_Construct_UFunction_UCameraAnimationCameraModifier_IsCameraAnimationActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraAnimationCameraModifier_IsCameraAnimationActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraAnimationCameraModifier_IsCameraAnimationActive_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraAnimationCameraModifier_IsCameraAnimationActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraAnimationCameraModifier_IsCameraAnimationActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Animation" },
		{ "Comment", "/**\n\x09 * Returns whether the given camera animation is playing.\n\x09 * @param Handle\x09\x09""A handle to a previously started camera animation.\n\x09 * @return\x09\x09\x09\x09Whether the corresponding camera animation is playing or not.\n\x09 */" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "ToolTip", "Returns whether the given camera animation is playing.\n@param Handle                A handle to a previously started camera animation.\n@return                              Whether the corresponding camera animation is playing or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraAnimationCameraModifier_IsCameraAnimationActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraAnimationCameraModifier, nullptr, "IsCameraAnimationActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraAnimationCameraModifier_IsCameraAnimationActive_Statics::CameraAnimationCameraModifier_eventIsCameraAnimationActive_Parms), Z_Construct_UFunction_UCameraAnimationCameraModifier_IsCameraAnimationActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimationCameraModifier_IsCameraAnimationActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraAnimationCameraModifier_IsCameraAnimationActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimationCameraModifier_IsCameraAnimationActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraAnimationCameraModifier_IsCameraAnimationActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraAnimationCameraModifier_IsCameraAnimationActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraAnimationCameraModifier_PlayCameraAnimation_Statics
	{
		struct CameraAnimationCameraModifier_eventPlayCameraAnimation_Parms
		{
			UCameraAnimationSequence* Sequence;
			FCameraAnimationParams Params;
			FCameraAnimationHandle ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraAnimationCameraModifier_PlayCameraAnimation_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraAnimationCameraModifier_eventPlayCameraAnimation_Parms, Sequence), Z_Construct_UClass_UCameraAnimationSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraAnimationCameraModifier_PlayCameraAnimation_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraAnimationCameraModifier_eventPlayCameraAnimation_Parms, Params), Z_Construct_UScriptStruct_FCameraAnimationParams, METADATA_PARAMS(nullptr, 0) }; // 2958298690
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraAnimationCameraModifier_PlayCameraAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraAnimationCameraModifier_eventPlayCameraAnimation_Parms, ReturnValue), Z_Construct_UScriptStruct_FCameraAnimationHandle, METADATA_PARAMS(nullptr, 0) }; // 2618801347
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraAnimationCameraModifier_PlayCameraAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraAnimationCameraModifier_PlayCameraAnimation_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraAnimationCameraModifier_PlayCameraAnimation_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraAnimationCameraModifier_PlayCameraAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraAnimationCameraModifier_PlayCameraAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Animation" },
		{ "Comment", "/**\n\x09 * Play a new camera animation sequence.\n\x09 * @param Sequence\x09\x09The sequence to use for the new camera animation.\n\x09 * @param Params\x09\x09The parameters for the new camera animation instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "ToolTip", "Play a new camera animation sequence.\n@param Sequence              The sequence to use for the new camera animation.\n@param Params                The parameters for the new camera animation instance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraAnimationCameraModifier_PlayCameraAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraAnimationCameraModifier, nullptr, "PlayCameraAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraAnimationCameraModifier_PlayCameraAnimation_Statics::CameraAnimationCameraModifier_eventPlayCameraAnimation_Parms), Z_Construct_UFunction_UCameraAnimationCameraModifier_PlayCameraAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimationCameraModifier_PlayCameraAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraAnimationCameraModifier_PlayCameraAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimationCameraModifier_PlayCameraAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraAnimationCameraModifier_PlayCameraAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraAnimationCameraModifier_PlayCameraAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimations_Statics
	{
		struct CameraAnimationCameraModifier_eventStopAllCameraAnimations_Parms
		{
			bool bImmediate;
		};
		static void NewProp_bImmediate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimations_Statics::NewProp_bImmediate_SetBit(void* Obj)
	{
		((CameraAnimationCameraModifier_eventStopAllCameraAnimations_Parms*)Obj)->bImmediate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimations_Statics::NewProp_bImmediate = { "bImmediate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CameraAnimationCameraModifier_eventStopAllCameraAnimations_Parms), &Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimations_Statics::NewProp_bImmediate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimations_Statics::NewProp_bImmediate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimations_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Animation" },
		{ "Comment", "/**\n\x09 * Stop all camera animation instances.\n\x09 * @param bImmediate\x09True to stop it right now and ignore blend out, false to let it blend out as indicated.\n\x09 */" },
		{ "CPP_Default_bImmediate", "false" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "ToolTip", "Stop all camera animation instances.\n@param bImmediate    True to stop it right now and ignore blend out, false to let it blend out as indicated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraAnimationCameraModifier, nullptr, "StopAllCameraAnimations", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimations_Statics::CameraAnimationCameraModifier_eventStopAllCameraAnimations_Parms), Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimationsOf_Statics
	{
		struct CameraAnimationCameraModifier_eventStopAllCameraAnimationsOf_Parms
		{
			UCameraAnimationSequence* Sequence;
			bool bImmediate;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static void NewProp_bImmediate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimationsOf_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraAnimationCameraModifier_eventStopAllCameraAnimationsOf_Parms, Sequence), Z_Construct_UClass_UCameraAnimationSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimationsOf_Statics::NewProp_bImmediate_SetBit(void* Obj)
	{
		((CameraAnimationCameraModifier_eventStopAllCameraAnimationsOf_Parms*)Obj)->bImmediate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimationsOf_Statics::NewProp_bImmediate = { "bImmediate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CameraAnimationCameraModifier_eventStopAllCameraAnimationsOf_Parms), &Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimationsOf_Statics::NewProp_bImmediate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimationsOf_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimationsOf_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimationsOf_Statics::NewProp_bImmediate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimationsOf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Animation" },
		{ "Comment", "/**\n\x09 * Stop playing all instances of the given camera animation sequence.\n\x09 * @param Sequence\x09\x09The sequence of which to stop all instances.\n\x09 * @param bImmediate\x09True to stop it right now and ignore blend out, false to let it blend out as indicated.\n\x09 */" },
		{ "CPP_Default_bImmediate", "false" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "ToolTip", "Stop playing all instances of the given camera animation sequence.\n@param Sequence              The sequence of which to stop all instances.\n@param bImmediate    True to stop it right now and ignore blend out, false to let it blend out as indicated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimationsOf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraAnimationCameraModifier, nullptr, "StopAllCameraAnimationsOf", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimationsOf_Statics::CameraAnimationCameraModifier_eventStopAllCameraAnimationsOf_Parms), Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimationsOf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimationsOf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimationsOf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimationsOf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimationsOf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimationsOf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraAnimationCameraModifier_StopCameraAnimation_Statics
	{
		struct CameraAnimationCameraModifier_eventStopCameraAnimation_Parms
		{
			FCameraAnimationHandle Handle;
			bool bImmediate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_bImmediate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraAnimationCameraModifier_StopCameraAnimation_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraAnimationCameraModifier_StopCameraAnimation_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraAnimationCameraModifier_eventStopCameraAnimation_Parms, Handle), Z_Construct_UScriptStruct_FCameraAnimationHandle, METADATA_PARAMS(Z_Construct_UFunction_UCameraAnimationCameraModifier_StopCameraAnimation_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimationCameraModifier_StopCameraAnimation_Statics::NewProp_Handle_MetaData)) }; // 2618801347
	void Z_Construct_UFunction_UCameraAnimationCameraModifier_StopCameraAnimation_Statics::NewProp_bImmediate_SetBit(void* Obj)
	{
		((CameraAnimationCameraModifier_eventStopCameraAnimation_Parms*)Obj)->bImmediate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraAnimationCameraModifier_StopCameraAnimation_Statics::NewProp_bImmediate = { "bImmediate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CameraAnimationCameraModifier_eventStopCameraAnimation_Parms), &Z_Construct_UFunction_UCameraAnimationCameraModifier_StopCameraAnimation_Statics::NewProp_bImmediate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraAnimationCameraModifier_StopCameraAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraAnimationCameraModifier_StopCameraAnimation_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraAnimationCameraModifier_StopCameraAnimation_Statics::NewProp_bImmediate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraAnimationCameraModifier_StopCameraAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Animation" },
		{ "Comment", "/** \n\x09 * Stops the given camera animation instance.\n\x09 * @param Hanlde\x09\x09""A handle to a previously started camera animation.\n\x09 * @param bImmediate\x09True to stop it right now and ignore blend out, false to let it blend out as indicated.\n\x09 */" },
		{ "CPP_Default_bImmediate", "false" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "ToolTip", "Stops the given camera animation instance.\n@param Hanlde                A handle to a previously started camera animation.\n@param bImmediate    True to stop it right now and ignore blend out, false to let it blend out as indicated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraAnimationCameraModifier_StopCameraAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraAnimationCameraModifier, nullptr, "StopCameraAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraAnimationCameraModifier_StopCameraAnimation_Statics::CameraAnimationCameraModifier_eventStopCameraAnimation_Parms), Z_Construct_UFunction_UCameraAnimationCameraModifier_StopCameraAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimationCameraModifier_StopCameraAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraAnimationCameraModifier_StopCameraAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimationCameraModifier_StopCameraAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraAnimationCameraModifier_StopCameraAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraAnimationCameraModifier_StopCameraAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraAnimationCameraModifier);
	UClass* Z_Construct_UClass_UCameraAnimationCameraModifier_NoRegister()
	{
		return UCameraAnimationCameraModifier::StaticClass();
	}
	struct Z_Construct_UClass_UCameraAnimationCameraModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveAnimations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveAnimations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveAnimations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceSerialNumber_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_InstanceSerialNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier, "GetCameraAnimationCameraModifier" }, // 3568964243
		{ &Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID, "GetCameraAnimationCameraModifierFromID" }, // 3634342964
		{ &Z_Construct_UFunction_UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController, "GetCameraAnimationCameraModifierFromPlayerController" }, // 1352056012
		{ &Z_Construct_UFunction_UCameraAnimationCameraModifier_IsCameraAnimationActive, "IsCameraAnimationActive" }, // 4135625515
		{ &Z_Construct_UFunction_UCameraAnimationCameraModifier_PlayCameraAnimation, "PlayCameraAnimation" }, // 2579257749
		{ &Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimations, "StopAllCameraAnimations" }, // 3523050357
		{ &Z_Construct_UFunction_UCameraAnimationCameraModifier_StopAllCameraAnimationsOf, "StopAllCameraAnimationsOf" }, // 2659111697
		{ &Z_Construct_UFunction_UCameraAnimationCameraModifier_StopCameraAnimation, "StopCameraAnimation" }, // 3172438183
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A camera modifier that plays camera animation sequences.\n */" },
		{ "IncludePath", "CameraAnimationCameraModifier.h" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A camera modifier that plays camera animation sequences." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::NewProp_ActiveAnimations_Inner = { "ActiveAnimations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActiveCameraAnimationInfo, METADATA_PARAMS(nullptr, 0) }; // 3710970193
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::NewProp_ActiveAnimations_MetaData[] = {
		{ "Comment", "/** List of active camera animation instances */" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "ToolTip", "List of active camera animation instances" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::NewProp_ActiveAnimations = { "ActiveAnimations", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraAnimationCameraModifier, ActiveAnimations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::NewProp_ActiveAnimations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::NewProp_ActiveAnimations_MetaData)) }; // 3710970193
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::NewProp_InstanceSerialNumber_MetaData[] = {
		{ "Comment", "/** Next serial number to use for a camera animation instance */" },
		{ "ModuleRelativePath", "Public/CameraAnimationCameraModifier.h" },
		{ "ToolTip", "Next serial number to use for a camera animation instance" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::NewProp_InstanceSerialNumber = { "InstanceSerialNumber", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraAnimationCameraModifier, InstanceSerialNumber), METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::NewProp_InstanceSerialNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::NewProp_InstanceSerialNumber_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::NewProp_ActiveAnimations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::NewProp_ActiveAnimations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::NewProp_InstanceSerialNumber,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraAnimationCameraModifier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::ClassParams = {
		&UCameraAnimationCameraModifier::StaticClass,
		"Camera",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraAnimationCameraModifier()
	{
		if (!Z_Registration_Info_UClass_UCameraAnimationCameraModifier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraAnimationCameraModifier.OuterSingleton, Z_Construct_UClass_UCameraAnimationCameraModifier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraAnimationCameraModifier.OuterSingleton;
	}
	template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UCameraAnimationCameraModifier>()
	{
		return UCameraAnimationCameraModifier::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraAnimationCameraModifier);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_Statics::EnumInfo[] = {
		{ ECameraAnimationPlaySpace_StaticEnum, TEXT("ECameraAnimationPlaySpace"), &Z_Registration_Info_UEnum_ECameraAnimationPlaySpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1884215140U) },
		{ ECameraAnimationEasingType_StaticEnum, TEXT("ECameraAnimationEasingType"), &Z_Registration_Info_UEnum_ECameraAnimationEasingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2659138419U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_Statics::ScriptStructInfo[] = {
		{ FCameraAnimationParams::StaticStruct, Z_Construct_UScriptStruct_FCameraAnimationParams_Statics::NewStructOps, TEXT("CameraAnimationParams"), &Z_Registration_Info_UScriptStruct_CameraAnimationParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraAnimationParams), 2958298690U) },
		{ FCameraAnimationHandle::StaticStruct, Z_Construct_UScriptStruct_FCameraAnimationHandle_Statics::NewStructOps, TEXT("CameraAnimationHandle"), &Z_Registration_Info_UScriptStruct_CameraAnimationHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraAnimationHandle), 2618801347U) },
		{ FActiveCameraAnimationInfo::StaticStruct, Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics::NewStructOps, TEXT("ActiveCameraAnimationInfo"), &Z_Registration_Info_UScriptStruct_ActiveCameraAnimationInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveCameraAnimationInfo), 3710970193U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraAnimationCameraModifier, UCameraAnimationCameraModifier::StaticClass, TEXT("UCameraAnimationCameraModifier"), &Z_Registration_Info_UClass_UCameraAnimationCameraModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraAnimationCameraModifier), 419317100U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_2513934348(TEXT("/Script/GameplayCameras"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
