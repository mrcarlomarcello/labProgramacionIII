// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInstFloatAnimBPParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstFloatAnimBPParam() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
// End Cross Module References
	void UInterpTrackInstFloatAnimBPParam::StaticRegisterNativesUInterpTrackInstFloatAnimBPParam()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackInstFloatAnimBPParam);
	UClass* Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_NoRegister()
	{
		return UInterpTrackInstFloatAnimBPParam::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimScriptInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimScriptInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResetFloat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ResetFloat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInstFloatAnimBPParam.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstFloatAnimBPParam.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::NewProp_AnimScriptInstance_MetaData[] = {
		{ "Comment", "/** MIDs we're using to set the desired parameter. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstFloatAnimBPParam.h" },
		{ "ToolTip", "MIDs we're using to set the desired parameter." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::NewProp_AnimScriptInstance = { "AnimScriptInstance", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstFloatAnimBPParam, AnimScriptInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::NewProp_AnimScriptInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::NewProp_AnimScriptInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::NewProp_ResetFloat_MetaData[] = {
		{ "Comment", "/** Saved values for restoring state when exiting Matinee. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstFloatAnimBPParam.h" },
		{ "ToolTip", "Saved values for restoring state when exiting Matinee." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::NewProp_ResetFloat = { "ResetFloat", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstFloatAnimBPParam, ResetFloat), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::NewProp_ResetFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::NewProp_ResetFloat_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::NewProp_AnimScriptInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::NewProp_ResetFloat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstFloatAnimBPParam>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::ClassParams = {
		&UInterpTrackInstFloatAnimBPParam::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackInstFloatAnimBPParam.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackInstFloatAnimBPParam.OuterSingleton, Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackInstFloatAnimBPParam.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackInstFloatAnimBPParam>()
	{
		return UInterpTrackInstFloatAnimBPParam::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstFloatAnimBPParam);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstFloatAnimBPParam_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstFloatAnimBPParam_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackInstFloatAnimBPParam, UInterpTrackInstFloatAnimBPParam::StaticClass, TEXT("UInterpTrackInstFloatAnimBPParam"), &Z_Registration_Info_UClass_UInterpTrackInstFloatAnimBPParam, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackInstFloatAnimBPParam), 2865874803U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstFloatAnimBPParam_h_1788269526(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstFloatAnimBPParam_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstFloatAnimBPParam_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
