// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackFloatAnimBPParam.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackFloatAnimBPParam() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatAnimBPParam_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatAnimBPParam();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprintGeneratedClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UInterpTrackFloatAnimBPParam::StaticRegisterNativesUInterpTrackFloatAnimBPParam()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackFloatAnimBPParam);
	UClass* Z_Construct_UClass_UInterpTrackFloatAnimBPParam_NoRegister()
	{
		return UInterpTrackFloatAnimBPParam::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimBlueprintClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_AnimBlueprintClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AnimClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackFloatBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Float Anim BP Parameter Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackFloatAnimBPParam.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatAnimBPParam.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::NewProp_AnimBlueprintClass_MetaData[] = {
		{ "Category", "InterpTrackFloatAnimBPParam" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatAnimBPParam.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::NewProp_AnimBlueprintClass = { "AnimBlueprintClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackFloatAnimBPParam, AnimBlueprintClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UAnimBlueprintGeneratedClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::NewProp_AnimBlueprintClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::NewProp_AnimBlueprintClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::NewProp_AnimClass_MetaData[] = {
		{ "Category", "InterpTrackFloatAnimBPParam" },
		{ "Comment", "/** Materials whose parameters we want to change and the references to those materials. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatAnimBPParam.h" },
		{ "ToolTip", "Materials whose parameters we want to change and the references to those materials." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::NewProp_AnimClass = { "AnimClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackFloatAnimBPParam, AnimClass), Z_Construct_UClass_UAnimInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::NewProp_AnimClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::NewProp_AnimClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::NewProp_ParamName_MetaData[] = {
		{ "Category", "InterpTrackFloatAnimBPParam" },
		{ "Comment", "/** Name of parameter in the MaterialInstance which this track will modify over time. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatAnimBPParam.h" },
		{ "ToolTip", "Name of parameter in the MaterialInstance which this track will modify over time." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackFloatAnimBPParam, ParamName), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::NewProp_ParamName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::NewProp_AnimBlueprintClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::NewProp_AnimClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::NewProp_ParamName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackFloatAnimBPParam>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::ClassParams = {
		&UInterpTrackFloatAnimBPParam::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::PropPointers),
		0,
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackFloatAnimBPParam()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackFloatAnimBPParam.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackFloatAnimBPParam.OuterSingleton, Z_Construct_UClass_UInterpTrackFloatAnimBPParam_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackFloatAnimBPParam.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackFloatAnimBPParam>()
	{
		return UInterpTrackFloatAnimBPParam::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackFloatAnimBPParam);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UInterpTrackFloatAnimBPParam)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatAnimBPParam_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatAnimBPParam_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackFloatAnimBPParam, UInterpTrackFloatAnimBPParam::StaticClass, TEXT("UInterpTrackFloatAnimBPParam"), &Z_Registration_Info_UClass_UInterpTrackFloatAnimBPParam, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackFloatAnimBPParam), 228426049U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatAnimBPParam_h_1184314856(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatAnimBPParam_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackFloatAnimBPParam_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
