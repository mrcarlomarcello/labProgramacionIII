// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackBoolProp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackBoolProp() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoolTrackKey();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackBoolProp_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackBoolProp();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoolTrackKey;
class UScriptStruct* FBoolTrackKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoolTrackKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoolTrackKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoolTrackKey, Z_Construct_UPackage__Script_Engine(), TEXT("BoolTrackKey"));
	}
	return Z_Registration_Info_UScriptStruct_BoolTrackKey.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBoolTrackKey>()
{
	return FBoolTrackKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBoolTrackKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoolTrackKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Information for one event in the track. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackBoolProp.h" },
		{ "ToolTip", "Information for one event in the track." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoolTrackKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoolTrackKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoolTrackKey_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackBoolProp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoolTrackKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoolTrackKey, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoolTrackKey_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolTrackKey_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoolTrackKey_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "BoolTrackKey" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackBoolProp.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBoolTrackKey_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((FBoolTrackKey*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoolTrackKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FBoolTrackKey), &Z_Construct_UScriptStruct_FBoolTrackKey_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoolTrackKey_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolTrackKey_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoolTrackKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoolTrackKey_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoolTrackKey_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoolTrackKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BoolTrackKey",
		sizeof(FBoolTrackKey),
		alignof(FBoolTrackKey),
		Z_Construct_UScriptStruct_FBoolTrackKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolTrackKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoolTrackKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolTrackKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoolTrackKey()
	{
		if (!Z_Registration_Info_UScriptStruct_BoolTrackKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoolTrackKey.InnerSingleton, Z_Construct_UScriptStruct_FBoolTrackKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BoolTrackKey.InnerSingleton;
	}
	void UInterpTrackBoolProp::StaticRegisterNativesUInterpTrackBoolProp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackBoolProp);
	UClass* Z_Construct_UClass_UInterpTrackBoolProp_NoRegister()
	{
		return UInterpTrackBoolProp::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackBoolProp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoolTrack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolTrack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoolTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackBoolProp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackBoolProp_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Bool Property Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackBoolProp.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackBoolProp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackBoolProp_Statics::NewProp_BoolTrack_Inner = { "BoolTrack", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBoolTrackKey, METADATA_PARAMS(nullptr, 0) }; // 3232427407
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackBoolProp_Statics::NewProp_BoolTrack_MetaData[] = {
		{ "Comment", "/** Array of booleans to set. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackBoolProp.h" },
		{ "ToolTip", "Array of booleans to set." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrackBoolProp_Statics::NewProp_BoolTrack = { "BoolTrack", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackBoolProp, BoolTrack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackBoolProp_Statics::NewProp_BoolTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackBoolProp_Statics::NewProp_BoolTrack_MetaData)) }; // 3232427407
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackBoolProp_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Category", "InterpTrackBoolProp" },
		{ "Comment", "/** Name of property in Group  AActor  which this track will modify over time. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackBoolProp.h" },
		{ "ToolTip", "Name of property in Group  AActor  which this track will modify over time." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInterpTrackBoolProp_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackBoolProp, PropertyName), METADATA_PARAMS(Z_Construct_UClass_UInterpTrackBoolProp_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackBoolProp_Statics::NewProp_PropertyName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackBoolProp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackBoolProp_Statics::NewProp_BoolTrack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackBoolProp_Statics::NewProp_BoolTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackBoolProp_Statics::NewProp_PropertyName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackBoolProp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackBoolProp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackBoolProp_Statics::ClassParams = {
		&UInterpTrackBoolProp::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackBoolProp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackBoolProp_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackBoolProp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackBoolProp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackBoolProp()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackBoolProp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackBoolProp.OuterSingleton, Z_Construct_UClass_UInterpTrackBoolProp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackBoolProp.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackBoolProp>()
	{
		return UInterpTrackBoolProp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackBoolProp);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackBoolProp_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackBoolProp_h_Statics::ScriptStructInfo[] = {
		{ FBoolTrackKey::StaticStruct, Z_Construct_UScriptStruct_FBoolTrackKey_Statics::NewStructOps, TEXT("BoolTrackKey"), &Z_Registration_Info_UScriptStruct_BoolTrackKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoolTrackKey), 3232427407U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackBoolProp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackBoolProp, UInterpTrackBoolProp::StaticClass, TEXT("UInterpTrackBoolProp"), &Z_Registration_Info_UClass_UInterpTrackBoolProp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackBoolProp), 1066483557U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackBoolProp_h_381132628(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackBoolProp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackBoolProp_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackBoolProp_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackBoolProp_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
