// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IKRig/Public/Retargeter/IKRetargeter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRetargeter() {}
// Cross Module References
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRetargetChainMap();
	UPackage* Z_Construct_UPackage__Script_IKRig();
	IKRIG_API UEnum* Z_Construct_UEnum_IKRig_ERetargetTranslationMode();
	IKRIG_API UEnum* Z_Construct_UEnum_IKRig_ERetargetRotationMode();
	IKRIG_API UClass* Z_Construct_UClass_URetargetChainSettings_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_URetargetChainSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FIKRetargetPose();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	IKRIG_API UClass* Z_Construct_UClass_UIKRetargeter_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_UIKRetargeter();
	IKRIG_API UClass* Z_Construct_UClass_UIKRigDefinition_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RetargetChainMap;
class UScriptStruct* FRetargetChainMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RetargetChainMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RetargetChainMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRetargetChainMap, Z_Construct_UPackage__Script_IKRig(), TEXT("RetargetChainMap"));
	}
	return Z_Registration_Info_UScriptStruct_RetargetChainMap.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FRetargetChainMap>()
{
	return FRetargetChainMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRetargetChainMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceChain_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceChain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetChain_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetChain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRetargetChainMap_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRetargetChainMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRetargetChainMap>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRetargetChainMap_Statics::NewProp_SourceChain_MetaData[] = {
		{ "Category", "Offsets" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRetargetChainMap_Statics::NewProp_SourceChain = { "SourceChain", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRetargetChainMap, SourceChain), METADATA_PARAMS(Z_Construct_UScriptStruct_FRetargetChainMap_Statics::NewProp_SourceChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetargetChainMap_Statics::NewProp_SourceChain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRetargetChainMap_Statics::NewProp_TargetChain_MetaData[] = {
		{ "Category", "Offsets" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRetargetChainMap_Statics::NewProp_TargetChain = { "TargetChain", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRetargetChainMap, TargetChain), METADATA_PARAMS(Z_Construct_UScriptStruct_FRetargetChainMap_Statics::NewProp_TargetChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetargetChainMap_Statics::NewProp_TargetChain_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRetargetChainMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetChainMap_Statics::NewProp_SourceChain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetChainMap_Statics::NewProp_TargetChain,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRetargetChainMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
		nullptr,
		&NewStructOps,
		"RetargetChainMap",
		sizeof(FRetargetChainMap),
		alignof(FRetargetChainMap),
		Z_Construct_UScriptStruct_FRetargetChainMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetargetChainMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRetargetChainMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetargetChainMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRetargetChainMap()
	{
		if (!Z_Registration_Info_UScriptStruct_RetargetChainMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RetargetChainMap.InnerSingleton, Z_Construct_UScriptStruct_FRetargetChainMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RetargetChainMap.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERetargetTranslationMode;
	static UEnum* ERetargetTranslationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERetargetTranslationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERetargetTranslationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IKRig_ERetargetTranslationMode, Z_Construct_UPackage__Script_IKRig(), TEXT("ERetargetTranslationMode"));
		}
		return Z_Registration_Info_UEnum_ERetargetTranslationMode.OuterSingleton;
	}
	template<> IKRIG_API UEnum* StaticEnum<ERetargetTranslationMode>()
	{
		return ERetargetTranslationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_IKRig_ERetargetTranslationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_IKRig_ERetargetTranslationMode_Statics::Enumerators[] = {
		{ "ERetargetTranslationMode::None", (int64)ERetargetTranslationMode::None },
		{ "ERetargetTranslationMode::GloballyScaled", (int64)ERetargetTranslationMode::GloballyScaled },
		{ "ERetargetTranslationMode::Absolute", (int64)ERetargetTranslationMode::Absolute },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_IKRig_ERetargetTranslationMode_Statics::Enum_MetaDataParams[] = {
		{ "Absolute.DisplayName", "Absolute" },
		{ "Absolute.Name", "ERetargetTranslationMode::Absolute" },
		{ "BlueprintType", "true" },
		{ "GloballyScaled.DisplayName", "Globally Scaled" },
		{ "GloballyScaled.Name", "ERetargetTranslationMode::GloballyScaled" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ERetargetTranslationMode::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IKRig_ERetargetTranslationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_IKRig,
		nullptr,
		"ERetargetTranslationMode",
		"ERetargetTranslationMode",
		Z_Construct_UEnum_IKRig_ERetargetTranslationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_IKRig_ERetargetTranslationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_IKRig_ERetargetTranslationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_IKRig_ERetargetTranslationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_IKRig_ERetargetTranslationMode()
	{
		if (!Z_Registration_Info_UEnum_ERetargetTranslationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERetargetTranslationMode.InnerSingleton, Z_Construct_UEnum_IKRig_ERetargetTranslationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERetargetTranslationMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERetargetRotationMode;
	static UEnum* ERetargetRotationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERetargetRotationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERetargetRotationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IKRig_ERetargetRotationMode, Z_Construct_UPackage__Script_IKRig(), TEXT("ERetargetRotationMode"));
		}
		return Z_Registration_Info_UEnum_ERetargetRotationMode.OuterSingleton;
	}
	template<> IKRIG_API UEnum* StaticEnum<ERetargetRotationMode>()
	{
		return ERetargetRotationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_IKRig_ERetargetRotationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_IKRig_ERetargetRotationMode_Statics::Enumerators[] = {
		{ "ERetargetRotationMode::Interpolated", (int64)ERetargetRotationMode::Interpolated },
		{ "ERetargetRotationMode::OneToOne", (int64)ERetargetRotationMode::OneToOne },
		{ "ERetargetRotationMode::OneToOneReversed", (int64)ERetargetRotationMode::OneToOneReversed },
		{ "ERetargetRotationMode::None", (int64)ERetargetRotationMode::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_IKRig_ERetargetRotationMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Interpolated.DisplayName", "Interpolated" },
		{ "Interpolated.Name", "ERetargetRotationMode::Interpolated" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ERetargetRotationMode::None" },
		{ "OneToOne.DisplayName", "One to One" },
		{ "OneToOne.Name", "ERetargetRotationMode::OneToOne" },
		{ "OneToOneReversed.DisplayName", "One to One Reversed" },
		{ "OneToOneReversed.Name", "ERetargetRotationMode::OneToOneReversed" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IKRig_ERetargetRotationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_IKRig,
		nullptr,
		"ERetargetRotationMode",
		"ERetargetRotationMode",
		Z_Construct_UEnum_IKRig_ERetargetRotationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_IKRig_ERetargetRotationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_IKRig_ERetargetRotationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_IKRig_ERetargetRotationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_IKRig_ERetargetRotationMode()
	{
		if (!Z_Registration_Info_UEnum_ERetargetRotationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERetargetRotationMode.InnerSingleton, Z_Construct_UEnum_IKRig_ERetargetRotationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERetargetRotationMode.InnerSingleton;
	}
	void URetargetChainSettings::StaticRegisterNativesURetargetChainSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URetargetChainSettings);
	UClass* Z_Construct_UClass_URetargetChainSettings_NoRegister()
	{
		return URetargetChainSettings::StaticClass();
	}
	struct Z_Construct_UClass_URetargetChainSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceChain_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceChain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetChain_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetChain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopyPoseUsingFK_MetaData[];
#endif
		static void NewProp_CopyPoseUsingFK_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CopyPoseUsingFK;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAlpha;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TranslationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TranslationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TranslationAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DriveIKGoal_MetaData[];
#endif
		static void NewProp_DriveIKGoal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DriveIKGoal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendToSource_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendToSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendToSourceWeights_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendToSourceWeights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extension_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Extension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchSourceVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MatchSourceVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URetargetChainSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Retargeter/IKRetargeter.h" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_SourceChain_MetaData[] = {
		{ "Category", "Chain Mapping" },
		{ "Comment", "/** The chain on the Source IK Rig asset to copy animation FROM. */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The chain on the Source IK Rig asset to copy animation FROM." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_SourceChain = { "SourceChain", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URetargetChainSettings, SourceChain), METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_SourceChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_SourceChain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TargetChain_MetaData[] = {
		{ "Category", "Chain Mapping" },
		{ "Comment", "/** The chain on the Target IK Rig asset to copy animation TO. */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The chain on the Target IK Rig asset to copy animation TO." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TargetChain = { "TargetChain", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URetargetChainSettings, TargetChain), METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TargetChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TargetChain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_CopyPoseUsingFK_MetaData[] = {
		{ "Category", "FK Adjustments" },
		{ "Comment", "/** Whether to copy the shape of the chain from the source skeleton using the Rotation and Translation modes. Default is true.\n\x09* NOTE: All FK operations run before the IK pass to copy the shape of the FK chain from the source skeleton. */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Whether to copy the shape of the chain from the source skeleton using the Rotation and Translation modes. Default is true.\nNOTE: All FK operations run before the IK pass to copy the shape of the FK chain from the source skeleton." },
	};
#endif
	void Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_CopyPoseUsingFK_SetBit(void* Obj)
	{
		((URetargetChainSettings*)Obj)->CopyPoseUsingFK = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_CopyPoseUsingFK = { "CopyPoseUsingFK", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URetargetChainSettings), &Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_CopyPoseUsingFK_SetBit, METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_CopyPoseUsingFK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_CopyPoseUsingFK_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_RotationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_RotationMode_MetaData[] = {
		{ "Category", "FK Adjustments" },
		{ "Comment", "/** Determines how rotation is copied from the source chain to the target chain. Default is Interpolated.\n\x09* Interpolated: Source and target chains are normalized by their length, then each target bone rotation is generated by finding the rotation at the same normalized distance on the source chain and interpolating between the neighboring bones.\n\x09* One to One: Each target bone rotation is copied from the equivalent bone in the source chain, based on the order in the chain, starting at the root of the chain. If the target chain has more bones than the source, the extra bones will remain at their reference pose.\n\x09* One to One Reversed: Same as One-to-One, but starting from the tip of the chain.\n\x09* None: The rotation of each target bone in the chain is left at the reference pose. */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Determines how rotation is copied from the source chain to the target chain. Default is Interpolated.\nInterpolated: Source and target chains are normalized by their length, then each target bone rotation is generated by finding the rotation at the same normalized distance on the source chain and interpolating between the neighboring bones.\nOne to One: Each target bone rotation is copied from the equivalent bone in the source chain, based on the order in the chain, starting at the root of the chain. If the target chain has more bones than the source, the extra bones will remain at their reference pose.\nOne to One Reversed: Same as One-to-One, but starting from the tip of the chain.\nNone: The rotation of each target bone in the chain is left at the reference pose." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_RotationMode = { "RotationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URetargetChainSettings, RotationMode), Z_Construct_UEnum_IKRig_ERetargetRotationMode, METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_RotationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_RotationMode_MetaData)) }; // 2513679224
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_RotationAlpha_MetaData[] = {
		{ "Category", "FK Adjustments" },
		{ "Comment", "/** Range +/- infinity. Default 1. Scales the amount of rotation that is applied.\n\x09*  If Rotation Mode is None this parameter has no effect.\n\x09*  Otherwise, this parameter blends the rotation of each bone in the chain from the base retarget pose (0) to the retargeted pose (1).*/" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Range +/- infinity. Default 1. Scales the amount of rotation that is applied.\nIf Rotation Mode is None this parameter has no effect.\nOtherwise, this parameter blends the rotation of each bone in the chain from the base retarget pose (0) to the retargeted pose (1)." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_RotationAlpha = { "RotationAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URetargetChainSettings, RotationAlpha), METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_RotationAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_RotationAlpha_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TranslationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TranslationMode_MetaData[] = {
		{ "Category", "FK Adjustments" },
		{ "Comment", "/** Determines how translation is copied from the source chain to the target chain. Default is None.\n\x09* None: Translation of target bones are left unmodified from the retarget pose.\n\x09* Globally Scaled: Translation of target bone is set to the source bone offset multiplied by the global scale of the skeleton (determined by the relative height difference between retarget root bones).\n\x09* Absolute: Translation of target bone is set to the absolute position of the source bone. */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Determines how translation is copied from the source chain to the target chain. Default is None.\nNone: Translation of target bones are left unmodified from the retarget pose.\nGlobally Scaled: Translation of target bone is set to the source bone offset multiplied by the global scale of the skeleton (determined by the relative height difference between retarget root bones).\nAbsolute: Translation of target bone is set to the absolute position of the source bone." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TranslationMode = { "TranslationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URetargetChainSettings, TranslationMode), Z_Construct_UEnum_IKRig_ERetargetTranslationMode, METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TranslationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TranslationMode_MetaData)) }; // 4173123292
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TranslationAlpha_MetaData[] = {
		{ "Category", "FK Adjustments" },
		{ "Comment", "/** Range +/- infinity. Default 1. Scales the amount of translation that is applied. Exact behavior depends on the Translation Mode.\n\x09*  In None Mode, this parameter has no effect.\n\x09*  In Globally Scaled and Absolute modes, the translation offset is scaled by this parameter.*/" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Range +/- infinity. Default 1. Scales the amount of translation that is applied. Exact behavior depends on the Translation Mode.\nIn None Mode, this parameter has no effect.\nIn Globally Scaled and Absolute modes, the translation offset is scaled by this parameter." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TranslationAlpha = { "TranslationAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URetargetChainSettings, TranslationAlpha), METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TranslationAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TranslationAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_DriveIKGoal_MetaData[] = {
		{ "Category", "IK Adjustments" },
		{ "Comment", "/** Whether to modify the location of the IK goal on this chain. Default is true.\n\x09 * NOTE: This only has an effect if the chain has an IK Goal assigned to it in the Target IK Rig asset.\n\x09 * NOTE: If off, and this chain has an IK Goal, the IK will still be evaluated, but the Goal is set to the input bone location (from the FK pass).*/" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Whether to modify the location of the IK goal on this chain. Default is true.\nNOTE: This only has an effect if the chain has an IK Goal assigned to it in the Target IK Rig asset.\nNOTE: If off, and this chain has an IK Goal, the IK will still be evaluated, but the Goal is set to the input bone location (from the FK pass)." },
	};
#endif
	void Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_DriveIKGoal_SetBit(void* Obj)
	{
		((URetargetChainSettings*)Obj)->DriveIKGoal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_DriveIKGoal = { "DriveIKGoal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URetargetChainSettings), &Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_DriveIKGoal_SetBit, METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_DriveIKGoal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_DriveIKGoal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_BlendToSource_MetaData[] = {
		{ "Category", "IK Adjustments" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0 to 1. Default 0. Blends IK goal position from retargeted location (0) to source bone location (1).\n\x09*  At 0 the goal is placed at the retargeted location.\n\x09*  At 1 the goal is placed at the location of the source chain's end bone. */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Range 0 to 1. Default 0. Blends IK goal position from retargeted location (0) to source bone location (1).\nAt 0 the goal is placed at the retargeted location.\nAt 1 the goal is placed at the location of the source chain's end bone." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_BlendToSource = { "BlendToSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URetargetChainSettings, BlendToSource), METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_BlendToSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_BlendToSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_BlendToSourceWeights_MetaData[] = {
		{ "Category", "IK Adjustments" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0 to 1. Default 1. Weight each axis separately when using Blend To Source.\n\x09*  At 0 the goal is placed at the retargeted location.\n\x09*  At 1 the goal is placed at the location of the source chain's end bone. */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Range 0 to 1. Default 1. Weight each axis separately when using Blend To Source.\nAt 0 the goal is placed at the retargeted location.\nAt 1 the goal is placed at the location of the source chain's end bone." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_BlendToSourceWeights = { "BlendToSourceWeights", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URetargetChainSettings, BlendToSourceWeights), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_BlendToSourceWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_BlendToSourceWeights_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_StaticOffset_MetaData[] = {
		{ "Category", "IK Adjustments" },
		{ "Comment", "/** Default 0, 0, 0. Apply static global-space offset to IK goal position. */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Default 0, 0, 0. Apply static global-space offset to IK goal position." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_StaticOffset = { "StaticOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URetargetChainSettings, StaticOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_StaticOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_StaticOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_Extension_MetaData[] = {
		{ "Category", "IK Adjustments" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0 to 5. Default 1. Brings IK goal closer (-) or further (+) from origin of chain.\n\x09*  At 0 the effector is placed at the origin of the chain.\n\x09*  Values greater than 1 will stretch the chain beyond the retargeted length. */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Range 0 to 5. Default 1. Brings IK goal closer (-) or further (+) from origin of chain.\nAt 0 the effector is placed at the origin of the chain.\nValues greater than 1 will stretch the chain beyond the retargeted length." },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_Extension = { "Extension", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URetargetChainSettings, Extension), METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_Extension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_Extension_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_MatchSourceVelocity_MetaData[] = {
		{ "Category", "Experimental (May Change)" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0 to 1. Default 0. Blends IK goal from retargeted velocity (0) to source bone velocity (1).\n\x09*  At 0 the goal is placed at the retargeted location.\n\x09*  At 1 the goal is placed at the retargeted location but clamped by the velocity of the source chain's end bone.\n\x09*  Values between 0 and 1 will blend the applied velocity between the retargeted amount and the source bone amount.*/" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Range 0 to 1. Default 0. Blends IK goal from retargeted velocity (0) to source bone velocity (1).\nAt 0 the goal is placed at the retargeted location.\nAt 1 the goal is placed at the retargeted location but clamped by the velocity of the source chain's end bone.\nValues between 0 and 1 will blend the applied velocity between the retargeted amount and the source bone amount." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_MatchSourceVelocity = { "MatchSourceVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URetargetChainSettings, MatchSourceVelocity), METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_MatchSourceVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_MatchSourceVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_VelocityThreshold_MetaData[] = {
		{ "Category", "Experimental (May Change)" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0 to 1000. Default 5. The maximum speed a source goal can be moving before being considered statically planted.\n\x09*  At 0 the goal is placed at the retargeted location.\n\x09*  At 1 the goal is placed at the retargeted location but clamped by the velocity of the source chain's end bone.\n\x09*  Values between 0 and 1 will blend the applied velocity between the retargeted amount and the source bone amount.*/" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Range 0 to 1000. Default 5. The maximum speed a source goal can be moving before being considered statically planted.\nAt 0 the goal is placed at the retargeted location.\nAt 1 the goal is placed at the retargeted location but clamped by the velocity of the source chain's end bone.\nValues between 0 and 1 will blend the applied velocity between the retargeted amount and the source bone amount." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_VelocityThreshold = { "VelocityThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URetargetChainSettings, VelocityThreshold), METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_VelocityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_VelocityThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URetargetChainSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_SourceChain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TargetChain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_CopyPoseUsingFK,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_RotationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_RotationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_RotationAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TranslationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TranslationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TranslationAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_DriveIKGoal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_BlendToSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_BlendToSourceWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_StaticOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_Extension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_MatchSourceVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_VelocityThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URetargetChainSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URetargetChainSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URetargetChainSettings_Statics::ClassParams = {
		&URetargetChainSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URetargetChainSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URetargetChainSettings()
	{
		if (!Z_Registration_Info_UClass_URetargetChainSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URetargetChainSettings.OuterSingleton, Z_Construct_UClass_URetargetChainSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URetargetChainSettings.OuterSingleton;
	}
	template<> IKRIG_API UClass* StaticClass<URetargetChainSettings>()
	{
		return URetargetChainSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URetargetChainSettings);
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IKRetargetPose;
class UScriptStruct* FIKRetargetPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IKRetargetPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IKRetargetPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetPose, Z_Construct_UPackage__Script_IKRig(), TEXT("IKRetargetPose"));
	}
	return Z_Registration_Info_UScriptStruct_IKRetargetPose.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FIKRetargetPose>()
{
	return FIKRetargetPose::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIKRetargetPose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootTranslationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootTranslationOffset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneRotationOffsets_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneRotationOffsets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneRotationOffsets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BoneRotationOffsets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIKRetargetPose_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIKRetargetPose>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_RootTranslationOffset_MetaData[] = {
		{ "Category", "RetargetPose" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_RootTranslationOffset = { "RootTranslationOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIKRetargetPose, RootTranslationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_RootTranslationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_RootTranslationOffset_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_BoneRotationOffsets_ValueProp = { "BoneRotationOffsets", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_BoneRotationOffsets_Key_KeyProp = { "BoneRotationOffsets_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_BoneRotationOffsets_MetaData[] = {
		{ "Category", "RetargetPose" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_BoneRotationOffsets = { "BoneRotationOffsets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIKRetargetPose, BoneRotationOffsets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_BoneRotationOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_BoneRotationOffsets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIKRetargetPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_RootTranslationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_BoneRotationOffsets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_BoneRotationOffsets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_BoneRotationOffsets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIKRetargetPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
		nullptr,
		&NewStructOps,
		"IKRetargetPose",
		sizeof(FIKRetargetPose),
		alignof(FIKRetargetPose),
		Z_Construct_UScriptStruct_FIKRetargetPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKRetargetPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIKRetargetPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKRetargetPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIKRetargetPose()
	{
		if (!Z_Registration_Info_UScriptStruct_IKRetargetPose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IKRetargetPose.InnerSingleton, Z_Construct_UScriptStruct_FIKRetargetPose_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IKRetargetPose.InnerSingleton;
	}
	void UIKRetargeter::StaticRegisterNativesUIKRetargeter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRetargeter);
	UClass* Z_Construct_UClass_UIKRetargeter_NoRegister()
	{
		return UIKRetargeter::StaticClass();
	}
	struct Z_Construct_UClass_UIKRetargeter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceIKRigAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceIKRigAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetIKRigAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetIKRigAsset;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPreviewMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetPreviewMesh;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRetargetRoot_MetaData[];
#endif
		static void NewProp_bRetargetRoot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRetargetRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRetargetFK_MetaData[];
#endif
		static void NewProp_bRetargetFK_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRetargetFK;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRetargetIK_MetaData[];
#endif
		static void NewProp_bRetargetIK_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRetargetIK;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetActorOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetActorOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetActorScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetActorScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneDrawSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BoneDrawSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEditRetargetPoseMode_MetaData[];
#endif
		static void NewProp_bEditRetargetPoseMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEditRetargetPoseMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Controller;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_RetargetPoses_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RetargetPoses_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetargetPoses_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RetargetPoses;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChainMapping_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainMapping_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChainMapping;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChainSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChainSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRetargetPose_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentRetargetPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKRetargeter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Retargeter/IKRetargeter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceIKRigAsset_MetaData[] = {
		{ "Category", "Rigs" },
		{ "Comment", "/** The rig to copy animation FROM.*/" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The rig to copy animation FROM." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceIKRigAsset = { "SourceIKRigAsset", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKRetargeter, SourceIKRigAsset), Z_Construct_UClass_UIKRigDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceIKRigAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceIKRigAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetIKRigAsset_MetaData[] = {
		{ "Category", "Rigs" },
		{ "Comment", "/** The rig to copy animation TO.*/" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The rig to copy animation TO." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetIKRigAsset = { "TargetIKRigAsset", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKRetargeter, TargetIKRigAsset), Z_Construct_UClass_UIKRigDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetIKRigAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetIKRigAsset_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetPreviewMesh_MetaData[] = {
		{ "Category", "Rigs" },
		{ "Comment", "/** The Skeletal Mesh to preview the retarget on.*/" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The Skeletal Mesh to preview the retarget on." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetPreviewMesh = { "TargetPreviewMesh", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKRetargeter, TargetPreviewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetPreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetPreviewMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetRoot_MetaData[] = {
		{ "Category", "RetargetPhases" },
		{ "Comment", "/** When false, translational motion of skeleton root is not copied. Useful for debugging.*/" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "When false, translational motion of skeleton root is not copied. Useful for debugging." },
	};
#endif
	void Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetRoot_SetBit(void* Obj)
	{
		((UIKRetargeter*)Obj)->bRetargetRoot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetRoot = { "bRetargetRoot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIKRetargeter), &Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetRoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetFK_MetaData[] = {
		{ "Category", "RetargetPhases" },
		{ "Comment", "/** When false, limbs are not copied via FK. Useful for debugging limb issues suspected to be caused by FK pose.*/" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "When false, limbs are not copied via FK. Useful for debugging limb issues suspected to be caused by FK pose." },
	};
#endif
	void Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetFK_SetBit(void* Obj)
	{
		((UIKRetargeter*)Obj)->bRetargetFK = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetFK = { "bRetargetFK", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIKRetargeter), &Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetFK_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetFK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetFK_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetIK_MetaData[] = {
		{ "Category", "RetargetPhases" },
		{ "Comment", "/** When false, IK is not applied as part of retargeter. Useful for debugging limb issues suspected to be caused by IK.*/" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "When false, IK is not applied as part of retargeter. Useful for debugging limb issues suspected to be caused by IK." },
	};
#endif
	void Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetIK_SetBit(void* Obj)
	{
		((UIKRetargeter*)Obj)->bRetargetIK = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetIK = { "bRetargetIK", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIKRetargeter), &Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetIK_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetIK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetIK_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetActorOffset_MetaData[] = {
		{ "Category", "TargetActorPreview" },
		{ "Comment", "/** Move the target actor in the viewport for easier visualization next to the source actor.*/" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Move the target actor in the viewport for easier visualization next to the source actor." },
		{ "UIMax", "2000.0" },
		{ "UIMin", "-2000.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetActorOffset = { "TargetActorOffset", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKRetargeter, TargetActorOffset), METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetActorOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetActorOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetActorScale_MetaData[] = {
		{ "Category", "TargetActorPreview" },
		{ "Comment", "/** Scale the target actor in the viewport for easier visualization next to the source actor.*/" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Scale the target actor in the viewport for easier visualization next to the source actor." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetActorScale = { "TargetActorScale", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKRetargeter, TargetActorScale), METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetActorScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetActorScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_BoneDrawSize_MetaData[] = {
		{ "Category", "PoseEditSettings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The visual size of the bones in the viewport when editing the retarget pose.*/" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The visual size of the bones in the viewport when editing the retarget pose." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_BoneDrawSize = { "BoneDrawSize", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKRetargeter, BoneDrawSize), METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_BoneDrawSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_BoneDrawSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bEditRetargetPoseMode_MetaData[] = {
		{ "Comment", "/** A special editor-only mode which forces the retargeter to output the current retarget reference pose,\n\x09* rather than actually running the retarget and outputting the retargeted pose. Used in Edit-Pose mode.*/" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "A special editor-only mode which forces the retargeter to output the current retarget reference pose,\nrather than actually running the retarget and outputting the retargeted pose. Used in Edit-Pose mode." },
	};
#endif
	void Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bEditRetargetPoseMode_SetBit(void* Obj)
	{
		((UIKRetargeter*)Obj)->bEditRetargetPoseMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bEditRetargetPoseMode = { "bEditRetargetPoseMode", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIKRetargeter), &Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bEditRetargetPoseMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bEditRetargetPoseMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bEditRetargetPoseMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_Controller_MetaData[] = {
		{ "Comment", "/** The controller responsible for managing this asset's data (all editor mutation goes through this) */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The controller responsible for managing this asset's data (all editor mutation goes through this)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKRetargeter, Controller), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_Controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_Controller_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_RetargetPoses_ValueProp = { "RetargetPoses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FIKRetargetPose, METADATA_PARAMS(nullptr, 0) }; // 128042553
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_RetargetPoses_Key_KeyProp = { "RetargetPoses_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_RetargetPoses_MetaData[] = {
		{ "Comment", "/** The set of retarget poses available as options for retargeting.*/" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The set of retarget poses available as options for retargeting." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_RetargetPoses = { "RetargetPoses", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKRetargeter, RetargetPoses), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_RetargetPoses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_RetargetPoses_MetaData)) }; // 128042553
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainMapping_Inner = { "ChainMapping", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRetargetChainMap, METADATA_PARAMS(nullptr, 0) }; // 3102530049
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainMapping_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainMapping = { "ChainMapping", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKRetargeter, ChainMapping_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainMapping_MetaData)) }; // 3102530049
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainSettings_Inner = { "ChainSettings", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URetargetChainSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainSettings_MetaData[] = {
		{ "Comment", "/** Settings for how to map source chains to target chains.*/" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Settings for how to map source chains to target chains." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainSettings = { "ChainSettings", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKRetargeter, ChainSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentRetargetPose_MetaData[] = {
		{ "Comment", "/** The set of retarget poses available as options for retargeting.*/" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The set of retarget poses available as options for retargeting." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentRetargetPose = { "CurrentRetargetPose", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKRetargeter, CurrentRetargetPose), METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentRetargetPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentRetargetPose_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRetargeter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceIKRigAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetIKRigAsset,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetPreviewMesh,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetFK,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetIK,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetActorOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetActorScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_BoneDrawSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bEditRetargetPoseMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_Controller,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_RetargetPoses_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_RetargetPoses_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_RetargetPoses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainMapping_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentRetargetPose,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKRetargeter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRetargeter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRetargeter_Statics::ClassParams = {
		&UIKRetargeter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIKRetargeter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKRetargeter()
	{
		if (!Z_Registration_Info_UClass_UIKRetargeter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRetargeter.OuterSingleton, Z_Construct_UClass_UIKRetargeter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKRetargeter.OuterSingleton;
	}
	template<> IKRIG_API UClass* StaticClass<UIKRetargeter>()
	{
		return UIKRetargeter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRetargeter);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_Statics::EnumInfo[] = {
		{ ERetargetTranslationMode_StaticEnum, TEXT("ERetargetTranslationMode"), &Z_Registration_Info_UEnum_ERetargetTranslationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4173123292U) },
		{ ERetargetRotationMode_StaticEnum, TEXT("ERetargetRotationMode"), &Z_Registration_Info_UEnum_ERetargetRotationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2513679224U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_Statics::ScriptStructInfo[] = {
		{ FRetargetChainMap::StaticStruct, Z_Construct_UScriptStruct_FRetargetChainMap_Statics::NewStructOps, TEXT("RetargetChainMap"), &Z_Registration_Info_UScriptStruct_RetargetChainMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRetargetChainMap), 3102530049U) },
		{ FIKRetargetPose::StaticStruct, Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewStructOps, TEXT("IKRetargetPose"), &Z_Registration_Info_UScriptStruct_IKRetargetPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIKRetargetPose), 128042553U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URetargetChainSettings, URetargetChainSettings::StaticClass, TEXT("URetargetChainSettings"), &Z_Registration_Info_UClass_URetargetChainSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URetargetChainSettings), 3480566500U) },
		{ Z_Construct_UClass_UIKRetargeter, UIKRetargeter::StaticClass, TEXT("UIKRetargeter"), &Z_Registration_Info_UClass_UIKRetargeter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRetargeter), 1655851907U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_4175811231(TEXT("/Script/IKRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
