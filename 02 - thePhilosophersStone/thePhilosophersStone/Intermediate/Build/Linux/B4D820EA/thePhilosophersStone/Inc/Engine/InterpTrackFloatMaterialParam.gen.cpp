// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackFloatMaterialParam.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackFloatMaterialParam() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatMaterialParam_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatMaterialParam();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void UInterpTrackFloatMaterialParam::StaticRegisterNativesUInterpTrackFloatMaterialParam()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackFloatMaterialParam);
	UClass* Z_Construct_UClass_UInterpTrackFloatMaterialParam_NoRegister()
	{
		return UInterpTrackFloatMaterialParam::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackFloatMaterialParam_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackFloatMaterialParam_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackFloatBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackFloatMaterialParam_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Float Material Parameter Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackFloatMaterialParam.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatMaterialParam.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterpTrackFloatMaterialParam_Statics::NewProp_TargetMaterials_Inner = { "TargetMaterials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackFloatMaterialParam_Statics::NewProp_TargetMaterials_MetaData[] = {
		{ "Category", "InterpTrackFloatMaterialParam" },
		{ "Comment", "/** Materials whose parameters we want to change and the references to those materials. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatMaterialParam.h" },
		{ "ToolTip", "Materials whose parameters we want to change and the references to those materials." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrackFloatMaterialParam_Statics::NewProp_TargetMaterials = { "TargetMaterials", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackFloatMaterialParam, TargetMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackFloatMaterialParam_Statics::NewProp_TargetMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFloatMaterialParam_Statics::NewProp_TargetMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackFloatMaterialParam_Statics::NewProp_ParamName_MetaData[] = {
		{ "Category", "InterpTrackFloatMaterialParam" },
		{ "Comment", "/** Name of parameter in the MaterialInstance which this track will modify over time. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatMaterialParam.h" },
		{ "ToolTip", "Name of parameter in the MaterialInstance which this track will modify over time." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInterpTrackFloatMaterialParam_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackFloatMaterialParam, ParamName), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackFloatMaterialParam_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFloatMaterialParam_Statics::NewProp_ParamName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackFloatMaterialParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackFloatMaterialParam_Statics::NewProp_TargetMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackFloatMaterialParam_Statics::NewProp_TargetMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackFloatMaterialParam_Statics::NewProp_ParamName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackFloatMaterialParam_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackFloatMaterialParam>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackFloatMaterialParam_Statics::ClassParams = {
		&UInterpTrackFloatMaterialParam::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackFloatMaterialParam_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFloatMaterialParam_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackFloatMaterialParam_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFloatMaterialParam_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackFloatMaterialParam()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackFloatMaterialParam.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackFloatMaterialParam.OuterSingleton, Z_Construct_UClass_UInterpTrackFloatMaterialParam_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackFloatMaterialParam.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackFloatMaterialParam>()
	{
		return UInterpTrackFloatMaterialParam::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackFloatMaterialParam);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatMaterialParam_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatMaterialParam_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackFloatMaterialParam, UInterpTrackFloatMaterialParam::StaticClass, TEXT("UInterpTrackFloatMaterialParam"), &Z_Registration_Info_UClass_UInterpTrackFloatMaterialParam, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackFloatMaterialParam), 206260027U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatMaterialParam_h_3869509118(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatMaterialParam_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatMaterialParam_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
