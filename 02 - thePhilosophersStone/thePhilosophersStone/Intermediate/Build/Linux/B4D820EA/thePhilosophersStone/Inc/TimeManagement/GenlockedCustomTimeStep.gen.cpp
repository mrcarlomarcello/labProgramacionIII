// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeManagement/Public/GenlockedCustomTimeStep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenlockedCustomTimeStep() {}
// Cross Module References
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedCustomTimeStep_NoRegister();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedCustomTimeStep();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UFixedFrameRateCustomTimeStep();
	UPackage* Z_Construct_UPackage__Script_TimeManagement();
// End Cross Module References
	void UGenlockedCustomTimeStep::StaticRegisterNativesUGenlockedCustomTimeStep()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenlockedCustomTimeStep);
	UClass* Z_Construct_UClass_UGenlockedCustomTimeStep_NoRegister()
	{
		return UGenlockedCustomTimeStep::StaticClass();
	}
	struct Z_Construct_UClass_UGenlockedCustomTimeStep_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFixedFrameRateCustomTimeStep,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeManagement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Class to control the Engine Timestep from a Genlock signal.\n */" },
		{ "IncludePath", "GenlockedCustomTimeStep.h" },
		{ "ModuleRelativePath", "Public/GenlockedCustomTimeStep.h" },
		{ "ToolTip", "Class to control the Engine Timestep from a Genlock signal." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenlockedCustomTimeStep>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::ClassParams = {
		&UGenlockedCustomTimeStep::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenlockedCustomTimeStep()
	{
		if (!Z_Registration_Info_UClass_UGenlockedCustomTimeStep.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenlockedCustomTimeStep.OuterSingleton, Z_Construct_UClass_UGenlockedCustomTimeStep_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGenlockedCustomTimeStep.OuterSingleton;
	}
	template<> TIMEMANAGEMENT_API UClass* StaticClass<UGenlockedCustomTimeStep>()
	{
		return UGenlockedCustomTimeStep::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenlockedCustomTimeStep);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedCustomTimeStep_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedCustomTimeStep_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGenlockedCustomTimeStep, UGenlockedCustomTimeStep::StaticClass, TEXT("UGenlockedCustomTimeStep"), &Z_Registration_Info_UClass_UGenlockedCustomTimeStep, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenlockedCustomTimeStep), 1414574162U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedCustomTimeStep_h_1297571394(TEXT("/Script/TimeManagement"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedCustomTimeStep_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TimeManagement_Public_GenlockedCustomTimeStep_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
