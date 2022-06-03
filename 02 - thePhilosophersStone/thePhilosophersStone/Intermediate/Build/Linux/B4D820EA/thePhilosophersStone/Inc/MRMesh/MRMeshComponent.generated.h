// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
class UMaterialInterface;
#ifdef MRMESH_MRMeshComponent_generated_h
#error "MRMeshComponent.generated.h already included, missing '#pragma once' in MRMeshComponent.h"
#endif
#define MRMESH_MRMeshComponent_generated_h

#define FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_72_SPARSE_DATA
#define FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_72_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_72_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMRMeshBodyHolder(); \
	friend struct Z_Construct_UClass_UMRMeshBodyHolder_Statics; \
public: \
	DECLARE_CLASS(UMRMeshBodyHolder, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MRMesh"), NO_API) \
	DECLARE_SERIALIZER(UMRMeshBodyHolder) \
	virtual UObject* _getUObject() const override { return const_cast<UMRMeshBodyHolder*>(this); }


#define FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_72_INCLASS \
private: \
	static void StaticRegisterNativesUMRMeshBodyHolder(); \
	friend struct Z_Construct_UClass_UMRMeshBodyHolder_Statics; \
public: \
	DECLARE_CLASS(UMRMeshBodyHolder, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MRMesh"), NO_API) \
	DECLARE_SERIALIZER(UMRMeshBodyHolder) \
	virtual UObject* _getUObject() const override { return const_cast<UMRMeshBodyHolder*>(this); }


#define FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_72_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMRMeshBodyHolder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMRMeshBodyHolder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMRMeshBodyHolder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRMeshBodyHolder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMRMeshBodyHolder(UMRMeshBodyHolder&&); \
	NO_API UMRMeshBodyHolder(const UMRMeshBodyHolder&); \
public:


#define FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMRMeshBodyHolder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMRMeshBodyHolder(UMRMeshBodyHolder&&); \
	NO_API UMRMeshBodyHolder(const UMRMeshBodyHolder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMRMeshBodyHolder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRMeshBodyHolder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMRMeshBodyHolder)


#define FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_68_PROLOG
#define FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_72_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_72_SPARSE_DATA \
	FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_72_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_72_INCLASS \
	FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_72_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_72_SPARSE_DATA \
	FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_72_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_72_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MRMESH_API UClass* StaticClass<class UMRMeshBodyHolder>();

#define FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_115_SPARSE_DATA
#define FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_115_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetWireframeColor); \
	DECLARE_FUNCTION(execSetWireframeColor); \
	DECLARE_FUNCTION(execGetUseWireframe); \
	DECLARE_FUNCTION(execSetUseWireframe); \
	DECLARE_FUNCTION(execGetEnableMeshOcclusion); \
	DECLARE_FUNCTION(execSetEnableMeshOcclusion); \
	DECLARE_FUNCTION(execSetWireframeMaterial); \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execRequestNavMeshUpdate); \
	DECLARE_FUNCTION(execForceNavMeshUpdate); \
	DECLARE_FUNCTION(execIsConnected);


#define FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetWireframeColor); \
	DECLARE_FUNCTION(execSetWireframeColor); \
	DECLARE_FUNCTION(execGetUseWireframe); \
	DECLARE_FUNCTION(execSetUseWireframe); \
	DECLARE_FUNCTION(execGetEnableMeshOcclusion); \
	DECLARE_FUNCTION(execSetEnableMeshOcclusion); \
	DECLARE_FUNCTION(execSetWireframeMaterial); \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execRequestNavMeshUpdate); \
	DECLARE_FUNCTION(execForceNavMeshUpdate); \
	DECLARE_FUNCTION(execIsConnected);


#define FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMRMeshComponent(); \
	friend struct Z_Construct_UClass_UMRMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UMRMeshComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MRMesh"), NO_API) \
	DECLARE_SERIALIZER(UMRMeshComponent)


#define FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_115_INCLASS \
private: \
	static void StaticRegisterNativesUMRMeshComponent(); \
	friend struct Z_Construct_UClass_UMRMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UMRMeshComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MRMesh"), NO_API) \
	DECLARE_SERIALIZER(UMRMeshComponent)


#define FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_115_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMRMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMRMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMRMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMRMeshComponent(UMRMeshComponent&&); \
	NO_API UMRMeshComponent(const UMRMeshComponent&); \
public:


#define FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_115_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMRMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMRMeshComponent(UMRMeshComponent&&); \
	NO_API UMRMeshComponent(const UMRMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMRMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMRMeshComponent)


#define FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_109_PROLOG
#define FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_115_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_115_SPARSE_DATA \
	FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_115_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_115_INCLASS \
	FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_115_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_115_SPARSE_DATA \
	FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_115_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h_115_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MRMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MRMESH_API UClass* StaticClass<class UMRMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MRMesh_Public_MRMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
