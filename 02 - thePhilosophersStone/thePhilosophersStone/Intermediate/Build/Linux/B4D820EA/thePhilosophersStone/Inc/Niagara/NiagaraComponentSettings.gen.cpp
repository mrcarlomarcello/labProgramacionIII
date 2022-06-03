// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraComponentSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraComponentSettings() {}
// Cross Module References
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponentSettings_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponentSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraEmitterNameSettingsRef;
class UScriptStruct* FNiagaraEmitterNameSettingsRef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEmitterNameSettingsRef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraEmitterNameSettingsRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEmitterNameSettingsRef"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEmitterNameSettingsRef.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEmitterNameSettingsRef>()
{
	return FNiagaraEmitterNameSettingsRef::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SystemName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EmitterName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Emitter Name Settings Reference" },
		{ "ModuleRelativePath", "Public/NiagaraComponentSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEmitterNameSettingsRef>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::NewProp_SystemName_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraComponentSettings.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::NewProp_SystemName = { "SystemName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEmitterNameSettingsRef, SystemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::NewProp_SystemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::NewProp_SystemName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::NewProp_EmitterName_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraComponentSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::NewProp_EmitterName = { "EmitterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraEmitterNameSettingsRef, EmitterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::NewProp_EmitterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::NewProp_EmitterName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::NewProp_SystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::NewProp_EmitterName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraEmitterNameSettingsRef",
		sizeof(FNiagaraEmitterNameSettingsRef),
		alignof(FNiagaraEmitterNameSettingsRef),
		Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraEmitterNameSettingsRef.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraEmitterNameSettingsRef.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraEmitterNameSettingsRef.InnerSingleton;
	}
	void UNiagaraComponentSettings::StaticRegisterNativesUNiagaraComponentSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraComponentSettings);
	UClass* Z_Construct_UClass_UNiagaraComponentSettings_NoRegister()
	{
		return UNiagaraComponentSettings::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraComponentSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SuppressActivationList_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuppressActivationList_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_SuppressActivationList;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ForceAutoPooolingList_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceAutoPooolingList_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ForceAutoPooolingList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SuppressEmitterList_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuppressEmitterList_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_SuppressEmitterList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GPUEmitterAllowList_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GPUEmitterAllowList_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_GPUEmitterAllowList;
		static const UECodeGen_Private::FNamePropertyParams NewProp_GpuDataInterfaceDenyList_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GpuDataInterfaceDenyList_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_GpuDataInterfaceDenyList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraComponentSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraComponentSettings.h" },
		{ "ModuleRelativePath", "Public/NiagaraComponentSettings.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_SuppressActivationList_ElementProp = { "SuppressActivationList", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_SuppressActivationList_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponentSettings.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_SuppressActivationList = { "SuppressActivationList", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraComponentSettings, SuppressActivationList), METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_SuppressActivationList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_SuppressActivationList_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_ForceAutoPooolingList_ElementProp = { "ForceAutoPooolingList", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_ForceAutoPooolingList_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponentSettings.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_ForceAutoPooolingList = { "ForceAutoPooolingList", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraComponentSettings, ForceAutoPooolingList), METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_ForceAutoPooolingList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_ForceAutoPooolingList_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_SuppressEmitterList_ElementProp = { "SuppressEmitterList", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef, METADATA_PARAMS(nullptr, 0) }; // 717684469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_SuppressEmitterList_MetaData[] = {
		{ "Comment", "/** \n\x09\x09""Config file to tweak individual emitters being disabled. Syntax is as follows for the config file:\n\x09\x09[/Script/Niagara.NiagaraComponentSettings]\n\x09\x09SuppressEmitterList=((SystemName=\"BasicSpriteSystem\",EmitterName=\"BasicSprite001\"))\n\x09\x09+GpuDataInterfaceDenyList=(\"NiagaraDataInterfaceCollisionQuery\")\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraComponentSettings.h" },
		{ "ToolTip", "Config file to tweak individual emitters being disabled. Syntax is as follows for the config file:\n[/Script/Niagara.NiagaraComponentSettings]\nSuppressEmitterList=((SystemName=\"BasicSpriteSystem\",EmitterName=\"BasicSprite001\"))\n+GpuDataInterfaceDenyList=(\"NiagaraDataInterfaceCollisionQuery\")" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FNiagaraEmitterNameSettingsRef>::Value, "The structure 'FNiagaraEmitterNameSettingsRef' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_SuppressEmitterList = { "SuppressEmitterList", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraComponentSettings, SuppressEmitterList), METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_SuppressEmitterList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_SuppressEmitterList_MetaData)) }; // 717684469
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_GPUEmitterAllowList_ElementProp = { "GPUEmitterAllowList", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef, METADATA_PARAMS(nullptr, 0) }; // 717684469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_GPUEmitterAllowList_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponentSettings.h" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FNiagaraEmitterNameSettingsRef>::Value, "The structure 'FNiagaraEmitterNameSettingsRef' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_GPUEmitterAllowList = { "GPUEmitterAllowList", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraComponentSettings, GPUEmitterAllowList), METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_GPUEmitterAllowList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_GPUEmitterAllowList_MetaData)) }; // 717684469
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_GpuDataInterfaceDenyList_ElementProp = { "GpuDataInterfaceDenyList", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_GpuDataInterfaceDenyList_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponentSettings.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_GpuDataInterfaceDenyList = { "GpuDataInterfaceDenyList", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraComponentSettings, GpuDataInterfaceDenyList), METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_GpuDataInterfaceDenyList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_GpuDataInterfaceDenyList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraComponentSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_SuppressActivationList_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_SuppressActivationList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_ForceAutoPooolingList_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_ForceAutoPooolingList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_SuppressEmitterList_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_SuppressEmitterList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_GPUEmitterAllowList_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_GPUEmitterAllowList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_GpuDataInterfaceDenyList_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentSettings_Statics::NewProp_GpuDataInterfaceDenyList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraComponentSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraComponentSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraComponentSettings_Statics::ClassParams = {
		&UNiagaraComponentSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraComponentSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraComponentSettings()
	{
		if (!Z_Registration_Info_UClass_UNiagaraComponentSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraComponentSettings.OuterSingleton, Z_Construct_UClass_UNiagaraComponentSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraComponentSettings.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraComponentSettings>()
	{
		return UNiagaraComponentSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraComponentSettings);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentSettings_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraEmitterNameSettingsRef::StaticStruct, Z_Construct_UScriptStruct_FNiagaraEmitterNameSettingsRef_Statics::NewStructOps, TEXT("NiagaraEmitterNameSettingsRef"), &Z_Registration_Info_UScriptStruct_NiagaraEmitterNameSettingsRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraEmitterNameSettingsRef), 717684469U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraComponentSettings, UNiagaraComponentSettings::StaticClass, TEXT("UNiagaraComponentSettings"), &Z_Registration_Info_UClass_UNiagaraComponentSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraComponentSettings), 2792839698U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentSettings_h_2786585819(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
