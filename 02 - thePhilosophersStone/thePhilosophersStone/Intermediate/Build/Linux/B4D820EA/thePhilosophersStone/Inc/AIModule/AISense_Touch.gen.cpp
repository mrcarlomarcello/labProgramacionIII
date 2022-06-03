// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Perception/AISense_Touch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense_Touch() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAITouchEvent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Touch_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Touch();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AITouchEvent;
class UScriptStruct* FAITouchEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AITouchEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AITouchEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAITouchEvent, Z_Construct_UPackage__Script_AIModule(), TEXT("AITouchEvent"));
	}
	return Z_Registration_Info_UScriptStruct_AITouchEvent.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAITouchEvent>()
{
	return FAITouchEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAITouchEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TouchReceiver_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TouchReceiver;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITouchEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Touch.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAITouchEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAITouchEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITouchEvent_Statics::NewProp_TouchReceiver_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Touch.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAITouchEvent_Statics::NewProp_TouchReceiver = { "TouchReceiver", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAITouchEvent, TouchReceiver), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAITouchEvent_Statics::NewProp_TouchReceiver_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITouchEvent_Statics::NewProp_TouchReceiver_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAITouchEvent_Statics::NewProp_OtherActor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Touch.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAITouchEvent_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAITouchEvent, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAITouchEvent_Statics::NewProp_OtherActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITouchEvent_Statics::NewProp_OtherActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAITouchEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITouchEvent_Statics::NewProp_TouchReceiver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITouchEvent_Statics::NewProp_OtherActor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAITouchEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"AITouchEvent",
		sizeof(FAITouchEvent),
		alignof(FAITouchEvent),
		Z_Construct_UScriptStruct_FAITouchEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITouchEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAITouchEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITouchEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAITouchEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_AITouchEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AITouchEvent.InnerSingleton, Z_Construct_UScriptStruct_FAITouchEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AITouchEvent.InnerSingleton;
	}
	void UAISense_Touch::StaticRegisterNativesUAISense_Touch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISense_Touch);
	UClass* Z_Construct_UClass_UAISense_Touch_NoRegister()
	{
		return UAISense_Touch::StaticClass();
	}
	struct Z_Construct_UClass_UAISense_Touch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RegisteredEvents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredEvents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredEvents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISense_Touch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISense,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Touch_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "Perception/AISense_Touch.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Touch.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISense_Touch_Statics::NewProp_RegisteredEvents_Inner = { "RegisteredEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAITouchEvent, METADATA_PARAMS(nullptr, 0) }; // 2888096805
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Touch_Statics::NewProp_RegisteredEvents_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Touch.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISense_Touch_Statics::NewProp_RegisteredEvents = { "RegisteredEvents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISense_Touch, RegisteredEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAISense_Touch_Statics::NewProp_RegisteredEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Touch_Statics::NewProp_RegisteredEvents_MetaData)) }; // 2888096805
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISense_Touch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Touch_Statics::NewProp_RegisteredEvents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Touch_Statics::NewProp_RegisteredEvents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISense_Touch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISense_Touch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISense_Touch_Statics::ClassParams = {
		&UAISense_Touch::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISense_Touch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Touch_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAISense_Touch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Touch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISense_Touch()
	{
		if (!Z_Registration_Info_UClass_UAISense_Touch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISense_Touch.OuterSingleton, Z_Construct_UClass_UAISense_Touch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAISense_Touch.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UAISense_Touch>()
	{
		return UAISense_Touch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Touch);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_Statics::ScriptStructInfo[] = {
		{ FAITouchEvent::StaticStruct, Z_Construct_UScriptStruct_FAITouchEvent_Statics::NewStructOps, TEXT("AITouchEvent"), &Z_Registration_Info_UScriptStruct_AITouchEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAITouchEvent), 2888096805U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAISense_Touch, UAISense_Touch::StaticClass, TEXT("UAISense_Touch"), &Z_Registration_Info_UClass_UAISense_Touch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISense_Touch), 693386480U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_4191886808(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
