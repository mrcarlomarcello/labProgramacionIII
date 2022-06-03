// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerCameraManager;
class UMatineeCameraShake;
class UCameraShakeSourceComponent;
enum class ECameraShakePlaySpace : uint8;
struct FMinimalViewInfo;
class UCameraShakeBase;
#ifdef GAMEPLAYCAMERAS_MatineeCameraShake_generated_h
#error "MatineeCameraShake.generated.h already included, missing '#pragma once' in MatineeCameraShake.h"
#endif
#define GAMEPLAYCAMERAS_MatineeCameraShake_generated_h

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFOscillator_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<struct FFOscillator>();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_87_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FROscillator_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<struct FROscillator>();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_107_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVOscillator_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<struct FVOscillator>();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_129_SPARSE_DATA
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_129_RPC_WRAPPERS \
	virtual bool ReceiveIsFinished_Implementation() const; \
 \
	DECLARE_FUNCTION(execStartMatineeCameraShakeFromSource); \
	DECLARE_FUNCTION(execStartMatineeCameraShake); \
	DECLARE_FUNCTION(execReceiveIsFinished);


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_129_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ReceiveIsFinished_Implementation() const; \
 \
	DECLARE_FUNCTION(execStartMatineeCameraShakeFromSource); \
	DECLARE_FUNCTION(execStartMatineeCameraShake); \
	DECLARE_FUNCTION(execReceiveIsFinished);


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_129_EVENT_PARMS \
	struct MatineeCameraShake_eventBlueprintUpdateCameraShake_Parms \
	{ \
		float DeltaTime; \
		float Alpha; \
		FMinimalViewInfo POV; \
		FMinimalViewInfo ModifiedPOV; \
	}; \
	struct MatineeCameraShake_eventReceiveIsFinished_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MatineeCameraShake_eventReceiveIsFinished_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MatineeCameraShake_eventReceivePlayShake_Parms \
	{ \
		float Scale; \
	}; \
	struct MatineeCameraShake_eventReceiveStopShake_Parms \
	{ \
		bool bImmediately; \
	};


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_129_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_129_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMatineeCameraShake(); \
	friend struct Z_Construct_UClass_UMatineeCameraShake_Statics; \
public: \
	DECLARE_CLASS(UMatineeCameraShake, UCameraShakeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), NO_API) \
	DECLARE_SERIALIZER(UMatineeCameraShake)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_129_INCLASS \
private: \
	static void StaticRegisterNativesUMatineeCameraShake(); \
	friend struct Z_Construct_UClass_UMatineeCameraShake_Statics; \
public: \
	DECLARE_CLASS(UMatineeCameraShake, UCameraShakeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), NO_API) \
	DECLARE_SERIALIZER(UMatineeCameraShake)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_129_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMatineeCameraShake(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMatineeCameraShake) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMatineeCameraShake); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMatineeCameraShake); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMatineeCameraShake(UMatineeCameraShake&&); \
	NO_API UMatineeCameraShake(const UMatineeCameraShake&); \
public:


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_129_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMatineeCameraShake(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMatineeCameraShake(UMatineeCameraShake&&); \
	NO_API UMatineeCameraShake(const UMatineeCameraShake&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMatineeCameraShake); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMatineeCameraShake); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMatineeCameraShake)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_126_PROLOG \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_129_EVENT_PARMS


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_129_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_129_SPARSE_DATA \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_129_RPC_WRAPPERS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_129_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_129_INCLASS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_129_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_129_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_129_SPARSE_DATA \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_129_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_129_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_129_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_129_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MatineeCameraShake."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class UMatineeCameraShake>();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_314_SPARSE_DATA
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_314_RPC_WRAPPERS
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_314_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_314_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMatineeCameraShakePattern(); \
	friend struct Z_Construct_UClass_UMatineeCameraShakePattern_Statics; \
public: \
	DECLARE_CLASS(UMatineeCameraShakePattern, UCameraShakePattern, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), NO_API) \
	DECLARE_SERIALIZER(UMatineeCameraShakePattern)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_314_INCLASS \
private: \
	static void StaticRegisterNativesUMatineeCameraShakePattern(); \
	friend struct Z_Construct_UClass_UMatineeCameraShakePattern_Statics; \
public: \
	DECLARE_CLASS(UMatineeCameraShakePattern, UCameraShakePattern, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), NO_API) \
	DECLARE_SERIALIZER(UMatineeCameraShakePattern)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_314_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMatineeCameraShakePattern(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMatineeCameraShakePattern) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMatineeCameraShakePattern); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMatineeCameraShakePattern); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMatineeCameraShakePattern(UMatineeCameraShakePattern&&); \
	NO_API UMatineeCameraShakePattern(const UMatineeCameraShakePattern&); \
