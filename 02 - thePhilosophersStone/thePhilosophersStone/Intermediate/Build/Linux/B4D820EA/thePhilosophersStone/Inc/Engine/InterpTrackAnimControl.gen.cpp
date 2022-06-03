// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackAnimControl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackAnimControl() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimControlTrackKey();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackAnimControl_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackAnimControl();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatBase();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimControlTrackKey;
class UScriptStruct* FAnimControlTrackKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimControlTrackKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimControlTrackKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimControlTrackKey, Z_Construct_UPackage__Script_Engine(), TEXT("AnimControlTrackKey"));
	}
	return Z_Registration_Info_UScriptStruct_AnimControlTrackKey.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimControlTrackKey>()
{
	return FAnimControlTrackKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSeq_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimSeq;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimStartOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimStartOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimEndOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimEndOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[];
#endif
		static void NewProp_bReverse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure used for holding information for one animation played on the Anim Control track. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
		{ "ToolTip", "Structure used for holding information for one animation played on the Anim Control track." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimControlTrackKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_StartTime_MetaData[] = {
		{ "Comment", "/** Position in the Matinee sequence to start playing this animation. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
		{ "ToolTip", "Position in the Matinee sequence to start playing this animation." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimControlTrackKey, StartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimSeq_MetaData[] = {
		{ "Comment", "/** Animation Sequence to play */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
		{ "ToolTip", "Animation Sequence to play" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimSeq = { "AnimSeq", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimControlTrackKey, AnimSeq), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimSeq_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimSeq_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimStartOffset_MetaData[] = {
		{ "Comment", "/** Time to start playing AnimSequence at. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
		{ "ToolTip", "Time to start playing AnimSequence at." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimStartOffset = { "AnimStartOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimControlTrackKey, AnimStartOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimStartOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimStartOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimEndOffset_MetaData[] = {
		{ "Comment", "/** Time to end playing the AnimSequence at. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
		{ "ToolTip", "Time to end playing the AnimSequence at." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimEndOffset = { "AnimEndOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimControlTrackKey, AnimEndOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimEndOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimEndOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimPlayRate_MetaData[] = {
		{ "Comment", "/** Playback speed of this animation. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
		{ "ToolTip", "Playback speed of this animation." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimPlayRate = { "AnimPlayRate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimControlTrackKey, AnimPlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimPlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_bLooping_MetaData[] = {
		{ "Comment", "/** Should this animation loop. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
		{ "ToolTip", "Should this animation loop." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((FAnimControlTrackKey*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimControlTrackKey), &Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_bReverse_MetaData[] = {
		{ "Comment", "/** Whether to play the animation in reverse or not. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
		{ "ToolTip", "Whether to play the animation in reverse or not." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_bReverse_SetBit(void* Obj)
	{
		((FAnimControlTrackKey*)Obj)->bReverse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAnimControlTrackKey), &Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_bReverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_bReverse_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimSeq,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimStartOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimEndOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_AnimPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_bLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewProp_bReverse,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimControlTrackKey",
		sizeof(FAnimControlTrackKey),
		alignof(FAnimControlTrackKey),
		Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimControlTrackKey()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimControlTrackKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimControlTrackKey.InnerSingleton, Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimControlTrackKey.InnerSingleton;
	}
	void UInterpTrackAnimControl::StaticRegisterNativesUInterpTrackAnimControl()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackAnimControl);
	UClass* Z_Construct_UClass_UInterpTrackAnimControl_NoRegister()
	{
		return UInterpTrackAnimControl::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackAnimControl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimSeqs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSeqs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimSeqs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipAnimNotifiers_MetaData[];
#endif
		static void NewProp_bSkipAnimNotifiers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipAnimNotifiers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackAnimControl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackFloatBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackAnimControl_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Animation Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackAnimControl.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "InterpTrackAnimControl" },
		{ "Comment", "/** \n\x09 *\x09Name of slot to use when playing animation. Passed to Actor. \n\x09 *\x09When multiple tracks use the same slot name, they are each given a different ChannelIndex when SetAnimPosition is called. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
		{ "ToolTip", "Name of slot to use when playing animation. Passed to Actor.\nWhen multiple tracks use the same slot name, they are each given a different ChannelIndex when SetAnimPosition is called." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackAnimControl, SlotName), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_SlotName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_AnimSeqs_Inner = { "AnimSeqs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAnimControlTrackKey, METADATA_PARAMS(nullptr, 0) }; // 3568944631
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_AnimSeqs_MetaData[] = {
		{ "Comment", "/** Track of different animations to play and when to start playing them. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
		{ "ToolTip", "Track of different animations to play and when to start playing them." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_AnimSeqs = { "AnimSeqs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackAnimControl, AnimSeqs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_AnimSeqs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_AnimSeqs_MetaData)) }; // 3568944631
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_bSkipAnimNotifiers_MetaData[] = {
		{ "Category", "InterpTrackAnimControl" },
		{ "Comment", "/**  Skip all anim notifiers **/" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackAnimControl.h" },
		{ "ToolTip", "Skip all anim notifiers *" },
	};
#endif
	void Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_bSkipAnimNotifiers_SetBit(void* Obj)
	{
		((UInterpTrackAnimControl*)Obj)->bSkipAnimNotifiers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_bSkipAnimNotifiers = { "bSkipAnimNotifiers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackAnimControl), &Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_bSkipAnimNotifiers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_bSkipAnimNotifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_bSkipAnimNotifiers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackAnimControl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_AnimSeqs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_AnimSeqs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackAnimControl_Statics::NewProp_bSkipAnimNotifiers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackAnimControl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackAnimControl>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackAnimControl_Statics::ClassParams = {
		&UInterpTrackAnimControl::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackAnimControl_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackAnimControl_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackAnimControl_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackAnimControl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackAnimControl()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackAnimControl.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackAnimControl.OuterSingleton, Z_Construct_UClass_UInterpTrackAnimControl_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackAnimControl.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackAnimControl>()
	{
		return UInterpTrackAnimControl::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackAnimControl);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackAnimControl_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackAnimControl_h_Statics::ScriptStructInfo[] = {
		{ FAnimControlTrackKey::StaticStruct, Z_Construct_UScriptStruct_FAnimControlTrackKey_Statics::NewStructOps, TEXT("AnimControlTrackKey"), &Z_Registration_Info_UScriptStruct_AnimControlTrackKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimControlTrackKey), 3568944631U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackAnimControl_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackAnimControl, UInterpTrackAnimControl::StaticClass, TEXT("UInterpTrackAnimControl"), &Z_Registration_Info_UClass_UInterpTrackAnimControl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackAnimControl), 3989526991U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackAnimControl_h_2335557610(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackAnimControl_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackAnimControl_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackAnimControl_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackAnimControl_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
