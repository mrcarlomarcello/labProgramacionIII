// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraEmitter.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraEmitter() {}
// Cross Module References
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_EScriptExecutionMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_EParticleAllocationMode();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScript_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEventScriptProperties();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEmitter_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEmitter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSimTarget();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPlatformSet();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScriptSourceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterStore();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEditorDataBase_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEditorParametersAdapterBase_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRendererProperties_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimulationStageBase_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FParameterDefinitionsSubscription();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraMessageDataBase_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraEventReceiverProperties;
class UScriptStruct* FNiagaraEventReceiverProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEventReceiverProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraEventReceiverProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEventReceiverProperties"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEventReceiverProperties.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEventReceiverProperties>()
{
	return FNiagaraEventReceiverProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceEventGenerator_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceEventGenerator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceEmitter_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceEmitter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//TODO: Event action that spawns other whole Systems?\n//One that calls a BP exposed delegate?\n" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "TODO: Event action that spawns other whole Systems?\nOne that calls a BP exposed delegate?" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEventReceiverProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Event Receiver" },
		{ "Comment", "/** The name of this receiver. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "The name of this receiver." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEventReceiverProperties, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_SourceEventGenerator_MetaData[] = {
		{ "Category", "Event Receiver" },
		{ "Comment", "/** The name of the EventGenerator to bind to. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "The name of the EventGenerator to bind to." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_SourceEventGenerator = { "SourceEventGenerator", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEventReceiverProperties, SourceEventGenerator), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_SourceEventGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_SourceEventGenerator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_SourceEmitter_MetaData[] = {
		{ "Category", "Event Receiver" },
		{ "Comment", "/** The name of the emitter from which the Event Generator is taken. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "The name of the emitter from which the Event Generator is taken." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_SourceEmitter = { "SourceEmitter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEventReceiverProperties, SourceEmitter), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_SourceEmitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_SourceEmitter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_SourceEventGenerator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewProp_SourceEmitter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraEventReceiverProperties",
		sizeof(FNiagaraEventReceiverProperties),
		alignof(FNiagaraEventReceiverProperties),
		Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraEventReceiverProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraEventReceiverProperties.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraEventReceiverProperties.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraEventGeneratorProperties;
class UScriptStruct* FNiagaraEventGeneratorProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEventGeneratorProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraEventGeneratorProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEventGeneratorProperties"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEventGeneratorProperties.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEventGeneratorProperties>()
{
	return FNiagaraEventGeneratorProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxEventsPerFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxEventsPerFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataSetCompiledData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataSetCompiledData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEventGeneratorProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_MaxEventsPerFrame_MetaData[] = {
		{ "Category", "Event Receiver" },
		{ "Comment", "/** Max Number of Events that can be generated per frame. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Max Number of Events that can be generated per frame." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_MaxEventsPerFrame = { "MaxEventsPerFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEventGeneratorProperties, MaxEventsPerFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_MaxEventsPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_MaxEventsPerFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_ID_MetaData[] = {
		{ "Comment", "//TODO - More complex allocation so that we can grow dynamically if more space is needed ?\n" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "TODO - More complex allocation so that we can grow dynamically if more space is needed ?" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEventGeneratorProperties, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_DataSetCompiledData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_DataSetCompiledData = { "DataSetCompiledData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEventGeneratorProperties, DataSetCompiledData), Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_DataSetCompiledData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_DataSetCompiledData_MetaData)) }; // 3179794411
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_MaxEventsPerFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewProp_DataSetCompiledData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraEventGeneratorProperties",
		sizeof(FNiagaraEventGeneratorProperties),
		alignof(FNiagaraEventGeneratorProperties),
		Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraEventGeneratorProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraEventGeneratorProperties.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraEventGeneratorProperties.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EScriptExecutionMode;
	static UEnum* EScriptExecutionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EScriptExecutionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EScriptExecutionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_EScriptExecutionMode, Z_Construct_UPackage__Script_Niagara(), TEXT("EScriptExecutionMode"));
		}
		return Z_Registration_Info_UEnum_EScriptExecutionMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<EScriptExecutionMode>()
	{
		return EScriptExecutionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_EScriptExecutionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_EScriptExecutionMode_Statics::Enumerators[] = {
		{ "EScriptExecutionMode::EveryParticle", (int64)EScriptExecutionMode::EveryParticle },
		{ "EScriptExecutionMode::SpawnedParticles", (int64)EScriptExecutionMode::SpawnedParticles },
		{ "EScriptExecutionMode::SingleParticle", (int64)EScriptExecutionMode::SingleParticle },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_EScriptExecutionMode_Statics::Enum_MetaDataParams[] = {
		{ "EveryParticle.Comment", "/** The event script is run on every existing particle in the emitter.*/" },
		{ "EveryParticle.Name", "EScriptExecutionMode::EveryParticle" },
		{ "EveryParticle.ToolTip", "The event script is run on every existing particle in the emitter." },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "SingleParticle.Comment", "/** The event script is run only on the particle whose int32 ParticleIndex is specified in the event payload.*/" },
		{ "SingleParticle.Hidden", "" },
		{ "SingleParticle.Name", "EScriptExecutionMode::SingleParticle" },
		{ "SingleParticle.ToolTip", "The event script is run only on the particle whose int32 ParticleIndex is specified in the event payload." },
		{ "SpawnedParticles.Comment", "/** The event script is run only on the particles that were spawned in response to the current event in the emitter.*/" },
		{ "SpawnedParticles.Name", "EScriptExecutionMode::SpawnedParticles" },
		{ "SpawnedParticles.ToolTip", "The event script is run only on the particles that were spawned in response to the current event in the emitter." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_EScriptExecutionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"EScriptExecutionMode",
		"EScriptExecutionMode",
		Z_Construct_UEnum_Niagara_EScriptExecutionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_EScriptExecutionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_EScriptExecutionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_EScriptExecutionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_EScriptExecutionMode()
	{
		if (!Z_Registration_Info_UEnum_EScriptExecutionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EScriptExecutionMode.InnerSingleton, Z_Construct_UEnum_Niagara_EScriptExecutionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EScriptExecutionMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParticleAllocationMode;
	static UEnum* EParticleAllocationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EParticleAllocationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EParticleAllocationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_EParticleAllocationMode, Z_Construct_UPackage__Script_Niagara(), TEXT("EParticleAllocationMode"));
		}
		return Z_Registration_Info_UEnum_EParticleAllocationMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<EParticleAllocationMode>()
	{
		return EParticleAllocationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_EParticleAllocationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_EParticleAllocationMode_Statics::Enumerators[] = {
		{ "EParticleAllocationMode::AutomaticEstimate", (int64)EParticleAllocationMode::AutomaticEstimate },
		{ "EParticleAllocationMode::ManualEstimate", (int64)EParticleAllocationMode::ManualEstimate },
		{ "EParticleAllocationMode::FixedCount", (int64)EParticleAllocationMode::FixedCount },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_EParticleAllocationMode_Statics::Enum_MetaDataParams[] = {
		{ "AutomaticEstimate.Comment", "/** This mode tries to estimate the max particle count at runtime by using previous simulations as reference.*/" },
		{ "AutomaticEstimate.Name", "EParticleAllocationMode::AutomaticEstimate" },
		{ "AutomaticEstimate.ToolTip", "This mode tries to estimate the max particle count at runtime by using previous simulations as reference." },
		{ "FixedCount.Comment", "/** This mode defines an upper limit on the number of particles that will be simulated.  Useful for rejection sampling where we expect many spawned particles to get killed. */" },
		{ "FixedCount.Name", "EParticleAllocationMode::FixedCount" },
		{ "FixedCount.ToolTip", "This mode defines an upper limit on the number of particles that will be simulated.  Useful for rejection sampling where we expect many spawned particles to get killed." },
		{ "ManualEstimate.Comment", "/** This mode is useful if the particle count can vary wildly at runtime (e.g. due to user parameters) and a lot of reallocations happen.*/" },
		{ "ManualEstimate.Name", "EParticleAllocationMode::ManualEstimate" },
		{ "ManualEstimate.ToolTip", "This mode is useful if the particle count can vary wildly at runtime (e.g. due to user parameters) and a lot of reallocations happen." },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_EParticleAllocationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"EParticleAllocationMode",
		"EParticleAllocationMode",
		Z_Construct_UEnum_Niagara_EParticleAllocationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_EParticleAllocationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_EParticleAllocationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_EParticleAllocationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_EParticleAllocationMode()
	{
		if (!Z_Registration_Info_UEnum_EParticleAllocationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParticleAllocationMode.InnerSingleton, Z_Construct_UEnum_Niagara_EParticleAllocationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EParticleAllocationMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraEmitterScriptProperties;
class UScriptStruct* FNiagaraEmitterScriptProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEmitterScriptProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraEmitterScriptProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEmitterScriptProperties"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEmitterScriptProperties.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEmitterScriptProperties>()
{
	return FNiagaraEmitterScriptProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Script_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Script;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventReceivers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventReceivers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EventReceivers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventGenerators_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventGenerators_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EventGenerators;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEmitterScriptProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_Script_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_Script = { "Script", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEmitterScriptProperties, Script), Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_Script_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_Script_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventReceivers_Inner = { "EventReceivers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties, METADATA_PARAMS(nullptr, 0) }; // 3586431660
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventReceivers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventReceivers = { "EventReceivers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEmitterScriptProperties, EventReceivers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventReceivers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventReceivers_MetaData)) }; // 3586431660
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventGenerators_Inner = { "EventGenerators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties, METADATA_PARAMS(nullptr, 0) }; // 4002855726
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventGenerators_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventGenerators = { "EventGenerators", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEmitterScriptProperties, EventGenerators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventGenerators_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventGenerators_MetaData)) }; // 4002855726
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_Script,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventReceivers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventReceivers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventGenerators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewProp_EventGenerators,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraEmitterScriptProperties",
		sizeof(FNiagaraEmitterScriptProperties),
		alignof(FNiagaraEmitterScriptProperties),
		Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraEmitterScriptProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraEmitterScriptProperties.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraEmitterScriptProperties.InnerSingleton;
	}

static_assert(std::is_polymorphic<FNiagaraEventScriptProperties>() == std::is_polymorphic<FNiagaraEmitterScriptProperties>(), "USTRUCT FNiagaraEventScriptProperties cannot be polymorphic unless super FNiagaraEmitterScriptProperties is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraEventScriptProperties;
class UScriptStruct* FNiagaraEventScriptProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEventScriptProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraEventScriptProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEventScriptProperties"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEventScriptProperties.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEventScriptProperties>()
{
	return FNiagaraEventScriptProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExecutionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecutionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnNumber_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_SpawnNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxEventsPerFrame_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxEventsPerFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceEmitterID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceEmitterID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceEventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceEventName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomSpawnNumber_MetaData[];
#endif
		static void NewProp_bRandomSpawnNumber_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomSpawnNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSpawnNumber_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MinSpawnNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEventScriptProperties>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_ExecutionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_ExecutionMode_MetaData[] = {
		{ "Category", "Event Handler Options" },
		{ "Comment", "/** Controls which particles have the event script run on them.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Controls which particles have the event script run on them." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_ExecutionMode = { "ExecutionMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEventScriptProperties, ExecutionMode), Z_Construct_UEnum_Niagara_EScriptExecutionMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_ExecutionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_ExecutionMode_MetaData)) }; // 969502504
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SpawnNumber_MetaData[] = {
		{ "Category", "Event Handler Options" },
		{ "Comment", "/** Controls whether or not particles are spawned as a result of handling the event. Only valid for EScriptExecutionMode::SpawnedParticles. If Random Spawn Number is used, this will act as the maximum spawn range. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Controls whether or not particles are spawned as a result of handling the event. Only valid for EScriptExecutionMode::SpawnedParticles. If Random Spawn Number is used, this will act as the maximum spawn range." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SpawnNumber = { "SpawnNumber", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEventScriptProperties, SpawnNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SpawnNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SpawnNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_MaxEventsPerFrame_MetaData[] = {
		{ "Category", "Event Handler Options" },
		{ "Comment", "/** Controls how many events are consumed by this event handler. If there are more events generated than this value, they will be ignored.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Controls how many events are consumed by this event handler. If there are more events generated than this value, they will be ignored." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_MaxEventsPerFrame = { "MaxEventsPerFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEventScriptProperties, MaxEventsPerFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_MaxEventsPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_MaxEventsPerFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SourceEmitterID_MetaData[] = {
		{ "Category", "Event Handler Options" },
		{ "Comment", "/** Id of the Emitter Handle that generated the event. If all zeroes, the event generator is assumed to be this emitter.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Id of the Emitter Handle that generated the event. If all zeroes, the event generator is assumed to be this emitter." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SourceEmitterID = { "SourceEmitterID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEventScriptProperties, SourceEmitterID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SourceEmitterID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SourceEmitterID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SourceEventName_MetaData[] = {
		{ "Category", "Event Handler Options" },
		{ "Comment", "/** The name of the event generated. This will be \"Collision\" for collision events and the Event Name field on the DataSetWrite node in the module graph for others.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "The name of the event generated. This will be \"Collision\" for collision events and the Event Name field on the DataSetWrite node in the module graph for others." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SourceEventName = { "SourceEventName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEventScriptProperties, SourceEventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SourceEventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SourceEventName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_bRandomSpawnNumber_MetaData[] = {
		{ "Category", "Event Handler Options" },
		{ "Comment", "/** Whether using a random spawn number. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Whether using a random spawn number." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_bRandomSpawnNumber_SetBit(void* Obj)
	{
		((FNiagaraEventScriptProperties*)Obj)->bRandomSpawnNumber = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_bRandomSpawnNumber = { "bRandomSpawnNumber", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNiagaraEventScriptProperties), &Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_bRandomSpawnNumber_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_bRandomSpawnNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_bRandomSpawnNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_MinSpawnNumber_MetaData[] = {
		{ "Category", "Event Handler Options" },
		{ "Comment", "/** The minimum spawn number when random spawn is used. Spawn Number is used as the maximum range. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "The minimum spawn number when random spawn is used. Spawn Number is used as the maximum range." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_MinSpawnNumber = { "MinSpawnNumber", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEventScriptProperties, MinSpawnNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_MinSpawnNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_MinSpawnNumber_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_ExecutionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_ExecutionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SpawnNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_MaxEventsPerFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SourceEmitterID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_SourceEventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_bRandomSpawnNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewProp_MinSpawnNumber,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties,
		&NewStructOps,
		"NiagaraEventScriptProperties",
		sizeof(FNiagaraEventScriptProperties),
		alignof(FNiagaraEventScriptProperties),
		Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEventScriptProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraEventScriptProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraEventScriptProperties.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraEventScriptProperties.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDetailsLevelScaleOverrides;
class UScriptStruct* FNiagaraDetailsLevelScaleOverrides::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDetailsLevelScaleOverrides.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDetailsLevelScaleOverrides.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDetailsLevelScaleOverrides"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDetailsLevelScaleOverrides.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDetailsLevelScaleOverrides>()
{
	return FNiagaraDetailsLevelScaleOverrides::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Low_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Low;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Medium_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Medium;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_High_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_High;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Epic_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Epic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cine_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Cine;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Legacy struct for spawn count scale overrides. This is now done in FNiagaraEmitterScalabilityOverrides*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Legacy struct for spawn count scale overrides. This is now done in FNiagaraEmitterScalabilityOverrides" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDetailsLevelScaleOverrides>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Low_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Low = { "Low", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDetailsLevelScaleOverrides, Low), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Low_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Low_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Medium_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Medium = { "Medium", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDetailsLevelScaleOverrides, Medium), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Medium_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Medium_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_High_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_High = { "High", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDetailsLevelScaleOverrides, High), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_High_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_High_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Epic_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Epic = { "Epic", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDetailsLevelScaleOverrides, Epic), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Epic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Epic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Cine_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Cine = { "Cine", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDetailsLevelScaleOverrides, Cine), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Cine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Cine_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Low,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Medium,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_High,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Epic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewProp_Cine,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDetailsLevelScaleOverrides",
		sizeof(FNiagaraDetailsLevelScaleOverrides),
		alignof(FNiagaraDetailsLevelScaleOverrides),
		Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraDetailsLevelScaleOverrides.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDetailsLevelScaleOverrides.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraDetailsLevelScaleOverrides.InnerSingleton;
	}
	void UNiagaraEmitter::StaticRegisterNativesUNiagaraEmitter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraEmitter);
	UClass* Z_Construct_UClass_UNiagaraEmitter_NoRegister()
	{
		return UNiagaraEmitter::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraEmitter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLocalSpace_MetaData[];
#endif
		static void NewProp_bLocalSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeterminism_MetaData[];
#endif
		static void NewProp_bDeterminism_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeterminism;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AllocationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllocationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AllocationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreAllocationCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PreAllocationCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateScriptProps_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateScriptProps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnScriptProps_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnScriptProps;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterSpawnScriptProps_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterSpawnScriptProps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterUpdateScriptProps_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterUpdateScriptProps;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributesToPreserve_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributesToPreserve_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributesToPreserve;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_SimTarget_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimTarget_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SimTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixedBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FixedBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinDetailLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinDetailLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDetailLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDetailLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalSpawnCountScaleOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalSpawnCountScaleOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Platforms_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Platforms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalabilityOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalabilityOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInterpolatedSpawning_MetaData[];
#endif
		static void NewProp_bInterpolatedSpawning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpolatedSpawning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFixedBounds_MetaData[];
#endif
		static void NewProp_bFixedBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixedBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMinDetailLevel_MetaData[];
#endif
		static void NewProp_bUseMinDetailLevel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMinDetailLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMaxDetailLevel_MetaData[];
#endif
		static void NewProp_bUseMaxDetailLevel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMaxDetailLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideGlobalSpawnCountScale_MetaData[];
#endif
		static void NewProp_bOverrideGlobalSpawnCountScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideGlobalSpawnCountScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresPersistentIDs_MetaData[];
#endif
		static void NewProp_bRequiresPersistentIDs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresPersistentIDs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCombineEventSpawn_MetaData[];
#endif
		static void NewProp_bCombineEventSpawn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCombineEventSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDeltaTimePerTick_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDeltaTimePerTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLimitDeltaTime_MetaData[];
#endif
		static void NewProp_bLimitDeltaTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxGPUParticlesSpawnPerFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxGPUParticlesSpawnPerFrame;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GraphSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ThumbnailImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailImageOutOfDate_MetaData[];
#endif
		static void NewProp_ThumbnailImageOutOfDate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ThumbnailImageOutOfDate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExposeToLibrary_MetaData[];
#endif
		static void NewProp_bExposeToLibrary_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExposeToLibrary;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LibraryVisibility_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LibraryVisibility_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LibraryVisibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTemplateAsset_MetaData[];
#endif
		static void NewProp_bIsTemplateAsset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTemplateAsset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TemplateSpecification_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateSpecification_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TemplateSpecification;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateAssetDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TemplateAssetDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Category;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScratchPadScripts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScratchPadScripts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScratchPadScripts;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentScratchPadScripts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentScratchPadScripts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentScratchPadScripts;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererBindings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RendererBindings;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChangeId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChangeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorParameters_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorParameters;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueEmitterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueEmitterName;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RendererProperties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererProperties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RendererProperties;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventHandlerScriptProps_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventHandlerScriptProps_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EventHandlerScriptProps;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SimulationStages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationStages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SimulationStages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GPUComputeScript_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GPUComputeScript;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SharedEventGeneratorIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SharedEventGeneratorIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SharedEventGeneratorIds;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentAtLastMerge_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentAtLastMerge;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterDefinitionsSubscriptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterDefinitionsSubscriptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterDefinitionsSubscriptions;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MessageKeyToMessageMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MessageKeyToMessageMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageKeyToMessageMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MessageKeyToMessageMap;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraEmitter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n *\x09UNiagaraEmitter stores the attributes of an FNiagaraEmitterInstance\n *\x09that need to be serialized and are used for its initialization \n */" },
		{ "IncludePath", "NiagaraEmitter.h" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "UNiagaraEmitter stores the attributes of an FNiagaraEmitterInstance\nthat need to be serialized and are used for its initialization" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLocalSpace_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** Toggles whether or not the particles within this emitter are relative to the emitter origin or in global space. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Toggles whether or not the particles within this emitter are relative to the emitter origin or in global space." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLocalSpace_SetBit(void* Obj)
	{
		((UNiagaraEmitter*)Obj)->bLocalSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLocalSpace = { "bLocalSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLocalSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLocalSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLocalSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bDeterminism_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** Toggles whether to globally make the random number generator be deterministic or non-deterministic. Any random calculation that is set to the emitter defaults will inherit this value. It is still possible to tweak individual random to be deterministic or not. In this case deterministic means that it will return the same results for the same configuration of the emitter as long as delta time is not variable. Any changes to the emitter's individual scripts will adjust the results. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Toggles whether to globally make the random number generator be deterministic or non-deterministic. Any random calculation that is set to the emitter defaults will inherit this value. It is still possible to tweak individual random to be deterministic or not. In this case deterministic means that it will return the same results for the same configuration of the emitter as long as delta time is not variable. Any changes to the emitter's individual scripts will adjust the results." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bDeterminism_SetBit(void* Obj)
	{
		((UNiagaraEmitter*)Obj)->bDeterminism = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bDeterminism = { "bDeterminism", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bDeterminism_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bDeterminism_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bDeterminism_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** An emitter-based seed for the deterministic random number generator. */" },
		{ "EditCondition", "bDeterminism" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "An emitter-based seed for the deterministic random number generator." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, RandomSeed), METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RandomSeed_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AllocationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AllocationMode_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/**\n\x09The emitter needs to allocate memory for the particles each tick.\n\x09To prevent reallocations, the emitter should allocate as much memory as is needed for the max particle count.\n\x09This setting controls if the allocation size should be automatically determined or manually entered.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "The emitter needs to allocate memory for the particles each tick.\nTo prevent reallocations, the emitter should allocate as much memory as is needed for the max particle count.\nThis setting controls if the allocation size should be automatically determined or manually entered." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AllocationMode = { "AllocationMode", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, AllocationMode), Z_Construct_UEnum_Niagara_EParticleAllocationMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AllocationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AllocationMode_MetaData)) }; // 3793817162
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_PreAllocationCount_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** \n\x09The emitter will allocate at least this many particles on it's first tick.\n\x09This can aid performance by avoiding many allocations as an emitter ramps up to it's max size.\n\x09*/" },
		{ "EditCondition", "AllocationMode == EParticleAllocationMode::ManualEstimate || AllocationMode == EParticleAllocationMode::FixedCount" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "The emitter will allocate at least this many particles on it's first tick.\nThis can aid performance by avoiding many allocations as an emitter ramps up to it's max size." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_PreAllocationCount = { "PreAllocationCount", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, PreAllocationCount), METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_PreAllocationCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_PreAllocationCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_UpdateScriptProps_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_UpdateScriptProps = { "UpdateScriptProps", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, UpdateScriptProps), Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_UpdateScriptProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_UpdateScriptProps_MetaData)) }; // 2660013259
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SpawnScriptProps_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SpawnScriptProps = { "SpawnScriptProps", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, SpawnScriptProps), Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SpawnScriptProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SpawnScriptProps_MetaData)) }; // 2660013259
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EmitterSpawnScriptProps_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EmitterSpawnScriptProps = { "EmitterSpawnScriptProps", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, EmitterSpawnScriptProps), Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EmitterSpawnScriptProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EmitterSpawnScriptProps_MetaData)) }; // 2660013259
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EmitterUpdateScriptProps_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EmitterUpdateScriptProps = { "EmitterUpdateScriptProps", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, EmitterUpdateScriptProps), Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EmitterUpdateScriptProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EmitterUpdateScriptProps_MetaData)) }; // 2660013259
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AttributesToPreserve_Inner = { "AttributesToPreserve", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AttributesToPreserve_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** An allow list of Particle attributes (e.g. \"Particle.Position\" or \"Particle.Age\") that will not be removed from the DataSet  even if they aren't read by the VM.\n\x09    Used in conjunction with UNiagaraSystem::bTrimAttributes */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "An allow list of Particle attributes (e.g. \"Particle.Position\" or \"Particle.Age\") that will not be removed from the DataSet  even if they aren't read by the VM.\n          Used in conjunction with UNiagaraSystem::bTrimAttributes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AttributesToPreserve = { "AttributesToPreserve", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, AttributesToPreserve), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AttributesToPreserve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AttributesToPreserve_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimTarget_MetaData[] = {
		{ "Category", "Emitter" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimTarget = { "SimTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, SimTarget), Z_Construct_UEnum_Niagara_ENiagaraSimTarget, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimTarget_MetaData)) }; // 348263643
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_FixedBounds_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** The fixed bounding box value. bFixedBounds is the condition whether the fixed bounds can be edited. */" },
		{ "EditCondition", "bFixedBounds" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "The fixed bounding box value. bFixedBounds is the condition whether the fixed bounds can be edited." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_FixedBounds = { "FixedBounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, FixedBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_FixedBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_FixedBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MinDetailLevel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MinDetailLevel = { "MinDetailLevel", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, MinDetailLevel_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MinDetailLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MinDetailLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxDetailLevel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxDetailLevel = { "MaxDetailLevel", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, MaxDetailLevel_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxDetailLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxDetailLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GlobalSpawnCountScaleOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GlobalSpawnCountScaleOverrides = { "GlobalSpawnCountScaleOverrides", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, GlobalSpawnCountScaleOverrides_DEPRECATED), Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GlobalSpawnCountScaleOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GlobalSpawnCountScaleOverrides_MetaData)) }; // 2146458139
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_Platforms_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_Platforms = { "Platforms", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, Platforms), Z_Construct_UScriptStruct_FNiagaraPlatformSet, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_Platforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_Platforms_MetaData)) }; // 2590626455
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ScalabilityOverrides_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ScalabilityOverrides = { "ScalabilityOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, ScalabilityOverrides), Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ScalabilityOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ScalabilityOverrides_MetaData)) }; // 1727980301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bInterpolatedSpawning_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** When enabled, this will spawn using interpolated parameter values and perform a partial update at spawn time. This adds significant additional cost for spawning but will produce much smoother spawning for high spawn rates, erratic frame rates and fast moving emitters. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "When enabled, this will spawn using interpolated parameter values and perform a partial update at spawn time. This adds significant additional cost for spawning but will produce much smoother spawning for high spawn rates, erratic frame rates and fast moving emitters." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bInterpolatedSpawning_SetBit(void* Obj)
	{
		((UNiagaraEmitter*)Obj)->bInterpolatedSpawning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bInterpolatedSpawning = { "bInterpolatedSpawning", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bInterpolatedSpawning_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bInterpolatedSpawning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bInterpolatedSpawning_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bFixedBounds_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** Whether or not fixed bounds are enabled. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Whether or not fixed bounds are enabled." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bFixedBounds_SetBit(void* Obj)
	{
		((UNiagaraEmitter*)Obj)->bFixedBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bFixedBounds = { "bFixedBounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bFixedBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bFixedBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bFixedBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMinDetailLevel_MetaData[] = {
		{ "Comment", "/** Whether to use the min detail or not. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Whether to use the min detail or not." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMinDetailLevel_SetBit(void* Obj)
	{
		((UNiagaraEmitter*)Obj)->bUseMinDetailLevel_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMinDetailLevel = { "bUseMinDetailLevel", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMinDetailLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMinDetailLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMinDetailLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMaxDetailLevel_MetaData[] = {
		{ "Comment", "/** Whether to use the min detail or not. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Whether to use the min detail or not." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMaxDetailLevel_SetBit(void* Obj)
	{
		((UNiagaraEmitter*)Obj)->bUseMaxDetailLevel_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMaxDetailLevel = { "bUseMaxDetailLevel", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMaxDetailLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMaxDetailLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMaxDetailLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bOverrideGlobalSpawnCountScale_MetaData[] = {
		{ "Comment", "/** Legacy bool to control overriding the global spawn count scales. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Legacy bool to control overriding the global spawn count scales." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bOverrideGlobalSpawnCountScale_SetBit(void* Obj)
	{
		((UNiagaraEmitter*)Obj)->bOverrideGlobalSpawnCountScale_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bOverrideGlobalSpawnCountScale = { "bOverrideGlobalSpawnCountScale", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bOverrideGlobalSpawnCountScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bOverrideGlobalSpawnCountScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bOverrideGlobalSpawnCountScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bRequiresPersistentIDs_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** Do particles in this emitter require a persistent ID? */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Do particles in this emitter require a persistent ID?" },
	};
#endif
	void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bRequiresPersistentIDs_SetBit(void* Obj)
	{
		((UNiagaraEmitter*)Obj)->bRequiresPersistentIDs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bRequiresPersistentIDs = { "bRequiresPersistentIDs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bRequiresPersistentIDs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bRequiresPersistentIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bRequiresPersistentIDs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bCombineEventSpawn_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** Performance option to allow event based spawning to be combined into a single spawn.  This will result in a single exec from 0 to number of particles rather than several, when using ExecIndex() it is recommended not to do this. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Performance option to allow event based spawning to be combined into a single spawn.  This will result in a single exec from 0 to number of particles rather than several, when using ExecIndex() it is recommended not to do this." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bCombineEventSpawn_SetBit(void* Obj)
	{
		((UNiagaraEmitter*)Obj)->bCombineEventSpawn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bCombineEventSpawn = { "bCombineEventSpawn", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bCombineEventSpawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bCombineEventSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bCombineEventSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxDeltaTimePerTick_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** Limits the delta time per tick to prevent simulation spikes due to frame lags. */" },
		{ "EditCondition", "bLimitDeltaTime" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Limits the delta time per tick to prevent simulation spikes due to frame lags." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxDeltaTimePerTick = { "MaxDeltaTimePerTick", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, MaxDeltaTimePerTick), METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxDeltaTimePerTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxDeltaTimePerTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLimitDeltaTime_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** Whether to limit the max tick delta time or not. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Whether to limit the max tick delta time or not." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLimitDeltaTime_SetBit(void* Obj)
	{
		((UNiagaraEmitter*)Obj)->bLimitDeltaTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLimitDeltaTime = { "bLimitDeltaTime", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLimitDeltaTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLimitDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLimitDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxGPUParticlesSpawnPerFrame_MetaData[] = {
		{ "Category", "Emitter" },
		{ "Comment", "/** An override on the max number of GPU particles we expect to spawn in a single frame. A value of 0 means it'll use fx.MaxNiagaraGPUParticlesSpawnPerFrame.*/" },
		{ "DisplayName", "Max GPU Particles Spawn per Frame" },
		{ "EditCondition", "SimTarget == ENiagaraSimTarget::GPUComputeSim" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "An override on the max number of GPU particles we expect to spawn in a single frame. A value of 0 means it'll use fx.MaxNiagaraGPUParticlesSpawnPerFrame." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxGPUParticlesSpawnPerFrame = { "MaxGPUParticlesSpawnPerFrame", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, MaxGPUParticlesSpawnPerFrame), METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxGPUParticlesSpawnPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxGPUParticlesSpawnPerFrame_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GraphSource_MetaData[] = {
		{ "Comment", "/** 'Source' data/graphs for the scripts used by this emitter. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "'Source' data/graphs for the scripts used by this emitter." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GraphSource = { "GraphSource", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, GraphSource), Z_Construct_UClass_UNiagaraScriptSourceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GraphSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GraphSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ThumbnailImage_MetaData[] = {
		{ "Comment", "/** Internal: The thumbnail image.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Internal: The thumbnail image." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ThumbnailImage = { "ThumbnailImage", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, ThumbnailImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ThumbnailImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ThumbnailImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ThumbnailImageOutOfDate_MetaData[] = {
		{ "Comment", "/** Internal: Indicates the thumbnail image is out of date.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Internal: Indicates the thumbnail image is out of date." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ThumbnailImageOutOfDate_SetBit(void* Obj)
	{
		((UNiagaraEmitter*)Obj)->ThumbnailImageOutOfDate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ThumbnailImageOutOfDate = { "ThumbnailImageOutOfDate", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ThumbnailImageOutOfDate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ThumbnailImageOutOfDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ThumbnailImageOutOfDate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bExposeToLibrary_MetaData[] = {
		{ "Comment", "/** Deprecated library exposure bool. Use the LibraryVisibility enum instead. FNiagaraEditorUtilities has accessor functions that takes deprecation into account */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Deprecated library exposure bool. Use the LibraryVisibility enum instead. FNiagaraEditorUtilities has accessor functions that takes deprecation into account" },
	};
#endif
	void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bExposeToLibrary_SetBit(void* Obj)
	{
		((UNiagaraEmitter*)Obj)->bExposeToLibrary_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bExposeToLibrary = { "bExposeToLibrary", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bExposeToLibrary_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bExposeToLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bExposeToLibrary_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_LibraryVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_LibraryVisibility_MetaData[] = {
		{ "Category", "Asset Options" },
		{ "Comment", "/** If this emitter is exposed to the library, or should be explicitly hidden. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "If this emitter is exposed to the library, or should be explicitly hidden." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_LibraryVisibility = { "LibraryVisibility", nullptr, (EPropertyFlags)0x0010050800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, LibraryVisibility), Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_LibraryVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_LibraryVisibility_MetaData)) }; // 2823837420
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bIsTemplateAsset_MetaData[] = {
		{ "Comment", "/** Deprecated template asset bool. Use the TemplateSpecification enum instead. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Deprecated template asset bool. Use the TemplateSpecification enum instead." },
	};
#endif
	void Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bIsTemplateAsset_SetBit(void* Obj)
	{
		((UNiagaraEmitter*)Obj)->bIsTemplateAsset_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bIsTemplateAsset = { "bIsTemplateAsset", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraEmitter), &Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bIsTemplateAsset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bIsTemplateAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bIsTemplateAsset_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_TemplateSpecification_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_TemplateSpecification_MetaData[] = {
		{ "Category", "Asset Options" },
		{ "Comment", "/** If this emitter is a standard parent emitter, a template or a behavior example. Templates and behavior examples get copied rather than inherited from. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "If this emitter is a standard parent emitter, a template or a behavior example. Templates and behavior examples get copied rather than inherited from." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_TemplateSpecification = { "TemplateSpecification", nullptr, (EPropertyFlags)0x0010050800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, TemplateSpecification), Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_TemplateSpecification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_TemplateSpecification_MetaData)) }; // 295162963
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_TemplateAssetDescription_MetaData[] = {
		{ "Category", "Asset Options" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_TemplateAssetDescription = { "TemplateAssetDescription", nullptr, (EPropertyFlags)0x0010050800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, TemplateAssetDescription), METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_TemplateAssetDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_TemplateAssetDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Asset Options" },
		{ "Comment", "/** Category to collate this emitter into for \"add new emitter\" dialogs.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Category to collate this emitter into for \"add new emitter\" dialogs." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010050800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, Category), METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_Category_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ScratchPadScripts_Inner = { "ScratchPadScripts", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ScratchPadScripts_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ScratchPadScripts = { "ScratchPadScripts", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, ScratchPadScripts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ScratchPadScripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ScratchPadScripts_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParentScratchPadScripts_Inner = { "ParentScratchPadScripts", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParentScratchPadScripts_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParentScratchPadScripts = { "ParentScratchPadScripts", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, ParentScratchPadScripts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParentScratchPadScripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParentScratchPadScripts_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RendererBindings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RendererBindings = { "RendererBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, RendererBindings), Z_Construct_UScriptStruct_FNiagaraParameterStore, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RendererBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RendererBindings_MetaData)) }; // 1697716336
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ChangeId_MetaData[] = {
		{ "Comment", "/** Adjusted every time that we compile this emitter. Lets us know that we might differ from any cached versions.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Adjusted every time that we compile this emitter. Lets us know that we might differ from any cached versions." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ChangeId = { "ChangeId", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, ChangeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ChangeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ChangeId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EditorData_MetaData[] = {
		{ "Comment", "/** Data used by the editor to maintain UI state etc.. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Data used by the editor to maintain UI state etc.." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EditorData = { "EditorData", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, EditorData), Z_Construct_UClass_UNiagaraEditorDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EditorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EditorData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EditorParameters_MetaData[] = {
		{ "Comment", "/** Wrapper for editor only parameters. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Wrapper for editor only parameters." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EditorParameters = { "EditorParameters", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, EditorParameters), Z_Construct_UClass_UNiagaraEditorParametersAdapterBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EditorParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EditorParameters_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_UniqueEmitterName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_UniqueEmitterName = { "UniqueEmitterName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, UniqueEmitterName), METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_UniqueEmitterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_UniqueEmitterName_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RendererProperties_Inner = { "RendererProperties", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNiagaraRendererProperties_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RendererProperties_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RendererProperties = { "RendererProperties", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, RendererProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RendererProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RendererProperties_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EventHandlerScriptProps_Inner = { "EventHandlerScriptProps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraEventScriptProperties, METADATA_PARAMS(nullptr, 0) }; // 1239330298
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EventHandlerScriptProps_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "NiagaraNoMerge", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EventHandlerScriptProps = { "EventHandlerScriptProps", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, EventHandlerScriptProps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EventHandlerScriptProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EventHandlerScriptProps_MetaData)) }; // 1239330298
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimulationStages_Inner = { "SimulationStages", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNiagaraSimulationStageBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimulationStages_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "NiagaraNoMerge", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimulationStages = { "SimulationStages", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, SimulationStages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimulationStages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimulationStages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GPUComputeScript_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GPUComputeScript = { "GPUComputeScript", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, GPUComputeScript), Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GPUComputeScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GPUComputeScript_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SharedEventGeneratorIds_Inner = { "SharedEventGeneratorIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SharedEventGeneratorIds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SharedEventGeneratorIds = { "SharedEventGeneratorIds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, SharedEventGeneratorIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SharedEventGeneratorIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SharedEventGeneratorIds_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, Parent), Z_Construct_UClass_UNiagaraEmitter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParentAtLastMerge_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParentAtLastMerge = { "ParentAtLastMerge", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, ParentAtLastMerge), Z_Construct_UClass_UNiagaraEmitter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParentAtLastMerge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParentAtLastMerge_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParameterDefinitionsSubscriptions_Inner = { "ParameterDefinitionsSubscriptions", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FParameterDefinitionsSubscription, METADATA_PARAMS(nullptr, 0) }; // 1065979301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParameterDefinitionsSubscriptions_MetaData[] = {
		{ "Comment", "/** Subscriptions to definitions of parameters. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Subscriptions to definitions of parameters." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParameterDefinitionsSubscriptions = { "ParameterDefinitionsSubscriptions", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, ParameterDefinitionsSubscriptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParameterDefinitionsSubscriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParameterDefinitionsSubscriptions_MetaData)) }; // 1065979301
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MessageKeyToMessageMap_ValueProp = { "MessageKeyToMessageMap", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UNiagaraMessageDataBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MessageKeyToMessageMap_Key_KeyProp = { "MessageKeyToMessageMap_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MessageKeyToMessageMap_MetaData[] = {
		{ "Comment", "/** Messages associated with the Emitter asset. */" },
		{ "ModuleRelativePath", "Classes/NiagaraEmitter.h" },
		{ "ToolTip", "Messages associated with the Emitter asset." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MessageKeyToMessageMap = { "MessageKeyToMessageMap", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraEmitter, MessageKeyToMessageMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MessageKeyToMessageMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MessageKeyToMessageMap_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraEmitter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLocalSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bDeterminism,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RandomSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AllocationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AllocationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_PreAllocationCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_UpdateScriptProps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SpawnScriptProps,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EmitterSpawnScriptProps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EmitterUpdateScriptProps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AttributesToPreserve_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_AttributesToPreserve,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimTarget_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_FixedBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MinDetailLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxDetailLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GlobalSpawnCountScaleOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_Platforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ScalabilityOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bInterpolatedSpawning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bFixedBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMinDetailLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bUseMaxDetailLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bOverrideGlobalSpawnCountScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bRequiresPersistentIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bCombineEventSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxDeltaTimePerTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bLimitDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MaxGPUParticlesSpawnPerFrame,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GraphSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ThumbnailImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ThumbnailImageOutOfDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bExposeToLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_LibraryVisibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_LibraryVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_bIsTemplateAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_TemplateSpecification_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_TemplateSpecification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_TemplateAssetDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ScratchPadScripts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ScratchPadScripts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParentScratchPadScripts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParentScratchPadScripts,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RendererBindings,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ChangeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EditorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EditorParameters,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_UniqueEmitterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RendererProperties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_RendererProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EventHandlerScriptProps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_EventHandlerScriptProps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimulationStages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SimulationStages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_GPUComputeScript,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SharedEventGeneratorIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_SharedEventGeneratorIds,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParentAtLastMerge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParameterDefinitionsSubscriptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_ParameterDefinitionsSubscriptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MessageKeyToMessageMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MessageKeyToMessageMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraEmitter_Statics::NewProp_MessageKeyToMessageMap,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraEmitter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraEmitter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraEmitter_Statics::ClassParams = {
		&UNiagaraEmitter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraEmitter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraEmitter()
	{
		if (!Z_Registration_Info_UClass_UNiagaraEmitter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraEmitter.OuterSingleton, Z_Construct_UClass_UNiagaraEmitter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraEmitter.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraEmitter>()
	{
		return UNiagaraEmitter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraEmitter);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraEmitter)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_Statics::EnumInfo[] = {
		{ EScriptExecutionMode_StaticEnum, TEXT("EScriptExecutionMode"), &Z_Registration_Info_UEnum_EScriptExecutionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 969502504U) },
		{ EParticleAllocationMode_StaticEnum, TEXT("EParticleAllocationMode"), &Z_Registration_Info_UEnum_EParticleAllocationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3793817162U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraEventReceiverProperties::StaticStruct, Z_Construct_UScriptStruct_FNiagaraEventReceiverProperties_Statics::NewStructOps, TEXT("NiagaraEventReceiverProperties"), &Z_Registration_Info_UScriptStruct_NiagaraEventReceiverProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraEventReceiverProperties), 3586431660U) },
		{ FNiagaraEventGeneratorProperties::StaticStruct, Z_Construct_UScriptStruct_FNiagaraEventGeneratorProperties_Statics::NewStructOps, TEXT("NiagaraEventGeneratorProperties"), &Z_Registration_Info_UScriptStruct_NiagaraEventGeneratorProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraEventGeneratorProperties), 4002855726U) },
		{ FNiagaraEmitterScriptProperties::StaticStruct, Z_Construct_UScriptStruct_FNiagaraEmitterScriptProperties_Statics::NewStructOps, TEXT("NiagaraEmitterScriptProperties"), &Z_Registration_Info_UScriptStruct_NiagaraEmitterScriptProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraEmitterScriptProperties), 2660013259U) },
		{ FNiagaraEventScriptProperties::StaticStruct, Z_Construct_UScriptStruct_FNiagaraEventScriptProperties_Statics::NewStructOps, TEXT("NiagaraEventScriptProperties"), &Z_Registration_Info_UScriptStruct_NiagaraEventScriptProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraEventScriptProperties), 1239330298U) },
		{ FNiagaraDetailsLevelScaleOverrides::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDetailsLevelScaleOverrides_Statics::NewStructOps, TEXT("NiagaraDetailsLevelScaleOverrides"), &Z_Registration_Info_UScriptStruct_NiagaraDetailsLevelScaleOverrides, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDetailsLevelScaleOverrides), 2146458139U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraEmitter, UNiagaraEmitter::StaticClass, TEXT("UNiagaraEmitter"), &Z_Registration_Info_UClass_UNiagaraEmitter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraEmitter), 1942314569U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_4113634655(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
