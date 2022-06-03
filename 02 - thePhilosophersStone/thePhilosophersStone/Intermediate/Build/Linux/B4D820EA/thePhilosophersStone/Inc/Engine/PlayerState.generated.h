// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerState;
class APawn;
struct FUniqueNetIdRepl;
class APlayerController;
class AActor;
#ifdef ENGINE_PlayerState_generated_h
#error "PlayerState.generated.h already included, missing '#pragma once' in PlayerState.h"
#endif
#define ENGINE_PlayerState_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_61_DELEGATE \
struct _Script_Engine_eventOnPlayerStatePawnSet_Parms \
{ \
	APlayerState* Player; \
	APawn* NewPawn; \
	APawn* OldPawn; \
}; \
static inline void FOnPlayerStatePawnSet_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerStatePawnSet, APlayerState* Player, APawn* NewPawn, APawn* OldPawn) \
{ \
	_Script_Engine_eventOnPlayerStatePawnSet_Parms Parms; \
	Parms.Player=Player; \
	Parms.NewPawn=NewPawn; \
	Parms.OldPawn=OldPawn; \
	OnPlayerStatePawnSet.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_70_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_70_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_GetUniqueId); \
	DECLARE_FUNCTION(execIsOnlyASpectator); \
	DECLARE_FUNCTION(execGetPingInMilliseconds); \
	DECLARE_FUNCTION(execGetPlayerName); \
	DECLARE_FUNCTION(execGetPlayerController); \
	DECLARE_FUNCTION(execGetPawn); \
	DECLARE_FUNCTION(execOnRep_UniqueId); \
	DECLARE_FUNCTION(execOnRep_PlayerId); \
	DECLARE_FUNCTION(execOnRep_bIsInactive); \
	DECLARE_FUNCTION(execOnRep_PlayerName); \
	DECLARE_FUNCTION(execOnRep_Score); \
	DECLARE_FUNCTION(execOnPawnPrivateDestroyed);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_GetUniqueId); \
	DECLARE_FUNCTION(execIsOnlyASpectator); \
	DECLARE_FUNCTION(execGetPingInMilliseconds); \
	DECLARE_FUNCTION(execGetPlayerName); \
	DECLARE_FUNCTION(execGetPlayerController); \
	DECLARE_FUNCTION(execGetPawn); \
	DECLARE_FUNCTION(execOnRep_UniqueId); \
	DECLARE_FUNCTION(execOnRep_PlayerId); \
	DECLARE_FUNCTION(execOnRep_bIsInactive); \
	DECLARE_FUNCTION(execOnRep_PlayerName); \
	DECLARE_FUNCTION(execOnRep_Score); \
	DECLARE_FUNCTION(execOnPawnPrivateDestroyed);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_70_EVENT_PARMS \
	struct PlayerState_eventReceiveCopyProperties_Parms \
	{ \
		APlayerState* NewPlayerState; \
	}; \
	struct PlayerState_eventReceiveOverrideWith_Parms \
	{ \
		APlayerState* OldPlayerState; \
	};


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_70_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerState(); \
	friend struct Z_Construct_UClass_APlayerState_Statics; \
public: \
	DECLARE_CLASS(APlayerState, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(APlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Score=NETFIELD_REP_START, \
		PlayerId, \
		CompressedPing, \
		bIsSpectator, \
		bOnlySpectator, \
		bIsABot, \
		bIsInactive, \
		bFromPreviousLevel, \
		StartTime, \
		UniqueId, \
		PlayerNamePrivate, \
		NETFIELD_REP_END=PlayerNamePrivate	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_70_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerState(); \
	friend struct Z_Construct_UClass_APlayerState_Statics; \
public: \
	DECLARE_CLASS(APlayerState, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(APlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Score=NETFIELD_REP_START, \
		PlayerId, \
		CompressedPing, \
		bIsSpectator, \
		bOnlySpectator, \
		bIsABot, \
		bIsInactive, \
		bFromPreviousLevel, \
		StartTime, \
		UniqueId, \
		PlayerNamePrivate, \
		NETFIELD_REP_END=PlayerNamePrivate	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_70_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerState(APlayerState&&); \
	NO_API APlayerState(const APlayerState&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerState(APlayerState&&); \
	NO_API APlayerState(const APlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerState)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_67_PROLOG \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_70_EVENT_PARMS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_70_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_70_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_70_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_70_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_70_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_70_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_70_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_70_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_70_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_70_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlayerState."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class APlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
