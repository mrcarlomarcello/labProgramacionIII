// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackEvent() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEventTrackKey();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackEvent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackEvent();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EventTrackKey;
class UScriptStruct* FEventTrackKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EventTrackKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EventTrackKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventTrackKey, Z_Construct_UPackage__Script_Engine(), TEXT("EventTrackKey"));
	}
	return Z_Registration_Info_UScriptStruct_EventTrackKey.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEventTrackKey>()
{
	return FEventTrackKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEventTrackKey_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventTrackKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Information for one event in the track. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackEvent.h" },
		{ "ToolTip", "Information for one event in the track." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventTrackKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventTrackKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventTrackKey_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackEvent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEventTrackKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventTrackKey, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FEventTrackKey_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventTrackKey_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventTrackKey_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "EventTrackKey" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackEvent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEventTrackKey_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEventTrackKey, EventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEventTrackKey_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventTrackKey_Statics::NewProp_EventName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventTrackKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventTrackKey_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventTrackKey_Statics::NewProp_EventName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventTrackKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"EventTrackKey",
		sizeof(FEventTrackKey),
		alignof(FEventTrackKey),
		Z_Construct_UScriptStruct_FEventTrackKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventTrackKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventTrackKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventTrackKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventTrackKey()
	{
		if (!Z_Registration_Info_UScriptStruct_EventTrackKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EventTrackKey.InnerSingleton, Z_Construct_UScriptStruct_FEventTrackKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EventTrackKey.InnerSingleton;
	}
	void UInterpTrackEvent::StaticRegisterNativesUInterpTrackEvent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackEvent);
	UClass* Z_Construct_UClass_UInterpTrackEvent_NoRegister()
	{
		return UInterpTrackEvent::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTrack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventTrack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EventTrack;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomEventName_MetaData[];
#endif
		static void NewProp_bUseCustomEventName_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomEventName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackEvent_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Event Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackEvent.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackEvent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_EventTrack_Inner = { "EventTrack", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEventTrackKey, METADATA_PARAMS(nullptr, 0) }; // 380133792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_EventTrack_MetaData[] = {
		{ "Comment", "/** Array of events to fire off. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackEvent.h" },
		{ "ToolTip", "Array of events to fire off." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_EventTrack = { "EventTrack", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackEvent, EventTrack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_EventTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_EventTrack_MetaData)) }; // 380133792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenForwards_MetaData[] = {
		{ "Category", "InterpTrackEvent" },
		{ "Comment", "/** If events should be fired when passed playing the sequence forwards. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackEvent.h" },
		{ "ToolTip", "If events should be fired when passed playing the sequence forwards." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenForwards_SetBit(void* Obj)
	{
		((UInterpTrackEvent*)Obj)->bFireEventsWhenForwards = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenForwards = { "bFireEventsWhenForwards", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackEvent), &Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenForwards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenForwards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenForwards_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenBackwards_MetaData[] = {
		{ "Category", "InterpTrackEvent" },
		{ "Comment", "/** If events should be fired when passed playing the sequence backwards. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackEvent.h" },
		{ "ToolTip", "If events should be fired when passed playing the sequence backwards." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenBackwards_SetBit(void* Obj)
	{
		((UInterpTrackEvent*)Obj)->bFireEventsWhenBackwards = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenBackwards = { "bFireEventsWhenBackwards", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackEvent), &Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenBackwards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenBackwards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenBackwards_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenJumpingForwards_MetaData[] = {
		{ "Category", "InterpTrackEvent" },
		{ "Comment", "/** If true, events on this track are fired even when jumping forwads through a sequence - for example, skipping a cinematic. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackEvent.h" },
		{ "ToolTip", "If true, events on this track are fired even when jumping forwads through a sequence - for example, skipping a cinematic." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenJumpingForwards_SetBit(void* Obj)
	{
		((UInterpTrackEvent*)Obj)->bFireEventsWhenJumpingForwards = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenJumpingForwards = { "bFireEventsWhenJumpingForwards", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackEvent), &Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenJumpingForwards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenJumpingForwards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenJumpingForwards_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bUseCustomEventName_MetaData[] = {
		{ "Category", "InterpTrackEvent" },
		{ "Comment", "/** If checked each key's event name is the exact name of the custom event function in level script that will be called */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackEvent.h" },
		{ "ToolTip", "If checked each key's event name is the exact name of the custom event function in level script that will be called" },
	};
#endif
	void Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bUseCustomEventName_SetBit(void* Obj)
	{
		((UInterpTrackEvent*)Obj)->bUseCustomEventName = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bUseCustomEventName = { "bUseCustomEventName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackEvent), &Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bUseCustomEventName_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bUseCustomEventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bUseCustomEventName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_EventTrack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_EventTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenForwards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenBackwards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bFireEventsWhenJumpingForwards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackEvent_Statics::NewProp_bUseCustomEventName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackEvent_Statics::ClassParams = {
		&UInterpTrackEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackEvent_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackEvent()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackEvent.OuterSingleton, Z_Construct_UClass_UInterpTrackEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackEvent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackEvent>()
	{
		return UInterpTrackEvent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackEvent);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackEvent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackEvent_h_Statics::ScriptStructInfo[] = {
		{ FEventTrackKey::StaticStruct, Z_Construct_UScriptStruct_FEventTrackKey_Statics::NewStructOps, TEXT("EventTrackKey"), &Z_Registration_Info_UScriptStruct_EventTrackKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEventTrackKey), 380133792U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackEvent, UInterpTrackEvent::StaticClass, TEXT("UInterpTrackEvent"), &Z_Registration_Info_UClass_UInterpTrackEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackEvent), 4097022395U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackEvent_h_3775299872(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackEvent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackEvent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackEvent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
