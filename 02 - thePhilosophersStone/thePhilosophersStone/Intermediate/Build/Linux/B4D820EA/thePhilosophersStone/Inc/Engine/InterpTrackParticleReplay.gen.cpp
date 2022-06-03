// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackParticleReplay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackParticleReplay() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleReplayTrackKey();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackParticleReplay_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackParticleReplay();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParticleReplayTrackKey;
class UScriptStruct* FParticleReplayTrackKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleReplayTrackKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParticleReplayTrackKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleReplayTrackKey, Z_Construct_UPackage__Script_Engine(), TEXT("ParticleReplayTrackKey"));
	}
	return Z_Registration_Info_UScriptStruct_ParticleReplayTrackKey.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParticleReplayTrackKey>()
{
	return FParticleReplayTrackKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipIDNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClipIDNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Data for a single key in this track */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackParticleReplay.h" },
		{ "ToolTip", "Data for a single key in this track" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleReplayTrackKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewProp_Time_MetaData[] = {
		{ "Comment", "/** Position along timeline */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackParticleReplay.h" },
		{ "ToolTip", "Position along timeline" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParticleReplayTrackKey, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "ParticleReplayTrackKey" },
		{ "Comment", "/** Time length this clip should be captured/played for */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackParticleReplay.h" },
		{ "ToolTip", "Time length this clip should be captured/played for" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParticleReplayTrackKey, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewProp_ClipIDNumber_MetaData[] = {
		{ "Category", "ParticleReplayTrackKey" },
		{ "Comment", "/** Replay clip ID number that identifies the clip we should capture to or playback from */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackParticleReplay.h" },
		{ "ToolTip", "Replay clip ID number that identifies the clip we should capture to or playback from" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewProp_ClipIDNumber = { "ClipIDNumber", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FParticleReplayTrackKey, ClipIDNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewProp_ClipIDNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewProp_ClipIDNumber_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewProp_ClipIDNumber,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ParticleReplayTrackKey",
		sizeof(FParticleReplayTrackKey),
		alignof(FParticleReplayTrackKey),
		Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParticleReplayTrackKey()
	{
		if (!Z_Registration_Info_UScriptStruct_ParticleReplayTrackKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParticleReplayTrackKey.InnerSingleton, Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ParticleReplayTrackKey.InnerSingleton;
	}
	void UInterpTrackParticleReplay::StaticRegisterNativesUInterpTrackParticleReplay()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackParticleReplay);
	UClass* Z_Construct_UClass_UInterpTrackParticleReplay_NoRegister()
	{
		return UInterpTrackParticleReplay::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackParticleReplay_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackKeys;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCapturingReplay_MetaData[];
#endif
		static void NewProp_bIsCapturingReplay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCapturingReplay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixedTimeStep_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FixedTimeStep;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackParticleReplay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackParticleReplay_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Particle Replay Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackParticleReplay.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackParticleReplay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_TrackKeys_Inner = { "TrackKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FParticleReplayTrackKey, METADATA_PARAMS(nullptr, 0) }; // 1105649714
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_TrackKeys_MetaData[] = {
		{ "Comment", "/** Array of keys */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackParticleReplay.h" },
		{ "ToolTip", "Array of keys" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_TrackKeys = { "TrackKeys", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackParticleReplay, TrackKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_TrackKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_TrackKeys_MetaData)) }; // 1105649714
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_bIsCapturingReplay_MetaData[] = {
		{ "Comment", "/** True in the editor if track should be used to capture replay frames instead of play them back */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackParticleReplay.h" },
		{ "ToolTip", "True in the editor if track should be used to capture replay frames instead of play them back" },
	};
#endif
	void Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_bIsCapturingReplay_SetBit(void* Obj)
	{
		((UInterpTrackParticleReplay*)Obj)->bIsCapturingReplay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_bIsCapturingReplay = { "bIsCapturingReplay", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackParticleReplay), &Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_bIsCapturingReplay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_bIsCapturingReplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_bIsCapturingReplay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_FixedTimeStep_MetaData[] = {
		{ "Comment", "/** Current replay fixed time quantum between frames (one over frame rate) */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackParticleReplay.h" },
		{ "ToolTip", "Current replay fixed time quantum between frames (one over frame rate)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_FixedTimeStep = { "FixedTimeStep", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackParticleReplay, FixedTimeStep), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_FixedTimeStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_FixedTimeStep_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackParticleReplay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_TrackKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_TrackKeys,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_bIsCapturingReplay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackParticleReplay_Statics::NewProp_FixedTimeStep,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackParticleReplay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackParticleReplay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackParticleReplay_Statics::ClassParams = {
		&UInterpTrackParticleReplay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackParticleReplay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackParticleReplay_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackParticleReplay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackParticleReplay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackParticleReplay()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackParticleReplay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackParticleReplay.OuterSingleton, Z_Construct_UClass_UInterpTrackParticleReplay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackParticleReplay.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackParticleReplay>()
	{
		return UInterpTrackParticleReplay::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackParticleReplay);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackParticleReplay_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackParticleReplay_h_Statics::ScriptStructInfo[] = {
		{ FParticleReplayTrackKey::StaticStruct, Z_Construct_UScriptStruct_FParticleReplayTrackKey_Statics::NewStructOps, TEXT("ParticleReplayTrackKey"), &Z_Registration_Info_UScriptStruct_ParticleReplayTrackKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParticleReplayTrackKey), 1105649714U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackParticleReplay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackParticleReplay, UInterpTrackParticleReplay::StaticClass, TEXT("UInterpTrackParticleReplay"), &Z_Registration_Info_UClass_UInterpTrackParticleReplay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackParticleReplay), 3115176968U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackParticleReplay_h_358058178(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackParticleReplay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackParticleReplay_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackParticleReplay_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackParticleReplay_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
