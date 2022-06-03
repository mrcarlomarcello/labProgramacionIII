// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/WorldPartition/DataLayer/DataLayerSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataLayerSubsystem() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UDataLayer_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDataLayerRuntimeState();
	ENGINE_API UClass* Z_Construct_UClass_UDataLayerSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataLayerSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorDataLayer();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDataLayerState();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnDataLayerRuntimeStateChanged_Parms
		{
			const UDataLayer* DataLayer;
			EDataLayerRuntimeState State;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataLayer;
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::NewProp_DataLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::NewProp_DataLayer = { "DataLayer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnDataLayerRuntimeStateChanged_Parms, DataLayer), Z_Construct_UClass_UDataLayer_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::NewProp_DataLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::NewProp_DataLayer_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnDataLayerRuntimeStateChanged_Parms, State), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(nullptr, 0) }; // 3247838434
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::NewProp_DataLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnDataLayerRuntimeStateChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::_Script_Engine_eventOnDataLayerRuntimeStateChanged_Parms), Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UDataLayerSubsystem::execGetLoadedDataLayerNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=P_THIS->GetLoadedDataLayerNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerSubsystem::execGetActiveDataLayerNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=P_THIS->GetActiveDataLayerNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerSubsystem::execGetDataLayerStateByLabel)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InDataLayerLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDataLayerState*)Z_Param__Result=P_THIS->GetDataLayerStateByLabel(Z_Param_Out_InDataLayerLabel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerSubsystem::execGetDataLayerState)
	{
		P_GET_STRUCT_REF(FActorDataLayer,Z_Param_Out_InDataLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDataLayerState*)Z_Param__Result=P_THIS->GetDataLayerState(Z_Param_Out_InDataLayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerSubsystem::execSetDataLayerStateByLabel)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InDataLayerLabel);
		P_GET_ENUM(EDataLayerState,Z_Param_InState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataLayerStateByLabel(Z_Param_Out_InDataLayerLabel,EDataLayerState(Z_Param_InState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerSubsystem::execSetDataLayerState)
	{
		P_GET_STRUCT_REF(FActorDataLayer,Z_Param_Out_InDataLayer);
		P_GET_ENUM(EDataLayerState,Z_Param_InState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataLayerState(Z_Param_Out_InDataLayer,EDataLayerState(Z_Param_InState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerSubsystem::execGetDataLayerEffectiveRuntimeStateByLabel)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InDataLayerLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDataLayerRuntimeState*)Z_Param__Result=P_THIS->GetDataLayerEffectiveRuntimeStateByLabel(Z_Param_Out_InDataLayerLabel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerSubsystem::execGetDataLayerEffectiveRuntimeState)
	{
		P_GET_STRUCT_REF(FActorDataLayer,Z_Param_Out_InDataLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDataLayerRuntimeState*)Z_Param__Result=P_THIS->GetDataLayerEffectiveRuntimeState(Z_Param_Out_InDataLayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerSubsystem::execGetDataLayerRuntimeStateByLabel)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InDataLayerLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDataLayerRuntimeState*)Z_Param__Result=P_THIS->GetDataLayerRuntimeStateByLabel(Z_Param_Out_InDataLayerLabel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerSubsystem::execGetDataLayerRuntimeState)
	{
		P_GET_STRUCT_REF(FActorDataLayer,Z_Param_Out_InDataLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDataLayerRuntimeState*)Z_Param__Result=P_THIS->GetDataLayerRuntimeState(Z_Param_Out_InDataLayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerSubsystem::execSetDataLayerRuntimeStateByLabel)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InDataLayerLabel);
		P_GET_ENUM(EDataLayerRuntimeState,Z_Param_InState);
		P_GET_UBOOL(Z_Param_bInIsRecursive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataLayerRuntimeStateByLabel(Z_Param_Out_InDataLayerLabel,EDataLayerRuntimeState(Z_Param_InState),Z_Param_bInIsRecursive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerSubsystem::execSetDataLayerRuntimeState)
	{
		P_GET_STRUCT_REF(FActorDataLayer,Z_Param_Out_InDataLayer);
		P_GET_ENUM(EDataLayerRuntimeState,Z_Param_InState);
		P_GET_UBOOL(Z_Param_bInIsRecursive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDataLayerRuntimeState(Z_Param_Out_InDataLayer,EDataLayerRuntimeState(Z_Param_InState),Z_Param_bInIsRecursive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerSubsystem::execGetDataLayerFromName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InDataLayerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataLayer**)Z_Param__Result=P_THIS->GetDataLayerFromName(Z_Param_InDataLayerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerSubsystem::execGetDataLayerFromLabel)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InDataLayerLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataLayer**)Z_Param__Result=P_THIS->GetDataLayerFromLabel(Z_Param_InDataLayerLabel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayerSubsystem::execGetDataLayer)
	{
		P_GET_STRUCT_REF(FActorDataLayer,Z_Param_Out_InDataLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataLayer**)Z_Param__Result=P_THIS->GetDataLayer(Z_Param_Out_InDataLayer);
		P_NATIVE_END;
	}
	void UDataLayerSubsystem::StaticRegisterNativesUDataLayerSubsystem()
	{
		UClass* Class = UDataLayerSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActiveDataLayerNames", &UDataLayerSubsystem::execGetActiveDataLayerNames },
			{ "GetDataLayer", &UDataLayerSubsystem::execGetDataLayer },
			{ "GetDataLayerEffectiveRuntimeState", &UDataLayerSubsystem::execGetDataLayerEffectiveRuntimeState },
			{ "GetDataLayerEffectiveRuntimeStateByLabel", &UDataLayerSubsystem::execGetDataLayerEffectiveRuntimeStateByLabel },
			{ "GetDataLayerFromLabel", &UDataLayerSubsystem::execGetDataLayerFromLabel },
			{ "GetDataLayerFromName", &UDataLayerSubsystem::execGetDataLayerFromName },
			{ "GetDataLayerRuntimeState", &UDataLayerSubsystem::execGetDataLayerRuntimeState },
			{ "GetDataLayerRuntimeStateByLabel", &UDataLayerSubsystem::execGetDataLayerRuntimeStateByLabel },
			{ "GetDataLayerState", &UDataLayerSubsystem::execGetDataLayerState },
			{ "GetDataLayerStateByLabel", &UDataLayerSubsystem::execGetDataLayerStateByLabel },
			{ "GetLoadedDataLayerNames", &UDataLayerSubsystem::execGetLoadedDataLayerNames },
			{ "SetDataLayerRuntimeState", &UDataLayerSubsystem::execSetDataLayerRuntimeState },
			{ "SetDataLayerRuntimeStateByLabel", &UDataLayerSubsystem::execSetDataLayerRuntimeStateByLabel },
			{ "SetDataLayerState", &UDataLayerSubsystem::execSetDataLayerState },
			{ "SetDataLayerStateByLabel", &UDataLayerSubsystem::execSetDataLayerStateByLabel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics
	{
		struct DataLayerSubsystem_eventGetActiveDataLayerNames_Parms
		{
			TSet<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetActiveDataLayerNames_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetActiveDataLayerNames will be removed." },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "GetActiveDataLayerNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics::DataLayerSubsystem_eventGetActiveDataLayerNames_Parms), Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics
	{
		struct DataLayerSubsystem_eventGetDataLayer_Parms
		{
			FActorDataLayer InDataLayer;
			UDataLayer* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDataLayer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics::NewProp_InDataLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics::NewProp_InDataLayer = { "InDataLayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayer_Parms, InDataLayer), Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics::NewProp_InDataLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics::NewProp_InDataLayer_MetaData)) }; // 3962210771
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayer_Parms, ReturnValue), Z_Construct_UClass_UDataLayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics::NewProp_InDataLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/** Find a Data Layer by name. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
		{ "ToolTip", "Find a Data Layer by name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "GetDataLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics::DataLayerSubsystem_eventGetDataLayer_Parms), Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics
	{
		struct DataLayerSubsystem_eventGetDataLayerEffectiveRuntimeState_Parms
		{
			FActorDataLayer InDataLayer;
			EDataLayerRuntimeState ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDataLayer;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::NewProp_InDataLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::NewProp_InDataLayer = { "InDataLayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerEffectiveRuntimeState_Parms, InDataLayer), Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::NewProp_InDataLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::NewProp_InDataLayer_MetaData)) }; // 3962210771
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerEffectiveRuntimeState_Parms, ReturnValue), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(nullptr, 0) }; // 3247838434
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::NewProp_InDataLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/** Get the Data Layer effective state using its name. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
		{ "ToolTip", "Get the Data Layer effective state using its name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "GetDataLayerEffectiveRuntimeState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::DataLayerSubsystem_eventGetDataLayerEffectiveRuntimeState_Parms), Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics
	{
		struct DataLayerSubsystem_eventGetDataLayerEffectiveRuntimeStateByLabel_Parms
		{
			FName InDataLayerLabel;
			EDataLayerRuntimeState ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayerLabel_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InDataLayerLabel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::NewProp_InDataLayerLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::NewProp_InDataLayerLabel = { "InDataLayerLabel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerEffectiveRuntimeStateByLabel_Parms, InDataLayerLabel), METADATA_PARAMS(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::NewProp_InDataLayerLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::NewProp_InDataLayerLabel_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerEffectiveRuntimeStateByLabel_Parms, ReturnValue), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(nullptr, 0) }; // 3247838434
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::NewProp_InDataLayerLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/** Get the Data Layer effective state using its label. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
		{ "ToolTip", "Get the Data Layer effective state using its label." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "GetDataLayerEffectiveRuntimeStateByLabel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::DataLayerSubsystem_eventGetDataLayerEffectiveRuntimeStateByLabel_Parms), Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel_Statics
	{
		struct DataLayerSubsystem_eventGetDataLayerFromLabel_Parms
		{
			FName InDataLayerLabel;
			UDataLayer* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InDataLayerLabel;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel_Statics::NewProp_InDataLayerLabel = { "InDataLayerLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerFromLabel_Parms, InDataLayerLabel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerFromLabel_Parms, ReturnValue), Z_Construct_UClass_UDataLayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel_Statics::NewProp_InDataLayerLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/** Find a Data Layer by label. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
		{ "ToolTip", "Find a Data Layer by label." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "GetDataLayerFromLabel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel_Statics::DataLayerSubsystem_eventGetDataLayerFromLabel_Parms), Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName_Statics
	{
		struct DataLayerSubsystem_eventGetDataLayerFromName_Parms
		{
			FName InDataLayerName;
			UDataLayer* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InDataLayerName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName_Statics::NewProp_InDataLayerName = { "InDataLayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerFromName_Parms, InDataLayerName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerFromName_Parms, ReturnValue), Z_Construct_UClass_UDataLayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName_Statics::NewProp_InDataLayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/** Find a Data Layer by name. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
		{ "ToolTip", "Find a Data Layer by name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "GetDataLayerFromName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName_Statics::DataLayerSubsystem_eventGetDataLayerFromName_Parms), Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics
	{
		struct DataLayerSubsystem_eventGetDataLayerRuntimeState_Parms
		{
			FActorDataLayer InDataLayer;
			EDataLayerRuntimeState ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDataLayer;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::NewProp_InDataLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::NewProp_InDataLayer = { "InDataLayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerRuntimeState_Parms, InDataLayer), Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::NewProp_InDataLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::NewProp_InDataLayer_MetaData)) }; // 3962210771
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerRuntimeState_Parms, ReturnValue), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(nullptr, 0) }; // 3247838434
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::NewProp_InDataLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/** Get the Data Layer state using its name. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
		{ "ToolTip", "Get the Data Layer state using its name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "GetDataLayerRuntimeState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::DataLayerSubsystem_eventGetDataLayerRuntimeState_Parms), Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics
	{
		struct DataLayerSubsystem_eventGetDataLayerRuntimeStateByLabel_Parms
		{
			FName InDataLayerLabel;
			EDataLayerRuntimeState ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayerLabel_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InDataLayerLabel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::NewProp_InDataLayerLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::NewProp_InDataLayerLabel = { "InDataLayerLabel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerRuntimeStateByLabel_Parms, InDataLayerLabel), METADATA_PARAMS(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::NewProp_InDataLayerLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::NewProp_InDataLayerLabel_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerRuntimeStateByLabel_Parms, ReturnValue), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(nullptr, 0) }; // 3247838434
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::NewProp_InDataLayerLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/** Get the Data Layer state using its label. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
		{ "ToolTip", "Get the Data Layer state using its label." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "GetDataLayerRuntimeStateByLabel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::DataLayerSubsystem_eventGetDataLayerRuntimeStateByLabel_Parms), Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics
	{
		struct DataLayerSubsystem_eventGetDataLayerState_Parms
		{
			FActorDataLayer InDataLayer;
			EDataLayerState ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDataLayer;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::NewProp_InDataLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::NewProp_InDataLayer = { "InDataLayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerState_Parms, InDataLayer), Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::NewProp_InDataLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::NewProp_InDataLayer_MetaData)) }; // 3962210771
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerState_Parms, ReturnValue), Z_Construct_UEnum_Engine_EDataLayerState, METADATA_PARAMS(nullptr, 0) }; // 4266268046
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::NewProp_InDataLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetDataLayerRuntimeState instead" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "GetDataLayerState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::DataLayerSubsystem_eventGetDataLayerState_Parms), Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics
	{
		struct DataLayerSubsystem_eventGetDataLayerStateByLabel_Parms
		{
			FName InDataLayerLabel;
			EDataLayerState ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayerLabel_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InDataLayerLabel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::NewProp_InDataLayerLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::NewProp_InDataLayerLabel = { "InDataLayerLabel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerStateByLabel_Parms, InDataLayerLabel), METADATA_PARAMS(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::NewProp_InDataLayerLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::NewProp_InDataLayerLabel_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetDataLayerStateByLabel_Parms, ReturnValue), Z_Construct_UEnum_Engine_EDataLayerState, METADATA_PARAMS(nullptr, 0) }; // 4266268046
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::NewProp_InDataLayerLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetDataLayerRuntimeStateByLabel instead" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "GetDataLayerStateByLabel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::DataLayerSubsystem_eventGetDataLayerStateByLabel_Parms), Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics
	{
		struct DataLayerSubsystem_eventGetLoadedDataLayerNames_Parms
		{
			TSet<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayerSubsystem_eventGetLoadedDataLayerNames_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetLoadedDataLayerNames will be removed." },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "GetLoadedDataLayerNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics::DataLayerSubsystem_eventGetLoadedDataLayerNames_Parms), Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics
	{
		struct DataLayerSubsystem_eventSetDataLayerRuntimeState_Parms
		{
			FActorDataLayer InDataLayer;
			EDataLayerRuntimeState InState;
			bool bInIsRecursive;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDataLayer;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InState;
		static void NewProp_bInIsRecursive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsRecursive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::NewProp_InDataLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::NewProp_InDataLayer = { "InDataLayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayerSubsystem_eventSetDataLayerRuntimeState_Parms, InDataLayer), Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::NewProp_InDataLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::NewProp_InDataLayer_MetaData)) }; // 3962210771
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::NewProp_InState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::NewProp_InState = { "InState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayerSubsystem_eventSetDataLayerRuntimeState_Parms, InState), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(nullptr, 0) }; // 3247838434
	void Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::NewProp_bInIsRecursive_SetBit(void* Obj)
	{
		((DataLayerSubsystem_eventSetDataLayerRuntimeState_Parms*)Obj)->bInIsRecursive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::NewProp_bInIsRecursive = { "bInIsRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DataLayerSubsystem_eventSetDataLayerRuntimeState_Parms), &Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::NewProp_bInIsRecursive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::NewProp_InDataLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::NewProp_InState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::NewProp_InState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::NewProp_bInIsRecursive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/** Set the Data Layer state using its name. */" },
		{ "CPP_Default_bInIsRecursive", "false" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
		{ "ToolTip", "Set the Data Layer state using its name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "SetDataLayerRuntimeState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::DataLayerSubsystem_eventSetDataLayerRuntimeState_Parms), Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics
	{
		struct DataLayerSubsystem_eventSetDataLayerRuntimeStateByLabel_Parms
		{
			FName InDataLayerLabel;
			EDataLayerRuntimeState InState;
			bool bInIsRecursive;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayerLabel_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InDataLayerLabel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InState;
		static void NewProp_bInIsRecursive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsRecursive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::NewProp_InDataLayerLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::NewProp_InDataLayerLabel = { "InDataLayerLabel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayerSubsystem_eventSetDataLayerRuntimeStateByLabel_Parms, InDataLayerLabel), METADATA_PARAMS(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::NewProp_InDataLayerLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::NewProp_InDataLayerLabel_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::NewProp_InState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::NewProp_InState = { "InState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayerSubsystem_eventSetDataLayerRuntimeStateByLabel_Parms, InState), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(nullptr, 0) }; // 3247838434
	void Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::NewProp_bInIsRecursive_SetBit(void* Obj)
	{
		((DataLayerSubsystem_eventSetDataLayerRuntimeStateByLabel_Parms*)Obj)->bInIsRecursive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::NewProp_bInIsRecursive = { "bInIsRecursive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DataLayerSubsystem_eventSetDataLayerRuntimeStateByLabel_Parms), &Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::NewProp_bInIsRecursive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::NewProp_InDataLayerLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::NewProp_InState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::NewProp_InState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::NewProp_bInIsRecursive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "Comment", "/** Set the Data Layer state using its label. */" },
		{ "CPP_Default_bInIsRecursive", "false" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
		{ "ToolTip", "Set the Data Layer state using its label." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "SetDataLayerRuntimeStateByLabel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::DataLayerSubsystem_eventSetDataLayerRuntimeStateByLabel_Parms), Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics
	{
		struct DataLayerSubsystem_eventSetDataLayerState_Parms
		{
			FActorDataLayer InDataLayer;
			EDataLayerState InState;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDataLayer;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::NewProp_InDataLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::NewProp_InDataLayer = { "InDataLayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayerSubsystem_eventSetDataLayerState_Parms, InDataLayer), Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::NewProp_InDataLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::NewProp_InDataLayer_MetaData)) }; // 3962210771
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::NewProp_InState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::NewProp_InState = { "InState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayerSubsystem_eventSetDataLayerState_Parms, InState), Z_Construct_UEnum_Engine_EDataLayerState, METADATA_PARAMS(nullptr, 0) }; // 4266268046
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::NewProp_InDataLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::NewProp_InState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::NewProp_InState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use SetDataLayerRuntimeState instead" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "SetDataLayerState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::DataLayerSubsystem_eventSetDataLayerState_Parms), Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics
	{
		struct DataLayerSubsystem_eventSetDataLayerStateByLabel_Parms
		{
			FName InDataLayerLabel;
			EDataLayerState InState;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDataLayerLabel_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InDataLayerLabel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::NewProp_InDataLayerLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::NewProp_InDataLayerLabel = { "InDataLayerLabel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayerSubsystem_eventSetDataLayerStateByLabel_Parms, InDataLayerLabel), METADATA_PARAMS(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::NewProp_InDataLayerLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::NewProp_InDataLayerLabel_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::NewProp_InState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::NewProp_InState = { "InState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayerSubsystem_eventSetDataLayerStateByLabel_Parms, InState), Z_Construct_UEnum_Engine_EDataLayerState, METADATA_PARAMS(nullptr, 0) }; // 4266268046
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::NewProp_InDataLayerLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::NewProp_InState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::NewProp_InState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataLayers" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use SetDataLayerRuntimeStateByLabel instead" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayerSubsystem, nullptr, "SetDataLayerStateByLabel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::DataLayerSubsystem_eventSetDataLayerStateByLabel_Parms), Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataLayerSubsystem);
	UClass* Z_Construct_UClass_UDataLayerSubsystem_NoRegister()
	{
		return UDataLayerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UDataLayerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDataLayerRuntimeStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDataLayerRuntimeStateChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataLayerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataLayerSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataLayerSubsystem_GetActiveDataLayerNames, "GetActiveDataLayerNames" }, // 2800310437
		{ &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayer, "GetDataLayer" }, // 2917757458
		{ &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeState, "GetDataLayerEffectiveRuntimeState" }, // 3494101528
		{ &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerEffectiveRuntimeStateByLabel, "GetDataLayerEffectiveRuntimeStateByLabel" }, // 4202544357
		{ &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromLabel, "GetDataLayerFromLabel" }, // 3974994713
		{ &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerFromName, "GetDataLayerFromName" }, // 1319356463
		{ &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeState, "GetDataLayerRuntimeState" }, // 606998323
		{ &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerRuntimeStateByLabel, "GetDataLayerRuntimeStateByLabel" }, // 1054728906
		{ &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerState, "GetDataLayerState" }, // 2079505000
		{ &Z_Construct_UFunction_UDataLayerSubsystem_GetDataLayerStateByLabel, "GetDataLayerStateByLabel" }, // 2094112642
		{ &Z_Construct_UFunction_UDataLayerSubsystem_GetLoadedDataLayerNames, "GetLoadedDataLayerNames" }, // 3490749720
		{ &Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeState, "SetDataLayerRuntimeState" }, // 3520022848
		{ &Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerRuntimeStateByLabel, "SetDataLayerRuntimeStateByLabel" }, // 2108548814
		{ &Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerState, "SetDataLayerState" }, // 1846502152
		{ &Z_Construct_UFunction_UDataLayerSubsystem_SetDataLayerStateByLabel, "SetDataLayerStateByLabel" }, // 2947243197
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/DataLayer/DataLayerSubsystem.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerSubsystem_Statics::NewProp_OnDataLayerRuntimeStateChanged_MetaData[] = {
		{ "Comment", "/** Called when a Data Layer changes state. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerSubsystem.h" },
		{ "ToolTip", "Called when a Data Layer changes state." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDataLayerSubsystem_Statics::NewProp_OnDataLayerRuntimeStateChanged = { "OnDataLayerRuntimeStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataLayerSubsystem, OnDataLayerRuntimeStateChanged), Z_Construct_UDelegateFunction_Engine_OnDataLayerRuntimeStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDataLayerSubsystem_Statics::NewProp_OnDataLayerRuntimeStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerSubsystem_Statics::NewProp_OnDataLayerRuntimeStateChanged_MetaData)) }; // 2033171041
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataLayerSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayerSubsystem_Statics::NewProp_OnDataLayerRuntimeStateChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataLayerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataLayerSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataLayerSubsystem_Statics::ClassParams = {
		&UDataLayerSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDataLayerSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataLayerSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataLayerSubsystem()
	{
		if (!Z_Registration_Info_UClass_UDataLayerSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataLayerSubsystem.OuterSingleton, Z_Construct_UClass_UDataLayerSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataLayerSubsystem.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDataLayerSubsystem>()
	{
		return UDataLayerSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataLayerSubsystem);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataLayerSubsystem, UDataLayerSubsystem::StaticClass, TEXT("UDataLayerSubsystem"), &Z_Registration_Info_UClass_UDataLayerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataLayerSubsystem), 3245138024U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h_985794740(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
