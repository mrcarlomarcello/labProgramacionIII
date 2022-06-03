// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackToggle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackToggle() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETrackToggleAction();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FToggleTrackKey();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackToggle_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackToggle();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETrackToggleAction;
	static UEnum* ETrackToggleAction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETrackToggleAction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETrackToggleAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETrackToggleAction, Z_Construct_UPackage__Script_Engine(), TEXT("ETrackToggleAction"));
		}
		return Z_Registration_Info_UEnum_ETrackToggleAction.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETrackToggleAction>()
	{
		return ETrackToggleAction_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETrackToggleAction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETrackToggleAction_Statics::Enumerators[] = {
		{ "ETTA_Off", (int64)ETTA_Off },
		{ "ETTA_On", (int64)ETTA_On },
		{ "ETTA_Toggle", (int64)ETTA_Toggle },
		{ "ETTA_Trigger", (int64)ETTA_Trigger },
		{ "ETTA_MAX", (int64)ETTA_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETrackToggleAction_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Enumeration indicating toggle action\x09*/" },
		{ "ETTA_MAX.Name", "ETTA_MAX" },
		{ "ETTA_Off.Name", "ETTA_Off" },
		{ "ETTA_On.Name", "ETTA_On" },
		{ "ETTA_Toggle.Name", "ETTA_Toggle" },
		{ "ETTA_Trigger.Name", "ETTA_Trigger" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
		{ "ToolTip", "Enumeration indicating toggle action" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETrackToggleAction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETrackToggleAction",
		"ETrackToggleAction",
		Z_Construct_UEnum_Engine_ETrackToggleAction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETrackToggleAction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETrackToggleAction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETrackToggleAction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETrackToggleAction()
	{
		if (!Z_Registration_Info_UEnum_ETrackToggleAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETrackToggleAction.InnerSingleton, Z_Construct_UEnum_Engine_ETrackToggleAction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETrackToggleAction.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ToggleTrackKey;
class UScriptStruct* FToggleTrackKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ToggleTrackKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ToggleTrackKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FToggleTrackKey, Z_Construct_UPackage__Script_Engine(), TEXT("ToggleTrackKey"));
	}
	return Z_Registration_Info_UScriptStruct_ToggleTrackKey.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FToggleTrackKey>()
{
	return FToggleTrackKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FToggleTrackKey_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToggleAction_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ToggleAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToggleTrackKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Information for one toggle in the track. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
		{ "ToolTip", "Information for one toggle in the track." },
	};
#endif
	void* Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToggleTrackKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FToggleTrackKey, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewProp_ToggleAction_MetaData[] = {
		{ "Category", "ToggleTrackKey" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewProp_ToggleAction = { "ToggleAction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FToggleTrackKey, ToggleAction), Z_Construct_UEnum_Engine_ETrackToggleAction, METADATA_PARAMS(Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewProp_ToggleAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewProp_ToggleAction_MetaData)) }; // 2782852714
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToggleTrackKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewProp_ToggleAction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToggleTrackKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ToggleTrackKey",
		sizeof(FToggleTrackKey),
		alignof(FToggleTrackKey),
		Z_Construct_UScriptStruct_FToggleTrackKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToggleTrackKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FToggleTrackKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToggleTrackKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FToggleTrackKey()
	{
		if (!Z_Registration_Info_UScriptStruct_ToggleTrackKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ToggleTrackKey.InnerSingleton, Z_Construct_UScriptStruct_FToggleTrackKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ToggleTrackKey.InnerSingleton;
	}
	void UInterpTrackToggle::StaticRegisterNativesUInterpTrackToggle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackToggle);
	UClass* Z_Construct_UClass_UInterpTrackToggle_NoRegister()
	{
		return UInterpTrackToggle::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackToggle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ToggleTrack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToggleTrack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ToggleTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActivateSystemEachUpdate_MetaData[];
#endif
		static void NewProp_bActivateSystemEachUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivateSystemEachUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActivateWithJustAttachedFlag_MetaData[];
#endif
		static void NewProp_bActivateWithJustAttachedFlag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivateWithJustAttachedFlag;
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
	UObject* (*const Z_Construct_UClass_UInterpTrackToggle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackToggle_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Toggle Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackToggle.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_ToggleTrack_Inner = { "ToggleTrack", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FToggleTrackKey, METADATA_PARAMS(nullptr, 0) }; // 1012927918
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_ToggleTrack_MetaData[] = {
		{ "Comment", "/** Array of events to fire off. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
		{ "ToolTip", "Array of events to fire off." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_ToggleTrack = { "ToggleTrack", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackToggle, ToggleTrack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_ToggleTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_ToggleTrack_MetaData)) }; // 1012927918
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateSystemEachUpdate_MetaData[] = {
		{ "Category", "InterpTrackToggle" },
		{ "Comment", "/** \n\x09 *\x09If true, the track will call ActivateSystem on the emitter each update (the old 'incorrect' behavior).\n\x09 *\x09If false (the default), the System will only be activated if it was previously inactive.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
		{ "ToolTip", "If true, the track will call ActivateSystem on the emitter each update (the old 'incorrect' behavior).\nIf false (the default), the System will only be activated if it was previously inactive." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateSystemEachUpdate_SetBit(void* Obj)
	{
		((UInterpTrackToggle*)Obj)->bActivateSystemEachUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateSystemEachUpdate = { "bActivateSystemEachUpdate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackToggle), &Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateSystemEachUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateSystemEachUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateSystemEachUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateWithJustAttachedFlag_MetaData[] = {
		{ "Category", "InterpTrackToggle" },
		{ "Comment", "/** \n\x09 *\x09If true, the track will activate the system w/ the 'Just Attached' flag.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
		{ "ToolTip", "If true, the track will activate the system w/ the 'Just Attached' flag." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateWithJustAttachedFlag_SetBit(void* Obj)
	{
		((UInterpTrackToggle*)Obj)->bActivateWithJustAttachedFlag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateWithJustAttachedFlag = { "bActivateWithJustAttachedFlag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackToggle), &Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateWithJustAttachedFlag_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateWithJustAttachedFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateWithJustAttachedFlag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenForwards_MetaData[] = {
		{ "Category", "InterpTrackToggle" },
		{ "Comment", "/** If events should be fired when passed playing the sequence forwards. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
		{ "ToolTip", "If events should be fired when passed playing the sequence forwards." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenForwards_SetBit(void* Obj)
	{
		((UInterpTrackToggle*)Obj)->bFireEventsWhenForwards = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenForwards = { "bFireEventsWhenForwards", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackToggle), &Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenForwards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenForwards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenForwards_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenBackwards_MetaData[] = {
		{ "Category", "InterpTrackToggle" },
		{ "Comment", "/** If events should be fired when passed playing the sequence backwards. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
		{ "ToolTip", "If events should be fired when passed playing the sequence backwards." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenBackwards_SetBit(void* Obj)
	{
		((UInterpTrackToggle*)Obj)->bFireEventsWhenBackwards = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenBackwards = { "bFireEventsWhenBackwards", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackToggle), &Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenBackwards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenBackwards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenBackwards_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenJumpingForwards_MetaData[] = {
		{ "Category", "InterpTrackToggle" },
		{ "Comment", "/** If true, events on this track are fired even when jumping forwads through a sequence - for example, skipping a cinematic. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackToggle.h" },
		{ "ToolTip", "If true, events on this track are fired even when jumping forwads through a sequence - for example, skipping a cinematic." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenJumpingForwards_SetBit(void* Obj)
	{
		((UInterpTrackToggle*)Obj)->bFireEventsWhenJumpingForwards = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenJumpingForwards = { "bFireEventsWhenJumpingForwards", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackToggle), &Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenJumpingForwards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenJumpingForwards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenJumpingForwards_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackToggle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_ToggleTrack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_ToggleTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateSystemEachUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bActivateWithJustAttachedFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenForwards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenBackwards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackToggle_Statics::NewProp_bFireEventsWhenJumpingForwards,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackToggle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackToggle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackToggle_Statics::ClassParams = {
		&UInterpTrackToggle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackToggle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackToggle_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackToggle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackToggle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackToggle()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackToggle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackToggle.OuterSingleton, Z_Construct_UClass_UInterpTrackToggle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackToggle.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackToggle>()
	{
		return UInterpTrackToggle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackToggle);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackToggle_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackToggle_h_Statics::EnumInfo[] = {
		{ ETrackToggleAction_StaticEnum, TEXT("ETrackToggleAction"), &Z_Registration_Info_UEnum_ETrackToggleAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2782852714U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackToggle_h_Statics::ScriptStructInfo[] = {
		{ FToggleTrackKey::StaticStruct, Z_Construct_UScriptStruct_FToggleTrackKey_Statics::NewStructOps, TEXT("ToggleTrackKey"), &Z_Registration_Info_UScriptStruct_ToggleTrackKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FToggleTrackKey), 1012927918U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackToggle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackToggle, UInterpTrackToggle::StaticClass, TEXT("UInterpTrackToggle"), &Z_Registration_Info_UClass_UInterpTrackToggle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackToggle), 4286608116U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackToggle_h_4059887514(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackToggle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackToggle_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackToggle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackToggle_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackToggle_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackToggle_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
