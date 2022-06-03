// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInstToggle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstToggle() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstToggle_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstToggle();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETrackToggleAction();
// End Cross Module References
	void UInterpTrackInstToggle::StaticRegisterNativesUInterpTrackInstToggle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackInstToggle);
	UClass* Z_Construct_UClass_UInterpTrackInstToggle_NoRegister()
	{
		return UInterpTrackInstToggle::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstToggle_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSavedActiveState_MetaData[];
#endif
		static void NewProp_bSavedActiveState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSavedActiveState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInstToggle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstToggle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInstToggle.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstToggle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "InterpTrackInstToggle" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstToggle.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstToggle, Action), Z_Construct_UEnum_Engine_ETrackToggleAction, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_Action_MetaData)) }; // 2782852714
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_LastUpdatePosition_MetaData[] = {
		{ "Comment", "/** \n\x09 *\x09Position we were in last time we evaluated.\n\x09 *\x09""During UpdateTrack, toggles between this time and the current time will be processed.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstToggle.h" },
		{ "ToolTip", "Position we were in last time we evaluated.\nDuring UpdateTrack, toggles between this time and the current time will be processed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_LastUpdatePosition = { "LastUpdatePosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstToggle, LastUpdatePosition), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_LastUpdatePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_LastUpdatePosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_bSavedActiveState_MetaData[] = {
		{ "Comment", "/** Cached 'active' state for the toggleable actor before we possessed it; restored when Matinee exits */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstToggle.h" },
		{ "ToolTip", "Cached 'active' state for the toggleable actor before we possessed it; restored when Matinee exits" },
	};
#endif
	void Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_bSavedActiveState_SetBit(void* Obj)
	{
		((UInterpTrackInstToggle*)Obj)->bSavedActiveState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_bSavedActiveState = { "bSavedActiveState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackInstToggle), &Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_bSavedActiveState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_bSavedActiveState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_bSavedActiveState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackInstToggle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_LastUpdatePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstToggle_Statics::NewProp_bSavedActiveState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstToggle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstToggle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstToggle_Statics::ClassParams = {
		&UInterpTrackInstToggle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackInstToggle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstToggle_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstToggle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstToggle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstToggle()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackInstToggle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackInstToggle.OuterSingleton, Z_Construct_UClass_UInterpTrackInstToggle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackInstToggle.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackInstToggle>()
	{
		return UInterpTrackInstToggle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstToggle);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstToggle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstToggle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackInstToggle, UInterpTrackInstToggle::StaticClass, TEXT("UInterpTrackInstToggle"), &Z_Registration_Info_UClass_UInterpTrackInstToggle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackInstToggle), 3699591052U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstToggle_h_649651026(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstToggle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstToggle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