public:


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_314_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMatineeCameraShakePattern(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMatineeCameraShakePattern(UMatineeCameraShakePattern&&); \
	NO_API UMatineeCameraShakePattern(const UMatineeCameraShakePattern&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMatineeCameraShakePattern); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMatineeCameraShakePattern); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMatineeCameraShakePattern)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_311_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_314_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_314_SPARSE_DATA \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_314_RPC_WRAPPERS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_314_INCLASS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_314_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_314_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_314_SPARSE_DATA \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_314_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_314_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_314_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class UMatineeCameraShakePattern>();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_335_SPARSE_DATA
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_335_RPC_WRAPPERS
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_335_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_335_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneMatineeCameraShakeEvaluator(); \
	friend struct Z_Construct_UClass_UMovieSceneMatineeCameraShakeEvaluator_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneMatineeCameraShakeEvaluator, UMovieSceneCameraShakeEvaluator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneMatineeCameraShakeEvaluator)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_335_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneMatineeCameraShakeEvaluator(); \
	friend struct Z_Construct_UClass_UMovieSceneMatineeCameraShakeEvaluator_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneMatineeCameraShakeEvaluator, UMovieSceneCameraShakeEvaluator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneMatineeCameraShakeEvaluator)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_335_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneMatineeCameraShakeEvaluator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneMatineeCameraShakeEvaluator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneMatineeCameraShakeEvaluator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneMatineeCameraShakeEvaluator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneMatineeCameraShakeEvaluator(UMovieSceneMatineeCameraShakeEvaluator&&); \
	NO_API UMovieSceneMatineeCameraShakeEvaluator(const UMovieSceneMatineeCameraShakeEvaluator&); \
public:


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_335_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneMatineeCameraShakeEvaluator(UMovieSceneMatineeCameraShakeEvaluator&&); \
	NO_API UMovieSceneMatineeCameraShakeEvaluator(const UMovieSceneMatineeCameraShakeEvaluator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneMatineeCameraShakeEvaluator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneMatineeCameraShakeEvaluator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneMatineeCameraShakeEvaluator)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_332_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_335_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_335_SPARSE_DATA \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_335_RPC_WRAPPERS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_335_INCLASS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_335_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_335_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_335_SPARSE_DATA \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_335_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_335_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_335_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class UMovieSceneMatineeCameraShakeEvaluator>();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_352_SPARSE_DATA
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_352_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConv_MatineeCameraShake);


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_352_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConv_MatineeCameraShake);


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_352_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMatineeCameraShakeFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMatineeCameraShakeFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMatineeCameraShakeFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), NO_API) \
	DECLARE_SERIALIZER(UMatineeCameraShakeFunctionLibrary)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_352_INCLASS \
private: \
	static void StaticRegisterNativesUMatineeCameraShakeFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMatineeCameraShakeFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UMatineeCameraShakeFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), NO_API) \
	DECLARE_SERIALIZER(UMatineeCameraShakeFunctionLibrary)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_352_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMatineeCameraShakeFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMatineeCameraShakeFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMatineeCameraShakeFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMatineeCameraShakeFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMatineeCameraShakeFunctionLibrary(UMatineeCameraShakeFunctionLibrary&&); \
	NO_API UMatineeCameraShakeFunctionLibrary(const UMatineeCameraShakeFunctionLibrary&); \
public:


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_352_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMatineeCameraShakeFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMatineeCameraShakeFunctionLibrary(UMatineeCameraShakeFunctionLibrary&&); \
	NO_API UMatineeCameraShakeFunctionLibrary(const UMatineeCameraShakeFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMatineeCameraShakeFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMatineeCameraShakeFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMatineeCameraShakeFunctionLibrary)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_349_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_352_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_352_SPARSE_DATA \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_352_RPC_WRAPPERS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_352_INCLASS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_352_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_352_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_352_SPARSE_DATA \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_352_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_352_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h_352_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class UMatineeCameraShakeFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_MatineeCameraShake_h


#define FOREACH_ENUM_EOSCILLATORWAVEFORM(op) \
	op(EOscillatorWaveform::SineWave) \
	op(EOscillatorWaveform::PerlinNoise) 

enum class EOscillatorWaveform : uint8;
template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<EOscillatorWaveform>();

#define FOREACH_ENUM_EINITIALOSCILLATOROFFSET(op) \
	op(EOO_OffsetRandom) \
	op(EOO_OffsetZero) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
