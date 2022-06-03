// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInstVisibility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstVisibility() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstVisibility_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstVisibility();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVisibilityTrackAction();
// End Cross Module References
	void UInterpTrackInstVisibility::StaticRegisterNativesUInterpTrackInstVisibility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackInstVisibility);
	UClass* Z_Construct_UClass_UInterpTrackInstVisibility_NoRegister()
	{
		return UInterpTrackInstVisibility::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstVisibility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastUpdatePosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastUpdatePosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInstVisibility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstVisibility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInstVisibility.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstVisibility.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstVisibility_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "InterpTrackInstVisibility" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstVisibility.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterpTrackInstVisibility_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstVisibility, Action), Z_Construct_UEnum_Engine_EVisibilityTrackAction, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstVisibility_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstVisibility_Statics::NewProp_Action_MetaData)) }; // 2895575385
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstVisibility_Statics::NewProp_LastUpdatePosition_MetaData[] = {
		{ "Comment", "/** \n\x09 *\x09Position we were in last time we evaluated.\n\x09 *\x09""During UpdateTrack, events between this time and the current time will be processed.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstVisibility.h" },
		{ "ToolTip", "Position we were in last time we evaluated.\nDuring UpdateTrack, events between this time and the current time will be processed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpTrackInstVisibility_Statics::NewProp_LastUpdatePosition = { "LastUpdatePosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstVisibility, LastUpdatePosition), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstVisibility_Statics::NewProp_LastUpdatePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstVisibility_Statics::NewProp_LastUpdatePosition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackInstVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstVisibility_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstVisibility_Statics::NewProp_LastUpdatePosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstVisibility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstVisibility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstVisibility_Statics::ClassParams = {
		&UInterpTrackInstVisibility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackInstVisibility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstVisibility_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstVisibility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstVisibility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstVisibility()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackInstVisibility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackInstVisibility.OuterSingleton, Z_Construct_UClass_UInterpTrackInstVisibility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackInstVisibility.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackInstVisibility>()
	{
		return UInterpTrackInstVisibility::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstVisibility);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstVisibility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstVisibility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackInstVisibility, UInterpTrackInstVisibility::StaticClass, TEXT("UInterpTrackInstVisibility"), &Z_Registration_Info_UClass_UInterpTrackInstVisibility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackInstVisibility), 585543968U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstVisibility_h_2349732771(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstVisibility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstVisibility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
