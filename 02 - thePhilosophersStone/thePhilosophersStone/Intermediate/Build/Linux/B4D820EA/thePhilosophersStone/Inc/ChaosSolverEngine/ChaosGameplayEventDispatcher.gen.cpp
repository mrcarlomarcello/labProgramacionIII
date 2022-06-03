// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosSolverEngine/Public/Chaos/ChaosGameplayEventDispatcher.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosGameplayEventDispatcher() {}
// Cross Module References
	CHAOSSOLVERENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosBreakEvent();
	UPackage* Z_Construct_UPackage__Script_ChaosSolverEngine();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CHAOSSOLVERENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosRemovalEvent();
	CHAOSSOLVERENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBreakEventCallbackWrapper();
	CHAOSSOLVERENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRemovalEventCallbackWrapper();
	CHAOSSOLVERENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosHandlerSet();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosGameplayEventDispatcher_NoRegister();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosGameplayEventDispatcher();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosEventListenerComponent();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosBreakEvent;
class UScriptStruct* FChaosBreakEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosBreakEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosBreakEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosBreakEvent, Z_Construct_UPackage__Script_ChaosSolverEngine(), TEXT("ChaosBreakEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosBreakEvent.OuterSingleton;
}
template<> CHAOSSOLVERENGINE_API UScriptStruct* StaticStruct<FChaosBreakEvent>()
{
	return FChaosBreakEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosBreakEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosBreakEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Component_MetaData[] = {
		{ "Category", "Break Event" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosBreakEvent, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Break Event" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosBreakEvent, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Break Event" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosBreakEvent, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "Break Event" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosBreakEvent, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_AngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_AngularVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "Break Event" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosBreakEvent, Mass), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Mass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_AngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewProp_Mass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
		nullptr,
		&NewStructOps,
		"ChaosBreakEvent",
		sizeof(FChaosBreakEvent),
		alignof(FChaosBreakEvent),
		Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaosBreakEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosBreakEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosBreakEvent.InnerSingleton, Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosBreakEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosRemovalEvent;
class UScriptStruct* FChaosRemovalEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosRemovalEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosRemovalEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosRemovalEvent, Z_Construct_UPackage__Script_ChaosSolverEngine(), TEXT("ChaosRemovalEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosRemovalEvent.OuterSingleton;
}
template<> CHAOSSOLVERENGINE_API UScriptStruct* StaticStruct<FChaosRemovalEvent>()
{
	return FChaosRemovalEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosRemovalEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::NewProp_Component_MetaData[] = {
		{ "Category", "Removal Event" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosRemovalEvent, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Removal Event" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosRemovalEvent, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "Removal Event" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosRemovalEvent, Mass), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::NewProp_Mass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::NewProp_Mass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
		nullptr,
		&NewStructOps,
		"ChaosRemovalEvent",
		sizeof(FChaosRemovalEvent),
		alignof(FChaosRemovalEvent),
		Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaosRemovalEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosRemovalEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosRemovalEvent.InnerSingleton, Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosRemovalEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BreakEventCallbackWrapper;
class UScriptStruct* FBreakEventCallbackWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BreakEventCallbackWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BreakEventCallbackWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBreakEventCallbackWrapper, Z_Construct_UPackage__Script_ChaosSolverEngine(), TEXT("BreakEventCallbackWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_BreakEventCallbackWrapper.OuterSingleton;
}
template<> CHAOSSOLVERENGINE_API UScriptStruct* StaticStruct<FBreakEventCallbackWrapper>()
{
	return FBreakEventCallbackWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBreakEventCallbackWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBreakEventCallbackWrapper_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** UStruct wrapper so we can store the TFunction in a TMap */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
		{ "ToolTip", "UStruct wrapper so we can store the TFunction in a TMap" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBreakEventCallbackWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBreakEventCallbackWrapper>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBreakEventCallbackWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
		nullptr,
		&NewStructOps,
		"BreakEventCallbackWrapper",
		sizeof(FBreakEventCallbackWrapper),
		alignof(FBreakEventCallbackWrapper),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBreakEventCallbackWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBreakEventCallbackWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBreakEventCallbackWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_BreakEventCallbackWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BreakEventCallbackWrapper.InnerSingleton, Z_Construct_UScriptStruct_FBreakEventCallbackWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BreakEventCallbackWrapper.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemovalEventCallbackWrapper;
class UScriptStruct* FRemovalEventCallbackWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemovalEventCallbackWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemovalEventCallbackWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemovalEventCallbackWrapper, Z_Construct_UPackage__Script_ChaosSolverEngine(), TEXT("RemovalEventCallbackWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_RemovalEventCallbackWrapper.OuterSingleton;
}
template<> CHAOSSOLVERENGINE_API UScriptStruct* StaticStruct<FRemovalEventCallbackWrapper>()
{
	return FRemovalEventCallbackWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemovalEventCallbackWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemovalEventCallbackWrapper_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** UStruct wrapper so we can store the TFunction in a TMap */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
		{ "ToolTip", "UStruct wrapper so we can store the TFunction in a TMap" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemovalEventCallbackWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemovalEventCallbackWrapper>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemovalEventCallbackWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
		nullptr,
		&NewStructOps,
		"RemovalEventCallbackWrapper",
		sizeof(FRemovalEventCallbackWrapper),
		alignof(FRemovalEventCallbackWrapper),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemovalEventCallbackWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemovalEventCallbackWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemovalEventCallbackWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_RemovalEventCallbackWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemovalEventCallbackWrapper.InnerSingleton, Z_Construct_UScriptStruct_FRemovalEventCallbackWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemovalEventCallbackWrapper.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosHandlerSet;
class UScriptStruct* FChaosHandlerSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosHandlerSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosHandlerSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosHandlerSet, Z_Construct_UPackage__Script_ChaosSolverEngine(), TEXT("ChaosHandlerSet"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosHandlerSet.OuterSingleton;
}
template<> CHAOSSOLVERENGINE_API UScriptStruct* StaticStruct<FChaosHandlerSet>()
{
	return FChaosHandlerSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosHandlerSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChaosHandlers_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChaosHandlers_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ChaosHandlers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** UStruct wrapper so we can store the TSet in a TMap */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
		{ "ToolTip", "UStruct wrapper so we can store the TSet in a TMap" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosHandlerSet>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::NewProp_ChaosHandlers_ElementProp = { "ChaosHandlers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::NewProp_ChaosHandlers_MetaData[] = {
		{ "Comment", "/** These should be IChaosNotifyHandlerInterface refs, but we can't store those here */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
		{ "ToolTip", "These should be IChaosNotifyHandlerInterface refs, but we can't store those here" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::NewProp_ChaosHandlers = { "ChaosHandlers", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosHandlerSet, ChaosHandlers), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::NewProp_ChaosHandlers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::NewProp_ChaosHandlers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::NewProp_ChaosHandlers_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::NewProp_ChaosHandlers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
		nullptr,
		&NewStructOps,
		"ChaosHandlerSet",
		sizeof(FChaosHandlerSet),
		alignof(FChaosHandlerSet),
		Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaosHandlerSet()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosHandlerSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosHandlerSet.InnerSingleton, Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosHandlerSet.InnerSingleton;
	}
	void UChaosGameplayEventDispatcher::StaticRegisterNativesUChaosGameplayEventDispatcher()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosGameplayEventDispatcher);
	UClass* Z_Construct_UClass_UChaosGameplayEventDispatcher_NoRegister()
	{
		return UChaosGameplayEventDispatcher::StaticClass();
	}
	struct Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionEventRegistrations_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CollisionEventRegistrations_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionEventRegistrations_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CollisionEventRegistrations;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BreakEventRegistrations_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BreakEventRegistrations_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BreakEventRegistrations_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BreakEventRegistrations;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemovalEventRegistrations_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RemovalEventRegistrations_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemovalEventRegistrations_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RemovalEventRegistrations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChaosEventListenerComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Chaos/ChaosGameplayEventDispatcher.h" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_CollisionEventRegistrations_ValueProp = { "CollisionEventRegistrations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FChaosHandlerSet, METADATA_PARAMS(nullptr, 0) }; // 1894553860
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_CollisionEventRegistrations_Key_KeyProp = { "CollisionEventRegistrations_Key", nullptr, (EPropertyFlags)0x0004000000080000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_CollisionEventRegistrations_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_CollisionEventRegistrations = { "CollisionEventRegistrations", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosGameplayEventDispatcher, CollisionEventRegistrations), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_CollisionEventRegistrations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_CollisionEventRegistrations_MetaData)) }; // 1894553860
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_BreakEventRegistrations_ValueProp = { "BreakEventRegistrations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FBreakEventCallbackWrapper, METADATA_PARAMS(nullptr, 0) }; // 2480025893
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_BreakEventRegistrations_Key_KeyProp = { "BreakEventRegistrations_Key", nullptr, (EPropertyFlags)0x0004000000080000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_BreakEventRegistrations_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_BreakEventRegistrations = { "BreakEventRegistrations", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosGameplayEventDispatcher, BreakEventRegistrations), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_BreakEventRegistrations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_BreakEventRegistrations_MetaData)) }; // 2480025893
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_RemovalEventRegistrations_ValueProp = { "RemovalEventRegistrations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FRemovalEventCallbackWrapper, METADATA_PARAMS(nullptr, 0) }; // 3493648513
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_RemovalEventRegistrations_Key_KeyProp = { "RemovalEventRegistrations_Key", nullptr, (EPropertyFlags)0x0004000000080000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_RemovalEventRegistrations_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosGameplayEventDispatcher.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_RemovalEventRegistrations = { "RemovalEventRegistrations", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaosGameplayEventDispatcher, RemovalEventRegistrations), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_RemovalEventRegistrations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_RemovalEventRegistrations_MetaData)) }; // 3493648513
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_CollisionEventRegistrations_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_CollisionEventRegistrations_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_CollisionEventRegistrations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_BreakEventRegistrations_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_BreakEventRegistrations_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_BreakEventRegistrations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_RemovalEventRegistrations_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_RemovalEventRegistrations_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::NewProp_RemovalEventRegistrations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosGameplayEventDispatcher>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::ClassParams = {
		&UChaosGameplayEventDispatcher::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosGameplayEventDispatcher()
	{
		if (!Z_Registration_Info_UClass_UChaosGameplayEventDispatcher.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosGameplayEventDispatcher.OuterSingleton, Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChaosGameplayEventDispatcher.OuterSingleton;
	}
	template<> CHAOSSOLVERENGINE_API UClass* StaticClass<UChaosGameplayEventDispatcher>()
	{
		return UChaosGameplayEventDispatcher::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosGameplayEventDispatcher);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_Statics::ScriptStructInfo[] = {
		{ FChaosBreakEvent::StaticStruct, Z_Construct_UScriptStruct_FChaosBreakEvent_Statics::NewStructOps, TEXT("ChaosBreakEvent"), &Z_Registration_Info_UScriptStruct_ChaosBreakEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosBreakEvent), 1710057555U) },
		{ FChaosRemovalEvent::StaticStruct, Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics::NewStructOps, TEXT("ChaosRemovalEvent"), &Z_Registration_Info_UScriptStruct_ChaosRemovalEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosRemovalEvent), 1233969385U) },
		{ FBreakEventCallbackWrapper::StaticStruct, Z_Construct_UScriptStruct_FBreakEventCallbackWrapper_Statics::NewStructOps, TEXT("BreakEventCallbackWrapper"), &Z_Registration_Info_UScriptStruct_BreakEventCallbackWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBreakEventCallbackWrapper), 2480025893U) },
		{ FRemovalEventCallbackWrapper::StaticStruct, Z_Construct_UScriptStruct_FRemovalEventCallbackWrapper_Statics::NewStructOps, TEXT("RemovalEventCallbackWrapper"), &Z_Registration_Info_UScriptStruct_RemovalEventCallbackWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemovalEventCallbackWrapper), 3493648513U) },
		{ FChaosHandlerSet::StaticStruct, Z_Construct_UScriptStruct_FChaosHandlerSet_Statics::NewStructOps, TEXT("ChaosHandlerSet"), &Z_Registration_Info_UScriptStruct_ChaosHandlerSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosHandlerSet), 1894553860U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChaosGameplayEventDispatcher, UChaosGameplayEventDispatcher::StaticClass, TEXT("UChaosGameplayEventDispatcher"), &Z_Registration_Info_UClass_UChaosGameplayEventDispatcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosGameplayEventDispatcher), 730877426U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_2887229270(TEXT("/Script/ChaosSolverEngine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
