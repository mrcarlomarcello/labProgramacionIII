// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpFilter_Classes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpFilter_Classes() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpFilter_Classes_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpFilter_Classes();
	ENGINE_API UClass* Z_Construct_UClass_UInterpFilter();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UInterpFilter_Classes::StaticRegisterNativesUInterpFilter_Classes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpFilter_Classes);
	UClass* Z_Construct_UClass_UInterpFilter_Classes_NoRegister()
	{
		return UInterpFilter_Classes::StaticClass();
	}
	struct Z_Construct_UClass_UInterpFilter_Classes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassToFilterBy_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ClassToFilterBy;
		static const UECodeGen_Private::FClassPropertyParams NewProp_TrackClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackClasses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpFilter_Classes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpFilter_Classes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpFilter_Classes.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpFilter_Classes.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpFilter_Classes_Statics::NewProp_ClassToFilterBy_MetaData[] = {
		{ "Comment", "/** Which class to filter groups by. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpFilter_Classes.h" },
		{ "ToolTip", "Which class to filter groups by." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInterpFilter_Classes_Statics::NewProp_ClassToFilterBy = { "ClassToFilterBy", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpFilter_Classes, ClassToFilterBy), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UInterpFilter_Classes_Statics::NewProp_ClassToFilterBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpFilter_Classes_Statics::NewProp_ClassToFilterBy_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInterpFilter_Classes_Statics::NewProp_TrackClasses_Inner = { "TrackClasses", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpFilter_Classes_Statics::NewProp_TrackClasses_MetaData[] = {
		{ "Comment", "/** List of allowed track classes.  If empty, then all track classes will be included.  Only groups that\n\x09\x09""contain at least one of these types of tracks will be displayed. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpFilter_Classes.h" },
		{ "ToolTip", "List of allowed track classes.  If empty, then all track classes will be included.  Only groups that\n              contain at least one of these types of tracks will be displayed." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpFilter_Classes_Statics::NewProp_TrackClasses = { "TrackClasses", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpFilter_Classes, TrackClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterpFilter_Classes_Statics::NewProp_TrackClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpFilter_Classes_Statics::NewProp_TrackClasses_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpFilter_Classes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpFilter_Classes_Statics::NewProp_ClassToFilterBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpFilter_Classes_Statics::NewProp_TrackClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpFilter_Classes_Statics::NewProp_TrackClasses,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpFilter_Classes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpFilter_Classes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpFilter_Classes_Statics::ClassParams = {
		&UInterpFilter_Classes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UInterpFilter_Classes_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UInterpFilter_Classes_Statics::PropPointers), 0),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpFilter_Classes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpFilter_Classes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpFilter_Classes()
	{
		if (!Z_Registration_Info_UClass_UInterpFilter_Classes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpFilter_Classes.OuterSingleton, Z_Construct_UClass_UInterpFilter_Classes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpFilter_Classes.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpFilter_Classes>()
	{
		return UInterpFilter_Classes::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpFilter_Classes);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpFilter_Classes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpFilter_Classes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpFilter_Classes, UInterpFilter_Classes::StaticClass, TEXT("UInterpFilter_Classes"), &Z_Registration_Info_UClass_UInterpFilter_Classes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpFilter_Classes), 335063662U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpFilter_Classes_h_1348419668(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpFilter_Classes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpFilter_Classes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
