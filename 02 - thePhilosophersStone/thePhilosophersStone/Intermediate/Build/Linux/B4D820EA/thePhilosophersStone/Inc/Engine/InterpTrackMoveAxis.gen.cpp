// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackMoveAxis.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackMoveAxis() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInterpMoveAxis();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackMoveAxis_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackMoveAxis();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterpLookupTrack();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterpMoveAxis;
	static UEnum* EInterpMoveAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInterpMoveAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInterpMoveAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EInterpMoveAxis, Z_Construct_UPackage__Script_Engine(), TEXT("EInterpMoveAxis"));
		}
		return Z_Registration_Info_UEnum_EInterpMoveAxis.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EInterpMoveAxis>()
	{
		return EInterpMoveAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EInterpMoveAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EInterpMoveAxis_Statics::Enumerators[] = {
		{ "AXIS_TranslationX", (int64)AXIS_TranslationX },
		{ "AXIS_TranslationY", (int64)AXIS_TranslationY },
		{ "AXIS_TranslationZ", (int64)AXIS_TranslationZ },
		{ "AXIS_RotationX", (int64)AXIS_RotationX },
		{ "AXIS_RotationY", (int64)AXIS_RotationY },
		{ "AXIS_RotationZ", (int64)AXIS_RotationZ },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EInterpMoveAxis_Statics::Enum_MetaDataParams[] = {
		{ "AXIS_RotationX.Name", "AXIS_RotationX" },
		{ "AXIS_RotationY.Name", "AXIS_RotationY" },
		{ "AXIS_RotationZ.Name", "AXIS_RotationZ" },
		{ "AXIS_TranslationX.Name", "AXIS_TranslationX" },
		{ "AXIS_TranslationY.Name", "AXIS_TranslationY" },
		{ "AXIS_TranslationZ.Name", "AXIS_TranslationZ" },
		{ "Comment", "/** List of axies this track can use */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMoveAxis.h" },
		{ "ToolTip", "List of axies this track can use" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EInterpMoveAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EInterpMoveAxis",
		"EInterpMoveAxis",
		Z_Construct_UEnum_Engine_EInterpMoveAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EInterpMoveAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EInterpMoveAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EInterpMoveAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EInterpMoveAxis()
	{
		if (!Z_Registration_Info_UEnum_EInterpMoveAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterpMoveAxis.InnerSingleton, Z_Construct_UEnum_Engine_EInterpMoveAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInterpMoveAxis.InnerSingleton;
	}
	void UInterpTrackMoveAxis::StaticRegisterNativesUInterpTrackMoveAxis()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackMoveAxis);
	UClass* Z_Construct_UClass_UInterpTrackMoveAxis_NoRegister()
	{
		return UInterpTrackMoveAxis::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackMoveAxis_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MoveAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookupTrack_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookupTrack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackMoveAxis_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackFloatBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMoveAxis_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Move Axis Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackMoveAxis.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMoveAxis.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMoveAxis_Statics::NewProp_MoveAxis_MetaData[] = {
		{ "Comment", "/** The axis which this track will use when transforming an actor */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMoveAxis.h" },
		{ "ToolTip", "The axis which this track will use when transforming an actor" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterpTrackMoveAxis_Statics::NewProp_MoveAxis = { "MoveAxis", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackMoveAxis, MoveAxis), Z_Construct_UEnum_Engine_EInterpMoveAxis, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMoveAxis_Statics::NewProp_MoveAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMoveAxis_Statics::NewProp_MoveAxis_MetaData)) }; // 52783452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackMoveAxis_Statics::NewProp_LookupTrack_MetaData[] = {
		{ "Comment", "/** Lookup track to use when looking at different groups for transform information*/" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackMoveAxis.h" },
		{ "ToolTip", "Lookup track to use when looking at different groups for transform information" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackMoveAxis_Statics::NewProp_LookupTrack = { "LookupTrack", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackMoveAxis, LookupTrack), Z_Construct_UScriptStruct_FInterpLookupTrack, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMoveAxis_Statics::NewProp_LookupTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMoveAxis_Statics::NewProp_LookupTrack_MetaData)) }; // 1409898341
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackMoveAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackMoveAxis_Statics::NewProp_MoveAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackMoveAxis_Statics::NewProp_LookupTrack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackMoveAxis_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackMoveAxis>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackMoveAxis_Statics::ClassParams = {
		&UInterpTrackMoveAxis::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackMoveAxis_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMoveAxis_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackMoveAxis_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackMoveAxis_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackMoveAxis()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackMoveAxis.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackMoveAxis.OuterSingleton, Z_Construct_UClass_UInterpTrackMoveAxis_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackMoveAxis.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackMoveAxis>()
	{
		return UInterpTrackMoveAxis::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackMoveAxis);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMoveAxis_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMoveAxis_h_Statics::EnumInfo[] = {
		{ EInterpMoveAxis_StaticEnum, TEXT("EInterpMoveAxis"), &Z_Registration_Info_UEnum_EInterpMoveAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 52783452U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMoveAxis_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackMoveAxis, UInterpTrackMoveAxis::StaticClass, TEXT("UInterpTrackMoveAxis"), &Z_Registration_Info_UClass_UInterpTrackMoveAxis, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackMoveAxis), 1329372811U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMoveAxis_h_29378507(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMoveAxis_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMoveAxis_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMoveAxis_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackMoveAxis_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
