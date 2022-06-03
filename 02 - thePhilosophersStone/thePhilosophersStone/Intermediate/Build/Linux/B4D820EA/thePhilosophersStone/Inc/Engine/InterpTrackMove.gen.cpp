// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackMove.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackMove() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInterpTrackMoveRotMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterpLookupPoint();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterpLookupTrack();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackMove_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackMove();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInterpCurveVector();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterpTrackMoveRotMode;
	static UEnum* EInterpTrackMoveRotMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInterpTrackMoveRotMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInterpTrackMoveRotMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EInterpTrackMoveRotMode, Z_Construct_UPackage__Script_Engine(), TEXT("EInterpTrackMoveRotMode"));
		}
		return Z_Registration_Info_UEnum_EInterpTrackMoveRotMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EInterpTrackMoveRotMode>()
	{
		return EInterpTrackMoveRotMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EInterpTrackMoveRotMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EInterpTrackMoveRotMode_Statics::Enumerators[] = {
		{ "IMR_Keyframed", (int64)IMR_Keyframed },
		{ "IMR_LookAtGroup", (int64)IMR_LookAtGroup },
		{ "IMR_Ignore", (int64)IMR_Ignore },
		{ "IMR_MAX", (int64)IMR_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EInterpTrackMoveRotMode_Statics::Enum_MetaDataParams[] = {
		{ "IMR_Ignore.Comment", "/** Do not change rotation. Ignore it. */" },
		{ "IMR_Ignore.Name", "IMR_Ignore" },
		{ "IMR_Ignore.ToolTip", "Do not change rotation. Ignore it." },
		{ "IMR_Keyframed.Comment", "/** Should take orientation from the keyframe. */" },
		{ "IMR_Keyframed.Name", "IMR_Keyframed" },
		{ "IMR_Keyframed.ToolTip", "Should take orientation from the keyframe." },
		{ "IMR_LookAtGroup.Comment", "/** Point the X-Axis of the controlled Actor at the group specified by LookAtGroupName. */" },
		{ "IMR_LookAtGroup.Name", "IMR_LookAtGroup" },
		{ "IMR_LookAtGroup.ToolTip", "Point the X-Axis of the controlled Actor at the group specified by LookAtGroupName." },
		{ "IMR_MAX.Name", "IMR_MAX" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EInterpTrackMoveRotMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EInterpTrackMoveRotMode",
		"EInterpTrackMoveRotMode",
		Z_Construct_UEnum_Engine_EInterpTrackMoveRotMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EInterpTrackMoveRotMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EInterpTrackMoveRotMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EInterpTrackMoveRotMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EInterpTrackMoveRotMode()
	{
		if (!Z_Registration_Info_UEnum_EInterpTrackMoveRotMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterpTrackMoveRotMode.InnerSingleton, Z_Construct_UEnum_Engine_EInterpTrackMoveRotMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInterpTrackMoveRotMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterpLookupPoint;
class UScriptStruct* FInterpLookupPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterpLookupPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterpLookupPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterpLookupPoint, Z_Construct_UPackage__Script_Engine(), TEXT("InterpLookupPoint"));
	}
	return Z_Registration_Info_UScriptStruct_InterpLookupPoint.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInterpLookupPoint>()
{
	return FInterpLookupPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInterpLookupPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Array of group names to retrieve position and rotation data from instead of using the data stored in the keyframe.\n * A value of NAME_None means to use the PosTrack and EulerTrack data for the keyframe.\n * There needs to be the same amount of elements in this array as there are keyframes.\n */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
		{ "ToolTip", "Array of group names to retrieve position and rotation data from instead of using the data stored in the keyframe.\nA value of NAME_None means to use the PosTrack and EulerTrack data for the keyframe.\nThere needs to be the same amount of elements in this array as there are keyframes." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterpLookupPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::NewProp_GroupName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInterpLookupPoint, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInterpLookupPoint, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::NewProp_Time,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InterpLookupPoint",
		sizeof(FInterpLookupPoint),
		alignof(FInterpLookupPoint),
		Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInterpLookupPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_InterpLookupPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterpLookupPoint.InnerSingleton, Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InterpLookupPoint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterpLookupTrack;
class UScriptStruct* FInterpLookupTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterpLookupTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterpLookupTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterpLookupTrack, Z_Construct_UPackage__Script_Engine(), TEXT("InterpLookupTrack"));
	}
	return Z_Registration_Info_UScriptStruct_InterpLookupTrack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInterpLookupTrack>()
{
	return FInterpLookupTrack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInterpLookupTrack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterpLookupTrack>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInterpLookupPoint, METADATA_PARAMS(nullptr, 0) }; // 2809221280
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::NewProp_Points_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInterpLookupTrack, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::NewProp_Points_MetaData)) }; // 2809221280
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::NewProp_Points,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InterpLookupTrack",
		sizeof(FInterpLookupTrack),
		alignof(FInterpLookupTrack),
		Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInterpLookupTrack()
	{
		if (!Z_Registration_Info_UScriptStruct_InterpLookupTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterpLookupTrack.InnerSingleton, Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InterpLookupTrack.InnerSingleton;
	}
	void UInterpTrackMove::StaticRegisterNativesUInterpTrackMove()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackMove);
	UClass* Z_Construct_UClass_UInterpTrackMove_NoRegister()
	{
		return UInterpTrackMove::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackMove_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PosTrack_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PosTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EulerTrack_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EulerTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookupTrack_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookupTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAtGroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LookAtGroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinCurveTension_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinCurveTension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngCurveTension_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngCurveTension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseQuatInterpolation_MetaData[];
#endif
		static void NewProp_bUseQuatInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseQuatInterpolation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowArrowAtKeys_MetaData[];
#endif
		static void NewProp_bShowArrowAtKeys_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowArrowAtKeys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableMovement_MetaData[];
#endif
		static void NewProp_bDisableMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowTranslationOnCurveEd_MetaData[];
#endif
		static void NewProp_bShowTranslationOnCurveEd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowTranslationOnCurveEd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowRotationOnCurveEd_MetaData[];
#endif
		static void NewProp_bShowRotationOnCurveEd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowRotationOnCurveEd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHide3DTrack_MetaData[];
#endif
		static void NewProp_bHide3DTrack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHide3DTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackMove_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMove_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Track containing data for moving an actor around over time. */" },
		{ "DisplayName", "Movement Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackMove.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
		{ "ToolTip", "Track containing data for moving an actor around over time." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_PosTrack_MetaData[] = {
		{ "Category", "InterpTrackMove" },
		{ "Comment", "/** Actual position keyframe data. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
		{ "ToolTip", "Actual position keyframe data." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_PosTrack = { "PosTrack", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackMove, PosTrack), Z_Construct_UScriptStruct_FInterpCurveVector, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_PosTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_PosTrack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_EulerTrack_MetaData[] = {
		{ "Comment", "/** Actual rotation keyframe data, stored as Euler angles in degrees, for easy editing on curve. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
		{ "ToolTip", "Actual rotation keyframe data, stored as Euler angles in degrees, for easy editing on curve." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_EulerTrack = { "EulerTrack", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackMove, EulerTrack), Z_Construct_UScriptStruct_FInterpCurveVector, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_EulerTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_EulerTrack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_LookupTrack_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_LookupTrack = { "LookupTrack", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackMove, LookupTrack), Z_Construct_UScriptStruct_FInterpLookupTrack, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_LookupTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_LookupTrack_MetaData)) }; // 1409898341
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_LookAtGroupName_MetaData[] = {
		{ "Category", "InterpTrackMove" },
		{ "Comment", "/** When using IMR_LookAtGroup, specifies the Group which this track should always point its actor at. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
		{ "ToolTip", "When using IMR_LookAtGroup, specifies the Group which this track should always point its actor at." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_LookAtGroupName = { "LookAtGroupName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackMove, LookAtGroupName), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_LookAtGroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_LookAtGroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_LinCurveTension_MetaData[] = {
		{ "Category", "InterpTrackMove" },
		{ "Comment", "/** Controls the tightness of the curve for the translation path. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
		{ "ToolTip", "Controls the tightness of the curve for the translation path." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_LinCurveTension = { "LinCurveTension", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackMove, LinCurveTension), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_LinCurveTension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_LinCurveTension_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_AngCurveTension_MetaData[] = {
		{ "Category", "InterpTrackMove" },
		{ "Comment", "/** Controls the tightness of the curve for the rotation path. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
		{ "ToolTip", "Controls the tightness of the curve for the rotation path." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_AngCurveTension = { "AngCurveTension", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackMove, AngCurveTension), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_AngCurveTension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_AngCurveTension_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bUseQuatInterpolation_MetaData[] = {
		{ "Category", "InterpTrackMove" },
		{ "Comment", "/**\n\x09 *\x09Use a Quaternion linear interpolation between keys.\n\x09 *\x09This is robust and will find the 'shortest' distance between keys, but does not support ease in/out.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
		{ "ToolTip", "Use a Quaternion linear interpolation between keys.\nThis is robust and will find the 'shortest' distance between keys, but does not support ease in/out." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bUseQuatInterpolation_SetBit(void* Obj)
	{
		((UInterpTrackMove*)Obj)->bUseQuatInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bUseQuatInterpolation = { "bUseQuatInterpolation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackMove), &Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bUseQuatInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bUseQuatInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bUseQuatInterpolation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowArrowAtKeys_MetaData[] = {
		{ "Category", "InterpTrackMove" },
		{ "Comment", "/** In the editor, show a small arrow at each keyframe indicating the rotation at that key. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
		{ "ToolTip", "In the editor, show a small arrow at each keyframe indicating the rotation at that key." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowArrowAtKeys_SetBit(void* Obj)
	{
		((UInterpTrackMove*)Obj)->bShowArrowAtKeys = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowArrowAtKeys = { "bShowArrowAtKeys", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackMove), &Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowArrowAtKeys_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowArrowAtKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowArrowAtKeys_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bDisableMovement_MetaData[] = {
		{ "Category", "InterpTrackMove" },
		{ "Comment", "/** Disable previewing of this track - will always position  AActor  at Time=0.0. Useful when keyframing an object relative to this group. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
		{ "ToolTip", "Disable previewing of this track - will always position  AActor  at Time=0.0. Useful when keyframing an object relative to this group." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bDisableMovement_SetBit(void* Obj)
	{
		((UInterpTrackMove*)Obj)->bDisableMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bDisableMovement = { "bDisableMovement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackMove), &Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bDisableMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bDisableMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bDisableMovement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowTranslationOnCurveEd_MetaData[] = {
		{ "Category", "InterpTrackMove" },
		{ "Comment", "/** If false, when this track is displayed on the Curve Editor in Matinee, do not show the Translation tracks. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
		{ "ToolTip", "If false, when this track is displayed on the Curve Editor in Matinee, do not show the Translation tracks." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowTranslationOnCurveEd_SetBit(void* Obj)
	{
		((UInterpTrackMove*)Obj)->bShowTranslationOnCurveEd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowTranslationOnCurveEd = { "bShowTranslationOnCurveEd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackMove), &Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowTranslationOnCurveEd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowTranslationOnCurveEd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowTranslationOnCurveEd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowRotationOnCurveEd_MetaData[] = {
		{ "Category", "InterpTrackMove" },
		{ "Comment", "/** If false, when this track is displayed on the Curve Editor in Matinee, do not show the Rotation tracks. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
		{ "ToolTip", "If false, when this track is displayed on the Curve Editor in Matinee, do not show the Rotation tracks." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowRotationOnCurveEd_SetBit(void* Obj)
	{
		((UInterpTrackMove*)Obj)->bShowRotationOnCurveEd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowRotationOnCurveEd = { "bShowRotationOnCurveEd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackMove), &Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowRotationOnCurveEd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowRotationOnCurveEd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowRotationOnCurveEd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bHide3DTrack_MetaData[] = {
		{ "Category", "InterpTrackMove" },
		{ "Comment", "/** If true, 3D representation of this track in the 3D viewport is disabled. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
		{ "ToolTip", "If true, 3D representation of this track in the 3D viewport is disabled." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bHide3DTrack_SetBit(void* Obj)
	{
		((UInterpTrackMove*)Obj)->bHide3DTrack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bHide3DTrack = { "bHide3DTrack", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackMove), &Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bHide3DTrack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bHide3DTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bHide3DTrack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_RotMode_MetaData[] = {
		{ "Category", "InterpTrackMove" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMove.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_RotMode = { "RotMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackMove, RotMode), Z_Construct_UEnum_Engine_EInterpTrackMoveRotMode, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_RotMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_RotMode_MetaData)) }; // 1374277855
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackMove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_PosTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_EulerTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_LookupTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_LookAtGroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_LinCurveTension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_AngCurveTension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bUseQuatInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowArrowAtKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bDisableMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowTranslationOnCurveEd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bShowRotationOnCurveEd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_bHide3DTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackMove_Statics::NewProp_RotMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackMove_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackMove>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackMove_Statics::ClassParams = {
		&UInterpTrackMove::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackMove_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMove_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMove_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMove_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackMove()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackMove.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackMove.OuterSingleton, Z_Construct_UClass_UInterpTrackMove_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackMove.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackMove>()
	{
		return UInterpTrackMove::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackMove);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h_Statics::EnumInfo[] = {
		{ EInterpTrackMoveRotMode_StaticEnum, TEXT("EInterpTrackMoveRotMode"), &Z_Registration_Info_UEnum_EInterpTrackMoveRotMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1374277855U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h_Statics::ScriptStructInfo[] = {
		{ FInterpLookupPoint::StaticStruct, Z_Construct_UScriptStruct_FInterpLookupPoint_Statics::NewStructOps, TEXT("InterpLookupPoint"), &Z_Registration_Info_UScriptStruct_InterpLookupPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterpLookupPoint), 2809221280U) },
		{ FInterpLookupTrack::StaticStruct, Z_Construct_UScriptStruct_FInterpLookupTrack_Statics::NewStructOps, TEXT("InterpLookupTrack"), &Z_Registration_Info_UScriptStruct_InterpLookupTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterpLookupTrack), 1409898341U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackMove, UInterpTrackMove::StaticClass, TEXT("UInterpTrackMove"), &Z_Registration_Info_UClass_UInterpTrackMove, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackMove), 357181844U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h_2536308129(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMove_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
