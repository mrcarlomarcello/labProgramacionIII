// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FChaosPhysicsCollisionInfo;
struct FHitResult;
#ifdef CHAOSSOLVERENGINE_ChaosNotifyHandlerInterface_generated_h
#error "ChaosNotifyHandlerInterface.generated.h already included, missing '#pragma once' in ChaosNotifyHandlerInterface.h"
#endif
#define CHAOSSOLVERENGINE_ChaosNotifyHandlerInterface_generated_h

#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHAOSSOLVERENGINE_API UScriptStruct* StaticStruct<struct FChaosPhysicsCollisionInfo>();

#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_54_DELEGATE \
struct _Script_ChaosSolverEngine_eventOnChaosPhysicsCollision_Parms \
{ \
	FChaosPhysicsCollisionInfo CollisionInfo; \
}; \
static inline void FOnChaosPhysicsCollision_DelegateWrapper(const FMulticastScriptDelegate& OnChaosPhysicsCollision, FChaosPhysicsCollisionInfo const& CollisionInfo) \
{ \
	_Script_ChaosSolverEngine_eventOnChaosPhysicsCollision_Parms Parms; \
	Parms.CollisionInfo=CollisionInfo; \
	OnChaosPhysicsCollision.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_60_SPARSE_DATA
#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_60_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_60_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosNotifyHandlerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosNotifyHandlerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosNotifyHandlerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosNotifyHandlerInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaosNotifyHandlerInterface(UChaosNotifyHandlerInterface&&); \
	NO_API UChaosNotifyHandlerInterface(const UChaosNotifyHandlerInterface&); \
public:


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosNotifyHandlerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaosNotifyHandlerInterface(UChaosNotifyHandlerInterface&&); \
	NO_API UChaosNotifyHandlerInterface(const UChaosNotifyHandlerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosNotifyHandlerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosNotifyHandlerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosNotifyHandlerInterface)


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_60_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUChaosNotifyHandlerInterface(); \
	friend struct Z_Construct_UClass_UChaosNotifyHandlerInterface_Statics; \
public: \
	DECLARE_CLASS(UChaosNotifyHandlerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ChaosSolverEngine"), NO_API) \
	DECLARE_SERIALIZER(UChaosNotifyHandlerInterface)


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_60_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_60_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_60_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_60_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_60_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_60_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_60_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IChaosNotifyHandlerInterface() {} \
public: \
	typedef UChaosNotifyHandlerInterface UClassType; \
	typedef IChaosNotifyHandlerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_60_INCLASS_IINTERFACE \
protected: \
	virtual ~IChaosNotifyHandlerInterface() {} \
public: \
	typedef UChaosNotifyHandlerInterface UClassType; \
	typedef IChaosNotifyHandlerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_57_PROLOG
#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_65_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_60_SPARSE_DATA \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_60_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_60_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_60_SPARSE_DATA \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_60_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSSOLVERENGINE_API UClass* StaticClass<class UChaosNotifyHandlerInterface>();

#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_87_SPARSE_DATA
#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_87_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConvertPhysicsCollisionToHitResult);


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConvertPhysicsCollisionToHitResult);


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosSolverEngineBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UChaosSolverEngineBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosSolverEngine"), NO_API) \
	DECLARE_SERIALIZER(UChaosSolverEngineBlueprintLibrary)


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_87_INCLASS \
private: \
	static void StaticRegisterNativesUChaosSolverEngineBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UChaosSolverEngineBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosSolverEngine"), NO_API) \
	DECLARE_SERIALIZER(UChaosSolverEngineBlueprintLibrary)


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_87_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosSolverEngineBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosSolverEngineBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosSolverEngineBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosSolverEngineBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaosSolverEngineBlueprintLibrary(UChaosSolverEngineBlueprintLibrary&&); \
	NO_API UChaosSolverEngineBlueprintLibrary(const UChaosSolverEngineBlueprintLibrary&); \
public:


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_87_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosSolverEngineBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaosSolverEngineBlueprintLibrary(UChaosSolverEngineBlueprintLibrary&&); \
	NO_API UChaosSolverEngineBlueprintLibrary(const UChaosSolverEngineBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosSolverEngineBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosSolverEngineBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosSolverEngineBlueprintLibrary)


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_84_PROLOG
#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_87_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_87_SPARSE_DATA \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_87_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_87_INCLASS \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_87_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_87_SPARSE_DATA \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_87_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSSOLVERENGINE_API UClass* StaticClass<class UChaosSolverEngineBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
