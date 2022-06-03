// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/InputSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInputSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisKeyMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisConfigEntry();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseCaptureMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseLockMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionSpeechMapping();
	ENGINE_API UClass* Z_Construct_UClass_UPlayerInput_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
	DEFINE_FUNCTION(UInputSettings::execForceRebuildKeymaps)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceRebuildKeymaps();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputSettings::execGetAxisNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_AxisNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAxisNames(Z_Param_Out_AxisNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputSettings::execGetActionNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_ActionNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetActionNames(Z_Param_Out_ActionNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputSettings::execSaveKeyMappings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveKeyMappings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputSettings::execRemoveAxisMapping)
	{
		P_GET_STRUCT_REF(FInputAxisKeyMapping,Z_Param_Out_KeyMapping);
		P_GET_UBOOL(Z_Param_bForceRebuildKeymaps);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAxisMapping(Z_Param_Out_KeyMapping,Z_Param_bForceRebuildKeymaps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputSettings::execGetAxisMappingByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InAxisName);
		P_GET_TARRAY_REF(FInputAxisKeyMapping,Z_Param_Out_OutMappings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAxisMappingByName(Z_Param_InAxisName,Z_Param_Out_OutMappings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputSettings::execAddAxisMapping)
	{
		P_GET_STRUCT_REF(FInputAxisKeyMapping,Z_Param_Out_KeyMapping);
		P_GET_UBOOL(Z_Param_bForceRebuildKeymaps);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAxisMapping(Z_Param_Out_KeyMapping,Z_Param_bForceRebuildKeymaps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputSettings::execRemoveActionMapping)
	{
		P_GET_STRUCT_REF(FInputActionKeyMapping,Z_Param_Out_KeyMapping);
		P_GET_UBOOL(Z_Param_bForceRebuildKeymaps);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveActionMapping(Z_Param_Out_KeyMapping,Z_Param_bForceRebuildKeymaps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputSettings::execGetActionMappingByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InActionName);
		P_GET_TARRAY_REF(FInputActionKeyMapping,Z_Param_Out_OutMappings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetActionMappingByName(Z_Param_InActionName,Z_Param_Out_OutMappings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputSettings::execAddActionMapping)
	{
		P_GET_STRUCT_REF(FInputActionKeyMapping,Z_Param_Out_KeyMapping);
		P_GET_UBOOL(Z_Param_bForceRebuildKeymaps);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddActionMapping(Z_Param_Out_KeyMapping,Z_Param_bForceRebuildKeymaps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputSettings::execGetInputSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInputSettings**)Z_Param__Result=UInputSettings::GetInputSettings();
		P_NATIVE_END;
	}
	void UInputSettings::StaticRegisterNativesUInputSettings()
	{
		UClass* Class = UInputSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddActionMapping", &UInputSettings::execAddActionMapping },
			{ "AddAxisMapping", &UInputSettings::execAddAxisMapping },
			{ "ForceRebuildKeymaps", &UInputSettings::execForceRebuildKeymaps },
			{ "GetActionMappingByName", &UInputSettings::execGetActionMappingByName },
			{ "GetActionNames", &UInputSettings::execGetActionNames },
			{ "GetAxisMappingByName", &UInputSettings::execGetAxisMappingByName },
			{ "GetAxisNames", &UInputSettings::execGetAxisNames },
			{ "GetInputSettings", &UInputSettings::execGetInputSettings },
			{ "RemoveActionMapping", &UInputSettings::execRemoveActionMapping },
			{ "RemoveAxisMapping", &UInputSettings::execRemoveAxisMapping },
			{ "SaveKeyMappings", &UInputSettings::execSaveKeyMappings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics
	{
		struct InputSettings_eventAddActionMapping_Parms
		{
			FInputActionKeyMapping KeyMapping;
			bool bForceRebuildKeymaps;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyMapping_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyMapping;
		static void NewProp_bForceRebuildKeymaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRebuildKeymaps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_KeyMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_KeyMapping = { "KeyMapping", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputSettings_eventAddActionMapping_Parms, KeyMapping), Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_KeyMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_KeyMapping_MetaData)) }; // 2971228154
	void Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit(void* Obj)
	{
		((InputSettings_eventAddActionMapping_Parms*)Obj)->bForceRebuildKeymaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_bForceRebuildKeymaps = { "bForceRebuildKeymaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InputSettings_eventAddActionMapping_Parms), &Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_KeyMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::NewProp_bForceRebuildKeymaps,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Programmatically add an action mapping to the project defaults */" },
		{ "CPP_Default_bForceRebuildKeymaps", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Programmatically add an action mapping to the project defaults" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "AddActionMapping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::InputSettings_eventAddActionMapping_Parms), Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_AddActionMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_AddActionMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics
	{
		struct InputSettings_eventAddAxisMapping_Parms
		{
			FInputAxisKeyMapping KeyMapping;
			bool bForceRebuildKeymaps;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyMapping_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyMapping;
		static void NewProp_bForceRebuildKeymaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRebuildKeymaps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_KeyMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_KeyMapping = { "KeyMapping", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputSettings_eventAddAxisMapping_Parms, KeyMapping), Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_KeyMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_KeyMapping_MetaData)) }; // 3392225251
	void Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit(void* Obj)
	{
		((InputSettings_eventAddAxisMapping_Parms*)Obj)->bForceRebuildKeymaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_bForceRebuildKeymaps = { "bForceRebuildKeymaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InputSettings_eventAddAxisMapping_Parms), &Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_KeyMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::NewProp_bForceRebuildKeymaps,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Programmatically add an axis mapping to the project defaults */" },
		{ "CPP_Default_bForceRebuildKeymaps", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Programmatically add an axis mapping to the project defaults" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "AddAxisMapping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::InputSettings_eventAddAxisMapping_Parms), Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_AddAxisMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_AddAxisMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When changes are made to the default mappings, push those changes out to PlayerInput key maps */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "When changes are made to the default mappings, push those changes out to PlayerInput key maps" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "ForceRebuildKeymaps", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics
	{
		struct InputSettings_eventGetActionMappingByName_Parms
		{
			FName InActionName;
			TArray<FInputActionKeyMapping> OutMappings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InActionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InActionName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutMappings_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutMappings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_InActionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_InActionName = { "InActionName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputSettings_eventGetActionMappingByName_Parms, InActionName), METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_InActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_InActionName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_OutMappings_Inner = { "OutMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(nullptr, 0) }; // 2971228154
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_OutMappings = { "OutMappings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputSettings_eventGetActionMappingByName_Parms, OutMappings), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2971228154
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_InActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_OutMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::NewProp_OutMappings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "GetActionMappingByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::InputSettings_eventGetActionMappingByName_Parms), Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_GetActionMappingByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_GetActionMappingByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputSettings_GetActionNames_Statics
	{
		struct InputSettings_eventGetActionNames_Parms
		{
			TArray<FName> ActionNames;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::NewProp_ActionNames_Inner = { "ActionNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::NewProp_ActionNames = { "ActionNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputSettings_eventGetActionNames_Parms, ActionNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::NewProp_ActionNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::NewProp_ActionNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Populate a list of all defined action names */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Populate a list of all defined action names" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "GetActionNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::InputSettings_eventGetActionNames_Parms), Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_GetActionNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_GetActionNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics
	{
		struct InputSettings_eventGetAxisMappingByName_Parms
		{
			FName InAxisName;
			TArray<FInputAxisKeyMapping> OutMappings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAxisName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InAxisName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutMappings_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutMappings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_InAxisName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_InAxisName = { "InAxisName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputSettings_eventGetAxisMappingByName_Parms, InAxisName), METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_InAxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_InAxisName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_OutMappings_Inner = { "OutMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(nullptr, 0) }; // 3392225251
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_OutMappings = { "OutMappings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputSettings_eventGetAxisMappingByName_Parms, OutMappings), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3392225251
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_InAxisName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_OutMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::NewProp_OutMappings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Retrieve all axis mappings by a certain name. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Retrieve all axis mappings by a certain name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "GetAxisMappingByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::InputSettings_eventGetAxisMappingByName_Parms), Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_GetAxisMappingByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_GetAxisMappingByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics
	{
		struct InputSettings_eventGetAxisNames_Parms
		{
			TArray<FName> AxisNames;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_AxisNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AxisNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::NewProp_AxisNames_Inner = { "AxisNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::NewProp_AxisNames = { "AxisNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputSettings_eventGetAxisNames_Parms, AxisNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::NewProp_AxisNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::NewProp_AxisNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Populate a list of all defined axis names */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Populate a list of all defined axis names" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "GetAxisNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::InputSettings_eventGetAxisNames_Parms), Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_GetAxisNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_GetAxisNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics
	{
		struct InputSettings_eventGetInputSettings_Parms
		{
			UInputSettings* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputSettings_eventGetInputSettings_Parms, ReturnValue), Z_Construct_UClass_UInputSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Returns the game local input settings (action mappings, axis mappings, etc...) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Returns the game local input settings (action mappings, axis mappings, etc...)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "GetInputSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::InputSettings_eventGetInputSettings_Parms), Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_GetInputSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_GetInputSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics
	{
		struct InputSettings_eventRemoveActionMapping_Parms
		{
			FInputActionKeyMapping KeyMapping;
			bool bForceRebuildKeymaps;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyMapping_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyMapping;
		static void NewProp_bForceRebuildKeymaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRebuildKeymaps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_KeyMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_KeyMapping = { "KeyMapping", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputSettings_eventRemoveActionMapping_Parms, KeyMapping), Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_KeyMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_KeyMapping_MetaData)) }; // 2971228154
	void Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit(void* Obj)
	{
		((InputSettings_eventRemoveActionMapping_Parms*)Obj)->bForceRebuildKeymaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_bForceRebuildKeymaps = { "bForceRebuildKeymaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InputSettings_eventRemoveActionMapping_Parms), &Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_KeyMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::NewProp_bForceRebuildKeymaps,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Programmatically remove an action mapping to the project defaults */" },
		{ "CPP_Default_bForceRebuildKeymaps", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Programmatically remove an action mapping to the project defaults" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "RemoveActionMapping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::InputSettings_eventRemoveActionMapping_Parms), Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_RemoveActionMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_RemoveActionMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics
	{
		struct InputSettings_eventRemoveAxisMapping_Parms
		{
			FInputAxisKeyMapping KeyMapping;
			bool bForceRebuildKeymaps;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyMapping_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyMapping;
		static void NewProp_bForceRebuildKeymaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRebuildKeymaps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_KeyMapping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_KeyMapping = { "KeyMapping", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InputSettings_eventRemoveAxisMapping_Parms, KeyMapping), Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_KeyMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_KeyMapping_MetaData)) }; // 3392225251
	void Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit(void* Obj)
	{
		((InputSettings_eventRemoveAxisMapping_Parms*)Obj)->bForceRebuildKeymaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_bForceRebuildKeymaps = { "bForceRebuildKeymaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InputSettings_eventRemoveAxisMapping_Parms), &Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_bForceRebuildKeymaps_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_KeyMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::NewProp_bForceRebuildKeymaps,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Programmatically remove an axis mapping to the project defaults */" },
		{ "CPP_Default_bForceRebuildKeymaps", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Programmatically remove an axis mapping to the project defaults" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "RemoveAxisMapping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::InputSettings_eventRemoveAxisMapping_Parms), Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_RemoveAxisMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_RemoveAxisMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputSettings_SaveKeyMappings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputSettings_SaveKeyMappings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Flush the current mapping values to the config file */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Flush the current mapping values to the config file" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSettings_SaveKeyMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSettings, nullptr, "SaveKeyMappings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputSettings_SaveKeyMappings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSettings_SaveKeyMappings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputSettings_SaveKeyMappings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSettings_SaveKeyMappings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputSettings);
	UClass* Z_Construct_UClass_UInputSettings_NoRegister()
	{
		return UInputSettings::StaticClass();
	}
	struct Z_Construct_UClass_UInputSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisConfig_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisConfig_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AxisConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAltEnterTogglesFullscreen_MetaData[];
#endif
		static void NewProp_bAltEnterTogglesFullscreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAltEnterTogglesFullscreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bF11TogglesFullscreen_MetaData[];
#endif
		static void NewProp_bF11TogglesFullscreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bF11TogglesFullscreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMouseForTouch_MetaData[];
#endif
		static void NewProp_bUseMouseForTouch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMouseForTouch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMouseSmoothing_MetaData[];
#endif
		static void NewProp_bEnableMouseSmoothing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMouseSmoothing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFOVScaling_MetaData[];
#endif
		static void NewProp_bEnableFOVScaling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFOVScaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureMouseOnLaunch_MetaData[];
#endif
		static void NewProp_bCaptureMouseOnLaunch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureMouseOnLaunch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultViewportMouseLock_MetaData[];
#endif
		static void NewProp_bDefaultViewportMouseLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultViewportMouseLock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLegacyInputScales_MetaData[];
#endif
		static void NewProp_bEnableLegacyInputScales_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLegacyInputScales;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysShowTouchInterface_MetaData[];
#endif
		static void NewProp_bAlwaysShowTouchInterface_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysShowTouchInterface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowConsoleOnFourFingerTap_MetaData[];
#endif
		static void NewProp_bShowConsoleOnFourFingerTap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowConsoleOnFourFingerTap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableGestureRecognizer_MetaData[];
#endif
		static void NewProp_bEnableGestureRecognizer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGestureRecognizer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAutocorrect_MetaData[];
#endif
		static void NewProp_bUseAutocorrect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAutocorrect;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExcludedAutocorrectOS_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedAutocorrectOS_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedAutocorrectOS;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExcludedAutocorrectCultures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedAutocorrectCultures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedAutocorrectCultures;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExcludedAutocorrectDeviceModels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedAutocorrectDeviceModels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedAutocorrectDeviceModels;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultViewportMouseCaptureMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultViewportMouseCaptureMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultViewportMouseCaptureMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultViewportMouseLockMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultViewportMouseLockMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultViewportMouseLockMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FOVScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FOVScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoubleClickTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DoubleClickTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionMappings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AxisMappings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpeechMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeechMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpeechMappings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPlayerInputClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultPlayerInputClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInputComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultInputComponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTouchInterface_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultTouchInterface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConsoleKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConsoleKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConsoleKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConsoleKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConsoleKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInputSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputSettings_AddActionMapping, "AddActionMapping" }, // 1855751886
		{ &Z_Construct_UFunction_UInputSettings_AddAxisMapping, "AddAxisMapping" }, // 3330832323
		{ &Z_Construct_UFunction_UInputSettings_ForceRebuildKeymaps, "ForceRebuildKeymaps" }, // 757160977
		{ &Z_Construct_UFunction_UInputSettings_GetActionMappingByName, "GetActionMappingByName" }, // 121578192
		{ &Z_Construct_UFunction_UInputSettings_GetActionNames, "GetActionNames" }, // 3150942610
		{ &Z_Construct_UFunction_UInputSettings_GetAxisMappingByName, "GetAxisMappingByName" }, // 2719514669
		{ &Z_Construct_UFunction_UInputSettings_GetAxisNames, "GetAxisNames" }, // 903278186
		{ &Z_Construct_UFunction_UInputSettings_GetInputSettings, "GetInputSettings" }, // 473498954
		{ &Z_Construct_UFunction_UInputSettings_RemoveActionMapping, "RemoveActionMapping" }, // 1976536857
		{ &Z_Construct_UFunction_UInputSettings_RemoveAxisMapping, "RemoveAxisMapping" }, // 3289684843
		{ &Z_Construct_UFunction_UInputSettings_SaveKeyMappings, "SaveKeyMappings" }, // 1735451104
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Project wide settings for input handling\n * \n * @see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html\n */" },
		{ "IncludePath", "GameFramework/InputSettings.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Project wide settings for input handling\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisConfig_Inner = { "AxisConfig", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputAxisConfigEntry, METADATA_PARAMS(nullptr, 0) }; // 1541128967
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisConfig_MetaData[] = {
		{ "Category", "Bindings" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "List of Axis Properties" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisConfig = { "AxisConfig", nullptr, (EPropertyFlags)0x0010040000004041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputSettings, AxisConfig), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisConfig_MetaData)) }; // 1541128967
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bAltEnterTogglesFullscreen_MetaData[] = {
		{ "Category", "Bindings" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bAltEnterTogglesFullscreen_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bAltEnterTogglesFullscreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bAltEnterTogglesFullscreen = { "bAltEnterTogglesFullscreen", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bAltEnterTogglesFullscreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bAltEnterTogglesFullscreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bAltEnterTogglesFullscreen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bF11TogglesFullscreen_MetaData[] = {
		{ "Category", "Bindings" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bF11TogglesFullscreen_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bF11TogglesFullscreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bF11TogglesFullscreen = { "bF11TogglesFullscreen", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bF11TogglesFullscreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bF11TogglesFullscreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bF11TogglesFullscreen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseMouseForTouch_MetaData[] = {
		{ "Category", "MouseProperties" },
		{ "Comment", "// Allow mouse to be used for touch\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Allow mouse to be used for touch" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseMouseForTouch_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bUseMouseForTouch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseMouseForTouch = { "bUseMouseForTouch", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseMouseForTouch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseMouseForTouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseMouseForTouch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMouseSmoothing_MetaData[] = {
		{ "Category", "MouseProperties" },
		{ "Comment", "// Mouse smoothing control\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Mouse smoothing control" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMouseSmoothing_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bEnableMouseSmoothing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMouseSmoothing = { "bEnableMouseSmoothing", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMouseSmoothing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMouseSmoothing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMouseSmoothing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableFOVScaling_MetaData[] = {
		{ "Category", "MouseProperties" },
		{ "Comment", "// Scale the mouse based on the player camera manager's field of view\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Scale the mouse based on the player camera manager's field of view" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableFOVScaling_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bEnableFOVScaling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableFOVScaling = { "bEnableFOVScaling", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableFOVScaling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableFOVScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableFOVScaling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bCaptureMouseOnLaunch_MetaData[] = {
		{ "Category", "ViewportProperties" },
		{ "Comment", "/** Controls if the viewport will capture the mouse on Launch of the application */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Controls if the viewport will capture the mouse on Launch of the application" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bCaptureMouseOnLaunch_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bCaptureMouseOnLaunch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bCaptureMouseOnLaunch = { "bCaptureMouseOnLaunch", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bCaptureMouseOnLaunch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bCaptureMouseOnLaunch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bCaptureMouseOnLaunch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bDefaultViewportMouseLock_MetaData[] = {
		{ "Comment", "/** The default mouse lock state when the viewport acquires capture */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The default mouse lock state when the viewport acquires capture" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bDefaultViewportMouseLock_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bDefaultViewportMouseLock_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bDefaultViewportMouseLock = { "bDefaultViewportMouseLock", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bDefaultViewportMouseLock_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bDefaultViewportMouseLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bDefaultViewportMouseLock_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableLegacyInputScales_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Enable the use of legacy input scales on the player controller (InputYawScale, InputPitchScale, and InputRollScale) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Enable the use of legacy input scales on the player controller (InputYawScale, InputPitchScale, and InputRollScale)" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableLegacyInputScales_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bEnableLegacyInputScales = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableLegacyInputScales = { "bEnableLegacyInputScales", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableLegacyInputScales_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableLegacyInputScales_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableLegacyInputScales_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bAlwaysShowTouchInterface_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** Should the touch input interface be shown always, or only when the platform has a touch screen? */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Should the touch input interface be shown always, or only when the platform has a touch screen?" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bAlwaysShowTouchInterface_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bAlwaysShowTouchInterface = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bAlwaysShowTouchInterface = { "bAlwaysShowTouchInterface", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bAlwaysShowTouchInterface_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bAlwaysShowTouchInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bAlwaysShowTouchInterface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bShowConsoleOnFourFingerTap_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** Whether or not to show the console on 4 finger tap, on mobile platforms */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Whether or not to show the console on 4 finger tap, on mobile platforms" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bShowConsoleOnFourFingerTap_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bShowConsoleOnFourFingerTap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bShowConsoleOnFourFingerTap = { "bShowConsoleOnFourFingerTap", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bShowConsoleOnFourFingerTap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bShowConsoleOnFourFingerTap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bShowConsoleOnFourFingerTap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableGestureRecognizer_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** Whether or not to use the gesture recognition system to convert touches in to gestures that can be bound and queried */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Whether or not to use the gesture recognition system to convert touches in to gestures that can be bound and queried" },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableGestureRecognizer_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bEnableGestureRecognizer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableGestureRecognizer = { "bEnableGestureRecognizer", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableGestureRecognizer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableGestureRecognizer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableGestureRecognizer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseAutocorrect_MetaData[] = {
		{ "Category", "Virtual Keyboard (Mobile)" },
		{ "Comment", "/** If enabled, virtual keyboards will have autocorrect enabled. Currently only supported on mobile devices. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "If enabled, virtual keyboards will have autocorrect enabled. Currently only supported on mobile devices." },
	};
#endif
	void Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseAutocorrect_SetBit(void* Obj)
	{
		((UInputSettings*)Obj)->bUseAutocorrect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseAutocorrect = { "bUseAutocorrect", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInputSettings), &Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseAutocorrect_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseAutocorrect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseAutocorrect_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectOS_Inner = { "ExcludedAutocorrectOS", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectOS_MetaData[] = {
		{ "Category", "Virtual Keyboard (Mobile)" },
		{ "Comment", "/** \n\x09 * Disables autocorrect for these operating systems, even if autocorrect is enabled. Use the format \"[platform] [osversion]\"\n\x09 * (e.g., \"iOS 11.2\" or \"Android 6\"). More specific versions will disable autocorrect for fewer devices (\"iOS 11\" will disable\n\x09 * autocorrect for all devices running iOS 11, but \"iOS 11.2.2\" will not disable autocorrect for devices running 11.2.1).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Disables autocorrect for these operating systems, even if autocorrect is enabled. Use the format \"[platform] [osversion]\"\n(e.g., \"iOS 11.2\" or \"Android 6\"). More specific versions will disable autocorrect for fewer devices (\"iOS 11\" will disable\nautocorrect for all devices running iOS 11, but \"iOS 11.2.2\" will not disable autocorrect for devices running 11.2.1)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectOS = { "ExcludedAutocorrectOS", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputSettings, ExcludedAutocorrectOS), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectOS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectOS_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectCultures_Inner = { "ExcludedAutocorrectCultures", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectCultures_MetaData[] = {
		{ "Category", "Virtual Keyboard (Mobile)" },
		{ "Comment", "/** Disables autocorrect for these cultures, even if autocorrect is turned on. These should be ISO-compliant language and country codes, such as \"en\" or \"en-US\". */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Disables autocorrect for these cultures, even if autocorrect is turned on. These should be ISO-compliant language and country codes, such as \"en\" or \"en-US\"." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectCultures = { "ExcludedAutocorrectCultures", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputSettings, ExcludedAutocorrectCultures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectCultures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectCultures_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectDeviceModels_Inner = { "ExcludedAutocorrectDeviceModels", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectDeviceModels_MetaData[] = {
		{ "Category", "Virtual Keyboard (Mobile)" },
		{ "Comment", "/** \n\x09 * Disables autocorrect for these device models, even if autocorrect is turned in. Model IDs listed here will match against the start of the device's\n\x09 * model (e.g., \"SM-\" will match all device model IDs that start with \"SM-\"). This is currently only supported on Android devices.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Disables autocorrect for these device models, even if autocorrect is turned in. Model IDs listed here will match against the start of the device's\nmodel (e.g., \"SM-\" will match all device model IDs that start with \"SM-\"). This is currently only supported on Android devices." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectDeviceModels = { "ExcludedAutocorrectDeviceModels", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputSettings, ExcludedAutocorrectDeviceModels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectDeviceModels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectDeviceModels_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseCaptureMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseCaptureMode_MetaData[] = {
		{ "Category", "ViewportProperties" },
		{ "Comment", "/** The default mouse capture mode for the game viewport */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The default mouse capture mode for the game viewport" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseCaptureMode = { "DefaultViewportMouseCaptureMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputSettings, DefaultViewportMouseCaptureMode), Z_Construct_UEnum_Engine_EMouseCaptureMode, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseCaptureMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseCaptureMode_MetaData)) }; // 1275285483
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseLockMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseLockMode_MetaData[] = {
		{ "Category", "ViewportProperties" },
		{ "Comment", "/** The default mouse lock state behavior when the viewport acquires capture */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The default mouse lock state behavior when the viewport acquires capture" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseLockMode = { "DefaultViewportMouseLockMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputSettings, DefaultViewportMouseLockMode), Z_Construct_UEnum_Engine_EMouseLockMode, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseLockMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseLockMode_MetaData)) }; // 2802207277
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_FOVScale_MetaData[] = {
		{ "Category", "MouseProperties" },
		{ "Comment", "// The scaling value to multiply the field of view by\n" },
		{ "editcondition", "bEnableFOVScaling" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The scaling value to multiply the field of view by" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_FOVScale = { "FOVScale", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputSettings, FOVScale), METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_FOVScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_FOVScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_DoubleClickTime_MetaData[] = {
		{ "Category", "MouseProperties" },
		{ "Comment", "/** If a key is pressed twice in this amount of time it is considered a \"double click\" */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "If a key is pressed twice in this amount of time it is considered a \"double click\"" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_DoubleClickTime = { "DoubleClickTime", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputSettings, DoubleClickTime), METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_DoubleClickTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_DoubleClickTime_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ActionMappings_Inner = { "ActionMappings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(nullptr, 0) }; // 2971228154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_ActionMappings_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** List of Action Mappings */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "List of Action Mappings" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ActionMappings = { "ActionMappings", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputSettings, ActionMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_ActionMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_ActionMappings_MetaData)) }; // 2971228154
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisMappings_Inner = { "AxisMappings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(nullptr, 0) }; // 3392225251
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisMappings_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** List of Axis Mappings */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "List of Axis Mappings" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisMappings = { "AxisMappings", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputSettings, AxisMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisMappings_MetaData)) }; // 3392225251
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_SpeechMappings_Inner = { "SpeechMappings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputActionSpeechMapping, METADATA_PARAMS(nullptr, 0) }; // 1503721116
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_SpeechMappings_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** List of Speech Mappings */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "List of Speech Mappings" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_SpeechMappings = { "SpeechMappings", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputSettings, SpeechMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_SpeechMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_SpeechMappings_MetaData)) }; // 1503721116
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultPlayerInputClass_MetaData[] = {
		{ "Category", "DefaultClasses" },
		{ "Comment", "/** Default class type for player input object. May be overridden by player controller. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Default class type for player input object. May be overridden by player controller." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultPlayerInputClass = { "DefaultPlayerInputClass", nullptr, (EPropertyFlags)0x0044000002004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputSettings, DefaultPlayerInputClass), Z_Construct_UClass_UPlayerInput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultPlayerInputClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultPlayerInputClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultInputComponentClass_MetaData[] = {
		{ "Category", "DefaultClasses" },
		{ "Comment", "/** Default class type for pawn input components. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "Default class type for pawn input components." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultInputComponentClass = { "DefaultInputComponentClass", nullptr, (EPropertyFlags)0x0044000002004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputSettings, DefaultInputComponentClass), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultInputComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultInputComponentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultTouchInterface_MetaData[] = {
		{ "AllowedClasses", "TouchInterface" },
		{ "Category", "Mobile" },
		{ "Comment", "/** The default on-screen touch input interface for the game (can be null to disable the onscreen interface) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The default on-screen touch input interface for the game (can be null to disable the onscreen interface)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultTouchInterface = { "DefaultTouchInterface", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputSettings, DefaultTouchInterface), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultTouchInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultTouchInterface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKey_MetaData[] = {
		{ "Comment", "/** The key which opens the console. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The key which opens the console." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKey = { "ConsoleKey", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputSettings, ConsoleKey_DEPRECATED), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKey_MetaData)) }; // 2615338182
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKeys_Inner = { "ConsoleKeys", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2615338182
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKeys_MetaData[] = {
		{ "Category", "Console" },
		{ "Comment", "/** The keys which open the console. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/InputSettings.h" },
		{ "ToolTip", "The keys which open the console." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKeys = { "ConsoleKeys", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputSettings, ConsoleKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKeys_MetaData)) }; // 2615338182
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisConfig_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bAltEnterTogglesFullscreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bF11TogglesFullscreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseMouseForTouch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableMouseSmoothing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableFOVScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bCaptureMouseOnLaunch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bDefaultViewportMouseLock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableLegacyInputScales,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bAlwaysShowTouchInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bShowConsoleOnFourFingerTap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bEnableGestureRecognizer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_bUseAutocorrect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectOS_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectOS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectCultures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectCultures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectDeviceModels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ExcludedAutocorrectDeviceModels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseCaptureMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseCaptureMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseLockMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultViewportMouseLockMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_FOVScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_DoubleClickTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ActionMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ActionMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_AxisMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_SpeechMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_SpeechMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultPlayerInputClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultInputComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_DefaultTouchInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputSettings_Statics::NewProp_ConsoleKeys,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputSettings_Statics::ClassParams = {
		&UInputSettings::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInputSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UInputSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputSettings()
	{
		if (!Z_Registration_Info_UClass_UInputSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputSettings.OuterSingleton, Z_Construct_UClass_UInputSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputSettings.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInputSettings>()
	{
		return UInputSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputSettings);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInputSettings, UInputSettings::StaticClass, TEXT("UInputSettings"), &Z_Registration_Info_UClass_UInputSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputSettings), 354398373U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_861776946(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
