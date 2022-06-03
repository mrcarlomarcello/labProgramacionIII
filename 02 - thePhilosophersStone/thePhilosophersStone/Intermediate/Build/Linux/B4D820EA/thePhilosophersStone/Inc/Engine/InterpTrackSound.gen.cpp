// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackSound.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackSound() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundTrackKey();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackSound_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackSound();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVectorBase();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundTrackKey;
class UScriptStruct* FSoundTrackKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundTrackKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundTrackKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundTrackKey, Z_Construct_UPackage__Script_Engine(), TEXT("SoundTrackKey"));
	}
	return Z_Registration_Info_UScriptStruct_SoundTrackKey.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundTrackKey>()
{
	return FSoundTrackKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundTrackKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundTrackKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Information for one sound in the track. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
		{ "ToolTip", "Information for one sound in the track." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundTrackKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundTrackKey, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Volume_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundTrackKey, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Pitch_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundTrackKey, Pitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "SoundTrackKey" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSoundTrackKey, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Sound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundTrackKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewProp_Sound,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundTrackKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SoundTrackKey",
		sizeof(FSoundTrackKey),
		alignof(FSoundTrackKey),
		Z_Construct_UScriptStruct_FSoundTrackKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundTrackKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundTrackKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundTrackKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundTrackKey()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundTrackKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundTrackKey.InnerSingleton, Z_Construct_UScriptStruct_FSoundTrackKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundTrackKey.InnerSingleton;
	}
	void UInterpTrackSound::StaticRegisterNativesUInterpTrackSound()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackSound);
	UClass* Z_Construct_UClass_UInterpTrackSound_NoRegister()
	{
		return UInterpTrackSound::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackSound_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sounds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sounds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlayOnReverse_MetaData[];
#endif
		static void NewProp_bPlayOnReverse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayOnReverse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bContinueSoundOnMatineeEnd_MetaData[];
#endif
		static void NewProp_bContinueSoundOnMatineeEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bContinueSoundOnMatineeEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressSubtitles_MetaData[];
#endif
		static void NewProp_bSuppressSubtitles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressSubtitles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTreatAsDialogue_MetaData[];
#endif
		static void NewProp_bTreatAsDialogue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTreatAsDialogue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAttach_MetaData[];
#endif
		static void NewProp_bAttach_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttach;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackSound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackVectorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackSound_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Sound Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackSound.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_Sounds_Inner = { "Sounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoundTrackKey, METADATA_PARAMS(nullptr, 0) }; // 3133939620
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_Sounds_MetaData[] = {
		{ "Comment", "/** Array of sounds to play at specific times. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
		{ "ToolTip", "Array of sounds to play at specific times." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_Sounds = { "Sounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackSound, Sounds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_Sounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_Sounds_MetaData)) }; // 3133939620
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bPlayOnReverse_MetaData[] = {
		{ "Category", "InterpTrackSound" },
		{ "Comment", "/** if set, sound plays only when playing the matinee in reverse instead of when the matinee plays forward */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
		{ "ToolTip", "if set, sound plays only when playing the matinee in reverse instead of when the matinee plays forward" },
	};
#endif
	void Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bPlayOnReverse_SetBit(void* Obj)
	{
		((UInterpTrackSound*)Obj)->bPlayOnReverse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bPlayOnReverse = { "bPlayOnReverse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackSound), &Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bPlayOnReverse_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bPlayOnReverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bPlayOnReverse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bContinueSoundOnMatineeEnd_MetaData[] = {
		{ "Category", "InterpTrackSound" },
		{ "Comment", "/** If true, sounds on this track will not be forced to finish when the matinee sequence finishes. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
		{ "ToolTip", "If true, sounds on this track will not be forced to finish when the matinee sequence finishes." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bContinueSoundOnMatineeEnd_SetBit(void* Obj)
	{
		((UInterpTrackSound*)Obj)->bContinueSoundOnMatineeEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bContinueSoundOnMatineeEnd = { "bContinueSoundOnMatineeEnd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackSound), &Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bContinueSoundOnMatineeEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bContinueSoundOnMatineeEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bContinueSoundOnMatineeEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bSuppressSubtitles_MetaData[] = {
		{ "Category", "InterpTrackSound" },
		{ "Comment", "/** If true, don't show subtitles for sounds played by this track. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
		{ "ToolTip", "If true, don't show subtitles for sounds played by this track." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bSuppressSubtitles_SetBit(void* Obj)
	{
		((UInterpTrackSound*)Obj)->bSuppressSubtitles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bSuppressSubtitles = { "bSuppressSubtitles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackSound), &Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bSuppressSubtitles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bSuppressSubtitles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bSuppressSubtitles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bTreatAsDialogue_MetaData[] = {
		{ "Category", "InterpTrackSound" },
		{ "Comment", "/** If true and track is controlling a pawn, makes the pawn \"speak\" the given audio. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
		{ "ToolTip", "If true and track is controlling a pawn, makes the pawn \"speak\" the given audio." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bTreatAsDialogue_SetBit(void* Obj)
	{
		((UInterpTrackSound*)Obj)->bTreatAsDialogue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bTreatAsDialogue = { "bTreatAsDialogue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackSound), &Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bTreatAsDialogue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bTreatAsDialogue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bTreatAsDialogue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bAttach_MetaData[] = {
		{ "Category", "InterpTrackSound" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackSound.h" },
	};
#endif
	void Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bAttach_SetBit(void* Obj)
	{
		((UInterpTrackSound*)Obj)->bAttach = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bAttach = { "bAttach", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackSound), &Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bAttach_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bAttach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bAttach_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_Sounds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_Sounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bPlayOnReverse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bContinueSoundOnMatineeEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bSuppressSubtitles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bTreatAsDialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackSound_Statics::NewProp_bAttach,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackSound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackSound>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackSound_Statics::ClassParams = {
		&UInterpTrackSound::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackSound_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackSound_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackSound_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackSound_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackSound()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackSound.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackSound.OuterSingleton, Z_Construct_UClass_UInterpTrackSound_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackSound.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackSound>()
	{
		return UInterpTrackSound::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackSound);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSound_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSound_h_Statics::ScriptStructInfo[] = {
		{ FSoundTrackKey::StaticStruct, Z_Construct_UScriptStruct_FSoundTrackKey_Statics::NewStructOps, TEXT("SoundTrackKey"), &Z_Registration_Info_UScriptStruct_SoundTrackKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundTrackKey), 3133939620U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSound_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackSound, UInterpTrackSound::StaticClass, TEXT("UInterpTrackSound"), &Z_Registration_Info_UClass_UInterpTrackSound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackSound), 3773821584U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSound_h_3476051411(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSound_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSound_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSound_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackSound_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
