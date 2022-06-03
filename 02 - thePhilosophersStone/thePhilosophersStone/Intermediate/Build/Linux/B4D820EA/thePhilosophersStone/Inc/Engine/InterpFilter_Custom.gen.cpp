// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpFilter_Custom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpFilter_Custom() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpFilter_Custom_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpFilter_Custom();
	ENGINE_API UClass* Z_Construct_UClass_UInterpFilter();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroup_NoRegister();
// End Cross Module References
	void UInterpFilter_Custom::StaticRegisterNativesUInterpFilter_Custom()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpFilter_Custom);
	UClass* Z_Construct_UClass_UInterpFilter_Custom_NoRegister()
	{
		return UInterpFilter_Custom::StaticClass();
	}
	struct Z_Construct_UClass_UInterpFilter_Custom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GroupsToInclude_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupsToInclude_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GroupsToInclude;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpFilter_Custom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpFilter_Custom_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpFilter_Custom.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpFilter_Custom.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterpFilter_Custom_Statics::NewProp_GroupsToInclude_Inner = { "GroupsToInclude", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInterpGroup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpFilter_Custom_Statics::NewProp_GroupsToInclude_MetaData[] = {
		{ "Comment", "/** Which groups are included in this filter. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpFilter_Custom.h" },
		{ "ToolTip", "Which groups are included in this filter." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpFilter_Custom_Statics::NewProp_GroupsToInclude = { "GroupsToInclude", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpFilter_Custom, GroupsToInclude), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterpFilter_Custom_Statics::NewProp_GroupsToInclude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpFilter_Custom_Statics::NewProp_GroupsToInclude_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpFilter_Custom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpFilter_Custom_Statics::NewProp_GroupsToInclude_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpFilter_Custom_Statics::NewProp_GroupsToInclude,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpFilter_Custom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpFilter_Custom>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpFilter_Custom_Statics::ClassParams = {
		&UInterpFilter_Custom::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UInterpFilter_Custom_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UInterpFilter_Custom_Statics::PropPointers), 0),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpFilter_Custom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpFilter_Custom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpFilter_Custom()
	{
		if (!Z_Registration_Info_UClass_UInterpFilter_Custom.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpFilter_Custom.OuterSingleton, Z_Construct_UClass_UInterpFilter_Custom_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpFilter_Custom.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpFilter_Custom>()
	{
		return UInterpFilter_Custom::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpFilter_Custom);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpFilter_Custom_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpFilter_Custom_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpFilter_Custom, UInterpFilter_Custom::StaticClass, TEXT("UInterpFilter_Custom"), &Z_Registration_Info_UClass_UInterpFilter_Custom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpFilter_Custom), 2223034289U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpFilter_Custom_h_3011110354(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpFilter_Custom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpFilter_Custom_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
