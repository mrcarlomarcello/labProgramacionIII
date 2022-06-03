// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NetConnection_generated_h
#error "NetConnection.generated.h already included, missing '#pragma once' in NetConnection.h"
#endif
#define ENGINE_NetConnection_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_248_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_248_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_248_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_248_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNetConnection, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_248_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetConnection(); \
	friend struct Z_Construct_UClass_UNetConnection_Statics; \
public: \
	DECLARE_CLASS(UNetConnection, UPlayer, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNetConnection) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_248_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_248_INCLASS \
private: \
	static void StaticRegisterNativesUNetConnection(); \
	friend struct Z_Construct_UClass_UNetConnection_Statics; \
public: \
	DECLARE_CLASS(UNetConnection, UPlayer, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNetConnection) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_248_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_248_STANDARD_CONSTRUCTORS \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetConnection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNetConnection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetConnection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UNetConnection(UNetConnection&&); \
	ENGINE_API UNetConnection(const UNetConnection&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_248_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UNetConnection(UNetConnection&&); \
	ENGINE_API UNetConnection(const UNetConnection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNetConnection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetConnection); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetConnection)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_242_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_248_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_248_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_248_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_248_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_248_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_248_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_248_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_248_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_248_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_248_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNetConnection>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_1788_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_1788_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_1788_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_1788_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimulatedClientNetConnection(); \
	friend struct Z_Construct_UClass_USimulatedClientNetConnection_Statics; \
public: \
	DECLARE_CLASS(USimulatedClientNetConnection, UNetConnection, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USimulatedClientNetConnection)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_1788_INCLASS \
private: \
	static void StaticRegisterNativesUSimulatedClientNetConnection(); \
	friend struct Z_Construct_UClass_USimulatedClientNetConnection_Statics; \
public: \
	DECLARE_CLASS(USimulatedClientNetConnection, UNetConnection, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USimulatedClientNetConnection)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_1788_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimulatedClientNetConnection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimulatedClientNetConnection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimulatedClientNetConnection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimulatedClientNetConnection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimulatedClientNetConnection(USimulatedClientNetConnection&&); \
	NO_API USimulatedClientNetConnection(const USimulatedClientNetConnection&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_1788_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimulatedClientNetConnection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimulatedClientNetConnection(USimulatedClientNetConnection&&); \
	NO_API USimulatedClientNetConnection(const USimulatedClientNetConnection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimulatedClientNetConnection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimulatedClientNetConnection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimulatedClientNetConnection)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_1784_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_1788_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_1788_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_1788_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_1788_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_1788_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_1788_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_1788_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_1788_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_1788_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h_1788_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SimulatedClientNetConnection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USimulatedClientNetConnection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_NetConnection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
