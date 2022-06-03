// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class AController;
class AActor;
class APlayerController;
class UPawnMovementComponent;
#ifdef ENGINE_Pawn_generated_h
#error "Pawn.generated.h already included, missing '#pragma once' in Pawn.h"
#endif
#define ENGINE_Pawn_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_30_DELEGATE \
struct _Script_Engine_eventPawnRestartedSignature_Parms \
{ \
	APawn* Pawn; \
}; \
static inline void FPawnRestartedSignature_DelegateWrapper(const FMulticastScriptDelegate& PawnRestartedSignature, APawn* Pawn) \
{ \
	_Script_Engine_eventPawnRestartedSignature_Parms Parms; \
	Parms.Pawn=Pawn; \
	PawnRestartedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_31_DELEGATE \
struct _Script_Engine_eventPawnControllerChangedSignature_Parms \
{ \
	APawn* Pawn; \
	AController* OldController; \
	AController* NewController; \
}; \
static inline void FPawnControllerChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& PawnControllerChangedSignature, APawn* Pawn, AController* OldController, AController* NewController) \
{ \
	_Script_Engine_eventPawnControllerChangedSignature_Parms Parms; \
	Parms.Pawn=Pawn; \
	Parms.OldController=OldController; \
	Parms.NewController=NewController; \
	PawnControllerChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_42_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsMoveInputIgnored); \
	DECLARE_FUNCTION(execAddControllerRollInput); \
	DECLARE_FUNCTION(execAddControllerYawInput); \
	DECLARE_FUNCTION(execAddControllerPitchInput); \
	DECLARE_FUNCTION(execConsumeMovementInputVector); \
	DECLARE_FUNCTION(execGetLastMovementInputVector); \
	DECLARE_FUNCTION(execGetPendingMovementInputVector); \
	DECLARE_FUNCTION(execAddMovementInput); \
	DECLARE_FUNCTION(execSpawnDefaultController); \
	DECLARE_FUNCTION(execDetachFromControllerPendingDestroy); \
	DECLARE_FUNCTION(execGetBaseAimRotation); \
	DECLARE_FUNCTION(execIsBotControlled); \
	DECLARE_FUNCTION(execIsPlayerControlled); \
	DECLARE_FUNCTION(execIsLocallyControlled); \
	DECLARE_FUNCTION(execGetNavAgentLocation); \
	DECLARE_FUNCTION(execSetCanAffectNavigationGeneration); \
	DECLARE_FUNCTION(execOnRep_PlayerState); \
	DECLARE_FUNCTION(execOnRep_Controller); \
	DECLARE_FUNCTION(execGetControlRotation); \
	DECLARE_FUNCTION(execGetController); \
	DECLARE_FUNCTION(execIsPawnControlled); \
	DECLARE_FUNCTION(execIsControlled); \
	DECLARE_FUNCTION(execGetMovementBaseActor); \
	DECLARE_FUNCTION(execIsLocallyViewed); \
	DECLARE_FUNCTION(execGetLocalViewingPlayerController); \
	DECLARE_FUNCTION(execPawnMakeNoise); \
	DECLARE_FUNCTION(execGetMovementComponent);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsMoveInputIgnored); \
	DECLARE_FUNCTION(execAddControllerRollInput); \
	DECLARE_FUNCTION(execAddControllerYawInput); \
	DECLARE_FUNCTION(execAddControllerPitchInput); \
	DECLARE_FUNCTION(execConsumeMovementInputVector); \
	DECLARE_FUNCTION(execGetLastMovementInputVector); \
	DECLARE_FUNCTION(execGetPendingMovementInputVector); \
	DECLARE_FUNCTION(execAddMovementInput); \
	DECLARE_FUNCTION(execSpawnDefaultController); \
	DECLARE_FUNCTION(execDetachFromControllerPendingDestroy); \
	DECLARE_FUNCTION(execGetBaseAimRotation); \
	DECLARE_FUNCTION(execIsBotControlled); \
	DECLARE_FUNCTION(execIsPlayerControlled); \
	DECLARE_FUNCTION(execIsLocallyControlled); \
	DECLARE_FUNCTION(execGetNavAgentLocation); \
	DECLARE_FUNCTION(execSetCanAffectNavigationGeneration); \
	DECLARE_FUNCTION(execOnRep_PlayerState); \
	DECLARE_FUNCTION(execOnRep_Controller); \
	DECLARE_FUNCTION(execGetControlRotation); \
	DECLARE_FUNCTION(execGetController); \
	DECLARE_FUNCTION(execIsPawnControlled); \
	DECLARE_FUNCTION(execIsControlled); \
	DECLARE_FUNCTION(execGetMovementBaseActor); \
	DECLARE_FUNCTION(execIsLocallyViewed); \
	DECLARE_FUNCTION(execGetLocalViewingPlayerController); \
	DECLARE_FUNCTION(execPawnMakeNoise); \
	DECLARE_FUNCTION(execGetMovementComponent);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_42_EVENT_PARMS \
	struct Pawn_eventReceiveControllerChanged_Parms \
	{ \
		AController* OldController; \
		AController* NewController; \
	}; \
	struct Pawn_eventReceivePossessed_Parms \
	{ \
		AController* NewController; \
	}; \
	struct Pawn_eventReceiveUnpossessed_Parms \
	{ \
		AController* OldController; \
	};


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_42_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPawn(); \
	friend struct Z_Construct_UClass_APawn_Statics; \
public: \
	DECLARE_CLASS(APawn, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_APawn, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(APawn) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<APawn*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RemoteViewPitch=NETFIELD_REP_START, \
		PlayerState, \
		Controller, \
		NETFIELD_REP_END=Controller	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_42_INCLASS \
private: \
	static void StaticRegisterNativesAPawn(); \
	friend struct Z_Construct_UClass_APawn_Statics; \
public: \
	DECLARE_CLASS(APawn, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_APawn, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(APawn) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<APawn*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RemoteViewPitch=NETFIELD_REP_START, \
		PlayerState, \
		Controller, \
		NETFIELD_REP_END=Controller	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawn(APawn&&); \
	NO_API APawn(const APawn&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APawn(APawn&&); \
	NO_API APawn(const APawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APawn)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_39_PROLOG \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_42_EVENT_PARMS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_42_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_42_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_42_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_42_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_42_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_42_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class APawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
