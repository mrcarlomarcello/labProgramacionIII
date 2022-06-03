// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOMATIONTEST_AutomationTestExcludelist_generated_h
#error "AutomationTestExcludelist.generated.h already included, missing '#pragma once' in AutomationTestExcludelist.h"
#endif
#define AUTOMATIONTEST_AutomationTestExcludelist_generated_h

#define FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics; \
	AUTOMATIONTEST_API static class UScriptStruct* StaticStruct();


template<> AUTOMATIONTEST_API UScriptStruct* StaticStruct<struct FAutomationTestExcludeOptions>();

#define FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics; \
	AUTOMATIONTEST_API static class UScriptStruct* StaticStruct();


template<> AUTOMATIONTEST_API UScriptStruct* StaticStruct<struct FAutomationTestExcludelistEntry>();

#define FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_159_SPARSE_DATA
#define FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_159_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_159_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_159_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutomationTestExcludelist(); \
	friend struct Z_Construct_UClass_UAutomationTestExcludelist_Statics; \
public: \
	DECLARE_CLASS(UAutomationTestExcludelist, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutomationTest"), NO_API) \
	DECLARE_SERIALIZER(UAutomationTestExcludelist) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_159_INCLASS \
private: \
	static void StaticRegisterNativesUAutomationTestExcludelist(); \
	friend struct Z_Construct_UClass_UAutomationTestExcludelist_Statics; \
public: \
	DECLARE_CLASS(UAutomationTestExcludelist, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutomationTest"), NO_API) \
	DECLARE_SERIALIZER(UAutomationTestExcludelist) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_159_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutomationTestExcludelist(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomationTestExcludelist) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutomationTestExcludelist); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomationTestExcludelist); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutomationTestExcludelist(UAutomationTestExcludelist&&); \
	NO_API UAutomationTestExcludelist(const UAutomationTestExcludelist&); \
public:


#define FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_159_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutomationTestExcludelist(UAutomationTestExcludelist&&); \
	NO_API UAutomationTestExcludelist(const UAutomationTestExcludelist&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutomationTestExcludelist); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomationTestExcludelist); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAutomationTestExcludelist)


#define FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_156_PROLOG
#define FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_159_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_159_SPARSE_DATA \
	FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_159_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_159_INCLASS \
	FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_159_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_159_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_159_SPARSE_DATA \
	FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_159_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_159_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_159_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOMATIONTEST_API UClass* StaticClass<class UAutomationTestExcludelist>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h


#define FOREACH_ENUM_ERHI_FLAGS(op) \
	op(ERHI_Flags::DirectX11) \
	op(ERHI_Flags::DirectX12) \
	op(ERHI_Flags::Vulkan) \
	op(ERHI_Flags::NUM) 

enum class ERHI_Flags : uint8;
template<> AUTOMATIONTEST_API UEnum* StaticEnum<ERHI_Flags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
