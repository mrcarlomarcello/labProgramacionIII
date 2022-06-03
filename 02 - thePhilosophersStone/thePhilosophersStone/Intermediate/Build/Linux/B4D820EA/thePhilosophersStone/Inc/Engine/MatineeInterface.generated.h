// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MatineeInterface_generated_h
#error "MatineeInterface.generated.h already included, missing '#pragma once' in MatineeInterface.h"
#endif
#define ENGINE_MatineeInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeInterface_h_19_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeInterface_h_19_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeInterface_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeInterface_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMatineeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMatineeInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMatineeInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMatineeInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMatineeInterface(UMatineeInterface&&); \
	NO_API UMatineeInterface(const UMatineeInterface&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeInterface_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMatineeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMatineeInterface(UMatineeInterface&&); \
	NO_API UMatineeInterface(const UMatineeInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMatineeInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMatineeInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMatineeInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeInterface_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMatineeInterface(); \
	friend struct Z_Construct_UClass_UMatineeInterface_Statics; \
public: \
	DECLARE_CLASS(UMatineeInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMatineeInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeInterface_h_19_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeInterface_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeInterface_h_19_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeInterface_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeInterface_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeInterface_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeInterface_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMatineeInterface() {} \
public: \
	typedef UMatineeInterface UClassType; \
	typedef IMatineeInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeInterface_h_19_INCLASS_IINTERFACE \
protected: \
	virtual ~IMatineeInterface() {} \
public: \
	typedef UMatineeInterface UClassType; \
	typedef IMatineeInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeInterface_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeInterface_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeInterface_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeInterface_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeInterface_h_19_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeInterface_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeInterface_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeInterface_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeInterface_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMatineeInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
