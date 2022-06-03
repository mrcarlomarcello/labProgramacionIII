// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraSimulationStageBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraSimulationStageBase() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimulationStageBase_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimulationStageBase();
	NIAGARACORE_API UClass* Z_Construct_UClass_UNiagaraMergeable();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScript_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimulationStageGeneric_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimulationStageGeneric();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraIterationSource();
	NIAGARASHADER_API UEnum* Z_Construct_UEnum_NiagaraShader_ENiagaraSimStageExecuteBehavior();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
// End Cross Module References
	void UNiagaraSimulationStageBase::StaticRegisterNativesUNiagaraSimulationStageBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraSimulationStageBase);
	UClass* Z_Construct_UClass_UNiagaraSimulationStageBase_NoRegister()
	{
		return UNiagaraSimulationStageBase::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraSimulationStageBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Script_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Script;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationStageName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SimulationStageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraMergeable,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A base class for niagara simulation stages.  This class should be derived to add stage specific information.\n*/" },
		{ "IncludePath", "NiagaraSimulationStageBase.h" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "ToolTip", "A base class for niagara simulation stages.  This class should be derived to add stage specific information." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_Script_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_Script = { "Script", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSimulationStageBase, Script), Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_Script_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_Script_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_SimulationStageName_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_SimulationStageName = { "SimulationStageName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSimulationStageBase, SimulationStageName), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_SimulationStageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_SimulationStageName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_bEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UNiagaraSimulationStageBase*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraSimulationStageBase), &Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_Script,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_SimulationStageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::NewProp_bEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSimulationStageBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::ClassParams = {
		&UNiagaraSimulationStageBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraSimulationStageBase()
	{
		if (!Z_Registration_Info_UClass_UNiagaraSimulationStageBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraSimulationStageBase.OuterSingleton, Z_Construct_UClass_UNiagaraSimulationStageBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraSimulationStageBase.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraSimulationStageBase>()
	{
		return UNiagaraSimulationStageBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSimulationStageBase);
	void UNiagaraSimulationStageGeneric::StaticRegisterNativesUNiagaraSimulationStageGeneric()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraSimulationStageGeneric);
	UClass* Z_Construct_UClass_UNiagaraSimulationStageGeneric_NoRegister()
	{
		return UNiagaraSimulationStageGeneric::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnabledBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnabledBinding;
		static const UECodeGen_Private::FBytePropertyParams NewProp_IterationSource_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IterationSource_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_IterationSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Iterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Iterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumIterationsBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NumIterationsBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnOnly_MetaData[];
#endif
		static void NewProp_bSpawnOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnOnly;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExecuteBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecuteBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisablePartialParticleUpdate_MetaData[];
#endif
		static void NewProp_bDisablePartialParticleUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisablePartialParticleUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataInterface_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataInterface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bParticleIterationStateEnabled_MetaData[];
#endif
		static void NewProp_bParticleIterationStateEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bParticleIterationStateEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleIterationStateBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleIterationStateBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleIterationStateRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleIterationStateRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGpuDispatchForceLinear_MetaData[];
#endif
		static void NewProp_bGpuDispatchForceLinear_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGpuDispatchForceLinear;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideGpuDispatchNumThreads_MetaData[];
#endif
		static void NewProp_bOverrideGpuDispatchNumThreads_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideGpuDispatchNumThreads;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideGpuDispatchNumThreads_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideGpuDispatchNumThreads;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraSimulationStageBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Generic Simulation Stage" },
		{ "IncludePath", "NiagaraSimulationStageBase.h" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_EnabledBinding_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "Comment", "/** Binding to a bool parameter which dynamically controls if the simulation stage is enabled or not. */" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "ToolTip", "Binding to a bool parameter which dynamically controls if the simulation stage is enabled or not." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_EnabledBinding = { "EnabledBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSimulationStageGeneric, EnabledBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_EnabledBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_EnabledBinding_MetaData)) }; // 3965162443
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_IterationSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_IterationSource_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "Comment", "/** Determine which elements this script is iterating over. You are not allowed to */" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "ToolTip", "Determine which elements this script is iterating over. You are not allowed to" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_IterationSource = { "IterationSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSimulationStageGeneric, IterationSource), Z_Construct_UEnum_Niagara_ENiagaraIterationSource, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_IterationSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_IterationSource_MetaData)) }; // 890898605
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_Iterations_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Num Iterations" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "NoSpinbox", "true" },
		{ "Tooltip", "The number of times we run this simulation stage before moving to the next stage." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_Iterations = { "Iterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSimulationStageGeneric, Iterations), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_Iterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_Iterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_NumIterationsBinding_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "Comment", "/** Binding to an int parameter which dynamically controls the number of times the simulation stage runs. */" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "ToolTip", "Binding to an int parameter which dynamically controls the number of times the simulation stage runs." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_NumIterationsBinding = { "NumIterationsBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSimulationStageGeneric, NumIterationsBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_NumIterationsBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_NumIterationsBinding_MetaData)) }; // 3965162443
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bSpawnOnly_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bSpawnOnly_SetBit(void* Obj)
	{
		((UNiagaraSimulationStageGeneric*)Obj)->bSpawnOnly_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bSpawnOnly = { "bSpawnOnly", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraSimulationStageGeneric), &Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bSpawnOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bSpawnOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bSpawnOnly_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ExecuteBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ExecuteBehavior_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "EditCondition", "IterationSource == ENiagaraIterationSource::DataInterface" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "Tooltip", "Controls when the simulation stage should execute, only valid for data interface iteration stages" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ExecuteBehavior = { "ExecuteBehavior", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSimulationStageGeneric, ExecuteBehavior), Z_Construct_UEnum_NiagaraShader_ENiagaraSimStageExecuteBehavior, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ExecuteBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ExecuteBehavior_MetaData)) }; // 3580780632
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bDisablePartialParticleUpdate_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "EditCondition", "IterationSource == ENiagaraIterationSource::Particles" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "Tooltip", "Disables the ability to read / write from the same particle buffer, i.e. only update position and no other attributes.  By default this should not be changed and is a debugging tool." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bDisablePartialParticleUpdate_SetBit(void* Obj)
	{
		((UNiagaraSimulationStageGeneric*)Obj)->bDisablePartialParticleUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bDisablePartialParticleUpdate = { "bDisablePartialParticleUpdate", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraSimulationStageGeneric), &Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bDisablePartialParticleUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bDisablePartialParticleUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bDisablePartialParticleUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_DataInterface_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "Comment", "/** Source data interface to use for the simulation stage. The data interface needs to be a subclass of UNiagaraDataInterfaceRWBase, for example the Grid2D and Grid3D data interfaces. */" },
		{ "editcondition", "IterationSource == ENiagaraIterationSource::DataInterface" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "ToolTip", "Source data interface to use for the simulation stage. The data interface needs to be a subclass of UNiagaraDataInterfaceRWBase, for example the Grid2D and Grid3D data interfaces." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_DataInterface = { "DataInterface", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSimulationStageGeneric, DataInterface), Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_DataInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_DataInterface_MetaData)) }; // 2584268882
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bParticleIterationStateEnabled_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "editcondition", "IterationSource == ENiagaraIterationSource::Particles" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bParticleIterationStateEnabled_SetBit(void* Obj)
	{
		((UNiagaraSimulationStageGeneric*)Obj)->bParticleIterationStateEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bParticleIterationStateEnabled = { "bParticleIterationStateEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraSimulationStageGeneric), &Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bParticleIterationStateEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bParticleIterationStateEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bParticleIterationStateEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ParticleIterationStateBinding_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "Comment", "/** Particle state attribute binding, when enabled we will only allow particles who pass the state range check to be processed. */" },
		{ "editcondition", "IterationSource == ENiagaraIterationSource::Particles" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "ToolTip", "Particle state attribute binding, when enabled we will only allow particles who pass the state range check to be processed." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ParticleIterationStateBinding = { "ParticleIterationStateBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSimulationStageGeneric, ParticleIterationStateBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ParticleIterationStateBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ParticleIterationStateBinding_MetaData)) }; // 3965162443
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ParticleIterationStateRange_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "Comment", "/** The inclusive range used to check particle state binding against when enabled. */" },
		{ "editcondition", "IterationSource == ENiagaraIterationSource::Particles" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "ToolTip", "The inclusive range used to check particle state binding against when enabled." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ParticleIterationStateRange = { "ParticleIterationStateRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSimulationStageGeneric, ParticleIterationStateRange), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ParticleIterationStateRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ParticleIterationStateRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bGpuDispatchForceLinear_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "Comment", "/** When enabled we force the dispatch to be linear (i.e. one dimension is used). */" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "ToolTip", "When enabled we force the dispatch to be linear (i.e. one dimension is used)." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bGpuDispatchForceLinear_SetBit(void* Obj)
	{
		((UNiagaraSimulationStageGeneric*)Obj)->bGpuDispatchForceLinear = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bGpuDispatchForceLinear = { "bGpuDispatchForceLinear", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraSimulationStageGeneric), &Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bGpuDispatchForceLinear_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bGpuDispatchForceLinear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bGpuDispatchForceLinear_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bOverrideGpuDispatchNumThreads_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "Comment", "/** When enabled we use a custom number of threads for the dispatch. */" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
		{ "ToolTip", "When enabled we use a custom number of threads for the dispatch." },
	};
#endif
	void Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bOverrideGpuDispatchNumThreads_SetBit(void* Obj)
	{
		((UNiagaraSimulationStageGeneric*)Obj)->bOverrideGpuDispatchNumThreads = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bOverrideGpuDispatchNumThreads = { "bOverrideGpuDispatchNumThreads", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNiagaraSimulationStageGeneric), &Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bOverrideGpuDispatchNumThreads_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bOverrideGpuDispatchNumThreads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bOverrideGpuDispatchNumThreads_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_OverrideGpuDispatchNumThreads_MetaData[] = {
		{ "Category", "Simulation Stage" },
		{ "ModuleRelativePath", "Public/NiagaraSimulationStageBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_OverrideGpuDispatchNumThreads = { "OverrideGpuDispatchNumThreads", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSimulationStageGeneric, OverrideGpuDispatchNumThreads), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_OverrideGpuDispatchNumThreads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_OverrideGpuDispatchNumThreads_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_EnabledBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_IterationSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_IterationSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_Iterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_NumIterationsBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bSpawnOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ExecuteBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ExecuteBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bDisablePartialParticleUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_DataInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bParticleIterationStateEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ParticleIterationStateBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_ParticleIterationStateRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bGpuDispatchForceLinear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_bOverrideGpuDispatchNumThreads,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::NewProp_OverrideGpuDispatchNumThreads,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSimulationStageGeneric>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::ClassParams = {
		&UNiagaraSimulationStageGeneric::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraSimulationStageGeneric()
	{
		if (!Z_Registration_Info_UClass_UNiagaraSimulationStageGeneric.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraSimulationStageGeneric.OuterSingleton, Z_Construct_UClass_UNiagaraSimulationStageGeneric_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraSimulationStageGeneric.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraSimulationStageGeneric>()
	{
		return UNiagaraSimulationStageGeneric::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSimulationStageGeneric);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraSimulationStageBase, UNiagaraSimulationStageBase::StaticClass, TEXT("UNiagaraSimulationStageBase"), &Z_Registration_Info_UClass_UNiagaraSimulationStageBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraSimulationStageBase), 3960351164U) },
		{ Z_Construct_UClass_UNiagaraSimulationStageGeneric, UNiagaraSimulationStageGeneric::StaticClass, TEXT("UNiagaraSimulationStageGeneric"), &Z_Registration_Info_UClass_UNiagaraSimulationStageGeneric, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraSimulationStageGeneric), 2104469752U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_3004752906(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSimulationStageBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
