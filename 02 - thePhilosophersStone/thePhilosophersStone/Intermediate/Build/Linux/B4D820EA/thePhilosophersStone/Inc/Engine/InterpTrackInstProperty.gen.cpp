// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackInstProperty.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstProperty() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstProperty_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstProperty();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UInterpTrackInstProperty::StaticRegisterNativesUInterpTrackInstProperty()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackInstProperty);
	UClass* Z_Construct_UClass_UInterpTrackInstProperty_NoRegister()
	{
		return UInterpTrackInstProperty::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackInstProperty_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpProperty_MetaData[];
#endif
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_InterpProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyOuterObjectInst_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertyOuterObjectInst;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackInstProperty_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstProperty_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpTrackInstProperty.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstProperty.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstProperty_Statics::NewProp_InterpProperty_MetaData[] = {
		{ "Comment", "/** Function to call after updating the value of the color property. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstProperty.h" },
		{ "ToolTip", "Function to call after updating the value of the color property." },
	};
#endif
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UClass_UInterpTrackInstProperty_Statics::NewProp_InterpProperty = { "InterpProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstProperty, InterpProperty), &FProperty::StaticClass, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstProperty_Statics::NewProp_InterpProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstProperty_Statics::NewProp_InterpProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackInstProperty_Statics::NewProp_PropertyOuterObjectInst_MetaData[] = {
		{ "Comment", "/** Pointer to the UObject instance that is the outer of the color property we are interpolating on, this is used to process the property update callback. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstProperty.h" },
		{ "ToolTip", "Pointer to the UObject instance that is the outer of the color property we are interpolating on, this is used to process the property update callback." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterpTrackInstProperty_Statics::NewProp_PropertyOuterObjectInst = { "PropertyOuterObjectInst", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackInstProperty, PropertyOuterObjectInst), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstProperty_Statics::NewProp_PropertyOuterObjectInst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstProperty_Statics::NewProp_PropertyOuterObjectInst_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackInstProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstProperty_Statics::NewProp_InterpProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackInstProperty_Statics::NewProp_PropertyOuterObjectInst,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackInstProperty_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackInstProperty>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackInstProperty_Statics::ClassParams = {
		&UInterpTrackInstProperty::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackInstProperty_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstProperty_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackInstProperty_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackInstProperty_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackInstProperty()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackInstProperty.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackInstProperty.OuterSingleton, Z_Construct_UClass_UInterpTrackInstProperty_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackInstProperty.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackInstProperty>()
	{
		return UInterpTrackInstProperty::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstProperty);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstProperty_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstProperty_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackInstProperty, UInterpTrackInstProperty::StaticClass, TEXT("UInterpTrackInstProperty"), &Z_Registration_Info_UClass_UInterpTrackInstProperty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackInstProperty), 3365612399U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstProperty_h_1044205683(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstProperty_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackInstProperty_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
