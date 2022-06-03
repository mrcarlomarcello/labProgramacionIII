// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Public/Interfaces/OnlineStoreInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineStoreInterface() {}
// Cross Module References
	ONLINESUBSYSTEM_API UEnum* Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystem();
	ONLINESUBSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseProductRequest();
	ONLINESUBSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseProductInfo();
	ONLINESUBSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInAppPurchaseState;
	static UEnum* EInAppPurchaseState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInAppPurchaseState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInAppPurchaseState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState, Z_Construct_UPackage__Script_OnlineSubsystem(), TEXT("EInAppPurchaseState"));
		}
		return Z_Registration_Info_UEnum_EInAppPurchaseState.OuterSingleton;
	}
	template<> ONLINESUBSYSTEM_API UEnum* StaticEnum<EInAppPurchaseState::Type>()
	{
		return EInAppPurchaseState_StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState_Statics::Enumerators[] = {
		{ "EInAppPurchaseState::Unknown", (int64)EInAppPurchaseState::Unknown },
		{ "EInAppPurchaseState::Success", (int64)EInAppPurchaseState::Success },
		{ "EInAppPurchaseState::Failed", (int64)EInAppPurchaseState::Failed },
		{ "EInAppPurchaseState::Cancelled", (int64)EInAppPurchaseState::Cancelled },
		{ "EInAppPurchaseState::Invalid", (int64)EInAppPurchaseState::Invalid },
		{ "EInAppPurchaseState::NotAllowed", (int64)EInAppPurchaseState::NotAllowed },
		{ "EInAppPurchaseState::Restored", (int64)EInAppPurchaseState::Restored },
		{ "EInAppPurchaseState::AlreadyOwned", (int64)EInAppPurchaseState::AlreadyOwned },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState_Statics::Enum_MetaDataParams[] = {
		{ "AlreadyOwned.DisplayName", "AlreadyOwned" },
		{ "AlreadyOwned.Name", "EInAppPurchaseState::AlreadyOwned" },
		{ "BlueprintType", "true" },
		{ "Cancelled.DisplayName", "Cancelled" },
		{ "Cancelled.Name", "EInAppPurchaseState::Cancelled" },
		{ "Comment", "/**\n * Possible result states of an in-app purchase transaction\n */" },
		{ "Failed.DisplayName", "Failed" },
		{ "Failed.Name", "EInAppPurchaseState::Failed" },
		{ "Invalid.DisplayName", "Invalid" },
		{ "Invalid.Name", "EInAppPurchaseState::Invalid" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "NotAllowed.DisplayName", "NotAllowed" },
		{ "NotAllowed.Name", "EInAppPurchaseState::NotAllowed" },
		{ "Restored.DisplayName", "Restored" },
		{ "Restored.Name", "EInAppPurchaseState::Restored" },
		{ "Success.DisplayName", "Success" },
		{ "Success.Name", "EInAppPurchaseState::Success" },
		{ "ToolTip", "Possible result states of an in-app purchase transaction" },
		{ "Unknown.DisplayName", "Unknown" },
		{ "Unknown.Name", "EInAppPurchaseState::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystem,
		nullptr,
		"EInAppPurchaseState",
		"EInAppPurchaseState::Type",
		Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState()
	{
		if (!Z_Registration_Info_UEnum_EInAppPurchaseState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInAppPurchaseState.InnerSingleton, Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInAppPurchaseState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InAppPurchaseProductRequest;
class UScriptStruct* FInAppPurchaseProductRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InAppPurchaseProductRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InAppPurchaseProductRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInAppPurchaseProductRequest, Z_Construct_UPackage__Script_OnlineSubsystem(), TEXT("InAppPurchaseProductRequest"));
	}
	return Z_Registration_Info_UScriptStruct_InAppPurchaseProductRequest.OuterSingleton;
}
template<> ONLINESUBSYSTEM_API UScriptStruct* StaticStruct<FInAppPurchaseProductRequest>()
{
	return FInAppPurchaseProductRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProductIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProductIdentifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsConsumable_MetaData[];
#endif
		static void NewProp_bIsConsumable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConsumable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Micro-transaction request information\n */" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "Micro-transaction request information" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInAppPurchaseProductRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::NewProp_ProductIdentifier_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The unique product identifier that matches the one from your targeted store.\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "The unique product identifier that matches the one from your targeted store." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::NewProp_ProductIdentifier = { "ProductIdentifier", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductRequest, ProductIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::NewProp_ProductIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::NewProp_ProductIdentifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::NewProp_bIsConsumable_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// Flag to determine whether this is a consumable purchase, or not.\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "Flag to determine whether this is a consumable purchase, or not." },
	};
#endif
	void Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::NewProp_bIsConsumable_SetBit(void* Obj)
	{
		((FInAppPurchaseProductRequest*)Obj)->bIsConsumable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::NewProp_bIsConsumable = { "bIsConsumable", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInAppPurchaseProductRequest), &Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::NewProp_bIsConsumable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::NewProp_bIsConsumable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::NewProp_bIsConsumable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::NewProp_ProductIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::NewProp_bIsConsumable,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystem,
		nullptr,
		&NewStructOps,
		"InAppPurchaseProductRequest",
		sizeof(FInAppPurchaseProductRequest),
		alignof(FInAppPurchaseProductRequest),
		Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseProductRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_InAppPurchaseProductRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InAppPurchaseProductRequest.InnerSingleton, Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InAppPurchaseProductRequest.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InAppPurchaseProductInfo;
class UScriptStruct* FInAppPurchaseProductInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InAppPurchaseProductInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InAppPurchaseProductInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo, Z_Construct_UPackage__Script_OnlineSubsystem(), TEXT("InAppPurchaseProductInfo"));
	}
	return Z_Registration_Info_UScriptStruct_InAppPurchaseProductInfo.OuterSingleton;
}
template<> ONLINESUBSYSTEM_API UScriptStruct* StaticStruct<FInAppPurchaseProductInfo>()
{
	return FInAppPurchaseProductInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransactionIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TransactionIdentifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayPrice_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayPrice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawPrice_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RawPrice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrencyCode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurrencyCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrencySymbol_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurrencySymbol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecimalSeparator_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DecimalSeparator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupingSeparator_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GroupingSeparator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReceiptData_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReceiptData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Micro-transaction purchase information\n */" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "Micro-transaction purchase information" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInAppPurchaseProductInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_Identifier_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The unique product identifier\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "The unique product identifier" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo, Identifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_Identifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_TransactionIdentifier_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// the unique transaction identifier\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "the unique transaction identifier" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_TransactionIdentifier = { "TransactionIdentifier", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo, TransactionIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_TransactionIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_TransactionIdentifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The localized display name\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "The localized display name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DisplayDescription_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The localized display description name\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "The localized display description name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DisplayDescription = { "DisplayDescription", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo, DisplayDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DisplayDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DisplayDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DisplayPrice_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The localized display price name\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "The localized display price name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DisplayPrice = { "DisplayPrice", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo, DisplayPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DisplayPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DisplayPrice_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_RawPrice_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// Raw price without currency code and symbol\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "Raw price without currency code and symbol" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_RawPrice = { "RawPrice", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo, RawPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_RawPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_RawPrice_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_CurrencyCode_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The localized currency code of the price\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "The localized currency code of the price" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_CurrencyCode = { "CurrencyCode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo, CurrencyCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_CurrencyCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_CurrencyCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_CurrencySymbol_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The localized currency symbol of the price\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "The localized currency symbol of the price" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_CurrencySymbol = { "CurrencySymbol", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo, CurrencySymbol), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_CurrencySymbol_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_CurrencySymbol_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DecimalSeparator_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The localized decimal separator used in the price\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "The localized decimal separator used in the price" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DecimalSeparator = { "DecimalSeparator", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo, DecimalSeparator), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DecimalSeparator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DecimalSeparator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_GroupingSeparator_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The localized grouping separator of the price\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "The localized grouping separator of the price" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_GroupingSeparator = { "GroupingSeparator", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo, GroupingSeparator), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_GroupingSeparator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_GroupingSeparator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_ReceiptData_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// Opaque receipt data for the transaction\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "Opaque receipt data for the transaction" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_ReceiptData = { "ReceiptData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo, ReceiptData), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_ReceiptData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_ReceiptData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_TransactionIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DisplayDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DisplayPrice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_RawPrice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_CurrencyCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_CurrencySymbol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DecimalSeparator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_GroupingSeparator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_ReceiptData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystem,
		nullptr,
		&NewStructOps,
		"InAppPurchaseProductInfo",
		sizeof(FInAppPurchaseProductInfo),
		alignof(FInAppPurchaseProductInfo),
		Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseProductInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_InAppPurchaseProductInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InAppPurchaseProductInfo.InnerSingleton, Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InAppPurchaseProductInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InAppPurchaseRestoreInfo;
class UScriptStruct* FInAppPurchaseRestoreInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InAppPurchaseRestoreInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InAppPurchaseRestoreInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo, Z_Construct_UPackage__Script_OnlineSubsystem(), TEXT("InAppPurchaseRestoreInfo"));
	}
	return Z_Registration_Info_UScriptStruct_InAppPurchaseRestoreInfo.OuterSingleton;
}
template<> ONLINESUBSYSTEM_API UScriptStruct* StaticStruct<FInAppPurchaseRestoreInfo>()
{
	return FInAppPurchaseRestoreInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReceiptData_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReceiptData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransactionIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TransactionIdentifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Micro-transaction restored purchase information\n */" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "Micro-transaction restored purchase information" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInAppPurchaseRestoreInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewProp_Identifier_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The unique product identifier\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "The unique product identifier" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseRestoreInfo, Identifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewProp_Identifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewProp_ReceiptData_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The opaque receipt data for the platform\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "The opaque receipt data for the platform" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewProp_ReceiptData = { "ReceiptData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseRestoreInfo, ReceiptData), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewProp_ReceiptData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewProp_ReceiptData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewProp_TransactionIdentifier_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// the unique transaction identifier\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "the unique transaction identifier" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewProp_TransactionIdentifier = { "TransactionIdentifier", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseRestoreInfo, TransactionIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewProp_TransactionIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewProp_TransactionIdentifier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewProp_ReceiptData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewProp_TransactionIdentifier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystem,
		nullptr,
		&NewStructOps,
		"InAppPurchaseRestoreInfo",
		sizeof(FInAppPurchaseRestoreInfo),
		alignof(FInAppPurchaseRestoreInfo),
		Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_InAppPurchaseRestoreInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InAppPurchaseRestoreInfo.InnerSingleton, Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InAppPurchaseRestoreInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_OnlineStoreInterface_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_OnlineStoreInterface_h_Statics::EnumInfo[] = {
		{ EInAppPurchaseState_StaticEnum, TEXT("EInAppPurchaseState"), &Z_Registration_Info_UEnum_EInAppPurchaseState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1494912028U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_OnlineStoreInterface_h_Statics::ScriptStructInfo[] = {
		{ FInAppPurchaseProductRequest::StaticStruct, Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::NewStructOps, TEXT("InAppPurchaseProductRequest"), &Z_Registration_Info_UScriptStruct_InAppPurchaseProductRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInAppPurchaseProductRequest), 749960989U) },
		{ FInAppPurchaseProductInfo::StaticStruct, Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewStructOps, TEXT("InAppPurchaseProductInfo"), &Z_Registration_Info_UScriptStruct_InAppPurchaseProductInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInAppPurchaseProductInfo), 2585433698U) },
		{ FInAppPurchaseRestoreInfo::StaticStruct, Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewStructOps, TEXT("InAppPurchaseRestoreInfo"), &Z_Registration_Info_UScriptStruct_InAppPurchaseRestoreInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInAppPurchaseRestoreInfo), 3846609678U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_OnlineStoreInterface_h_1796620564(TEXT("/Script/OnlineSubsystem"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_OnlineStoreInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_OnlineStoreInterface_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_OnlineStoreInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_OnlineStoreInterface_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
