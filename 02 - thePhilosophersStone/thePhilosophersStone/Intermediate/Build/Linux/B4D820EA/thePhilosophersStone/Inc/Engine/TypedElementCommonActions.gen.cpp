// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Elements/Framework/TypedElementCommonActions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementCommonActions() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTypedElementCommonActions_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTypedElementCommonActions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FScriptTypedElementListProxy();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementSelectionSet_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementDeletionOptions();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FScriptTypedElementHandle();
// End Cross Module References
	DEFINE_FUNCTION(UTypedElementCommonActions::execDuplicateNormalizedElements)
	{
		P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_ElementList);
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocationOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FScriptTypedElementHandle>*)Z_Param__Result=P_THIS->DuplicateNormalizedElements(Z_Param_ElementList,Z_Param_World,Z_Param_Out_LocationOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementCommonActions::execK2_DuplicateSelectedElements)
	{
		P_GET_OBJECT(UTypedElementSelectionSet,Z_Param_SelectionSet);
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LocationOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FScriptTypedElementHandle>*)Z_Param__Result=P_THIS->K2_DuplicateSelectedElements(Z_Param_SelectionSet,Z_Param_World,Z_Param_Out_LocationOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementCommonActions::execDeleteNormalizedElements)
	{
		P_GET_STRUCT(FScriptTypedElementListProxy,Z_Param_ElementList);
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_OBJECT(UTypedElementSelectionSet,Z_Param_InSelectionSet);
		P_GET_STRUCT_REF(FTypedElementDeletionOptions,Z_Param_Out_DeletionOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeleteNormalizedElements(Z_Param_ElementList,Z_Param_World,Z_Param_InSelectionSet,Z_Param_Out_DeletionOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTypedElementCommonActions::execDeleteSelectedElements)
	{
		P_GET_OBJECT(UTypedElementSelectionSet,Z_Param_SelectionSet);
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_STRUCT_REF(FTypedElementDeletionOptions,Z_Param_Out_DeletionOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeleteSelectedElements(Z_Param_SelectionSet,Z_Param_World,Z_Param_Out_DeletionOptions);
		P_NATIVE_END;
	}
	void UTypedElementCommonActions::StaticRegisterNativesUTypedElementCommonActions()
	{
		UClass* Class = UTypedElementCommonActions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteNormalizedElements", &UTypedElementCommonActions::execDeleteNormalizedElements },
			{ "DeleteSelectedElements", &UTypedElementCommonActions::execDeleteSelectedElements },
			{ "DuplicateNormalizedElements", &UTypedElementCommonActions::execDuplicateNormalizedElements },
			{ "K2_DuplicateSelectedElements", &UTypedElementCommonActions::execK2_DuplicateSelectedElements },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics
	{
		struct TypedElementCommonActions_eventDeleteNormalizedElements_Parms
		{
			FScriptTypedElementListProxy ElementList;
			UWorld* World;
			UTypedElementSelectionSet* InSelectionSet;
			FTypedElementDeletionOptions DeletionOptions;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementList;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSelectionSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeletionOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeletionOptions;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_ElementList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_ElementList = { "ElementList", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TypedElementCommonActions_eventDeleteNormalizedElements_Parms, ElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_ElementList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_ElementList_MetaData)) }; // 1625917635
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TypedElementCommonActions_eventDeleteNormalizedElements_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_InSelectionSet = { "InSelectionSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TypedElementCommonActions_eventDeleteNormalizedElements_Parms, InSelectionSet), Z_Construct_UClass_UTypedElementSelectionSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_DeletionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_DeletionOptions = { "DeletionOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TypedElementCommonActions_eventDeleteNormalizedElements_Parms, DeletionOptions), Z_Construct_UScriptStruct_FTypedElementDeletionOptions, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_DeletionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_DeletionOptions_MetaData)) }; // 3956781422
	void Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TypedElementCommonActions_eventDeleteNormalizedElements_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TypedElementCommonActions_eventDeleteNormalizedElements_Parms), &Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_ElementList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_InSelectionSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_DeletionOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Common" },
		{ "Comment", "/**\n\x09 * Delete any elements from the given list that can be deleted.\n\x09 * @note This list should have been pre-normalized via UTypedElementSelectionSet::GetNormalizedSelection or UTypedElementSelectionSet::GetNormalizedElementList.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementCommonActions.h" },
		{ "ToolTip", "Delete any elements from the given list that can be deleted.\n@note This list should have been pre-normalized via UTypedElementSelectionSet::GetNormalizedSelection or UTypedElementSelectionSet::GetNormalizedElementList." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementCommonActions, nullptr, "DeleteNormalizedElements", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::TypedElementCommonActions_eventDeleteNormalizedElements_Parms), Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics
	{
		struct TypedElementCommonActions_eventDeleteSelectedElements_Parms
		{
			UTypedElementSelectionSet* SelectionSet;
			UWorld* World;
			FTypedElementDeletionOptions DeletionOptions;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionSet;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeletionOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeletionOptions;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::NewProp_SelectionSet = { "SelectionSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TypedElementCommonActions_eventDeleteSelectedElements_Parms, SelectionSet), Z_Construct_UClass_UTypedElementSelectionSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TypedElementCommonActions_eventDeleteSelectedElements_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::NewProp_DeletionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::NewProp_DeletionOptions = { "DeletionOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TypedElementCommonActions_eventDeleteSelectedElements_Parms, DeletionOptions), Z_Construct_UScriptStruct_FTypedElementDeletionOptions, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::NewProp_DeletionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::NewProp_DeletionOptions_MetaData)) }; // 3956781422
	void Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TypedElementCommonActions_eventDeleteSelectedElements_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TypedElementCommonActions_eventDeleteSelectedElements_Parms), &Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::NewProp_SelectionSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::NewProp_DeletionOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Common" },
		{ "Comment", "/**\n\x09 * Delete any elements from the given selection set that can be deleted.\n\x09 * @note Internally this just calls DeleteNormalizedElements on the result of UTypedElementSelectionSet::GetNormalizedSelection.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementCommonActions.h" },
		{ "ToolTip", "Delete any elements from the given selection set that can be deleted.\n@note Internally this just calls DeleteNormalizedElements on the result of UTypedElementSelectionSet::GetNormalizedSelection." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementCommonActions, nullptr, "DeleteSelectedElements", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::TypedElementCommonActions_eventDeleteSelectedElements_Parms), Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics
	{
		struct TypedElementCommonActions_eventDuplicateNormalizedElements_Parms
		{
			FScriptTypedElementListProxy ElementList;
			UWorld* World;
			FVector LocationOffset;
			TArray<FScriptTypedElementHandle> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElementList;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_ElementList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_ElementList = { "ElementList", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TypedElementCommonActions_eventDuplicateNormalizedElements_Parms, ElementList), Z_Construct_UScriptStruct_FScriptTypedElementListProxy, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_ElementList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_ElementList_MetaData)) }; // 1625917635
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TypedElementCommonActions_eventDuplicateNormalizedElements_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_LocationOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TypedElementCommonActions_eventDuplicateNormalizedElements_Parms, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_LocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_LocationOffset_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(nullptr, 0) }; // 915069018
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TypedElementCommonActions_eventDuplicateNormalizedElements_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 915069018
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_ElementList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_LocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Common" },
		{ "Comment", "/**\n\x09 * Duplicate any elements from the given list that can be duplicated.\n\x09 * @note This list should have been pre-normalized via UTypedElementSelectionSet::GetNormalizedSelection or UTypedElementSelectionSet::GetNormalizedElementList.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementCommonActions.h" },
		{ "ToolTip", "Duplicate any elements from the given list that can be duplicated.\n@note This list should have been pre-normalized via UTypedElementSelectionSet::GetNormalizedSelection or UTypedElementSelectionSet::GetNormalizedElementList." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementCommonActions, nullptr, "DuplicateNormalizedElements", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::TypedElementCommonActions_eventDuplicateNormalizedElements_Parms), Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics
	{
		struct TypedElementCommonActions_eventK2_DuplicateSelectedElements_Parms
		{
			const UTypedElementSelectionSet* SelectionSet;
			UWorld* World;
			FVector LocationOffset;
			TArray<FScriptTypedElementHandle> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionSet;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_SelectionSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_SelectionSet = { "SelectionSet", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TypedElementCommonActions_eventK2_DuplicateSelectedElements_Parms, SelectionSet), Z_Construct_UClass_UTypedElementSelectionSet_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_SelectionSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_SelectionSet_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TypedElementCommonActions_eventK2_DuplicateSelectedElements_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_LocationOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TypedElementCommonActions_eventK2_DuplicateSelectedElements_Parms, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_LocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_LocationOffset_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(nullptr, 0) }; // 915069018
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TypedElementCommonActions_eventK2_DuplicateSelectedElements_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 915069018
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_SelectionSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_LocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Common" },
		{ "Comment", "/**\n\x09 * Duplicate any elements from the given selection set that can be duplicated.\n\x09 * @note Internally this just calls DuplicateNormalizedElements on the result of UTypedElementSelectionSet::GetNormalizedSelection.\n\x09 */" },
		{ "DisplayName", "Duplicate Selected Elements" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementCommonActions.h" },
		{ "ScriptName", "DuplicateSelectedElements" },
		{ "ToolTip", "Duplicate any elements from the given selection set that can be duplicated.\n@note Internally this just calls DuplicateNormalizedElements on the result of UTypedElementSelectionSet::GetNormalizedSelection." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTypedElementCommonActions, nullptr, "K2_DuplicateSelectedElements", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::TypedElementCommonActions_eventK2_DuplicateSelectedElements_Parms), Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementCommonActions);
	UClass* Z_Construct_UClass_UTypedElementCommonActions_NoRegister()
	{
		return UTypedElementCommonActions::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementCommonActions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementCommonActions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTypedElementCommonActions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTypedElementCommonActions_DeleteNormalizedElements, "DeleteNormalizedElements" }, // 2187154189
		{ &Z_Construct_UFunction_UTypedElementCommonActions_DeleteSelectedElements, "DeleteSelectedElements" }, // 587404166
		{ &Z_Construct_UFunction_UTypedElementCommonActions_DuplicateNormalizedElements, "DuplicateNormalizedElements" }, // 2815220819
		{ &Z_Construct_UFunction_UTypedElementCommonActions_K2_DuplicateSelectedElements, "K2_DuplicateSelectedElements" }, // 4049546011
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementCommonActions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A utility to handle higher-level common actions, but default via UTypedElementWorldInterface,\n * but asset editors can customize this behavior via FTypedElementCommonActionsCustomization.\n */" },
		{ "IncludePath", "Elements/Framework/TypedElementCommonActions.h" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementCommonActions.h" },
		{ "ToolTip", "A utility to handle higher-level common actions, but default via UTypedElementWorldInterface,\nbut asset editors can customize this behavior via FTypedElementCommonActionsCustomization." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementCommonActions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTypedElementCommonActions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementCommonActions_Statics::ClassParams = {
		&UTypedElementCommonActions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTypedElementCommonActions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementCommonActions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypedElementCommonActions()
	{
		if (!Z_Registration_Info_UClass_UTypedElementCommonActions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementCommonActions.OuterSingleton, Z_Construct_UClass_UTypedElementCommonActions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementCommonActions.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UTypedElementCommonActions>()
	{
		return UTypedElementCommonActions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementCommonActions);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementCommonActions, UTypedElementCommonActions::StaticClass, TEXT("UTypedElementCommonActions"), &Z_Registration_Info_UClass_UTypedElementCommonActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementCommonActions), 3326898094U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_2974487256(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
