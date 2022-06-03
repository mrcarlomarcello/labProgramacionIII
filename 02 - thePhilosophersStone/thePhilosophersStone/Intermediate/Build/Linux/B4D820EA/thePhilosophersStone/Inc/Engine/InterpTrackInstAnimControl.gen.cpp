// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInstAnimControl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstAnimControl() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstAnimControl_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstAnimControl();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void UInterpTrackInstAnimControl::StaticRegisterNativesUInterpTrackInstAnimControl()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackInstAnimControl);
	UClass* Z_Construct_UClass_UInterpTrackInstAnimControl_NoRegister()
	{
		return UInterpTrackInstAnimControl::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstAnimControl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastUpdatePosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastUpdatePosition;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitRotation;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInstAnimControl.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstAnimControl.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::NewProp_LastUpdatePosition_MetaData[] = {
		{ "Comment", "/**\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstAnimControl.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::NewProp_LastUpdatePosition = { "LastUpdatePosition", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstAnimControl, LastUpdatePosition), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::NewProp_LastUpdatePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::NewProp_LastUpdatePosition_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::NewProp_InitPosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstAnimControl.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::NewProp_InitPosition = { "InitPosition", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstAnimControl, InitPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::NewProp_InitPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::NewProp_InitPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::NewProp_InitRotation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstAnimControl.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::NewProp_InitRotation = { "InitRotation", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstAnimControl, InitRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::NewProp_InitRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::NewProp_InitRotation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::NewProp_LastUpdatePosition,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::NewProp_InitPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::NewProp_InitRotation,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstAnimControl>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::ClassParams = {
		&UInterpTrackInstAnimControl::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstAnimControl()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackInstAnimControl.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackInstAnimControl.OuterSingleton, Z_Construct_UClass_UInterpTrackInstAnimControl_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackInstAnimControl.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackInstAnimControl>()
	{
		return UInterpTrackInstAnimControl::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstAnimControl);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstAnimControl_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstAnimControl_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackInstAnimControl, UInterpTrackInstAnimControl::StaticClass, TEXT("UInterpTrackInstAnimControl"), &Z_Registration_Info_UClass_UInterpTrackInstAnimControl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackInstAnimControl), 1480850399U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstAnimControl_h_1236269222(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstAnimControl_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstAnimControl_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
