// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONLINESUBSYSTEM_OnlineStoreInterface_generated_h
#error "OnlineStoreInterface.generated.h already included, missing '#pragma once' in OnlineStoreInterface.h"
#endif
#define ONLINESUBSYSTEM_OnlineStoreInterface_generated_h

#define FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_OnlineStoreInterface_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics; \
	ONLINESUBSYSTEM_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEM_API UScriptStruct* StaticStruct<struct FInAppPurchaseProductRequest>();

#define FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_OnlineStoreInterface_h_104_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics; \
	ONLINESUBSYSTEM_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEM_API UScriptStruct* StaticStruct<struct FInAppPurchaseProductInfo>();

#define FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_OnlineStoreInterface_h_158_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics; \
	ONLINESUBSYSTEM_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEM_API UScriptStruct* StaticStruct<struct FInAppPurchaseRestoreInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_OnlineStoreInterface_h


#define FOREACH_ENUM_EINAPPPURCHASESTATE(op) \
	op(EInAppPurchaseState::Unknown) \
	op(EInAppPurchaseState::Success) \
	op(EInAppPurchaseState::Failed) \
	op(EInAppPurchaseState::Cancelled) \
	op(EInAppPurchaseState::Invalid) \
	op(EInAppPurchaseState::NotAllowed) \
	op(EInAppPurchaseState::Restored) \
	op(EInAppPurchaseState::AlreadyOwned) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
