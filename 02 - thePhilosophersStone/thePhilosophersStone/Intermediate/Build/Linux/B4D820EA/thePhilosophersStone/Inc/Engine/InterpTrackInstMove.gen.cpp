// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInstMove.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstMove() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstMove_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstMove();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void UInterpTrackInstMove::StaticRegisterNativesUInterpTrackInstMove()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackInstMove);
	UClass* Z_Construct_UClass_UInterpTrackInstMove_NoRegister()
	{
		return UInterpTrackInstMove::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstMove_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResetRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResetRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInstMove_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstMove_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInstMove.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstMove.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstMove_Statics::NewProp_ResetLocation_MetaData[] = {
		{ "Comment", "/** Saved position. Used in editor for resetting when quitting Matinee. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstMove.h" },
		{ "ToolTip", "Saved position. Used in editor for resetting when quitting Matinee." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackInstMove_Statics::NewProp_ResetLocation = { "ResetLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstMove, ResetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstMove_Statics::NewProp_ResetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstMove_Statics::NewProp_ResetLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstMove_Statics::NewProp_ResetRotation_MetaData[] = {
		{ "Comment", "/** Saved rotation. Used in editor for resetting when quitting Matinee. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstMove.h" },
		{ "ToolTip", "Saved rotation. Used in editor for resetting when quitting Matinee." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackInstMove_Statics::NewProp_ResetRotation = { "ResetRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstMove, ResetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstMove_Statics::NewProp_ResetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstMove_Statics::NewProp_ResetRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackInstMove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstMove_Statics::NewProp_ResetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstMove_Statics::NewProp_ResetRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstMove_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstMove>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstMove_Statics::ClassParams = {
		&UInterpTrackInstMove::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackInstMove_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstMove_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstMove_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstMove_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstMove()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackInstMove.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackInstMove.OuterSingleton, Z_Construct_UClass_UInterpTrackInstMove_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackInstMove.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackInstMove>()
	{
		return UInterpTrackInstMove::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstMove);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstMove_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstMove_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackInstMove, UInterpTrackInstMove::StaticClass, TEXT("UInterpTrackInstMove"), &Z_Registration_Info_UClass_UInterpTrackInstMove, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackInstMove), 20153962U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstMove_h_529553671(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstMove_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstMove_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
