// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameInstance() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NETCORE_API UEnum* Z_Construct_UEnum_NetCore_ENetworkFailure();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETravelFailure();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineSession_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnPawnControllerChanged_Parms
		{
			APawn* Pawn;
			AController* Controller;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnPawnControllerChanged_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnPawnControllerChanged_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnPawnControllerChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature_Statics::_Script_Engine_eventOnPawnControllerChanged_Parms), Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UGameInstance::execDebugRemovePlayer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugRemovePlayer(Z_Param_ControllerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameInstance::execDebugCreatePlayer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugCreatePlayer(Z_Param_ControllerId);
		P_NATIVE_END;
	}
	static FName NAME_UGameInstance_HandleNetworkError = FName(TEXT("HandleNetworkError"));
	void UGameInstance::HandleNetworkError(ENetworkFailure::Type FailureType, bool bIsServer)
	{
		GameInstance_eventHandleNetworkError_Parms Parms;
		Parms.FailureType=FailureType;
		Parms.bIsServer=bIsServer ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UGameInstance_HandleNetworkError),&Parms);
	}
	static FName NAME_UGameInstance_HandleTravelError = FName(TEXT("HandleTravelError"));
	void UGameInstance::HandleTravelError(ETravelFailure::Type FailureType)
	{
		GameInstance_eventHandleTravelError_Parms Parms;
		Parms.FailureType=FailureType;
		ProcessEvent(FindFunctionChecked(NAME_UGameInstance_HandleTravelError),&Parms);
	}
	static FName NAME_UGameInstance_ReceiveInit = FName(TEXT("ReceiveInit"));
	void UGameInstance::ReceiveInit()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGameInstance_ReceiveInit),NULL);
	}
	static FName NAME_UGameInstance_ReceiveShutdown = FName(TEXT("ReceiveShutdown"));
	void UGameInstance::ReceiveShutdown()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGameInstance_ReceiveShutdown),NULL);
	}
	void UGameInstance::StaticRegisterNativesUGameInstance()
	{
		UClass* Class = UGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DebugCreatePlayer", &UGameInstance::execDebugCreatePlayer },
			{ "DebugRemovePlayer", &UGameInstance::execDebugRemovePlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics
	{
		struct GameInstance_eventDebugCreatePlayer_Parms
		{
			int32 ControllerId;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameInstance_eventDebugCreatePlayer_Parms, ControllerId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::NewProp_ControllerId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Debug console command to create a player.\n\x09 * @param ControllerId - The controller ID the player should accept input from.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "Debug console command to create a player.\n@param ControllerId - The controller ID the player should accept input from." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameInstance, nullptr, "DebugCreatePlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::GameInstance_eventDebugCreatePlayer_Parms), Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameInstance_DebugCreatePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics
	{
		struct GameInstance_eventDebugRemovePlayer_Parms
		{
			int32 ControllerId;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameInstance_eventDebugRemovePlayer_Parms, ControllerId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::NewProp_ControllerId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Debug console command to remove the player with a given controller ID.\n\x09 * @param ControllerId - The controller ID to search for.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "Debug console command to remove the player with a given controller ID.\n@param ControllerId - The controller ID to search for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameInstance, nullptr, "DebugRemovePlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::GameInstance_eventDebugRemovePlayer_Parms), Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameInstance_DebugRemovePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_FailureType;
		static void NewProp_bIsServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsServer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::NewProp_FailureType = { "FailureType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameInstance_eventHandleNetworkError_Parms, FailureType), Z_Construct_UEnum_NetCore_ENetworkFailure, METADATA_PARAMS(nullptr, 0) }; // 2906493918
	void Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::NewProp_bIsServer_SetBit(void* Obj)
	{
		((GameInstance_eventHandleNetworkError_Parms*)Obj)->bIsServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::NewProp_bIsServer = { "bIsServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameInstance_eventHandleNetworkError_Parms), &Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::NewProp_bIsServer_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::NewProp_FailureType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::NewProp_bIsServer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Opportunity for blueprints to handle network errors. */" },
		{ "DisplayName", "NetworkError" },
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "Opportunity for blueprints to handle network errors." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameInstance, nullptr, "HandleNetworkError", nullptr, nullptr, sizeof(GameInstance_eventHandleNetworkError_Parms), Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameInstance_HandleNetworkError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_FailureType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics::NewProp_FailureType = { "FailureType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameInstance_eventHandleTravelError_Parms, FailureType), Z_Construct_UEnum_Engine_ETravelFailure, METADATA_PARAMS(nullptr, 0) }; // 3427391582
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics::NewProp_FailureType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Opportunity for blueprints to handle travel errors. */" },
		{ "DisplayName", "TravelError" },
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "Opportunity for blueprints to handle travel errors." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameInstance, nullptr, "HandleTravelError", nullptr, nullptr, sizeof(GameInstance_eventHandleTravelError_Parms), Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameInstance_HandleTravelError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameInstance_ReceiveInit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameInstance_ReceiveInit_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Opportunity for blueprints to handle the game instance being initialized. */" },
		{ "DisplayName", "Init" },
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "Opportunity for blueprints to handle the game instance being initialized." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameInstance_ReceiveInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameInstance, nullptr, "ReceiveInit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameInstance_ReceiveInit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_ReceiveInit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameInstance_ReceiveInit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameInstance_ReceiveInit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameInstance_ReceiveShutdown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameInstance_ReceiveShutdown_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Opportunity for blueprints to handle the game instance being shutdown. */" },
		{ "DisplayName", "Shutdown" },
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "Opportunity for blueprints to handle the game instance being shutdown." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameInstance_ReceiveShutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameInstance, nullptr, "ReceiveShutdown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameInstance_ReceiveShutdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_ReceiveShutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameInstance_ReceiveShutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameInstance_ReceiveShutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameInstance);
	UClass* Z_Construct_UClass_UGameInstance_NoRegister()
	{
		return UGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LocalPlayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalPlayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalPlayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnlineSession_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OnlineSession;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReferencedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencedObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPawnControllerChangedDelegates_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPawnControllerChangedDelegates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameInstance_DebugCreatePlayer, "DebugCreatePlayer" }, // 84035707
		{ &Z_Construct_UFunction_UGameInstance_DebugRemovePlayer, "DebugRemovePlayer" }, // 2883718410
		{ &Z_Construct_UFunction_UGameInstance_HandleNetworkError, "HandleNetworkError" }, // 3598407367
		{ &Z_Construct_UFunction_UGameInstance_HandleTravelError, "HandleTravelError" }, // 1500383792
		{ &Z_Construct_UFunction_UGameInstance_ReceiveInit, "ReceiveInit" }, // 63431961
		{ &Z_Construct_UFunction_UGameInstance_ReceiveShutdown, "ReceiveShutdown" }, // 3355948676
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * GameInstance: high-level manager object for an instance of the running game.\n * Spawned at game creation and not destroyed until game instance is shut down.\n * Running as a standalone game, there will be one of these.\n * Running in PIE (play-in-editor) will generate one of these per PIE instance.\n */" },
		{ "IncludePath", "Engine/GameInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "GameInstance: high-level manager object for an instance of the running game.\nSpawned at game creation and not destroyed until game instance is shut down.\nRunning as a standalone game, there will be one of these.\nRunning in PIE (play-in-editor) will generate one of these per PIE instance." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameInstance_Statics::NewProp_LocalPlayers_Inner = { "LocalPlayers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameInstance_Statics::NewProp_LocalPlayers_MetaData[] = {
		{ "Comment", "/** List of locally participating players in this game instance */" },
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "List of locally participating players in this game instance" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameInstance_Statics::NewProp_LocalPlayers = { "LocalPlayers", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameInstance, LocalPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameInstance_Statics::NewProp_LocalPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstance_Statics::NewProp_LocalPlayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameInstance_Statics::NewProp_OnlineSession_MetaData[] = {
		{ "Comment", "/** Class to manage online services */" },
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "Class to manage online services" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameInstance_Statics::NewProp_OnlineSession = { "OnlineSession", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameInstance, OnlineSession), Z_Construct_UClass_UOnlineSession_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameInstance_Statics::NewProp_OnlineSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstance_Statics::NewProp_OnlineSession_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameInstance_Statics::NewProp_ReferencedObjects_Inner = { "ReferencedObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameInstance_Statics::NewProp_ReferencedObjects_MetaData[] = {
		{ "Comment", "/** List of objects that are being kept alive by this game instance. Stored as array for fast iteration, should not be modified every frame */" },
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "List of objects that are being kept alive by this game instance. Stored as array for fast iteration, should not be modified every frame" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameInstance_Statics::NewProp_ReferencedObjects = { "ReferencedObjects", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameInstance, ReferencedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameInstance_Statics::NewProp_ReferencedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstance_Statics::NewProp_ReferencedObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameInstance_Statics::NewProp_OnPawnControllerChangedDelegates_MetaData[] = {
		{ "Comment", "/** gets triggered shortly after a pawn's controller is set. Most of the time \n\x09 *\x09it signals that the Controller has changed but in edge cases (like during \n\x09 *\x09replication) it might end up broadcasting the same pawn-controller pair \n\x09 *\x09more than once */" },
		{ "DisplayName", "OnPawnControllerChanged" },
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "gets triggered shortly after a pawn's controller is set. Most of the time\n    it signals that the Controller has changed but in edge cases (like during\n    replication) it might end up broadcasting the same pawn-controller pair\n    more than once" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameInstance_Statics::NewProp_OnPawnControllerChangedDelegates = { "OnPawnControllerChangedDelegates", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameInstance, OnPawnControllerChangedDelegates), Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameInstance_Statics::NewProp_OnPawnControllerChangedDelegates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstance_Statics::NewProp_OnPawnControllerChangedDelegates_MetaData)) }; // 1650183576
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstance_Statics::NewProp_LocalPlayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstance_Statics::NewProp_LocalPlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstance_Statics::NewProp_OnlineSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstance_Statics::NewProp_ReferencedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstance_Statics::NewProp_ReferencedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstance_Statics::NewProp_OnPawnControllerChangedDelegates,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameInstance_Statics::ClassParams = {
		&UGameInstance::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameInstance()
	{
		if (!Z_Registration_Info_UClass_UGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameInstance.OuterSingleton, Z_Construct_UClass_UGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameInstance.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UGameInstance>()
	{
		return UGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameInstance);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameInstance, UGameInstance::StaticClass, TEXT("UGameInstance"), &Z_Registration_Info_UClass_UGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameInstance), 1695599334U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_123797992(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
