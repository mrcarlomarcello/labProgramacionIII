// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/WorldPartition/DataLayer/DataLayer.h"
#include "Engine/Public/WorldPartition/DataLayer/WorldDataLayers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataLayer() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDataLayerState();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDataLayerRuntimeState();
	ENGINE_API UClass* Z_Construct_UClass_UDataLayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataLayer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorDataLayer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataLayerState;
	static UEnum* EDataLayerState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDataLayerState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDataLayerState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDataLayerState, Z_Construct_UPackage__Script_Engine(), TEXT("EDataLayerState"));
		}
		return Z_Registration_Info_UEnum_EDataLayerState.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EDataLayerState>()
	{
		return EDataLayerState_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EDataLayerState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EDataLayerState_Statics::Enumerators[] = {
		{ "EDataLayerState::Unloaded", (int64)EDataLayerState::Unloaded },
		{ "EDataLayerState::Loaded", (int64)EDataLayerState::Loaded },
		{ "EDataLayerState::Activated", (int64)EDataLayerState::Activated },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EDataLayerState_Statics::Enum_MetaDataParams[] = {
		{ "Activated.Name", "EDataLayerState::Activated" },
		{ "BlueprintType", "true" },
		{ "Loaded.Name", "EDataLayerState::Loaded" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
		{ "ScriptName", "DataLayerStateType" },
		{ "Unloaded.Name", "EDataLayerState::Unloaded" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EDataLayerState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EDataLayerState",
		"EDataLayerState",
		Z_Construct_UEnum_Engine_EDataLayerState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDataLayerState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EDataLayerState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDataLayerState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EDataLayerState()
	{
		if (!Z_Registration_Info_UEnum_EDataLayerState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataLayerState.InnerSingleton, Z_Construct_UEnum_Engine_EDataLayerState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDataLayerState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataLayerRuntimeState;
	static UEnum* EDataLayerRuntimeState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDataLayerRuntimeState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDataLayerRuntimeState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDataLayerRuntimeState, Z_Construct_UPackage__Script_Engine(), TEXT("EDataLayerRuntimeState"));
		}
		return Z_Registration_Info_UEnum_EDataLayerRuntimeState.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EDataLayerRuntimeState>()
	{
		return EDataLayerRuntimeState_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EDataLayerRuntimeState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EDataLayerRuntimeState_Statics::Enumerators[] = {
		{ "EDataLayerRuntimeState::Unloaded", (int64)EDataLayerRuntimeState::Unloaded },
		{ "EDataLayerRuntimeState::Loaded", (int64)EDataLayerRuntimeState::Loaded },
		{ "EDataLayerRuntimeState::Activated", (int64)EDataLayerRuntimeState::Activated },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EDataLayerRuntimeState_Statics::Enum_MetaDataParams[] = {
		{ "Activated.Name", "EDataLayerRuntimeState::Activated" },
		{ "BlueprintType", "true" },
		{ "Loaded.Name", "EDataLayerRuntimeState::Loaded" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
		{ "Unloaded.Name", "EDataLayerRuntimeState::Unloaded" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EDataLayerRuntimeState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EDataLayerRuntimeState",
		"EDataLayerRuntimeState",
		Z_Construct_UEnum_Engine_EDataLayerRuntimeState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDataLayerRuntimeState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EDataLayerRuntimeState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDataLayerRuntimeState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EDataLayerRuntimeState()
	{
		if (!Z_Registration_Info_UEnum_EDataLayerRuntimeState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataLayerRuntimeState.InnerSingleton, Z_Construct_UEnum_Engine_EDataLayerRuntimeState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDataLayerRuntimeState.InnerSingleton;
	}
	DEFINE_FUNCTION(UDataLayer::execGetInitialState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDataLayerState*)Z_Param__Result=P_THIS->GetInitialState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayer::execIsInitiallyActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInitiallyActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayer::execIsDynamicallyLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDynamicallyLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayer::execGetDebugColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=P_THIS->GetDebugColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayer::execGetInitialRuntimeState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDataLayerRuntimeState*)Z_Param__Result=P_THIS->GetInitialRuntimeState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayer::execIsRuntime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRuntime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayer::execIsEffectiveVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEffectiveVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayer::execIsVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayer::execIsInitiallyVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInitiallyVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayer::execGetDataLayerLabel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetDataLayerLabel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataLayer::execEquals)
	{
		P_GET_STRUCT_REF(FActorDataLayer,Z_Param_Out_ActorDataLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Equals(Z_Param_Out_ActorDataLayer);
		P_NATIVE_END;
	}
	void UDataLayer::StaticRegisterNativesUDataLayer()
	{
		UClass* Class = UDataLayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Equals", &UDataLayer::execEquals },
			{ "GetDataLayerLabel", &UDataLayer::execGetDataLayerLabel },
			{ "GetDebugColor", &UDataLayer::execGetDebugColor },
			{ "GetInitialRuntimeState", &UDataLayer::execGetInitialRuntimeState },
			{ "GetInitialState", &UDataLayer::execGetInitialState },
			{ "IsDynamicallyLoaded", &UDataLayer::execIsDynamicallyLoaded },
			{ "IsEffectiveVisible", &UDataLayer::execIsEffectiveVisible },
			{ "IsInitiallyActive", &UDataLayer::execIsInitiallyActive },
			{ "IsInitiallyVisible", &UDataLayer::execIsInitiallyVisible },
			{ "IsRuntime", &UDataLayer::execIsRuntime },
			{ "IsVisible", &UDataLayer::execIsVisible },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDataLayer_Equals_Statics
	{
		struct DataLayer_eventEquals_Parms
		{
			FActorDataLayer ActorDataLayer;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorDataLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorDataLayer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayer_Equals_Statics::NewProp_ActorDataLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLayer_Equals_Statics::NewProp_ActorDataLayer = { "ActorDataLayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayer_eventEquals_Parms, ActorDataLayer), Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(Z_Construct_UFunction_UDataLayer_Equals_Statics::NewProp_ActorDataLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayer_Equals_Statics::NewProp_ActorDataLayer_MetaData)) }; // 3962210771
	void Z_Construct_UFunction_UDataLayer_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayer_eventEquals_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayer_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DataLayer_eventEquals_Parms), &Z_Construct_UFunction_UDataLayer_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayer_Equals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayer_Equals_Statics::NewProp_ActorDataLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayer_Equals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayer_Equals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data Layer" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayer_Equals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayer, nullptr, "Equals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayer_Equals_Statics::DataLayer_eventEquals_Parms), Z_Construct_UFunction_UDataLayer_Equals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayer_Equals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayer_Equals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayer_Equals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayer_Equals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayer_Equals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayer_GetDataLayerLabel_Statics
	{
		struct DataLayer_eventGetDataLayerLabel_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataLayer_GetDataLayerLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayer_eventGetDataLayerLabel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayer_GetDataLayerLabel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayer_GetDataLayerLabel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayer_GetDataLayerLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data Layer" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayer_GetDataLayerLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayer, nullptr, "GetDataLayerLabel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayer_GetDataLayerLabel_Statics::DataLayer_eventGetDataLayerLabel_Parms), Z_Construct_UFunction_UDataLayer_GetDataLayerLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayer_GetDataLayerLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayer_GetDataLayerLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayer_GetDataLayerLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayer_GetDataLayerLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayer_GetDataLayerLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayer_GetDebugColor_Statics
	{
		struct DataLayer_eventGetDebugColor_Parms
		{
			FColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataLayer_GetDebugColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayer_eventGetDebugColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayer_GetDebugColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayer_GetDebugColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayer_GetDebugColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Runtime" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayer_GetDebugColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayer, nullptr, "GetDebugColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayer_GetDebugColor_Statics::DataLayer_eventGetDebugColor_Parms), Z_Construct_UFunction_UDataLayer_GetDebugColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayer_GetDebugColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayer_GetDebugColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayer_GetDebugColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayer_GetDebugColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayer_GetDebugColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayer_GetInitialRuntimeState_Statics
	{
		struct DataLayer_eventGetInitialRuntimeState_Parms
		{
			EDataLayerRuntimeState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayer_GetInitialRuntimeState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayer_GetInitialRuntimeState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayer_eventGetInitialRuntimeState_Parms, ReturnValue), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(nullptr, 0) }; // 3247838434
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayer_GetInitialRuntimeState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayer_GetInitialRuntimeState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayer_GetInitialRuntimeState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayer_GetInitialRuntimeState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Runtime" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayer_GetInitialRuntimeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayer, nullptr, "GetInitialRuntimeState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayer_GetInitialRuntimeState_Statics::DataLayer_eventGetInitialRuntimeState_Parms), Z_Construct_UFunction_UDataLayer_GetInitialRuntimeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayer_GetInitialRuntimeState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayer_GetInitialRuntimeState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayer_GetInitialRuntimeState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayer_GetInitialRuntimeState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayer_GetInitialRuntimeState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayer_GetInitialState_Statics
	{
		struct DataLayer_eventGetInitialState_Parms
		{
			EDataLayerState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataLayer_GetInitialState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataLayer_GetInitialState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DataLayer_eventGetInitialState_Parms, ReturnValue), Z_Construct_UEnum_Engine_EDataLayerState, METADATA_PARAMS(nullptr, 0) }; // 4266268046
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayer_GetInitialState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayer_GetInitialState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayer_GetInitialState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayer_GetInitialState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Runtime" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetInitialRuntimeState instead" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayer_GetInitialState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayer, nullptr, "GetInitialState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayer_GetInitialState_Statics::DataLayer_eventGetInitialState_Parms), Z_Construct_UFunction_UDataLayer_GetInitialState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayer_GetInitialState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayer_GetInitialState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayer_GetInitialState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayer_GetInitialState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayer_GetInitialState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayer_IsDynamicallyLoaded_Statics
	{
		struct DataLayer_eventIsDynamicallyLoaded_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDataLayer_IsDynamicallyLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayer_eventIsDynamicallyLoaded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayer_IsDynamicallyLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DataLayer_eventIsDynamicallyLoaded_Parms), &Z_Construct_UFunction_UDataLayer_IsDynamicallyLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayer_IsDynamicallyLoaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayer_IsDynamicallyLoaded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayer_IsDynamicallyLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Runtime" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use IsRuntime instead" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayer_IsDynamicallyLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayer, nullptr, "IsDynamicallyLoaded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayer_IsDynamicallyLoaded_Statics::DataLayer_eventIsDynamicallyLoaded_Parms), Z_Construct_UFunction_UDataLayer_IsDynamicallyLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayer_IsDynamicallyLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayer_IsDynamicallyLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayer_IsDynamicallyLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayer_IsDynamicallyLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayer_IsDynamicallyLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayer_IsEffectiveVisible_Statics
	{
		struct DataLayer_eventIsEffectiveVisible_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDataLayer_IsEffectiveVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayer_eventIsEffectiveVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayer_IsEffectiveVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DataLayer_eventIsEffectiveVisible_Parms), &Z_Construct_UFunction_UDataLayer_IsEffectiveVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayer_IsEffectiveVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayer_IsEffectiveVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayer_IsEffectiveVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Editor" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayer_IsEffectiveVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayer, nullptr, "IsEffectiveVisible", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayer_IsEffectiveVisible_Statics::DataLayer_eventIsEffectiveVisible_Parms), Z_Construct_UFunction_UDataLayer_IsEffectiveVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayer_IsEffectiveVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayer_IsEffectiveVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayer_IsEffectiveVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayer_IsEffectiveVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayer_IsEffectiveVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayer_IsInitiallyActive_Statics
	{
		struct DataLayer_eventIsInitiallyActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDataLayer_IsInitiallyActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayer_eventIsInitiallyActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayer_IsInitiallyActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DataLayer_eventIsInitiallyActive_Parms), &Z_Construct_UFunction_UDataLayer_IsInitiallyActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayer_IsInitiallyActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayer_IsInitiallyActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayer_IsInitiallyActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Runtime" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetInitialRuntimeState instead" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayer_IsInitiallyActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayer, nullptr, "IsInitiallyActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayer_IsInitiallyActive_Statics::DataLayer_eventIsInitiallyActive_Parms), Z_Construct_UFunction_UDataLayer_IsInitiallyActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayer_IsInitiallyActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayer_IsInitiallyActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayer_IsInitiallyActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayer_IsInitiallyActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayer_IsInitiallyActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayer_IsInitiallyVisible_Statics
	{
		struct DataLayer_eventIsInitiallyVisible_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDataLayer_IsInitiallyVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayer_eventIsInitiallyVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayer_IsInitiallyVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DataLayer_eventIsInitiallyVisible_Parms), &Z_Construct_UFunction_UDataLayer_IsInitiallyVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayer_IsInitiallyVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayer_IsInitiallyVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayer_IsInitiallyVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Editor" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayer_IsInitiallyVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayer, nullptr, "IsInitiallyVisible", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayer_IsInitiallyVisible_Statics::DataLayer_eventIsInitiallyVisible_Parms), Z_Construct_UFunction_UDataLayer_IsInitiallyVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayer_IsInitiallyVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayer_IsInitiallyVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayer_IsInitiallyVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayer_IsInitiallyVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayer_IsInitiallyVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayer_IsRuntime_Statics
	{
		struct DataLayer_eventIsRuntime_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDataLayer_IsRuntime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayer_eventIsRuntime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayer_IsRuntime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DataLayer_eventIsRuntime_Parms), &Z_Construct_UFunction_UDataLayer_IsRuntime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayer_IsRuntime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayer_IsRuntime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayer_IsRuntime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Runtime" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayer_IsRuntime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayer, nullptr, "IsRuntime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayer_IsRuntime_Statics::DataLayer_eventIsRuntime_Parms), Z_Construct_UFunction_UDataLayer_IsRuntime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayer_IsRuntime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayer_IsRuntime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayer_IsRuntime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayer_IsRuntime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayer_IsRuntime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataLayer_IsVisible_Statics
	{
		struct DataLayer_eventIsVisible_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDataLayer_IsVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataLayer_eventIsVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataLayer_IsVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DataLayer_eventIsVisible_Parms), &Z_Construct_UFunction_UDataLayer_IsVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataLayer_IsVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataLayer_IsVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataLayer_IsVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Editor" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataLayer_IsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataLayer, nullptr, "IsVisible", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataLayer_IsVisible_Statics::DataLayer_eventIsVisible_Parms), Z_Construct_UFunction_UDataLayer_IsVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayer_IsVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataLayer_IsVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataLayer_IsVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataLayer_IsVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataLayer_IsVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataLayer);
	UClass* Z_Construct_UClass_UDataLayer_NoRegister()
	{
		return UDataLayer::StaticClass();
	}
	struct Z_Construct_UClass_UDataLayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitiallyActive_MetaData[];
#endif
		static void NewProp_bIsInitiallyActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitiallyActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[];
#endif
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitiallyVisible_MetaData[];
#endif
		static void NewProp_bIsInitiallyVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitiallyVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitiallyLoadedInEditor_MetaData[];
#endif
		static void NewProp_bIsInitiallyLoadedInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitiallyLoadedInEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoadedInEditor_MetaData[];
#endif
		static void NewProp_bIsLoadedInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoadedInEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoadedInEditorChangedByUserOperation_MetaData[];
#endif
		static void NewProp_bIsLoadedInEditorChangedByUserOperation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoadedInEditorChangedByUserOperation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLocked_MetaData[];
#endif
		static void NewProp_bIsLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocked;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayerLabel_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DataLayerLabel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRuntime_MetaData[];
#endif
		static void NewProp_bIsRuntime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRuntime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InitialRuntimeState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialRuntimeState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InitialRuntimeState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Parent;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataLayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataLayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataLayer_Equals, "Equals" }, // 3240291899
		{ &Z_Construct_UFunction_UDataLayer_GetDataLayerLabel, "GetDataLayerLabel" }, // 1078580843
		{ &Z_Construct_UFunction_UDataLayer_GetDebugColor, "GetDebugColor" }, // 448516890
		{ &Z_Construct_UFunction_UDataLayer_GetInitialRuntimeState, "GetInitialRuntimeState" }, // 3536597776
		{ &Z_Construct_UFunction_UDataLayer_GetInitialState, "GetInitialState" }, // 365766171
		{ &Z_Construct_UFunction_UDataLayer_IsDynamicallyLoaded, "IsDynamicallyLoaded" }, // 1826584283
		{ &Z_Construct_UFunction_UDataLayer_IsEffectiveVisible, "IsEffectiveVisible" }, // 1043757937
		{ &Z_Construct_UFunction_UDataLayer_IsInitiallyActive, "IsInitiallyActive" }, // 12970897
		{ &Z_Construct_UFunction_UDataLayer_IsInitiallyVisible, "IsInitiallyVisible" }, // 409836344
		{ &Z_Construct_UFunction_UDataLayer_IsRuntime, "IsRuntime" }, // 1414153395
		{ &Z_Construct_UFunction_UDataLayer_IsVisible, "IsVisible" }, // 1913300913
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayer_Statics::Class_MetaDataParams[] = {
		{ "AutoCollapseCategories", "Data Layer|Advanced" },
		{ "AutoExpandCategories", "Data Layer|Editor Data Layer|Advanced|Runtime" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "WorldPartition/DataLayer/DataLayer.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsInitiallyActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
#endif
	void Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsInitiallyActive_SetBit(void* Obj)
	{
		((UDataLayer*)Obj)->bIsInitiallyActive_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsInitiallyActive = { "bIsInitiallyActive", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDataLayer), &Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsInitiallyActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsInitiallyActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsInitiallyActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsVisible_MetaData[] = {
		{ "Comment", "/** Whether actors associated with the DataLayer are visible in the viewport */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
		{ "ToolTip", "Whether actors associated with the DataLayer are visible in the viewport" },
	};
#endif
	void Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((UDataLayer*)Obj)->bIsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDataLayer), &Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsInitiallyVisible_MetaData[] = {
		{ "Category", "Data Layer|Editor" },
		{ "Comment", "/** Whether actors associated with the Data Layer should be initially visible in the viewport when loading the map */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
		{ "ToolTip", "Whether actors associated with the Data Layer should be initially visible in the viewport when loading the map" },
	};
#endif
	void Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsInitiallyVisible_SetBit(void* Obj)
	{
		((UDataLayer*)Obj)->bIsInitiallyVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsInitiallyVisible = { "bIsInitiallyVisible", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDataLayer), &Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsInitiallyVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsInitiallyVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsInitiallyVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsInitiallyLoadedInEditor_MetaData[] = {
		{ "Category", "Data Layer|Editor" },
		{ "Comment", "/** Determines the default value of the data layer's loaded state in editor if it hasn't been changed in data layer outliner by the user */" },
		{ "DisplayName", "Is Initially Loaded" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
		{ "ToolTip", "Determines the default value of the data layer's loaded state in editor if it hasn't been changed in data layer outliner by the user" },
	};
#endif
	void Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsInitiallyLoadedInEditor_SetBit(void* Obj)
	{
		((UDataLayer*)Obj)->bIsInitiallyLoadedInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsInitiallyLoadedInEditor = { "bIsInitiallyLoadedInEditor", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDataLayer), &Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsInitiallyLoadedInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsInitiallyLoadedInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsInitiallyLoadedInEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsLoadedInEditor_MetaData[] = {
		{ "Comment", "/** Wheter the data layer is loaded in editor (user setting) */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
		{ "ToolTip", "Wheter the data layer is loaded in editor (user setting)" },
	};
#endif
	void Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsLoadedInEditor_SetBit(void* Obj)
	{
		((UDataLayer*)Obj)->bIsLoadedInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsLoadedInEditor = { "bIsLoadedInEditor", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDataLayer), &Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsLoadedInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsLoadedInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsLoadedInEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsLoadedInEditorChangedByUserOperation_MetaData[] = {
		{ "Comment", "/** Whether this data layer editor visibility was changed by a user operation */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
		{ "ToolTip", "Whether this data layer editor visibility was changed by a user operation" },
	};
#endif
	void Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsLoadedInEditorChangedByUserOperation_SetBit(void* Obj)
	{
		((UDataLayer*)Obj)->bIsLoadedInEditorChangedByUserOperation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsLoadedInEditorChangedByUserOperation = { "bIsLoadedInEditorChangedByUserOperation", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDataLayer), &Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsLoadedInEditorChangedByUserOperation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsLoadedInEditorChangedByUserOperation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsLoadedInEditorChangedByUserOperation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsLocked_MetaData[] = {
		{ "Comment", "/** Whether this data layer is locked, which means the user can't change actors assignation, remove or rename it */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
		{ "ToolTip", "Whether this data layer is locked, which means the user can't change actors assignation, remove or rename it" },
	};
#endif
	void Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsLocked_SetBit(void* Obj)
	{
		((UDataLayer*)Obj)->bIsLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsLocked = { "bIsLocked", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDataLayer), &Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsLocked_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayer_Statics::NewProp_DataLayerLabel_MetaData[] = {
		{ "Comment", "/** The display name of the Data Layer */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
		{ "ToolTip", "The display name of the Data Layer" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDataLayer_Statics::NewProp_DataLayerLabel = { "DataLayerLabel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataLayer, DataLayerLabel), METADATA_PARAMS(Z_Construct_UClass_UDataLayer_Statics::NewProp_DataLayerLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayer_Statics::NewProp_DataLayerLabel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsRuntime_MetaData[] = {
		{ "Category", "Data Layer|Advanced" },
		{ "Comment", "/** Whether the Data Layer affects actor runtime loading */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
		{ "ToolTip", "Whether the Data Layer affects actor runtime loading" },
	};
#endif
	void Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsRuntime_SetBit(void* Obj)
	{
		((UDataLayer*)Obj)->bIsRuntime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsRuntime = { "bIsRuntime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDataLayer), &Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsRuntime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsRuntime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsRuntime_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDataLayer_Statics::NewProp_InitialRuntimeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayer_Statics::NewProp_InitialRuntimeState_MetaData[] = {
		{ "Category", "Data Layer|Advanced|Runtime" },
		{ "EditCondition", "bIsRuntime" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDataLayer_Statics::NewProp_InitialRuntimeState = { "InitialRuntimeState", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataLayer, InitialRuntimeState), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(Z_Construct_UClass_UDataLayer_Statics::NewProp_InitialRuntimeState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayer_Statics::NewProp_InitialRuntimeState_MetaData)) }; // 3247838434
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayer_Statics::NewProp_DebugColor_MetaData[] = {
		{ "Category", "Data Layer|Advanced|Runtime" },
		{ "EditCondition", "bIsRuntime" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataLayer_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataLayer, DebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDataLayer_Statics::NewProp_DebugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayer_Statics::NewProp_DebugColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayer_Statics::NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataLayer_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataLayer, Parent), Z_Construct_UClass_UDataLayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataLayer_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayer_Statics::NewProp_Parent_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataLayer_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDataLayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayer_Statics::NewProp_Children_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataLayer_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDataLayer, Children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDataLayer_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayer_Statics::NewProp_Children_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataLayer_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsInitiallyActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsInitiallyVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsInitiallyLoadedInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsLoadedInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsLoadedInEditorChangedByUserOperation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsLocked,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayer_Statics::NewProp_DataLayerLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayer_Statics::NewProp_bIsRuntime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayer_Statics::NewProp_InitialRuntimeState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayer_Statics::NewProp_InitialRuntimeState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayer_Statics::NewProp_DebugColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayer_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayer_Statics::NewProp_Children_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataLayer_Statics::NewProp_Children,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataLayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataLayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataLayer_Statics::ClassParams = {
		&UDataLayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDataLayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayer_Statics::PropPointers),
		0,
		0x001004A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataLayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataLayer()
	{
		if (!Z_Registration_Info_UClass_UDataLayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataLayer.OuterSingleton, Z_Construct_UClass_UDataLayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataLayer.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDataLayer>()
	{
		return UDataLayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataLayer);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_Statics::EnumInfo[] = {
		{ EDataLayerState_StaticEnum, TEXT("EDataLayerState"), &Z_Registration_Info_UEnum_EDataLayerState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4266268046U) },
		{ EDataLayerRuntimeState_StaticEnum, TEXT("EDataLayerRuntimeState"), &Z_Registration_Info_UEnum_EDataLayerRuntimeState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3247838434U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataLayer, UDataLayer::StaticClass, TEXT("UDataLayer"), &Z_Registration_Info_UClass_UDataLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataLayer), 2045056430U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_4253225574(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
