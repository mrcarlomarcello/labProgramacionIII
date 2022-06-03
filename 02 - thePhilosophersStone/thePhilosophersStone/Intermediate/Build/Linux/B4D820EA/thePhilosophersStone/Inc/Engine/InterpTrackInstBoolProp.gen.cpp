// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInstBoolProp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstBoolProp() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstBoolProp_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstBoolProp();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstProperty();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpTrackInstBoolProp::StaticRegisterNativesUInterpTrackInstBoolProp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackInstBoolProp);
	UClass* Z_Construct_UClass_UInterpTrackInstBoolProp_NoRegister()
	{
		return UInterpTrackInstBoolProp::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstBoolProp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResetBool_MetaData[];
#endif
		static void NewProp_ResetBool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ResetBool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInstProperty,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInstBoolProp.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstBoolProp.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::NewProp_ResetBool_MetaData[] = {
		{ "Comment", "/** Saved value for restoring state when exiting Matinee. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstBoolProp.h" },
		{ "ToolTip", "Saved value for restoring state when exiting Matinee." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::NewProp_ResetBool_SetBit(void* Obj)
	{
		((UInterpTrackInstBoolProp*)Obj)->ResetBool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::NewProp_ResetBool = { "ResetBool", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInterpTrackInstBoolProp), &Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::NewProp_ResetBool_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::NewProp_ResetBool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::NewProp_ResetBool_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::NewProp_ResetBool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstBoolProp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::ClassParams = {
		&UInterpTrackInstBoolProp::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstBoolProp()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackInstBoolProp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackInstBoolProp.OuterSingleton, Z_Construct_UClass_UInterpTrackInstBoolProp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackInstBoolProp.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackInstBoolProp>()
	{
		return UInterpTrackInstBoolProp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstBoolProp);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstBoolProp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstBoolProp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackInstBoolProp, UInterpTrackInstBoolProp::StaticClass, TEXT("UInterpTrackInstBoolProp"), &Z_Registration_Info_UClass_UInterpTrackInstBoolProp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackInstBoolProp), 1298400722U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstBoolProp_h_3364670063(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstBoolProp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstBoolProp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
