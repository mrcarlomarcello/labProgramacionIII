// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialExpressionChannelMaskParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionChannelMaskParameter() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EChannelMaskParameterColor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionChannelMaskParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVectorParameter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChannelMaskParameterColor;
	static UEnum* EChannelMaskParameterColor_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EChannelMaskParameterColor.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EChannelMaskParameterColor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EChannelMaskParameterColor, Z_Construct_UPackage__Script_Engine(), TEXT("EChannelMaskParameterColor"));
		}
		return Z_Registration_Info_UEnum_EChannelMaskParameterColor.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EChannelMaskParameterColor::Type>()
	{
		return EChannelMaskParameterColor_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EChannelMaskParameterColor_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EChannelMaskParameterColor_Statics::Enumerators[] = {
		{ "EChannelMaskParameterColor::Red", (int64)EChannelMaskParameterColor::Red },
		{ "EChannelMaskParameterColor::Green", (int64)EChannelMaskParameterColor::Green },
		{ "EChannelMaskParameterColor::Blue", (int64)EChannelMaskParameterColor::Blue },
		{ "EChannelMaskParameterColor::Alpha", (int64)EChannelMaskParameterColor::Alpha },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EChannelMaskParameterColor_Statics::Enum_MetaDataParams[] = {
		{ "Alpha.Name", "EChannelMaskParameterColor::Alpha" },
		{ "Blue.Name", "EChannelMaskParameterColor::Blue" },
		{ "Green.Name", "EChannelMaskParameterColor::Green" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionChannelMaskParameter.h" },
		{ "Red.Name", "EChannelMaskParameterColor::Red" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EChannelMaskParameterColor_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EChannelMaskParameterColor",
		"EChannelMaskParameterColor::Type",
		Z_Construct_UEnum_Engine_EChannelMaskParameterColor_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EChannelMaskParameterColor_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EChannelMaskParameterColor_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EChannelMaskParameterColor_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EChannelMaskParameterColor()
	{
		if (!Z_Registration_Info_UEnum_EChannelMaskParameterColor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChannelMaskParameterColor.InnerSingleton, Z_Construct_UEnum_Engine_EChannelMaskParameterColor_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EChannelMaskParameterColor.InnerSingleton;
	}
	void UMaterialExpressionChannelMaskParameter::StaticRegisterNativesUMaterialExpressionChannelMaskParameter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionChannelMaskParameter);
	UClass* Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_NoRegister()
	{
		return UMaterialExpressionChannelMaskParameter::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaskChannel;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionVectorParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object MaterialExpressionVectorParameter Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionChannelMaskParameter.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionChannelMaskParameter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_MaskChannel_MetaData[] = {
		{ "Category", "MaterialExpressionChannelMaskParameter" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionChannelMaskParameter.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_MaskChannel = { "MaskChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionChannelMaskParameter, MaskChannel), Z_Construct_UEnum_Engine_EChannelMaskParameterColor, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_MaskChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_MaskChannel_MetaData)) }; // 126725389
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionChannelMaskParameter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionChannelMaskParameter, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_Input_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_MaskChannel,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::NewProp_Input,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionChannelMaskParameter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::ClassParams = {
		&UMaterialExpressionChannelMaskParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionChannelMaskParameter()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionChannelMaskParameter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionChannelMaskParameter.OuterSingleton, Z_Construct_UClass_UMaterialExpressionChannelMaskParameter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionChannelMaskParameter.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionChannelMaskParameter>()
	{
		return UMaterialExpressionChannelMaskParameter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionChannelMaskParameter);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_Statics::EnumInfo[] = {
		{ EChannelMaskParameterColor_StaticEnum, TEXT("EChannelMaskParameterColor"), &Z_Registration_Info_UEnum_EChannelMaskParameterColor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 126725389U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionChannelMaskParameter, UMaterialExpressionChannelMaskParameter::StaticClass, TEXT("UMaterialExpressionChannelMaskParameter"), &Z_Registration_Info_UClass_UMaterialExpressionChannelMaskParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionChannelMaskParameter), 3086344265U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_770663007(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
