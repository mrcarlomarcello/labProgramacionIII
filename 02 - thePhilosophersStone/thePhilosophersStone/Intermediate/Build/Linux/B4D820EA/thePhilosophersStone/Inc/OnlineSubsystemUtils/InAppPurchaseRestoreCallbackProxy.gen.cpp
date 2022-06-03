// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/InAppPurchaseRestoreCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInAppPurchaseRestoreCallbackProxy() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
	ONLINESUBSYSTEM_API UEnum* Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState();
	ONLINESUBSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ONLINESUBSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseProductRequest();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemUtils_eventInAppPurchaseRestoreResult_Parms
		{
			TEnumAsByte<EInAppPurchaseState::Type> CompletionStatus;
			TArray<FInAppPurchaseRestoreInfo> InAppRestorePurchaseInformation;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CompletionStatus;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAppRestorePurchaseInformation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAppRestorePurchaseInformation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InAppRestorePurchaseInformation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::NewProp_CompletionStatus = { "CompletionStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventInAppPurchaseRestoreResult_Parms, CompletionStatus), Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState, METADATA_PARAMS(nullptr, 0) }; // 1494912028
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::NewProp_InAppRestorePurchaseInformation_Inner = { "InAppRestorePurchaseInformation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo, METADATA_PARAMS(nullptr, 0) }; // 3846609678
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::NewProp_InAppRestorePurchaseInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::NewProp_InAppRestorePurchaseInformation = { "InAppRestorePurchaseInformation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventInAppPurchaseRestoreResult_Parms, InAppRestorePurchaseInformation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::NewProp_InAppRestorePurchaseInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::NewProp_InAppRestorePurchaseInformation_MetaData)) }; // 3846609678
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::NewProp_CompletionStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::NewProp_InAppRestorePurchaseInformation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::NewProp_InAppRestorePurchaseInformation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InAppPurchaseRestoreCallbackProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils, nullptr, "InAppPurchaseRestoreResult__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventInAppPurchaseRestoreResult_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UInAppPurchaseRestoreCallbackProxy::execCreateProxyObjectForInAppPurchaseRestore)
	{
		P_GET_TARRAY_REF(FInAppPurchaseProductRequest,Z_Param_Out_ConsumableProductFlags);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInAppPurchaseRestoreCallbackProxy**)Z_Param__Result=UInAppPurchaseRestoreCallbackProxy::CreateProxyObjectForInAppPurchaseRestore(Z_Param_Out_ConsumableProductFlags,Z_Param_PlayerController);
		P_NATIVE_END;
	}
	void UInAppPurchaseRestoreCallbackProxy::StaticRegisterNativesUInAppPurchaseRestoreCallbackProxy()
	{
		UClass* Class = UInAppPurchaseRestoreCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateProxyObjectForInAppPurchaseRestore", &UInAppPurchaseRestoreCallbackProxy::execCreateProxyObjectForInAppPurchaseRestore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics
	{
		struct InAppPurchaseRestoreCallbackProxy_eventCreateProxyObjectForInAppPurchaseRestore_Parms
		{
			TArray<FInAppPurchaseProductRequest> ConsumableProductFlags;
			APlayerController* PlayerController;
			UInAppPurchaseRestoreCallbackProxy* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConsumableProductFlags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConsumableProductFlags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConsumableProductFlags;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ConsumableProductFlags_Inner = { "ConsumableProductFlags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInAppPurchaseProductRequest, METADATA_PARAMS(nullptr, 0) }; // 749960989
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ConsumableProductFlags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ConsumableProductFlags = { "ConsumableProductFlags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InAppPurchaseRestoreCallbackProxy_eventCreateProxyObjectForInAppPurchaseRestore_Parms, ConsumableProductFlags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ConsumableProductFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ConsumableProductFlags_MetaData)) }; // 749960989
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InAppPurchaseRestoreCallbackProxy_eventCreateProxyObjectForInAppPurchaseRestore_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InAppPurchaseRestoreCallbackProxy_eventCreateProxyObjectForInAppPurchaseRestore_Parms, ReturnValue), Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ConsumableProductFlags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ConsumableProductFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|InAppPurchase" },
		{ "Comment", "// Kicks off a transaction for the provided product identifier\n" },
		{ "DisplayName", "Restore In-App Purchases" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseRestoreCallbackProxy.h" },
		{ "ToolTip", "Kicks off a transaction for the provided product identifier" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy, nullptr, "CreateProxyObjectForInAppPurchaseRestore", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::InAppPurchaseRestoreCallbackProxy_eventCreateProxyObjectForInAppPurchaseRestore_Parms), Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInAppPurchaseRestoreCallbackProxy);
	UClass* Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_NoRegister()
	{
		return UInAppPurchaseRestoreCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore, "CreateProxyObjectForInAppPurchaseRestore" }, // 2968228164
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InAppPurchaseRestoreCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseRestoreCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful In-App Purchase transaction\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseRestoreCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful In-App Purchase transaction" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInAppPurchaseRestoreCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) }; // 704831751
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful In-App Purchase transaction\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseRestoreCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful In-App Purchase transaction" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInAppPurchaseRestoreCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::NewProp_OnFailure_MetaData)) }; // 704831751
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInAppPurchaseRestoreCallbackProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::ClassParams = {
		&UInAppPurchaseRestoreCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy()
	{
		if (!Z_Registration_Info_UClass_UInAppPurchaseRestoreCallbackProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInAppPurchaseRestoreCallbackProxy.OuterSingleton, Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInAppPurchaseRestoreCallbackProxy.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UInAppPurchaseRestoreCallbackProxy>()
	{
		return UInAppPurchaseRestoreCallbackProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInAppPurchaseRestoreCallbackProxy);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy, UInAppPurchaseRestoreCallbackProxy::StaticClass, TEXT("UInAppPurchaseRestoreCallbackProxy"), &Z_Registration_Info_UClass_UInAppPurchaseRestoreCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInAppPurchaseRestoreCallbackProxy), 4056688395U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy_h_1638056462(TEXT("/Script/OnlineSubsystemUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
