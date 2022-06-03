// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAIRequestID;
class UPathFollowingComponent;
class UAIPerceptionComponent;
struct FGameplayResourceSet;
class AActor;
class UGameplayTaskResource;
class UBlackboardData;
class UBlackboardComponent;
class UBehaviorTree;
class UNavigationQueryFilter;
#ifdef AIMODULE_AIController_generated_h
#error "AIController.generated.h already included, missing '#pragma once' in AIController.h"
#endif
#define AIMODULE_AIController_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_40_DELEGATE \
struct _Script_AIModule_eventAIMoveCompletedSignature_Parms \
{ \
	FAIRequestID RequestID; \
	TEnumAsByte<EPathFollowingResult::Type> Result; \
}; \
static inline void FAIMoveCompletedSignature_DelegateWrapper(const FMulticastScriptDelegate& AIMoveCompletedSignature, FAIRequestID RequestID, EPathFollowingResult::Type Result) \
{ \
	_Script_AIModule_eventAIMoveCompletedSignature_Parms Parms; \
	Parms.RequestID=RequestID; \
	Parms.Result=Result; \
	AIMoveCompletedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_87_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_87_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPathFollowingComponent); \
	DECLARE_FUNCTION(execGetAIPerceptionComponent); \
	DECLARE_FUNCTION(execGetPathFollowingComponent); \
	DECLARE_FUNCTION(execOnGameplayTaskResourcesClaimed); \
	DECLARE_FUNCTION(execK2_ClearFocus); \
	DECLARE_FUNCTION(execGetFocusActor); \
	DECLARE_FUNCTION(execK2_SetFocus); \
	DECLARE_FUNCTION(execK2_SetFocalPoint); \
	DECLARE_FUNCTION(execGetFocalPointOnActor); \
	DECLARE_FUNCTION(execGetFocalPoint); \
	DECLARE_FUNCTION(execUnclaimTaskResource); \
	DECLARE_FUNCTION(execClaimTaskResource); \
	DECLARE_FUNCTION(execUseBlackboard); \
	DECLARE_FUNCTION(execRunBehaviorTree); \
	DECLARE_FUNCTION(execSetMoveBlockDetection); \
	DECLARE_FUNCTION(execGetImmediateMoveDestination); \
	DECLARE_FUNCTION(execHasPartialPath); \
	DECLARE_FUNCTION(execGetMoveStatus); \
	DECLARE_FUNCTION(execMoveToLocation); \
	DECLARE_FUNCTION(execMoveToActor);


#define FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPathFollowingComponent); \
	DECLARE_FUNCTION(execGetAIPerceptionComponent); \
	DECLARE_FUNCTION(execGetPathFollowingComponent); \
	DECLARE_FUNCTION(execOnGameplayTaskResourcesClaimed); \
	DECLARE_FUNCTION(execK2_ClearFocus); \
	DECLARE_FUNCTION(execGetFocusActor); \
	DECLARE_FUNCTION(execK2_SetFocus); \
	DECLARE_FUNCTION(execK2_SetFocalPoint); \
	DECLARE_FUNCTION(execGetFocalPointOnActor); \
	DECLARE_FUNCTION(execGetFocalPoint); \
	DECLARE_FUNCTION(execUnclaimTaskResource); \
	DECLARE_FUNCTION(execClaimTaskResource); \
	DECLARE_FUNCTION(execUseBlackboard); \
	DECLARE_FUNCTION(execRunBehaviorTree); \
	DECLARE_FUNCTION(execSetMoveBlockDetection); \
	DECLARE_FUNCTION(execGetImmediateMoveDestination); \
	DECLARE_FUNCTION(execHasPartialPath); \
	DECLARE_FUNCTION(execGetMoveStatus); \
	DECLARE_FUNCTION(execMoveToLocation); \
	DECLARE_FUNCTION(execMoveToActor);


#define FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_87_EVENT_PARMS \
	struct AIController_eventOnUsingBlackBoard_Parms \
	{ \
		UBlackboardComponent* BlackboardComp; \
		UBlackboardData* BlackboardAsset; \
	};


#define FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_87_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIController(); \
	friend struct Z_Construct_UClass_AAIController_Statics; \
public: \
	DECLARE_CLASS(AAIController, AController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(AAIController) \
	virtual UObject* _getUObject() const override { return const_cast<AAIController*>(this); }


#define FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_87_INCLASS \
private: \
	static void StaticRegisterNativesAAIController(); \
	friend struct Z_Construct_UClass_AAIController_Statics; \
public: \
	DECLARE_CLASS(AAIController, AController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(AAIController) \
	virtual UObject* _getUObject() const override { return const_cast<AAIController*>(this); }


#define FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_87_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIController(AAIController&&); \
	NO_API AAIController(const AAIController&); \
public:


#define FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_87_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIController(AAIController&&); \
	NO_API AAIController(const AAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIController)


#define FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_84_PROLOG \
	FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_87_EVENT_PARMS


#define FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_87_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_87_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_87_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_87_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_87_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_87_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_87_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_87_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_87_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class AAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_AIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
