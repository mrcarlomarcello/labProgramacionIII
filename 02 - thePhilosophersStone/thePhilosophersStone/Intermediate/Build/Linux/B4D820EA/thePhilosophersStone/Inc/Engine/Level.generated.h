// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Level_generated_h
#error "Level.generated.h already included, missing '#pragma once' in Level.h"
#endif
#define ENGINE_Level_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_45_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_45_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_45_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelPartitionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelPartitionInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelPartitionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelPartitionInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelPartitionInterface(ULevelPartitionInterface&&); \
	NO_API ULevelPartitionInterface(const ULevelPartitionInterface&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelPartitionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelPartitionInterface(ULevelPartitionInterface&&); \
	NO_API ULevelPartitionInterface(const ULevelPartitionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelPartitionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelPartitionInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelPartitionInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_45_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULevelPartitionInterface(); \
	friend struct Z_Construct_UClass_ULevelPartitionInterface_Statics; \
public: \
	DECLARE_CLASS(ULevelPartitionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULevelPartitionInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_45_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_45_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_45_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_45_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_45_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_45_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_45_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILevelPartitionInterface() {} \
public: \
	typedef ULevelPartitionInterface UClassType; \
	typedef ILevelPartitionInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_45_INCLASS_IINTERFACE \
protected: \
	virtual ~ILevelPartitionInterface() {} \
public: \
	typedef ULevelPartitionInterface UClassType; \
	typedef ILevelPartitionInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_42_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_45_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_45_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_45_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_45_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_45_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULevelPartitionInterface>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_101_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_101_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_101_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorContainer(); \
	friend struct Z_Construct_UClass_UActorContainer_Statics; \
public: \
	DECLARE_CLASS(UActorContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UActorContainer)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_101_INCLASS \
private: \
	static void StaticRegisterNativesUActorContainer(); \
	friend struct Z_Construct_UClass_UActorContainer_Statics; \
public: \
	DECLARE_CLASS(UActorContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UActorContainer)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_101_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorContainer(UActorContainer&&); \
	NO_API UActorContainer(const UActorContainer&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_101_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorContainer(UActorContainer&&); \
	NO_API UActorContainer(const UActorContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorContainer)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_98_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_101_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_101_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_101_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_101_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_101_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_101_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_101_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UActorContainer>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_115_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStreamableTextureInstance_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FStreamableTextureInstance>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_144_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FStreamableTextureInstance Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDynamicTextureInstance>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_344_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FLevelSimplificationDetails>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_416_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FReplicatedStaticActorDestructionInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_453_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_453_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_453_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_453_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULevel, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_453_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevel(); \
	friend struct Z_Construct_UClass_ULevel_Statics; \
public: \
	DECLARE_CLASS(ULevel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_ULevel, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULevel) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_453_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<ULevel*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_453_INCLASS \
private: \
	static void StaticRegisterNativesULevel(); \
	friend struct Z_Construct_UClass_ULevel_Statics; \
public: \
	DECLARE_CLASS(ULevel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_ULevel, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULevel) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_453_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<ULevel*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_453_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULevel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevel) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ULevel(ULevel&&); \
	ENGINE_API ULevel(const ULevel&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_453_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ULevel(ULevel&&); \
	ENGINE_API ULevel(const ULevel&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevel)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_450_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_453_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_453_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_453_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_453_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_453_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_453_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_453_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_453_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_453_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h_453_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULevel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_Level_h


#define FOREACH_ENUM_EACTORPACKAGINGSCHEME(op) \
	op(EActorPackagingScheme::Original) \
	op(EActorPackagingScheme::Reduced) 

enum class EActorPackagingScheme : uint8;
template<> ENGINE_API UEnum* StaticEnum<EActorPackagingScheme>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
