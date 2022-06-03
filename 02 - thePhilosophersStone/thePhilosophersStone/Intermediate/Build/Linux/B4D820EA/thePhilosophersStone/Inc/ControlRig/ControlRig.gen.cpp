// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/ControlRig.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRig() {}
// Cross Module References
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CONTROLRIG_API UClass* Z_Construct_UClass_URigHierarchy_NoRegister();
	RIGVM_API UClass* Z_Construct_UClass_URigVM_NoRegister();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigExecutionType();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMRuntimeSettings();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlElementCustomization();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigShapeLibrary_NoRegister();
	PROPERTYPATH_API UScriptStruct* Z_Construct_UScriptStruct_FCachedPropertyPath();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigDrawContainer();
	ANIMATIONCORE_API UClass* Z_Construct_UClass_UAnimationDataSourceRegistry_NoRegister();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNodeMappingProviderInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UControlRig::execSetInteractionRigClass)
	{
		P_GET_OBJECT(UClass,Z_Param_InInteractionRigClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteractionRigClass(Z_Param_InInteractionRigClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execGetInteractionRigClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UControlRig> *)Z_Param__Result=P_THIS->GetInteractionRigClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execSetInteractionRig)
	{
		P_GET_OBJECT(UControlRig,Z_Param_InInteractionRig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteractionRig(Z_Param_InInteractionRig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execGetInteractionRig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UControlRig**)Z_Param__Result=P_THIS->GetInteractionRig();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execIsControlSelected)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InControlName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsControlSelected(Z_Param_Out_InControlName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execCurrentControlSelection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->CurrentControlSelection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execClearControlSelection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ClearControlSelection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execSelectControl)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InControlName);
		P_GET_UBOOL(Z_Param_bSelect);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectControl(Z_Param_Out_InControlName,Z_Param_bSelect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execGetVM)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVM**)Z_Param__Result=P_THIS->GetVM();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execRequestSetup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestSetup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execRequestInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestInit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execExecute)
	{
		P_GET_ENUM(EControlRigState,Z_Param_State);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InEventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Execute(EControlRigState(Z_Param_State),Z_Param_Out_InEventName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execGetHierarchy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigHierarchy**)Z_Param__Result=P_THIS->GetHierarchy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execGetSupportedEvents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetSupportedEvents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execSupportsEvent)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InEventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SupportsEvent(Z_Param_Out_InEventName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execSetVariableFromString)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InVariableName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetVariableFromString(Z_Param_Out_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execGetVariableAsString)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InVariableName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetVariableAsString(Z_Param_Out_InVariableName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execGetVariableType)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InVariableName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetVariableType(Z_Param_Out_InVariableName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execGetScriptAccessibleVariables)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetScriptAccessibleVariables();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execGetCurrentFramesPerSecond)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentFramesPerSecond();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execSetFramesPerSecond)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFramesPerSecond);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFramesPerSecond(Z_Param_InFramesPerSecond);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execSetAbsoluteAndDeltaTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InAbsoluteTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAbsoluteAndDeltaTime(Z_Param_InAbsoluteTime,Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execSetAbsoluteTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InAbsoluteTime);
		P_GET_UBOOL(Z_Param_InSetDeltaTimeZero);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAbsoluteTime(Z_Param_InAbsoluteTime,Z_Param_InSetDeltaTimeZero);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execSetDeltaTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDeltaTime(Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execGetAbsoluteTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAbsoluteTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execCanExecute)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanExecute();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execFindControlRigs)
	{
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_GET_OBJECT(UClass,Z_Param_OptionalClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UControlRig*>*)Z_Param__Result=UControlRig::FindControlRigs(Z_Param_Outer,Z_Param_OptionalClass);
		P_NATIVE_END;
	}
	void UControlRig::StaticRegisterNativesUControlRig()
	{
		UClass* Class = UControlRig::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanExecute", &UControlRig::execCanExecute },
			{ "ClearControlSelection", &UControlRig::execClearControlSelection },
			{ "CurrentControlSelection", &UControlRig::execCurrentControlSelection },
			{ "Execute", &UControlRig::execExecute },
			{ "FindControlRigs", &UControlRig::execFindControlRigs },
			{ "GetAbsoluteTime", &UControlRig::execGetAbsoluteTime },
			{ "GetCurrentFramesPerSecond", &UControlRig::execGetCurrentFramesPerSecond },
			{ "GetHierarchy", &UControlRig::execGetHierarchy },
			{ "GetInteractionRig", &UControlRig::execGetInteractionRig },
			{ "GetInteractionRigClass", &UControlRig::execGetInteractionRigClass },
			{ "GetScriptAccessibleVariables", &UControlRig::execGetScriptAccessibleVariables },
			{ "GetSupportedEvents", &UControlRig::execGetSupportedEvents },
			{ "GetVariableAsString", &UControlRig::execGetVariableAsString },
			{ "GetVariableType", &UControlRig::execGetVariableType },
			{ "GetVM", &UControlRig::execGetVM },
			{ "IsControlSelected", &UControlRig::execIsControlSelected },
			{ "RequestInit", &UControlRig::execRequestInit },
			{ "RequestSetup", &UControlRig::execRequestSetup },
			{ "SelectControl", &UControlRig::execSelectControl },
			{ "SetAbsoluteAndDeltaTime", &UControlRig::execSetAbsoluteAndDeltaTime },
			{ "SetAbsoluteTime", &UControlRig::execSetAbsoluteTime },
			{ "SetDeltaTime", &UControlRig::execSetDeltaTime },
			{ "SetFramesPerSecond", &UControlRig::execSetFramesPerSecond },
			{ "SetInteractionRig", &UControlRig::execSetInteractionRig },
			{ "SetInteractionRigClass", &UControlRig::execSetInteractionRigClass },
			{ "SetVariableFromString", &UControlRig::execSetVariableFromString },
			{ "SupportsEvent", &UControlRig::execSupportsEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UControlRig_CanExecute_Statics
	{
		struct ControlRig_eventCanExecute_Parms
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
	void Z_Construct_UFunction_UControlRig_CanExecute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRig_eventCanExecute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRig_CanExecute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ControlRig_eventCanExecute_Parms), &Z_Construct_UFunction_UControlRig_CanExecute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_CanExecute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_CanExecute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_CanExecute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "Comment", "/** Is valid for execution */" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "Is valid for execution" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_CanExecute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "CanExecute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_CanExecute_Statics::ControlRig_eventCanExecute_Parms), Z_Construct_UFunction_UControlRig_CanExecute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_CanExecute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_CanExecute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_CanExecute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_CanExecute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_CanExecute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics
	{
		struct ControlRig_eventClearControlSelection_Parms
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
	void Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRig_eventClearControlSelection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ControlRig_eventClearControlSelection_Parms), &Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "ClearControlSelection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::ControlRig_eventClearControlSelection_Parms), Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_ClearControlSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics
	{
		struct ControlRig_eventCurrentControlSelection_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ControlRig_eventCurrentControlSelection_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "CurrentControlSelection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::ControlRig_eventCurrentControlSelection_Parms), Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_CurrentControlSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_Execute_Statics
	{
		struct ControlRig_eventExecute_Parms
		{
			EControlRigState State;
			FName InEventName;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InEventName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRig_Execute_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_Execute_Statics::NewProp_State_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRig_Execute_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ControlRig_eventExecute_Parms, State), Z_Construct_UEnum_ControlRig_EControlRigState, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_Execute_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_Execute_Statics::NewProp_State_MetaData)) }; // 2776213756
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_Execute_Statics::NewProp_InEventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRig_Execute_Statics::NewProp_InEventName = { "InEventName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ControlRig_eventExecute_Parms, InEventName), METADATA_PARAMS(Z_Construct_UFunction_UControlRig_Execute_Statics::NewProp_InEventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_Execute_Statics::NewProp_InEventName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_Execute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_Execute_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_Execute_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_Execute_Statics::NewProp_InEventName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_Execute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "Comment", "/** Execute */" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "Execute" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "Execute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_Execute_Statics::ControlRig_eventExecute_Parms), Z_Construct_UFunction_UControlRig_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_Execute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_Execute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_Execute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_Execute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_Execute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_FindControlRigs_Statics
	{
		struct ControlRig_eventFindControlRigs_Parms
		{
			UObject* Outer;
			TSubclassOf<UControlRig>  OptionalClass;
			TArray<UControlRig*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Outer;
		static const UECodeGen_Private::FClassPropertyParams NewProp_OptionalClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ControlRig_eventFindControlRigs_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::NewProp_OptionalClass = { "OptionalClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ControlRig_eventFindControlRigs_Parms, OptionalClass), Z_Construct_UClass_UControlRig_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ControlRig_eventFindControlRigs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::NewProp_Outer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::NewProp_OptionalClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "FindControlRigs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::ControlRig_eventFindControlRigs_Parms), Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_FindControlRigs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_GetAbsoluteTime_Statics
	{
		struct ControlRig_eventGetAbsoluteTime_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UControlRig_GetAbsoluteTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ControlRig_eventGetAbsoluteTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_GetAbsoluteTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_GetAbsoluteTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_GetAbsoluteTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "Comment", "/** Gets the current absolute time */" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "Gets the current absolute time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_GetAbsoluteTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "GetAbsoluteTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_GetAbsoluteTime_Statics::ControlRig_eventGetAbsoluteTime_Parms), Z_Construct_UFunction_UControlRig_GetAbsoluteTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetAbsoluteTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_GetAbsoluteTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetAbsoluteTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_GetAbsoluteTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_GetAbsoluteTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_GetCurrentFramesPerSecond_Statics
	{
		struct ControlRig_eventGetCurrentFramesPerSecond_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UControlRig_GetCurrentFramesPerSecond_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ControlRig_eventGetCurrentFramesPerSecond_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_GetCurrentFramesPerSecond_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_GetCurrentFramesPerSecond_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_GetCurrentFramesPerSecond_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "Comment", "/** Returns the current frames per second (this may change over time) */" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "Returns the current frames per second (this may change over time)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_GetCurrentFramesPerSecond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "GetCurrentFramesPerSecond", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_GetCurrentFramesPerSecond_Statics::ControlRig_eventGetCurrentFramesPerSecond_Parms), Z_Construct_UFunction_UControlRig_GetCurrentFramesPerSecond_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetCurrentFramesPerSecond_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_GetCurrentFramesPerSecond_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetCurrentFramesPerSecond_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_GetCurrentFramesPerSecond()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_GetCurrentFramesPerSecond_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_GetHierarchy_Statics
	{
		struct ControlRig_eventGetHierarchy_Parms
		{
			URigHierarchy* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ControlRig_eventGetHierarchy_Parms, ReturnValue), Z_Construct_UClass_URigHierarchy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "GetHierarchy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::ControlRig_eventGetHierarchy_Parms), Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_GetHierarchy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics
	{
		struct ControlRig_eventGetInteractionRig_Parms
		{
			UControlRig* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ControlRig_eventGetInteractionRig_Parms, ReturnValue), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "GetInteractionRig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::ControlRig_eventGetInteractionRig_Parms), Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_GetInteractionRig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics
	{
		struct ControlRig_eventGetInteractionRigClass_Parms
		{
			TSubclassOf<UControlRig>  ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ControlRig_eventGetInteractionRigClass_Parms, ReturnValue), Z_Construct_UClass_UControlRig_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "GetInteractionRigClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::ControlRig_eventGetInteractionRigClass_Parms), Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_GetInteractionRigClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_GetScriptAccessibleVariables_Statics
	{
		struct ControlRig_eventGetScriptAccessibleVariables_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRig_GetScriptAccessibleVariables_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRig_GetScriptAccessibleVariables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ControlRig_eventGetScriptAccessibleVariables_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_GetScriptAccessibleVariables_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_GetScriptAccessibleVariables_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_GetScriptAccessibleVariables_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_GetScriptAccessibleVariables_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "Comment", "/** Returns the names of variables accessible in scripting */" },
		{ "DisplayName", "Get Variables" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "Returns the names of variables accessible in scripting" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_GetScriptAccessibleVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "GetScriptAccessibleVariables", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_GetScriptAccessibleVariables_Statics::ControlRig_eventGetScriptAccessibleVariables_Parms), Z_Construct_UFunction_UControlRig_GetScriptAccessibleVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetScriptAccessibleVariables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_GetScriptAccessibleVariables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetScriptAccessibleVariables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_GetScriptAccessibleVariables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_GetScriptAccessibleVariables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_GetSupportedEvents_Statics
	{
		struct ControlRig_eventGetSupportedEvents_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRig_GetSupportedEvents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRig_GetSupportedEvents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ControlRig_eventGetSupportedEvents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_GetSupportedEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_GetSupportedEvents_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_GetSupportedEvents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_GetSupportedEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_GetSupportedEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "GetSupportedEvents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_GetSupportedEvents_Statics::ControlRig_eventGetSupportedEvents_Parms), Z_Construct_UFunction_UControlRig_GetSupportedEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetSupportedEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_GetSupportedEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetSupportedEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_GetSupportedEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_GetSupportedEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_GetVariableAsString_Statics
	{
		struct ControlRig_eventGetVariableAsString_Parms
		{
			FName InVariableName;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_GetVariableAsString_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRig_GetVariableAsString_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ControlRig_eventGetVariableAsString_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UControlRig_GetVariableAsString_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetVariableAsString_Statics::NewProp_InVariableName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UControlRig_GetVariableAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ControlRig_eventGetVariableAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_GetVariableAsString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_GetVariableAsString_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_GetVariableAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_GetVariableAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "Comment", "/** Returns the value of a given variable as a string */" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "Returns the value of a given variable as a string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_GetVariableAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "GetVariableAsString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_GetVariableAsString_Statics::ControlRig_eventGetVariableAsString_Parms), Z_Construct_UFunction_UControlRig_GetVariableAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetVariableAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_GetVariableAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetVariableAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_GetVariableAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_GetVariableAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_GetVariableType_Statics
	{
		struct ControlRig_eventGetVariableType_Parms
		{
			FName InVariableName;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_GetVariableType_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRig_GetVariableType_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ControlRig_eventGetVariableType_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UControlRig_GetVariableType_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetVariableType_Statics::NewProp_InVariableName_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRig_GetVariableType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ControlRig_eventGetVariableType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_GetVariableType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_GetVariableType_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_GetVariableType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_GetVariableType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "Comment", "/** Returns the type of a given variable */" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "Returns the type of a given variable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_GetVariableType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "GetVariableType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_GetVariableType_Statics::ControlRig_eventGetVariableType_Parms), Z_Construct_UFunction_UControlRig_GetVariableType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetVariableType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_GetVariableType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetVariableType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_GetVariableType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_GetVariableType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_GetVM_Statics
	{
		struct ControlRig_eventGetVM_Parms
		{
			URigVM* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRig_GetVM_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ControlRig_eventGetVM_Parms, ReturnValue), Z_Construct_UClass_URigVM_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_GetVM_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_GetVM_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_GetVM_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_GetVM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "GetVM", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_GetVM_Statics::ControlRig_eventGetVM_Parms), Z_Construct_UFunction_UControlRig_GetVM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetVM_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_GetVM_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetVM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_GetVM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_GetVM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_IsControlSelected_Statics
	{
		struct ControlRig_eventIsControlSelected_Parms
		{
			FName InControlName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InControlName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InControlName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::NewProp_InControlName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::NewProp_InControlName = { "InControlName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ControlRig_eventIsControlSelected_Parms, InControlName), METADATA_PARAMS(Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::NewProp_InControlName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::NewProp_InControlName_MetaData)) };
	void Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRig_eventIsControlSelected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ControlRig_eventIsControlSelected_Parms), &Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::NewProp_InControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "IsControlSelected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::ControlRig_eventIsControlSelected_Parms), Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_IsControlSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_RequestInit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_RequestInit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "Comment", "/** Requests to perform an init during the next execution */" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "Requests to perform an init during the next execution" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_RequestInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "RequestInit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_RequestInit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_RequestInit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_RequestInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_RequestInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_RequestSetup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_RequestSetup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "Comment", "/** Requests to perform a setup during the next execution */" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "Requests to perform a setup during the next execution" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_RequestSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "RequestSetup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_RequestSetup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_RequestSetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_RequestSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_RequestSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_SelectControl_Statics
	{
		struct ControlRig_eventSelectControl_Parms
		{
			FName InControlName;
			bool bSelect;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InControlName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InControlName;
		static void NewProp_bSelect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_SelectControl_Statics::NewProp_InControlName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRig_SelectControl_Statics::NewProp_InControlName = { "InControlName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ControlRig_eventSelectControl_Parms, InControlName), METADATA_PARAMS(Z_Construct_UFunction_UControlRig_SelectControl_Statics::NewProp_InControlName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SelectControl_Statics::NewProp_InControlName_MetaData)) };
	void Z_Construct_UFunction_UControlRig_SelectControl_Statics::NewProp_bSelect_SetBit(void* Obj)
	{
		((ControlRig_eventSelectControl_Parms*)Obj)->bSelect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRig_SelectControl_Statics::NewProp_bSelect = { "bSelect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ControlRig_eventSelectControl_Parms), &Z_Construct_UFunction_UControlRig_SelectControl_Statics::NewProp_bSelect_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_SelectControl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_SelectControl_Statics::NewProp_InControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_SelectControl_Statics::NewProp_bSelect,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_SelectControl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "CPP_Default_bSelect", "true" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_SelectControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "SelectControl", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_SelectControl_Statics::ControlRig_eventSelectControl_Parms), Z_Construct_UFunction_UControlRig_SelectControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SelectControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_SelectControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SelectControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_SelectControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_SelectControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_SetAbsoluteAndDeltaTime_Statics
	{
		struct ControlRig_eventSetAbsoluteAndDeltaTime_Parms
		{
			float InAbsoluteTime;
			float InDeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InAbsoluteTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UControlRig_SetAbsoluteAndDeltaTime_Statics::NewProp_InAbsoluteTime = { "InAbsoluteTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ControlRig_eventSetAbsoluteAndDeltaTime_Parms, InAbsoluteTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UControlRig_SetAbsoluteAndDeltaTime_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ControlRig_eventSetAbsoluteAndDeltaTime_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_SetAbsoluteAndDeltaTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_SetAbsoluteAndDeltaTime_Statics::NewProp_InAbsoluteTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_SetAbsoluteAndDeltaTime_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_SetAbsoluteAndDeltaTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "Comment", "/** Set the current absolute and delta times */" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "Set the current absolute and delta times" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_SetAbsoluteAndDeltaTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "SetAbsoluteAndDeltaTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_SetAbsoluteAndDeltaTime_Statics::ControlRig_eventSetAbsoluteAndDeltaTime_Parms), Z_Construct_UFunction_UControlRig_SetAbsoluteAndDeltaTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SetAbsoluteAndDeltaTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_SetAbsoluteAndDeltaTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SetAbsoluteAndDeltaTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_SetAbsoluteAndDeltaTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_SetAbsoluteAndDeltaTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_SetAbsoluteTime_Statics
	{
		struct ControlRig_eventSetAbsoluteTime_Parms
		{
			float InAbsoluteTime;
			bool InSetDeltaTimeZero;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InAbsoluteTime;
		static void NewProp_InSetDeltaTimeZero_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InSetDeltaTimeZero;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UControlRig_SetAbsoluteTime_Statics::NewProp_InAbsoluteTime = { "InAbsoluteTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ControlRig_eventSetAbsoluteTime_Parms, InAbsoluteTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UControlRig_SetAbsoluteTime_Statics::NewProp_InSetDeltaTimeZero_SetBit(void* Obj)
	{
		((ControlRig_eventSetAbsoluteTime_Parms*)Obj)->InSetDeltaTimeZero = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRig_SetAbsoluteTime_Statics::NewProp_InSetDeltaTimeZero = { "InSetDeltaTimeZero", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ControlRig_eventSetAbsoluteTime_Parms), &Z_Construct_UFunction_UControlRig_SetAbsoluteTime_Statics::NewProp_InSetDeltaTimeZero_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_SetAbsoluteTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_SetAbsoluteTime_Statics::NewProp_InAbsoluteTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_SetAbsoluteTime_Statics::NewProp_InSetDeltaTimeZero,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_SetAbsoluteTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "Comment", "/** Set the current absolute time */" },
		{ "CPP_Default_InSetDeltaTimeZero", "false" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "Set the current absolute time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_SetAbsoluteTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "SetAbsoluteTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_SetAbsoluteTime_Statics::ControlRig_eventSetAbsoluteTime_Parms), Z_Construct_UFunction_UControlRig_SetAbsoluteTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SetAbsoluteTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_SetAbsoluteTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SetAbsoluteTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_SetAbsoluteTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_SetAbsoluteTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_SetDeltaTime_Statics
	{
		struct ControlRig_eventSetDeltaTime_Parms
		{
			float InDeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UControlRig_SetDeltaTime_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ControlRig_eventSetDeltaTime_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_SetDeltaTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_SetDeltaTime_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_SetDeltaTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "Comment", "/** Set the current delta time */" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "Set the current delta time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_SetDeltaTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "SetDeltaTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_SetDeltaTime_Statics::ControlRig_eventSetDeltaTime_Parms), Z_Construct_UFunction_UControlRig_SetDeltaTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SetDeltaTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_SetDeltaTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SetDeltaTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_SetDeltaTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_SetDeltaTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_SetFramesPerSecond_Statics
	{
		struct ControlRig_eventSetFramesPerSecond_Parms
		{
			float InFramesPerSecond;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFramesPerSecond;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UControlRig_SetFramesPerSecond_Statics::NewProp_InFramesPerSecond = { "InFramesPerSecond", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ControlRig_eventSetFramesPerSecond_Parms, InFramesPerSecond), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_SetFramesPerSecond_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_SetFramesPerSecond_Statics::NewProp_InFramesPerSecond,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_SetFramesPerSecond_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "Comment", "/** Set the current fps */" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "Set the current fps" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_SetFramesPerSecond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "SetFramesPerSecond", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_SetFramesPerSecond_Statics::ControlRig_eventSetFramesPerSecond_Parms), Z_Construct_UFunction_UControlRig_SetFramesPerSecond_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SetFramesPerSecond_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_SetFramesPerSecond_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SetFramesPerSecond_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_SetFramesPerSecond()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_SetFramesPerSecond_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics
	{
		struct ControlRig_eventSetInteractionRig_Parms
		{
			UControlRig* InInteractionRig;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInteractionRig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::NewProp_InInteractionRig = { "InInteractionRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ControlRig_eventSetInteractionRig_Parms, InInteractionRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::NewProp_InInteractionRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "SetInteractionRig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::ControlRig_eventSetInteractionRig_Parms), Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_SetInteractionRig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics
	{
		struct ControlRig_eventSetInteractionRigClass_Parms
		{
			TSubclassOf<UControlRig>  InInteractionRigClass;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InInteractionRigClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::NewProp_InInteractionRigClass = { "InInteractionRigClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ControlRig_eventSetInteractionRigClass_Parms, InInteractionRigClass), Z_Construct_UClass_UControlRig_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::NewProp_InInteractionRigClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "SetInteractionRigClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::ControlRig_eventSetInteractionRigClass_Parms), Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_SetInteractionRigClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_SetVariableFromString_Statics
	{
		struct ControlRig_eventSetVariableFromString_Parms
		{
			FName InVariableName;
			FString InValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_SetVariableFromString_Statics::NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRig_SetVariableFromString_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ControlRig_eventSetVariableFromString_Parms, InVariableName), METADATA_PARAMS(Z_Construct_UFunction_UControlRig_SetVariableFromString_Statics::NewProp_InVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SetVariableFromString_Statics::NewProp_InVariableName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_SetVariableFromString_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UControlRig_SetVariableFromString_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ControlRig_eventSetVariableFromString_Parms, InValue), METADATA_PARAMS(Z_Construct_UFunction_UControlRig_SetVariableFromString_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SetVariableFromString_Statics::NewProp_InValue_MetaData)) };
	void Z_Construct_UFunction_UControlRig_SetVariableFromString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRig_eventSetVariableFromString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRig_SetVariableFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ControlRig_eventSetVariableFromString_Parms), &Z_Construct_UFunction_UControlRig_SetVariableFromString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_SetVariableFromString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_SetVariableFromString_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_SetVariableFromString_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_SetVariableFromString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_SetVariableFromString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "Comment", "/** Returns the value of a given variable as a string */" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "Returns the value of a given variable as a string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_SetVariableFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "SetVariableFromString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_SetVariableFromString_Statics::ControlRig_eventSetVariableFromString_Parms), Z_Construct_UFunction_UControlRig_SetVariableFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SetVariableFromString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_SetVariableFromString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SetVariableFromString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_SetVariableFromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_SetVariableFromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_SupportsEvent_Statics
	{
		struct ControlRig_eventSupportsEvent_Parms
		{
			FName InEventName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InEventName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_SupportsEvent_Statics::NewProp_InEventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRig_SupportsEvent_Statics::NewProp_InEventName = { "InEventName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ControlRig_eventSupportsEvent_Parms, InEventName), METADATA_PARAMS(Z_Construct_UFunction_UControlRig_SupportsEvent_Statics::NewProp_InEventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SupportsEvent_Statics::NewProp_InEventName_MetaData)) };
	void Z_Construct_UFunction_UControlRig_SupportsEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRig_eventSupportsEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRig_SupportsEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ControlRig_eventSupportsEvent_Parms), &Z_Construct_UFunction_UControlRig_SupportsEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_SupportsEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_SupportsEvent_Statics::NewProp_InEventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_SupportsEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_SupportsEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_SupportsEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "SupportsEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_SupportsEvent_Statics::ControlRig_eventSupportsEvent_Parms), Z_Construct_UFunction_UControlRig_SupportsEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SupportsEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_SupportsEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SupportsEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_SupportsEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_SupportsEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRig);
	UClass* Z_Construct_UClass_UControlRig_NoRegister()
	{
		return UControlRig::StaticClass();
	}
	struct Z_Construct_UClass_UControlRig_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExecutionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecutionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VMRuntimeSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VMRuntimeSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlCustomizations_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlCustomizations_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlCustomizations_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ControlCustomizations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VM_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicHierarchy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynamicHierarchy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GizmoLibrary;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ShapeLibraries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeLibraries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ShapeLibraries;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputProperties_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputProperties_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputProperties_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InputProperties;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputProperties_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutputProperties_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputProperties_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OutputProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DrawContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataSourceRegistry_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataSourceRegistry;
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventQueue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventQueue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EventQueue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Influences_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Influences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionRig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InteractionRig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionRigClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InteractionRigClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetUserData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VMSnapshotBeforeExecution_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VMSnapshotBeforeExecution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInDebugMode_MetaData[];
#endif
		static void NewProp_bIsInDebugMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInDebugMode;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UControlRig_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UControlRig_CanExecute, "CanExecute" }, // 3068495921
		{ &Z_Construct_UFunction_UControlRig_ClearControlSelection, "ClearControlSelection" }, // 1963032934
		{ &Z_Construct_UFunction_UControlRig_CurrentControlSelection, "CurrentControlSelection" }, // 3334768245
		{ &Z_Construct_UFunction_UControlRig_Execute, "Execute" }, // 1426629724
		{ &Z_Construct_UFunction_UControlRig_FindControlRigs, "FindControlRigs" }, // 55574623
		{ &Z_Construct_UFunction_UControlRig_GetAbsoluteTime, "GetAbsoluteTime" }, // 2653259338
		{ &Z_Construct_UFunction_UControlRig_GetCurrentFramesPerSecond, "GetCurrentFramesPerSecond" }, // 2954018723
		{ &Z_Construct_UFunction_UControlRig_GetHierarchy, "GetHierarchy" }, // 4157270784
		{ &Z_Construct_UFunction_UControlRig_GetInteractionRig, "GetInteractionRig" }, // 3471026105
		{ &Z_Construct_UFunction_UControlRig_GetInteractionRigClass, "GetInteractionRigClass" }, // 1714744437
		{ &Z_Construct_UFunction_UControlRig_GetScriptAccessibleVariables, "GetScriptAccessibleVariables" }, // 3067246381
		{ &Z_Construct_UFunction_UControlRig_GetSupportedEvents, "GetSupportedEvents" }, // 504822036
		{ &Z_Construct_UFunction_UControlRig_GetVariableAsString, "GetVariableAsString" }, // 3077553476
		{ &Z_Construct_UFunction_UControlRig_GetVariableType, "GetVariableType" }, // 2003336430
		{ &Z_Construct_UFunction_UControlRig_GetVM, "GetVM" }, // 2777435375
		{ &Z_Construct_UFunction_UControlRig_IsControlSelected, "IsControlSelected" }, // 3635579080
		{ &Z_Construct_UFunction_UControlRig_RequestInit, "RequestInit" }, // 3799150334
		{ &Z_Construct_UFunction_UControlRig_RequestSetup, "RequestSetup" }, // 590696280
		{ &Z_Construct_UFunction_UControlRig_SelectControl, "SelectControl" }, // 1169430498
		{ &Z_Construct_UFunction_UControlRig_SetAbsoluteAndDeltaTime, "SetAbsoluteAndDeltaTime" }, // 3612500679
		{ &Z_Construct_UFunction_UControlRig_SetAbsoluteTime, "SetAbsoluteTime" }, // 1154041434
		{ &Z_Construct_UFunction_UControlRig_SetDeltaTime, "SetDeltaTime" }, // 4204692115
		{ &Z_Construct_UFunction_UControlRig_SetFramesPerSecond, "SetFramesPerSecond" }, // 1852846155
		{ &Z_Construct_UFunction_UControlRig_SetInteractionRig, "SetInteractionRig" }, // 2394774164
		{ &Z_Construct_UFunction_UControlRig_SetInteractionRigClass, "SetInteractionRigClass" }, // 1522962059
		{ &Z_Construct_UFunction_UControlRig_SetVariableFromString, "SetVariableFromString" }, // 3648794847
		{ &Z_Construct_UFunction_UControlRig_SupportsEvent, "SupportsEvent" }, // 473086388
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Runs logic for mapping input data to transforms (the \"Rig\") */" },
		{ "IncludePath", "ControlRig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "Runs logic for mapping input data to transforms (the \"Rig\")" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_ExecutionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_ExecutionType_MetaData[] = {
		{ "Comment", "// END UObject interface\n" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "END UObject interface" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_ExecutionType = { "ExecutionType", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UControlRig, ExecutionType), Z_Construct_UEnum_ControlRig_ERigExecutionType, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_ExecutionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_ExecutionType_MetaData)) }; // 1781156182
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_VMRuntimeSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_VMRuntimeSettings = { "VMRuntimeSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UControlRig, VMRuntimeSettings), Z_Construct_UScriptStruct_FRigVMRuntimeSettings, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_VMRuntimeSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_VMRuntimeSettings_MetaData)) }; // 2174805179
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_ControlCustomizations_ValueProp = { "ControlCustomizations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FRigControlElementCustomization, METADATA_PARAMS(nullptr, 0) }; // 401335516
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_ControlCustomizations_Key_KeyProp = { "ControlCustomizations_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 3202328731
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_ControlCustomizations_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_ControlCustomizations = { "ControlCustomizations", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UControlRig, ControlCustomizations), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_ControlCustomizations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_ControlCustomizations_MetaData)) }; // 3202328731 401335516
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_VM_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_VM = { "VM", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UControlRig, VM), Z_Construct_UClass_URigVM_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_VM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_VM_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_DynamicHierarchy_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_DynamicHierarchy = { "DynamicHierarchy", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UControlRig, DynamicHierarchy), Z_Construct_UClass_URigHierarchy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_DynamicHierarchy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_DynamicHierarchy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_GizmoLibrary_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_GizmoLibrary = { "GizmoLibrary", nullptr, (EPropertyFlags)0x0044000020000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UControlRig, GizmoLibrary_DEPRECATED), Z_Construct_UClass_UControlRigShapeLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_GizmoLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_GizmoLibrary_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_ShapeLibraries_Inner = { "ShapeLibraries", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UControlRigShapeLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_ShapeLibraries_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_ShapeLibraries = { "ShapeLibraries", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UControlRig, ShapeLibraries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_ShapeLibraries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_ShapeLibraries_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_InputProperties_ValueProp = { "InputProperties", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FCachedPropertyPath, METADATA_PARAMS(nullptr, 0) }; // 390258941
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_InputProperties_Key_KeyProp = { "InputProperties_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_InputProperties_MetaData[] = {
		{ "Comment", "// you either go Input or Output, currently if you put it in both place, Output will override\n" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "you either go Input or Output, currently if you put it in both place, Output will override" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_InputProperties = { "InputProperties", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UControlRig, InputProperties_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_InputProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_InputProperties_MetaData)) }; // 390258941
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_OutputProperties_ValueProp = { "OutputProperties", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FCachedPropertyPath, METADATA_PARAMS(nullptr, 0) }; // 390258941
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_OutputProperties_Key_KeyProp = { "OutputProperties_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_OutputProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_OutputProperties = { "OutputProperties", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UControlRig, OutputProperties_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_OutputProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_OutputProperties_MetaData)) }; // 390258941
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_DrawContainer_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_DrawContainer = { "DrawContainer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UControlRig, DrawContainer), Z_Construct_UScriptStruct_FControlRigDrawContainer, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_DrawContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_DrawContainer_MetaData)) }; // 3932998753
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_DataSourceRegistry_MetaData[] = {
		{ "Comment", "/** The registry to access data source */" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "The registry to access data source" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_DataSourceRegistry = { "DataSourceRegistry", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UControlRig, DataSourceRegistry), Z_Construct_UClass_UAnimationDataSourceRegistry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_DataSourceRegistry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_DataSourceRegistry_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_EventQueue_Inner = { "EventQueue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_EventQueue_MetaData[] = {
		{ "Comment", "/** The event name used during an update */" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "The event name used during an update" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_EventQueue = { "EventQueue", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UControlRig, EventQueue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_EventQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_EventQueue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_Influences_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_Influences = { "Influences", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UControlRig, Influences), Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_Influences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_Influences_MetaData)) }; // 3921734821
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_InteractionRig_MetaData[] = {
		{ "BlueprintGetter", "GetInteractionRig" },
		{ "BlueprintSetter", "SetInteractionRig" },
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_InteractionRig = { "InteractionRig", nullptr, (EPropertyFlags)0x0044000000002004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UControlRig, InteractionRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_InteractionRig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_InteractionRig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_InteractionRigClass_MetaData[] = {
		{ "BlueprintGetter", "GetInteractionRigClass" },
		{ "BlueprintSetter", "SetInteractionRigClass" },
		{ "Category", "Interaction" },
		{ "DisplayName", "Interaction Rig" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_InteractionRigClass = { "InteractionRigClass", nullptr, (EPropertyFlags)0x0044000000002805, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UControlRig, InteractionRigClass), Z_Construct_UClass_UControlRig_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_InteractionRigClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_InteractionRigClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_AssetUserData_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_AssetUserData_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_AssetUserData_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x00240c8000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UControlRig, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_AssetUserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_AssetUserData_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_VMSnapshotBeforeExecution_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_VMSnapshotBeforeExecution = { "VMSnapshotBeforeExecution", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UControlRig, VMSnapshotBeforeExecution), Z_Construct_UClass_URigVM_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_VMSnapshotBeforeExecution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_VMSnapshotBeforeExecution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_bIsInDebugMode_MetaData[] = {
		{ "Comment", "/** The current execution mode */" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "The current execution mode" },
	};
#endif
	void Z_Construct_UClass_UControlRig_Statics::NewProp_bIsInDebugMode_SetBit(void* Obj)
	{
		((UControlRig*)Obj)->bIsInDebugMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_bIsInDebugMode = { "bIsInDebugMode", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UControlRig), &Z_Construct_UClass_UControlRig_Statics::NewProp_bIsInDebugMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_bIsInDebugMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_bIsInDebugMode_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_ExecutionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_ExecutionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_VMRuntimeSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_ControlCustomizations_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_ControlCustomizations_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_ControlCustomizations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_VM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_DynamicHierarchy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_GizmoLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_ShapeLibraries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_ShapeLibraries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_InputProperties_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_InputProperties_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_InputProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_OutputProperties_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_OutputProperties_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_OutputProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_DrawContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_DataSourceRegistry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_EventQueue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_EventQueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_Influences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_InteractionRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_InteractionRigClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_AssetUserData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_AssetUserData,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_VMSnapshotBeforeExecution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_bIsInDebugMode,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UControlRig_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNodeMappingProviderInterface_NoRegister, (int32)VTABLE_OFFSET(UControlRig, INodeMappingProviderInterface), false },  // 3118747077
			{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(UControlRig, IInterface_AssetUserData), false },  // 1283872964
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRig_Statics::ClassParams = {
		&UControlRig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UControlRig_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRig()
	{
		if (!Z_Registration_Info_UClass_UControlRig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRig.OuterSingleton, Z_Construct_UClass_UControlRig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRig.OuterSingleton;
	}
	template<> CONTROLRIG_API UClass* StaticClass<UControlRig>()
	{
		return UControlRig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRig);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UControlRig)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRig, UControlRig::StaticClass, TEXT("UControlRig"), &Z_Registration_Info_UClass_UControlRig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRig), 2500702812U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_2634423250(TEXT("/Script/ControlRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
