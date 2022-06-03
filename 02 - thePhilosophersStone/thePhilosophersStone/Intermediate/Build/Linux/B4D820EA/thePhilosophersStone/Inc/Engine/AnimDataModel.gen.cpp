// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimData/AnimDataModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimDataModel() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneAnimationTrack();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawAnimSequenceTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationCurveData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFloatCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimatedBoneAttribute();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationAttributeIdentifier();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeCurve();
	ENGINE_API UClass* Z_Construct_UClass_UAnimDataModel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimDataModel();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_AnimDataModelModifiedDynamicEvent__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTrackToSkeletonMap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawCurveTracks();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoneAnimationTrack;
class UScriptStruct* FBoneAnimationTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoneAnimationTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoneAnimationTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneAnimationTrack, Z_Construct_UPackage__Script_Engine(), TEXT("BoneAnimationTrack"));
	}
	return Z_Registration_Info_UScriptStruct_BoneAnimationTrack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBoneAnimationTrack>()
{
	return FBoneAnimationTrack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InternalTrackData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InternalTrackData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneTreeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoneTreeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Structure encapsulating a single bone animation track.\n */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "Structure encapsulating a single bone animation track." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneAnimationTrack>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewProp_InternalTrackData_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "/** Internally stored data representing the animation bone data */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "Internally stored data representing the animation bone data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewProp_InternalTrackData = { "InternalTrackData", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneAnimationTrack, InternalTrackData), Z_Construct_UScriptStruct_FRawAnimSequenceTrack, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewProp_InternalTrackData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewProp_InternalTrackData_MetaData)) }; // 2163747966
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewProp_BoneTreeIndex_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "/** Index corresponding to the bone this track corresponds to within the target USkeleton */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "Index corresponding to the bone this track corresponds to within the target USkeleton" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewProp_BoneTreeIndex = { "BoneTreeIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneAnimationTrack, BoneTreeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewProp_BoneTreeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewProp_BoneTreeIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "/** Name of the bone this track corresponds to */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "Name of the bone this track corresponds to" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneAnimationTrack, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewProp_InternalTrackData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewProp_BoneTreeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BoneAnimationTrack",
		sizeof(FBoneAnimationTrack),
		alignof(FBoneAnimationTrack),
		Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoneAnimationTrack()
	{
		if (!Z_Registration_Info_UScriptStruct_BoneAnimationTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoneAnimationTrack.InnerSingleton, Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BoneAnimationTrack.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationCurveData;
class UScriptStruct* FAnimationCurveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationCurveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationCurveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationCurveData, Z_Construct_UPackage__Script_Engine(), TEXT("AnimationCurveData"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationCurveData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimationCurveData>()
{
	return FAnimationCurveData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimationCurveData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatCurves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatCurves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatCurves;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformCurves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformCurves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TransformCurves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationCurveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Structure encapsulating animated curve data. Currently only contains Float and Transform curves.\n */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "Structure encapsulating animated curve data. Currently only contains Float and Transform curves." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationCurveData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewProp_FloatCurves_Inner = { "FloatCurves", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFloatCurve, METADATA_PARAMS(nullptr, 0) }; // 1360235911
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewProp_FloatCurves_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "/** Float-based animation curves */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "Float-based animation curves" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewProp_FloatCurves = { "FloatCurves", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimationCurveData, FloatCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewProp_FloatCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewProp_FloatCurves_MetaData)) }; // 1360235911
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewProp_TransformCurves_Inner = { "TransformCurves", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransformCurve, METADATA_PARAMS(nullptr, 0) }; // 2876600492
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewProp_TransformCurves_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "/** FTransform-based animation curves, used for animation layer editing */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "FTransform-based animation curves, used for animation layer editing" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewProp_TransformCurves = { "TransformCurves", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimationCurveData, TransformCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewProp_TransformCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewProp_TransformCurves_MetaData)) }; // 2876600492
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationCurveData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewProp_FloatCurves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewProp_FloatCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewProp_TransformCurves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewProp_TransformCurves,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationCurveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimationCurveData",
		sizeof(FAnimationCurveData),
		alignof(FAnimationCurveData),
		Z_Construct_UScriptStruct_FAnimationCurveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationCurveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationCurveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationCurveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationCurveData()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimationCurveData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationCurveData.InnerSingleton, Z_Construct_UScriptStruct_FAnimationCurveData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimationCurveData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimatedBoneAttribute;
class UScriptStruct* FAnimatedBoneAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimatedBoneAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimatedBoneAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimatedBoneAttribute, Z_Construct_UPackage__Script_Engine(), TEXT("AnimatedBoneAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_AnimatedBoneAttribute.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimatedBoneAttribute>()
{
	return FAnimatedBoneAttribute::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Curve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Structure encapsulating animated (bone) attribute data.\n */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "Structure encapsulating animated (bone) attribute data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimatedBoneAttribute>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::NewProp_Identifier_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "/** Identifier to reference this attribute by */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "Identifier to reference this attribute by" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimatedBoneAttribute, Identifier), Z_Construct_UScriptStruct_FAnimationAttributeIdentifier, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::NewProp_Identifier_MetaData)) }; // 4209166089
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "/** Curve containing the (animated) attribute data */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "Curve containing the (animated) attribute data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimatedBoneAttribute, Curve), Z_Construct_UScriptStruct_FAttributeCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::NewProp_Curve_MetaData)) }; // 886937896
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::NewProp_Curve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimatedBoneAttribute",
		sizeof(FAnimatedBoneAttribute),
		alignof(FAnimatedBoneAttribute),
		Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimatedBoneAttribute()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimatedBoneAttribute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimatedBoneAttribute.InnerSingleton, Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimatedBoneAttribute.InnerSingleton;
	}
	DEFINE_FUNCTION(UAnimDataModel::execGetAnimationSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimSequence**)Z_Param__Result=P_THIS->GetAnimationSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimDataModel::execGetNumberOfFloatCurves)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfFloatCurves();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimDataModel::execGetNumberOfTransformCurves)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfTransformCurves();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimDataModel::execGetBoneTrackNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBoneTrackNames(Z_Param_Out_OutNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimDataModel::execGetNumBoneTracks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumBoneTracks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimDataModel::execIsValidBoneTrackIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TrackIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidBoneTrackIndex(Z_Param_TrackIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimDataModel::execGetBoneTrackIndexByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TrackName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetBoneTrackIndexByName(Z_Param_TrackName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimDataModel::execGetBoneTrackIndex)
	{
		P_GET_STRUCT_REF(FBoneAnimationTrack,Z_Param_Out_Track);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetBoneTrackIndex(Z_Param_Out_Track);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimDataModel::execGetBoneTrackByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TrackName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBoneAnimationTrack*)Z_Param__Result=P_THIS->GetBoneTrackByName(Z_Param_TrackName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimDataModel::execGetBoneTrackByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TrackIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBoneAnimationTrack*)Z_Param__Result=P_THIS->GetBoneTrackByIndex(Z_Param_TrackIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimDataModel::execGetBoneAnimationTracks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FBoneAnimationTrack>*)Z_Param__Result=P_THIS->GetBoneAnimationTracks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimDataModel::execGetFrameRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameRate*)Z_Param__Result=P_THIS->GetFrameRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimDataModel::execGetNumberOfKeys)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfKeys();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimDataModel::execGetNumberOfFrames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfFrames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimDataModel::execGetPlayLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlayLength();
		P_NATIVE_END;
	}
	void UAnimDataModel::StaticRegisterNativesUAnimDataModel()
	{
		UClass* Class = UAnimDataModel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnimationSequence", &UAnimDataModel::execGetAnimationSequence },
			{ "GetBoneAnimationTracks", &UAnimDataModel::execGetBoneAnimationTracks },
			{ "GetBoneTrackByIndex", &UAnimDataModel::execGetBoneTrackByIndex },
			{ "GetBoneTrackByName", &UAnimDataModel::execGetBoneTrackByName },
			{ "GetBoneTrackIndex", &UAnimDataModel::execGetBoneTrackIndex },
			{ "GetBoneTrackIndexByName", &UAnimDataModel::execGetBoneTrackIndexByName },
			{ "GetBoneTrackNames", &UAnimDataModel::execGetBoneTrackNames },
			{ "GetFrameRate", &UAnimDataModel::execGetFrameRate },
			{ "GetNumberOfFloatCurves", &UAnimDataModel::execGetNumberOfFloatCurves },
			{ "GetNumberOfFrames", &UAnimDataModel::execGetNumberOfFrames },
			{ "GetNumberOfKeys", &UAnimDataModel::execGetNumberOfKeys },
			{ "GetNumberOfTransformCurves", &UAnimDataModel::execGetNumberOfTransformCurves },
			{ "GetNumBoneTracks", &UAnimDataModel::execGetNumBoneTracks },
			{ "GetPlayLength", &UAnimDataModel::execGetPlayLength },
			{ "IsValidBoneTrackIndex", &UAnimDataModel::execIsValidBoneTrackIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimDataModel_GetAnimationSequence_Statics
	{
		struct AnimDataModel_eventGetAnimationSequence_Parms
		{
			UAnimSequence* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimDataModel_GetAnimationSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimDataModel_eventGetAnimationSequence_Parms, ReturnValue), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimDataModel_GetAnimationSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDataModel_GetAnimationSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimDataModel_GetAnimationSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationDataModel" },
		{ "Comment", "/**\n\x09* @return\x09The outer UAnimSequence object if found, otherwise returns a nullptr \n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "@return       The outer UAnimSequence object if found, otherwise returns a nullptr" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimDataModel_GetAnimationSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimDataModel, nullptr, "GetAnimationSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimDataModel_GetAnimationSequence_Statics::AnimDataModel_eventGetAnimationSequence_Parms), Z_Construct_UFunction_UAnimDataModel_GetAnimationSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetAnimationSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimDataModel_GetAnimationSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetAnimationSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimDataModel_GetAnimationSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimDataModel_GetAnimationSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimDataModel_GetBoneAnimationTracks_Statics
	{
		struct AnimDataModel_eventGetBoneAnimationTracks_Parms
		{
			TArray<FBoneAnimationTrack> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimDataModel_GetBoneAnimationTracks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBoneAnimationTrack, METADATA_PARAMS(nullptr, 0) }; // 2404338223
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimDataModel_GetBoneAnimationTracks_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimDataModel_GetBoneAnimationTracks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimDataModel_eventGetBoneAnimationTracks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAnimDataModel_GetBoneAnimationTracks_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetBoneAnimationTracks_Statics::NewProp_ReturnValue_MetaData)) }; // 2404338223
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimDataModel_GetBoneAnimationTracks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDataModel_GetBoneAnimationTracks_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDataModel_GetBoneAnimationTracks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimDataModel_GetBoneAnimationTracks_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationDataModel" },
		{ "Comment", "/**\n\x09* @return\x09""Array containg all bone animation tracks \n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "@return       Array containg all bone animation tracks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimDataModel_GetBoneAnimationTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimDataModel, nullptr, "GetBoneAnimationTracks", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimDataModel_GetBoneAnimationTracks_Statics::AnimDataModel_eventGetBoneAnimationTracks_Parms), Z_Construct_UFunction_UAnimDataModel_GetBoneAnimationTracks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetBoneAnimationTracks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimDataModel_GetBoneAnimationTracks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetBoneAnimationTracks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimDataModel_GetBoneAnimationTracks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimDataModel_GetBoneAnimationTracks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByIndex_Statics
	{
		struct AnimDataModel_eventGetBoneTrackByIndex_Parms
		{
			int32 TrackIndex;
			FBoneAnimationTrack ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByIndex_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimDataModel_eventGetBoneTrackByIndex_Parms, TrackIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByIndex_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimDataModel_eventGetBoneTrackByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FBoneAnimationTrack, METADATA_PARAMS(Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByIndex_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByIndex_Statics::NewProp_ReturnValue_MetaData)) }; // 2404338223
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByIndex_Statics::NewProp_TrackIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationDataModel" },
		{ "Comment", "/**\n\x09* @return\x09""Bone animation track for the provided index\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "@return       Bone animation track for the provided index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimDataModel, nullptr, "GetBoneTrackByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByIndex_Statics::AnimDataModel_eventGetBoneTrackByIndex_Parms), Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByName_Statics
	{
		struct AnimDataModel_eventGetBoneTrackByName_Parms
		{
			FName TrackName;
			FBoneAnimationTrack ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_TrackName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByName_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimDataModel_eventGetBoneTrackByName_Parms, TrackName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimDataModel_eventGetBoneTrackByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FBoneAnimationTrack, METADATA_PARAMS(Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByName_Statics::NewProp_ReturnValue_MetaData)) }; // 2404338223
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByName_Statics::NewProp_TrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationDataModel" },
		{ "Comment", "/**\n\x09* @return\x09""Bone animation track for the provided (bone) name\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "@return       Bone animation track for the provided (bone) name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimDataModel, nullptr, "GetBoneTrackByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByName_Statics::AnimDataModel_eventGetBoneTrackByName_Parms), Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndex_Statics
	{
		struct AnimDataModel_eventGetBoneTrackIndex_Parms
		{
			FBoneAnimationTrack Track;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Track;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndex_Statics::NewProp_Track_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndex_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimDataModel_eventGetBoneTrackIndex_Parms, Track), Z_Construct_UScriptStruct_FBoneAnimationTrack, METADATA_PARAMS(Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndex_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndex_Statics::NewProp_Track_MetaData)) }; // 2404338223
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimDataModel_eventGetBoneTrackIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndex_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationDataModel" },
		{ "Comment", "/**\n\x09* @return\x09Internal track index for the provided bone animation track if found, otherwise returns INDEX_NONE \n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "@return       Internal track index for the provided bone animation track if found, otherwise returns INDEX_NONE" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimDataModel, nullptr, "GetBoneTrackIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndex_Statics::AnimDataModel_eventGetBoneTrackIndex_Parms), Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndexByName_Statics
	{
		struct AnimDataModel_eventGetBoneTrackIndexByName_Parms
		{
			FName TrackName;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_TrackName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndexByName_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimDataModel_eventGetBoneTrackIndexByName_Parms, TrackName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndexByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimDataModel_eventGetBoneTrackIndexByName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndexByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndexByName_Statics::NewProp_TrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndexByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndexByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationDataModel" },
		{ "Comment", "/**\n\x09* @return\x09Internal track index for the provided (bone) name if found, otherwise returns INDEX_NONE \n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "@return       Internal track index for the provided (bone) name if found, otherwise returns INDEX_NONE" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndexByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimDataModel, nullptr, "GetBoneTrackIndexByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndexByName_Statics::AnimDataModel_eventGetBoneTrackIndexByName_Parms), Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndexByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndexByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndexByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndexByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndexByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndexByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimDataModel_GetBoneTrackNames_Statics
	{
		struct AnimDataModel_eventGetBoneTrackNames_Parms
		{
			TArray<FName> OutNames;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimDataModel_GetBoneTrackNames_Statics::NewProp_OutNames_Inner = { "OutNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimDataModel_GetBoneTrackNames_Statics::NewProp_OutNames = { "OutNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimDataModel_eventGetBoneTrackNames_Parms, OutNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimDataModel_GetBoneTrackNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDataModel_GetBoneTrackNames_Statics::NewProp_OutNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDataModel_GetBoneTrackNames_Statics::NewProp_OutNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimDataModel_GetBoneTrackNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationDataModel" },
		{ "Comment", "/**\n\x09* Populates the provided array with all contained (bone) track names\n\x09*\n\x09* @param\x09OutNames\x09[out] Array containing all bone track names\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "Populates the provided array with all contained (bone) track names\n\n@param        OutNames        [out] Array containing all bone track names" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimDataModel_GetBoneTrackNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimDataModel, nullptr, "GetBoneTrackNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimDataModel_GetBoneTrackNames_Statics::AnimDataModel_eventGetBoneTrackNames_Parms), Z_Construct_UFunction_UAnimDataModel_GetBoneTrackNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetBoneTrackNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimDataModel_GetBoneTrackNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetBoneTrackNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimDataModel_GetBoneTrackNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimDataModel_GetBoneTrackNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimDataModel_GetFrameRate_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct AnimDataModel_eventGetFrameRate_Parms
		{
			FFrameRate ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimDataModel_GetFrameRate_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimDataModel_GetFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimDataModel_eventGetFrameRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UFunction_UAnimDataModel_GetFrameRate_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetFrameRate_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimDataModel_GetFrameRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDataModel_GetFrameRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimDataModel_GetFrameRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationDataModel" },
		{ "Comment", "/**\n\x09* @return\x09""Frame rate at which the animation data is key-ed \n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "@return       Frame rate at which the animation data is key-ed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimDataModel_GetFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimDataModel, nullptr, "GetFrameRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimDataModel_GetFrameRate_Statics::AnimDataModel_eventGetFrameRate_Parms), Z_Construct_UFunction_UAnimDataModel_GetFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimDataModel_GetFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimDataModel_GetFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimDataModel_GetFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimDataModel_GetNumberOfFloatCurves_Statics
	{
		struct AnimDataModel_eventGetNumberOfFloatCurves_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimDataModel_GetNumberOfFloatCurves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimDataModel_eventGetNumberOfFloatCurves_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimDataModel_GetNumberOfFloatCurves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDataModel_GetNumberOfFloatCurves_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimDataModel_GetNumberOfFloatCurves_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationDataModel" },
		{ "Comment", "/**\n\x09* @return\x09Total number of stored float curves\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "@return       Total number of stored float curves" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimDataModel_GetNumberOfFloatCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimDataModel, nullptr, "GetNumberOfFloatCurves", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimDataModel_GetNumberOfFloatCurves_Statics::AnimDataModel_eventGetNumberOfFloatCurves_Parms), Z_Construct_UFunction_UAnimDataModel_GetNumberOfFloatCurves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetNumberOfFloatCurves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimDataModel_GetNumberOfFloatCurves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetNumberOfFloatCurves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimDataModel_GetNumberOfFloatCurves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimDataModel_GetNumberOfFloatCurves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimDataModel_GetNumberOfFrames_Statics
	{
		struct AnimDataModel_eventGetNumberOfFrames_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimDataModel_GetNumberOfFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimDataModel_eventGetNumberOfFrames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimDataModel_GetNumberOfFrames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDataModel_GetNumberOfFrames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimDataModel_GetNumberOfFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationDataModel" },
		{ "Comment", "/**\n\x09* @return\x09Total number of frames of animation data stored \n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "@return       Total number of frames of animation data stored" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimDataModel_GetNumberOfFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimDataModel, nullptr, "GetNumberOfFrames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimDataModel_GetNumberOfFrames_Statics::AnimDataModel_eventGetNumberOfFrames_Parms), Z_Construct_UFunction_UAnimDataModel_GetNumberOfFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetNumberOfFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimDataModel_GetNumberOfFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetNumberOfFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimDataModel_GetNumberOfFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimDataModel_GetNumberOfFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimDataModel_GetNumberOfKeys_Statics
	{
		struct AnimDataModel_eventGetNumberOfKeys_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimDataModel_GetNumberOfKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimDataModel_eventGetNumberOfKeys_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimDataModel_GetNumberOfKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDataModel_GetNumberOfKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimDataModel_GetNumberOfKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationDataModel" },
		{ "Comment", "/**\n\x09* @return\x09Total number of animation data keys stored \n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "@return       Total number of animation data keys stored" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimDataModel_GetNumberOfKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimDataModel, nullptr, "GetNumberOfKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimDataModel_GetNumberOfKeys_Statics::AnimDataModel_eventGetNumberOfKeys_Parms), Z_Construct_UFunction_UAnimDataModel_GetNumberOfKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetNumberOfKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimDataModel_GetNumberOfKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetNumberOfKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimDataModel_GetNumberOfKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimDataModel_GetNumberOfKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimDataModel_GetNumberOfTransformCurves_Statics
	{
		struct AnimDataModel_eventGetNumberOfTransformCurves_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimDataModel_GetNumberOfTransformCurves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimDataModel_eventGetNumberOfTransformCurves_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimDataModel_GetNumberOfTransformCurves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDataModel_GetNumberOfTransformCurves_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimDataModel_GetNumberOfTransformCurves_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationDataModel" },
		{ "Comment", "/**\n\x09* @return\x09Total number of stored FTransform curves\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "@return       Total number of stored FTransform curves" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimDataModel_GetNumberOfTransformCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimDataModel, nullptr, "GetNumberOfTransformCurves", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimDataModel_GetNumberOfTransformCurves_Statics::AnimDataModel_eventGetNumberOfTransformCurves_Parms), Z_Construct_UFunction_UAnimDataModel_GetNumberOfTransformCurves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetNumberOfTransformCurves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimDataModel_GetNumberOfTransformCurves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetNumberOfTransformCurves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimDataModel_GetNumberOfTransformCurves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimDataModel_GetNumberOfTransformCurves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimDataModel_GetNumBoneTracks_Statics
	{
		struct AnimDataModel_eventGetNumBoneTracks_Parms
		{
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimDataModel_GetNumBoneTracks_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimDataModel_GetNumBoneTracks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimDataModel_eventGetNumBoneTracks_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAnimDataModel_GetNumBoneTracks_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetNumBoneTracks_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimDataModel_GetNumBoneTracks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDataModel_GetNumBoneTracks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimDataModel_GetNumBoneTracks_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationDataModel" },
		{ "Comment", "/**\n\x09* @return\x09Total number of bone animation tracks\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "@return       Total number of bone animation tracks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimDataModel_GetNumBoneTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimDataModel, nullptr, "GetNumBoneTracks", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimDataModel_GetNumBoneTracks_Statics::AnimDataModel_eventGetNumBoneTracks_Parms), Z_Construct_UFunction_UAnimDataModel_GetNumBoneTracks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetNumBoneTracks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimDataModel_GetNumBoneTracks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetNumBoneTracks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimDataModel_GetNumBoneTracks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimDataModel_GetNumBoneTracks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimDataModel_GetPlayLength_Statics
	{
		struct AnimDataModel_eventGetPlayLength_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimDataModel_GetPlayLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimDataModel_eventGetPlayLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimDataModel_GetPlayLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDataModel_GetPlayLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimDataModel_GetPlayLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationDataModel" },
		{ "Comment", "/**\n\x09* @return\x09Total length of play-able animation data \n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "@return       Total length of play-able animation data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimDataModel_GetPlayLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimDataModel, nullptr, "GetPlayLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimDataModel_GetPlayLength_Statics::AnimDataModel_eventGetPlayLength_Parms), Z_Construct_UFunction_UAnimDataModel_GetPlayLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetPlayLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimDataModel_GetPlayLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_GetPlayLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimDataModel_GetPlayLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimDataModel_GetPlayLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimDataModel_IsValidBoneTrackIndex_Statics
	{
		struct AnimDataModel_eventIsValidBoneTrackIndex_Parms
		{
			int32 TrackIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimDataModel_IsValidBoneTrackIndex_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimDataModel_eventIsValidBoneTrackIndex_Parms, TrackIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimDataModel_IsValidBoneTrackIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimDataModel_eventIsValidBoneTrackIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimDataModel_IsValidBoneTrackIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimDataModel_eventIsValidBoneTrackIndex_Parms), &Z_Construct_UFunction_UAnimDataModel_IsValidBoneTrackIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimDataModel_IsValidBoneTrackIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDataModel_IsValidBoneTrackIndex_Statics::NewProp_TrackIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimDataModel_IsValidBoneTrackIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimDataModel_IsValidBoneTrackIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationDataModel" },
		{ "Comment", "/**\n\x09* @return\x09Whether or not the provided track index is valid \n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "@return       Whether or not the provided track index is valid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimDataModel_IsValidBoneTrackIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimDataModel, nullptr, "IsValidBoneTrackIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimDataModel_IsValidBoneTrackIndex_Statics::AnimDataModel_eventIsValidBoneTrackIndex_Parms), Z_Construct_UFunction_UAnimDataModel_IsValidBoneTrackIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_IsValidBoneTrackIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimDataModel_IsValidBoneTrackIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimDataModel_IsValidBoneTrackIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimDataModel_IsValidBoneTrackIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimDataModel_IsValidBoneTrackIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimDataModel);
	UClass* Z_Construct_UClass_UAnimDataModel_NoRegister()
	{
		return UAnimDataModel::StaticClass();
	}
	struct Z_Construct_UClass_UAnimDataModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BracketCounter_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BracketCounter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedEventDynamic_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ModifiedEventDynamic;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneAnimationTracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneAnimationTracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneAnimationTracks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfFrames_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfKeys_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfKeys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurveData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimatedBoneAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimatedBoneAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimatedBoneAttributes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RawAnimationTracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawAnimationTracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RawAnimationTracks;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RawAnimationTrackNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawAnimationTrackNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RawAnimationTrackNames;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RawAnimationTrackSkeletonMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawAnimationTrackSkeletonMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RawAnimationTrackSkeletonMappings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawCurveTracks_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RawCurveTracks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimDataModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimDataModel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimDataModel_GetAnimationSequence, "GetAnimationSequence" }, // 4077973257
		{ &Z_Construct_UFunction_UAnimDataModel_GetBoneAnimationTracks, "GetBoneAnimationTracks" }, // 1998604533
		{ &Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByIndex, "GetBoneTrackByIndex" }, // 1048036300
		{ &Z_Construct_UFunction_UAnimDataModel_GetBoneTrackByName, "GetBoneTrackByName" }, // 2727119558
		{ &Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndex, "GetBoneTrackIndex" }, // 1087673126
		{ &Z_Construct_UFunction_UAnimDataModel_GetBoneTrackIndexByName, "GetBoneTrackIndexByName" }, // 1439077986
		{ &Z_Construct_UFunction_UAnimDataModel_GetBoneTrackNames, "GetBoneTrackNames" }, // 367727351
		{ &Z_Construct_UFunction_UAnimDataModel_GetFrameRate, "GetFrameRate" }, // 1798574397
		{ &Z_Construct_UFunction_UAnimDataModel_GetNumberOfFloatCurves, "GetNumberOfFloatCurves" }, // 628466727
		{ &Z_Construct_UFunction_UAnimDataModel_GetNumberOfFrames, "GetNumberOfFrames" }, // 2969947395
		{ &Z_Construct_UFunction_UAnimDataModel_GetNumberOfKeys, "GetNumberOfKeys" }, // 1577489370
		{ &Z_Construct_UFunction_UAnimDataModel_GetNumberOfTransformCurves, "GetNumberOfTransformCurves" }, // 3534195277
		{ &Z_Construct_UFunction_UAnimDataModel_GetNumBoneTracks, "GetNumBoneTracks" }, // 738823358
		{ &Z_Construct_UFunction_UAnimDataModel_GetPlayLength, "GetPlayLength" }, // 1204975929
		{ &Z_Construct_UFunction_UAnimDataModel_IsValidBoneTrackIndex, "IsValidBoneTrackIndex" }, // 1847884572
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimDataModel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Model represents the source data for animations. It contains both bone animation data as well as animated curves.\n * They are currently only a sub-object of a AnimSequenceBase instance. The instance derives all runtime data from the source data. \n */" },
		{ "IncludePath", "Animation/AnimData/AnimDataModel.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "The Model represents the source data for animations. It contains both bone animation data as well as animated curves.\nThey are currently only a sub-object of a AnimSequenceBase instance. The instance derives all runtime data from the source data." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimDataModel_Statics::NewProp_BracketCounter_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_BracketCounter = { "BracketCounter", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimDataModel, BracketCounter), METADATA_PARAMS(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_BracketCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_BracketCounter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimDataModel_Statics::NewProp_ModifiedEventDynamic_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AnimationDataModel" },
		{ "Comment", "/** Dynamic delegate event allows scripting to register to any broadcasted notify. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ScriptName", "ModifiedEvent" },
		{ "ToolTip", "Dynamic delegate event allows scripting to register to any broadcasted notify." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_ModifiedEventDynamic = { "ModifiedEventDynamic", nullptr, (EPropertyFlags)0x0040000010082000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimDataModel, ModifiedEventDynamic), Z_Construct_UDelegateFunction_Engine_AnimDataModelModifiedDynamicEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_ModifiedEventDynamic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_ModifiedEventDynamic_MetaData)) }; // 2405549245
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_BoneAnimationTracks_Inner = { "BoneAnimationTracks", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBoneAnimationTrack, METADATA_PARAMS(nullptr, 0) }; // 2404338223
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimDataModel_Statics::NewProp_BoneAnimationTracks_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation Data Model" },
		{ "Comment", "/** All individual bone animation tracks */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "All individual bone animation tracks" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_BoneAnimationTracks = { "BoneAnimationTracks", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimDataModel, BoneAnimationTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_BoneAnimationTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_BoneAnimationTracks_MetaData)) }; // 2404338223
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimDataModel_Statics::NewProp_PlayLength_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation Data Model" },
		{ "Comment", "/** Total playable length of the contained animation data */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "Total playable length of the contained animation data" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_PlayLength = { "PlayLength", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimDataModel, PlayLength), METADATA_PARAMS(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_PlayLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_PlayLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimDataModel_Statics::NewProp_FrameRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation Data Model" },
		{ "Comment", "/** Rate at which the animated data is sampled */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "Rate at which the animated data is sampled" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimDataModel, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimDataModel_Statics::NewProp_NumberOfFrames_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation Data Model" },
		{ "Comment", "/** Total number of sampled animated frames */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "Total number of sampled animated frames" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_NumberOfFrames = { "NumberOfFrames", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimDataModel, NumberOfFrames), METADATA_PARAMS(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_NumberOfFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_NumberOfFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimDataModel_Statics::NewProp_NumberOfKeys_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation Data Model" },
		{ "Comment", "/** Total number of sampled animated keys */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "Total number of sampled animated keys" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_NumberOfKeys = { "NumberOfKeys", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimDataModel, NumberOfKeys), METADATA_PARAMS(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_NumberOfKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_NumberOfKeys_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimDataModel_Statics::NewProp_CurveData_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation Data Model" },
		{ "Comment", "/** Container with all animated curve data */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "Container with all animated curve data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_CurveData = { "CurveData", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimDataModel, CurveData), Z_Construct_UScriptStruct_FAnimationCurveData, METADATA_PARAMS(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_CurveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_CurveData_MetaData)) }; // 2788805992
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_AnimatedBoneAttributes_Inner = { "AnimatedBoneAttributes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAnimatedBoneAttribute, METADATA_PARAMS(nullptr, 0) }; // 2531388842
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimDataModel_Statics::NewProp_AnimatedBoneAttributes_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation Data Model" },
		{ "Comment", "/** Container with all animated (bone) attribute data */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "Container with all animated (bone) attribute data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_AnimatedBoneAttributes = { "AnimatedBoneAttributes", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimDataModel, AnimatedBoneAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_AnimatedBoneAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_AnimatedBoneAttributes_MetaData)) }; // 2531388842
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_RawAnimationTracks_Inner = { "RawAnimationTracks", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRawAnimSequenceTrack, METADATA_PARAMS(nullptr, 0) }; // 2163747966
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimDataModel_Statics::NewProp_RawAnimationTracks_MetaData[] = {
		{ "Category", "Animation Data Model" },
		{ "Comment", "/** Transient data, kept around for backward-compatibility */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
		{ "ToolTip", "Transient data, kept around for backward-compatibility" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_RawAnimationTracks = { "RawAnimationTracks", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimDataModel, RawAnimationTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_RawAnimationTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_RawAnimationTracks_MetaData)) }; // 2163747966
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_RawAnimationTrackNames_Inner = { "RawAnimationTrackNames", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimDataModel_Statics::NewProp_RawAnimationTrackNames_MetaData[] = {
		{ "Category", "Animation Data Model" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_RawAnimationTrackNames = { "RawAnimationTrackNames", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimDataModel, RawAnimationTrackNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_RawAnimationTrackNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_RawAnimationTrackNames_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_RawAnimationTrackSkeletonMappings_Inner = { "RawAnimationTrackSkeletonMappings", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTrackToSkeletonMap, METADATA_PARAMS(nullptr, 0) }; // 335720836
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimDataModel_Statics::NewProp_RawAnimationTrackSkeletonMappings_MetaData[] = {
		{ "Category", "Animation Data Model" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_RawAnimationTrackSkeletonMappings = { "RawAnimationTrackSkeletonMappings", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimDataModel, RawAnimationTrackSkeletonMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_RawAnimationTrackSkeletonMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_RawAnimationTrackSkeletonMappings_MetaData)) }; // 335720836
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimDataModel_Statics::NewProp_RawCurveTracks_MetaData[] = {
		{ "Category", "Animation Data Model" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataModel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimDataModel_Statics::NewProp_RawCurveTracks = { "RawCurveTracks", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimDataModel, RawCurveTracks), Z_Construct_UScriptStruct_FRawCurveTracks, METADATA_PARAMS(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_RawCurveTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataModel_Statics::NewProp_RawCurveTracks_MetaData)) }; // 4285545408
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimDataModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_BracketCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_ModifiedEventDynamic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_BoneAnimationTracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_BoneAnimationTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_PlayLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_NumberOfFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_NumberOfKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_CurveData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_AnimatedBoneAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_AnimatedBoneAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_RawAnimationTracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_RawAnimationTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_RawAnimationTrackNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_RawAnimationTrackNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_RawAnimationTrackSkeletonMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_RawAnimationTrackSkeletonMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataModel_Statics::NewProp_RawCurveTracks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimDataModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimDataModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimDataModel_Statics::ClassParams = {
		&UAnimDataModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimDataModel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataModel_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimDataModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimDataModel()
	{
		if (!Z_Registration_Info_UClass_UAnimDataModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimDataModel.OuterSingleton, Z_Construct_UClass_UAnimDataModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimDataModel.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimDataModel>()
	{
		return UAnimDataModel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimDataModel);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_Statics::ScriptStructInfo[] = {
		{ FBoneAnimationTrack::StaticStruct, Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewStructOps, TEXT("BoneAnimationTrack"), &Z_Registration_Info_UScriptStruct_BoneAnimationTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoneAnimationTrack), 2404338223U) },
		{ FAnimationCurveData::StaticStruct, Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewStructOps, TEXT("AnimationCurveData"), &Z_Registration_Info_UScriptStruct_AnimationCurveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationCurveData), 2788805992U) },
		{ FAnimatedBoneAttribute::StaticStruct, Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::NewStructOps, TEXT("AnimatedBoneAttribute"), &Z_Registration_Info_UScriptStruct_AnimatedBoneAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimatedBoneAttribute), 2531388842U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimDataModel, UAnimDataModel::StaticClass, TEXT("UAnimDataModel"), &Z_Registration_Info_UClass_UAnimDataModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimDataModel), 3355294489U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_1186989475(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataModel_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
