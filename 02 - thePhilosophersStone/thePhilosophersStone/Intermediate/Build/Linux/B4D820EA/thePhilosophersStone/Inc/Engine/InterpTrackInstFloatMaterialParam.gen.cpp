// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInstFloatMaterialParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstFloatMaterialParam() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstFloatMaterialParam();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimitiveMaterialRef();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatMaterialParam_NoRegister();
// End Cross Module References
	void UInterpTrackInstFloatMaterialParam::StaticRegisterNativesUInterpTrackInstFloatMaterialParam()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackInstFloatMaterialParam);
	UClass* Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_NoRegister()
	{
		return UInterpTrackInstFloatMaterialParam::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialInstances;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ResetFloats_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResetFloats_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ResetFloats;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimitiveMaterialRefs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveMaterialRefs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PrimitiveMaterialRefs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedTrack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InstancedTrack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInstFloatMaterialParam.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstFloatMaterialParam.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_MaterialInstances_Inner = { "MaterialInstances", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_MaterialInstances_MetaData[] = {
		{ "Comment", "/** MIDs we're using to set the desired parameter. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstFloatMaterialParam.h" },
		{ "ToolTip", "MIDs we're using to set the desired parameter." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_MaterialInstances = { "MaterialInstances", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstFloatMaterialParam, MaterialInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_MaterialInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_MaterialInstances_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_ResetFloats_Inner = { "ResetFloats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_ResetFloats_MetaData[] = {
		{ "Comment", "/** Saved values for restoring state when exiting Matinee. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstFloatMaterialParam.h" },
		{ "ToolTip", "Saved values for restoring state when exiting Matinee." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_ResetFloats = { "ResetFloats", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstFloatMaterialParam, ResetFloats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_ResetFloats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_ResetFloats_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_PrimitiveMaterialRefs_Inner = { "PrimitiveMaterialRefs", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPrimitiveMaterialRef, METADATA_PARAMS(nullptr, 0) }; // 3716005623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_PrimitiveMaterialRefs_MetaData[] = {
		{ "Comment", "/** Primitive components on which materials have been overridden. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstFloatMaterialParam.h" },
		{ "ToolTip", "Primitive components on which materials have been overridden." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_PrimitiveMaterialRefs = { "PrimitiveMaterialRefs", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstFloatMaterialParam, PrimitiveMaterialRefs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_PrimitiveMaterialRefs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_PrimitiveMaterialRefs_MetaData)) }; // 3716005623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_InstancedTrack_MetaData[] = {
		{ "Comment", "/** track we are an instance of - used in the editor to propagate changes to the track's Materials array immediately */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstFloatMaterialParam.h" },
		{ "ToolTip", "track we are an instance of - used in the editor to propagate changes to the track's Materials array immediately" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_InstancedTrack = { "InstancedTrack", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstFloatMaterialParam, InstancedTrack), Z_Construct_UClass_UInterpTrackFloatMaterialParam_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_InstancedTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_InstancedTrack_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_MaterialInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_MaterialInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_ResetFloats_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_ResetFloats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_PrimitiveMaterialRefs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_PrimitiveMaterialRefs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::NewProp_InstancedTrack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstFloatMaterialParam>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::ClassParams = {
		&UInterpTrackInstFloatMaterialParam::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstFloatMaterialParam()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackInstFloatMaterialParam.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackInstFloatMaterialParam.OuterSingleton, Z_Construct_UClass_UInterpTrackInstFloatMaterialParam_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackInstFloatMaterialParam.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackInstFloatMaterialParam>()
	{
		return UInterpTrackInstFloatMaterialParam::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstFloatMaterialParam);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstFloatMaterialParam_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstFloatMaterialParam_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackInstFloatMaterialParam, UInterpTrackInstFloatMaterialParam::StaticClass, TEXT("UInterpTrackInstFloatMaterialParam"), &Z_Registration_Info_UClass_UInterpTrackInstFloatMaterialParam, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackInstFloatMaterialParam), 1992274084U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstFloatMaterialParam_h_4242049730(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstFloatMaterialParam_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstFloatMaterialParam_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
