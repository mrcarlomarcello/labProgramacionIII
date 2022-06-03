// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackFade.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackFade() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFade_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFade();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UInterpTrackFade::StaticRegisterNativesUInterpTrackFade()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackFade);
	UClass* Z_Construct_UClass_UInterpTrackFade_NoRegister()
	{
		return UInterpTrackFade::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackFade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPersistFade_MetaData[];
#endif
		static void NewProp_bPersistFade_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPersistFade;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFadeAudio_MetaData[];
#endif
		static void NewProp_bFadeAudio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFadeAudio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FadeColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackFade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackFloatBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackFade_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Fade Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackFade.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFade.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_bPersistFade_MetaData[] = {
		{ "Category", "InterpTrackFade" },
		{ "Comment", "/** \n\x09 * InterpTrackFade\n\x09 *\n\x09 * Special float property track that controls camera fading over time.\n\x09 * Should live in a Director group.\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFade.h" },
		{ "ToolTip", "InterpTrackFade\n\nSpecial float property track that controls camera fading over time.\nShould live in a Director group." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_bPersistFade_SetBit(void* Obj)
	{
		((UInterpTrackFade*)Obj)->bPersistFade = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_bPersistFade = { "bPersistFade", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackFade), &Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_bPersistFade_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_bPersistFade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_bPersistFade_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_bFadeAudio_MetaData[] = {
		{ "Category", "InterpTrackFade" },
		{ "Comment", "/** True to set master audio volume along with the visual fade. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFade.h" },
		{ "ToolTip", "True to set master audio volume along with the visual fade." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_bFadeAudio_SetBit(void* Obj)
	{
		((UInterpTrackFade*)Obj)->bFadeAudio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_bFadeAudio = { "bFadeAudio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackFade), &Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_bFadeAudio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_bFadeAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_bFadeAudio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_FadeColor_MetaData[] = {
		{ "Category", "InterpTrackFade" },
		{ "Comment", "/** Color to fade to. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFade.h" },
		{ "ToolTip", "Color to fade to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_FadeColor = { "FadeColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackFade, FadeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_FadeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_FadeColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackFade_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_bPersistFade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_bFadeAudio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackFade_Statics::NewProp_FadeColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackFade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackFade>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackFade_Statics::ClassParams = {
		&UInterpTrackFade::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackFade_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFade_Statics::PropPointers),
		0,
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackFade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackFade()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackFade.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackFade.OuterSingleton, Z_Construct_UClass_UInterpTrackFade_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackFade.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackFade>()
	{
		return UInterpTrackFade::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackFade);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFade_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFade_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackFade, UInterpTrackFade::StaticClass, TEXT("UInterpTrackFade"), &Z_Registration_Info_UClass_UInterpTrackFade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackFade), 473109926U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFade_h_3701142996(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFade_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFade_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
