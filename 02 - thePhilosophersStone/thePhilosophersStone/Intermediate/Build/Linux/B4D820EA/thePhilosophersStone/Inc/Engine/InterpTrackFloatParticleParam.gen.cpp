// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackFloatParticleParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackFloatParticleParam() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatParticleParam_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatParticleParam();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInterpTrackFloatParticleParam::StaticRegisterNativesUInterpTrackFloatParticleParam()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackFloatParticleParam);
	UClass* Z_Construct_UClass_UInterpTrackFloatParticleParam_NoRegister()
	{
		return UInterpTrackFloatParticleParam::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackFloatBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Float Particle Param Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackFloatParticleParam.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatParticleParam.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics::NewProp_ParamName_MetaData[] = {
		{ "Category", "InterpTrackFloatParticleParam" },
		{ "Comment", "/** Name of property in the Emitter which this track mill modify over time. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatParticleParam.h" },
		{ "ToolTip", "Name of property in the Emitter which this track mill modify over time." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackFloatParticleParam, ParamName), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics::NewProp_ParamName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics::NewProp_ParamName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackFloatParticleParam>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics::ClassParams = {
		&UInterpTrackFloatParticleParam::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics::PropPointers),
		0,
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackFloatParticleParam()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackFloatParticleParam.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackFloatParticleParam.OuterSingleton, Z_Construct_UClass_UInterpTrackFloatParticleParam_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackFloatParticleParam.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackFloatParticleParam>()
	{
		return UInterpTrackFloatParticleParam::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackFloatParticleParam);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatParticleParam_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatParticleParam_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackFloatParticleParam, UInterpTrackFloatParticleParam::StaticClass, TEXT("UInterpTrackFloatParticleParam"), &Z_Registration_Info_UClass_UInterpTrackFloatParticleParam, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackFloatParticleParam), 1765454050U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatParticleParam_h_3950331906(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatParticleParam_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatParticleParam_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
