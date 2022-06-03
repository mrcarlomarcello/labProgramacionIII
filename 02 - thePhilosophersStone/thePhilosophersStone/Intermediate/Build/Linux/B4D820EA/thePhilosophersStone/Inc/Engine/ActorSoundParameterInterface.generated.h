// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAudioParameter;
#ifdef ENGINE_ActorSoundParameterInterface_generated_h
#error "ActorSoundParameterInterface.generated.h already included, missing '#pragma once' in ActorSoundParameterInterface.h"
#endif
#define ENGINE_ActorSoundParameterInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_30_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_30_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_30_EVENT_PARMS \
	struct ActorSoundParameterInterface_eventGetActorSoundParams_Parms \
	{ \
		TArray<FAudioParameter> Params; \
	};


#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_30_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorSoundParameterInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorSoundParameterInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorSoundParameterInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorSoundParameterInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorSoundParameterInterface(UActorSoundParameterInterface&&); \
	NO_API UActorSoundParameterInterface(const UActorSoundParameterInterface&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorSoundParameterInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorSoundParameterInterface(UActorSoundParameterInterface&&); \
	NO_API UActorSoundParameterInterface(const UActorSoundParameterInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorSoundParameterInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorSoundParameterInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorSoundParameterInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_30_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUActorSoundParameterInterface(); \
	friend struct Z_Construct_UClass_UActorSoundParameterInterface_Statics; \
public: \
	DECLARE_CLASS(UActorSoundParameterInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UActorSoundParameterInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_30_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_30_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_30_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_30_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_30_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_30_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_30_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IActorSoundParameterInterface() {} \
public: \
	typedef UActorSoundParameterInterface UClassType; \
	typedef IActorSoundParameterInterface ThisClass; \
	static void Execute_GetActorSoundParams(const UObject* O, TArray<FAudioParameter>& Params); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_30_INCLASS_IINTERFACE \
protected: \
	virtual ~IActorSoundParameterInterface() {} \
public: \
	typedef UActorSoundParameterInterface UClassType; \
	typedef IActorSoundParameterInterface ThisClass; \
	static void Execute_GetActorSoundParams(const UObject* O, TArray<FAudioParameter>& Params); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_27_PROLOG \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_30_EVENT_PARMS


#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_30_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_30_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_30_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_30_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_30_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_30_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_30_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UActorSoundParameterInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
