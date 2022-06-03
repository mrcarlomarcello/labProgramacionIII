// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackVisibility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackVisibility() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVisibilityTrackAction();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVisibilityTrackCondition();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVisibilityTrackKey();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVisibility_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackVisibility();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVisibilityTrackAction;
	static UEnum* EVisibilityTrackAction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVisibilityTrackAction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVisibilityTrackAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVisibilityTrackAction, Z_Construct_UPackage__Script_Engine(), TEXT("EVisibilityTrackAction"));
		}
		return Z_Registration_Info_UEnum_EVisibilityTrackAction.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EVisibilityTrackAction>()
	{
		return EVisibilityTrackAction_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EVisibilityTrackAction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EVisibilityTrackAction_Statics::Enumerators[] = {
		{ "EVTA_Hide", (int64)EVTA_Hide },
		{ "EVTA_Show", (int64)EVTA_Show },
		{ "EVTA_Toggle", (int64)EVTA_Toggle },
		{ "EVTA_MAX", (int64)EVTA_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EVisibilityTrackAction_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Visibility track actions */" },
		{ "EVTA_Hide.Comment", "/** Hides the object */" },
		{ "EVTA_Hide.Name", "EVTA_Hide" },
		{ "EVTA_Hide.ToolTip", "Hides the object" },
		{ "EVTA_MAX.Name", "EVTA_MAX" },
		{ "EVTA_Show.Comment", "/** Shows the object */" },
		{ "EVTA_Show.Name", "EVTA_Show" },
		{ "EVTA_Show.ToolTip", "Shows the object" },
		{ "EVTA_Toggle.Comment", "/** Toggles visibility of the object */" },
		{ "EVTA_Toggle.Name", "EVTA_Toggle" },
		{ "EVTA_Toggle.ToolTip", "Toggles visibility of the object" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
		{ "ToolTip", "Visibility track actions" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EVisibilityTrackAction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EVisibilityTrackAction",
		"EVisibilityTrackAction",
		Z_Construct_UEnum_Engine_EVisibilityTrackAction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVisibilityTrackAction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EVisibilityTrackAction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVisibilityTrackAction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EVisibilityTrackAction()
	{
		if (!Z_Registration_Info_UEnum_EVisibilityTrackAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVisibilityTrackAction.InnerSingleton, Z_Construct_UEnum_Engine_EVisibilityTrackAction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVisibilityTrackAction.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVisibilityTrackCondition;
	static UEnum* EVisibilityTrackCondition_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVisibilityTrackCondition.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVisibilityTrackCondition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVisibilityTrackCondition, Z_Construct_UPackage__Script_Engine(), TEXT("EVisibilityTrackCondition"));
		}
		return Z_Registration_Info_UEnum_EVisibilityTrackCondition.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EVisibilityTrackCondition>()
	{
		return EVisibilityTrackCondition_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EVisibilityTrackCondition_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EVisibilityTrackCondition_Statics::Enumerators[] = {
		{ "EVTC_Always", (int64)EVTC_Always },
		{ "EVTC_GoreEnabled", (int64)EVTC_GoreEnabled },
		{ "EVTC_GoreDisabled", (int64)EVTC_GoreDisabled },
		{ "EVTC_MAX", (int64)EVTC_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EVisibilityTrackCondition_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Required condition for firing this event */" },
		{ "EVTC_Always.Comment", "/** Always play this event */" },
		{ "EVTC_Always.Name", "EVTC_Always" },
		{ "EVTC_Always.ToolTip", "Always play this event" },
		{ "EVTC_GoreDisabled.Comment", "/** Only play this event when extreme content (gore) is disabled */" },
		{ "EVTC_GoreDisabled.Name", "EVTC_GoreDisabled" },
		{ "EVTC_GoreDisabled.ToolTip", "Only play this event when extreme content (gore) is disabled" },
		{ "EVTC_GoreEnabled.Comment", "/** Only play this event when extreme content (gore) is enabled */" },
		{ "EVTC_GoreEnabled.Name", "EVTC_GoreEnabled" },
		{ "EVTC_GoreEnabled.ToolTip", "Only play this event when extreme content (gore) is enabled" },
		{ "EVTC_MAX.Name", "EVTC_MAX" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
		{ "ToolTip", "Required condition for firing this event" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EVisibilityTrackCondition_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EVisibilityTrackCondition",
		"EVisibilityTrackCondition",
		Z_Construct_UEnum_Engine_EVisibilityTrackCondition_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVisibilityTrackCondition_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EVisibilityTrackCondition_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVisibilityTrackCondition_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EVisibilityTrackCondition()
	{
		if (!Z_Registration_Info_UEnum_EVisibilityTrackCondition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVisibilityTrackCondition.InnerSingleton, Z_Construct_UEnum_Engine_EVisibilityTrackCondition_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVisibilityTrackCondition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VisibilityTrackKey;
class UScriptStruct* FVisibilityTrackKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VisibilityTrackKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VisibilityTrackKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVisibilityTrackKey, Z_Construct_UPackage__Script_Engine(), TEXT("VisibilityTrackKey"));
	}
	return Z_Registration_Info_UScriptStruct_VisibilityTrackKey.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVisibilityTrackKey>()
{
	return FVisibilityTrackKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveCondition_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActiveCondition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Information for one toggle in the track. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
		{ "ToolTip", "Information for one toggle in the track." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVisibilityTrackKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVisibilityTrackKey, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "VisibilityTrackKey" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVisibilityTrackKey, Action), Z_Construct_UEnum_Engine_EVisibilityTrackAction, METADATA_PARAMS(Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewProp_Action_MetaData)) }; // 2895575385
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewProp_ActiveCondition_MetaData[] = {
		{ "Comment", "/** Condition that must be satisfied for this key event to fire */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
		{ "ToolTip", "Condition that must be satisfied for this key event to fire" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewProp_ActiveCondition = { "ActiveCondition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVisibilityTrackKey, ActiveCondition), Z_Construct_UEnum_Engine_EVisibilityTrackCondition, METADATA_PARAMS(Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewProp_ActiveCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewProp_ActiveCondition_MetaData)) }; // 3019684019
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewProp_ActiveCondition,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"VisibilityTrackKey",
		sizeof(FVisibilityTrackKey),
		alignof(FVisibilityTrackKey),
		Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVisibilityTrackKey()
	{
		if (!Z_Registration_Info_UScriptStruct_VisibilityTrackKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VisibilityTrackKey.InnerSingleton, Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VisibilityTrackKey.InnerSingleton;
	}
	void UInterpTrackVisibility::StaticRegisterNativesUInterpTrackVisibility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackVisibility);
	UClass* Z_Construct_UClass_UInterpTrackVisibility_NoRegister()
	{
		return UInterpTrackVisibility::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackVisibility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VisibilityTrack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityTrack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VisibilityTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenForwards_MetaData[];
#endif
		static void NewProp_bFireEventsWhenForwards_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenForwards;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenBackwards_MetaData[];
#endif
		static void NewProp_bFireEventsWhenBackwards_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenBackwards;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenJumpingForwards_MetaData[];
#endif
		static void NewProp_bFireEventsWhenJumpingForwards_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenJumpingForwards;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackVisibility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackVisibility_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Visibility Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackVisibility.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_VisibilityTrack_Inner = { "VisibilityTrack", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVisibilityTrackKey, METADATA_PARAMS(nullptr, 0) }; // 723835241
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_VisibilityTrack_MetaData[] = {
		{ "Comment", "/** Array of events to fire off. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
		{ "ToolTip", "Array of events to fire off." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_VisibilityTrack = { "VisibilityTrack", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackVisibility, VisibilityTrack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_VisibilityTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_VisibilityTrack_MetaData)) }; // 723835241
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenForwards_MetaData[] = {
		{ "Category", "InterpTrackVisibility" },
		{ "Comment", "/** If events should be fired when passed playing the sequence forwards. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
		{ "ToolTip", "If events should be fired when passed playing the sequence forwards." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenForwards_SetBit(void* Obj)
	{
		((UInterpTrackVisibility*)Obj)->bFireEventsWhenForwards = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenForwards = { "bFireEventsWhenForwards", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackVisibility), &Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenForwards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenForwards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenForwards_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenBackwards_MetaData[] = {
		{ "Category", "InterpTrackVisibility" },
		{ "Comment", "/** If events should be fired when passed playing the sequence backwards. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
		{ "ToolTip", "If events should be fired when passed playing the sequence backwards." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenBackwards_SetBit(void* Obj)
	{
		((UInterpTrackVisibility*)Obj)->bFireEventsWhenBackwards = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenBackwards = { "bFireEventsWhenBackwards", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackVisibility), &Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenBackwards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenBackwards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenBackwards_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenJumpingForwards_MetaData[] = {
		{ "Category", "InterpTrackVisibility" },
		{ "Comment", "/** If true, events on this track are fired even when jumping forwads through a sequence - for example, skipping a cinematic. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackVisibility.h" },
		{ "ToolTip", "If true, events on this track are fired even when jumping forwads through a sequence - for example, skipping a cinematic." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenJumpingForwards_SetBit(void* Obj)
	{
		((UInterpTrackVisibility*)Obj)->bFireEventsWhenJumpingForwards = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenJumpingForwards = { "bFireEventsWhenJumpingForwards", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackVisibility), &Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenJumpingForwards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenJumpingForwards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenJumpingForwards_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_VisibilityTrack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_VisibilityTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenForwards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenBackwards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackVisibility_Statics::NewProp_bFireEventsWhenJumpingForwards,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackVisibility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackVisibility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackVisibility_Statics::ClassParams = {
		&UInterpTrackVisibility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackVisibility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackVisibility_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackVisibility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackVisibility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackVisibility()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackVisibility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackVisibility.OuterSingleton, Z_Construct_UClass_UInterpTrackVisibility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackVisibility.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackVisibility>()
	{
		return UInterpTrackVisibility::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackVisibility);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVisibility_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVisibility_h_Statics::EnumInfo[] = {
		{ EVisibilityTrackAction_StaticEnum, TEXT("EVisibilityTrackAction"), &Z_Registration_Info_UEnum_EVisibilityTrackAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2895575385U) },
		{ EVisibilityTrackCondition_StaticEnum, TEXT("EVisibilityTrackCondition"), &Z_Registration_Info_UEnum_EVisibilityTrackCondition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3019684019U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVisibility_h_Statics::ScriptStructInfo[] = {
		{ FVisibilityTrackKey::StaticStruct, Z_Construct_UScriptStruct_FVisibilityTrackKey_Statics::NewStructOps, TEXT("VisibilityTrackKey"), &Z_Registration_Info_UScriptStruct_VisibilityTrackKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVisibilityTrackKey), 723835241U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVisibility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackVisibility, UInterpTrackVisibility::StaticClass, TEXT("UInterpTrackVisibility"), &Z_Registration_Info_UClass_UInterpTrackVisibility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackVisibility), 88642947U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVisibility_h_4222752926(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVisibility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVisibility_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVisibility_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVisibility_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVisibility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackVisibility_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
