// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/NamedSlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNamedSlot() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UNamedSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UNamedSlot();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UNamedSlot::StaticRegisterNativesUNamedSlot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNamedSlot);
	UClass* Z_Construct_UClass_UNamedSlot_NoRegister()
	{
		return UNamedSlot::StaticClass();
	}
	struct Z_Construct_UClass_UNamedSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNamedSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNamedSlot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Allows you to expose an external slot for your user widget.  When others reuse your user control, \n * they can put whatever they want in this named slot.\n */" },
		{ "IncludePath", "Components/NamedSlot.h" },
		{ "ModuleRelativePath", "Public/Components/NamedSlot.h" },
		{ "ToolTip", "Allows you to expose an external slot for your user widget.  When others reuse your user control,\nthey can put whatever they want in this named slot." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNamedSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNamedSlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNamedSlot_Statics::ClassParams = {
		&UNamedSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNamedSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNamedSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNamedSlot()
	{
		if (!Z_Registration_Info_UClass_UNamedSlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNamedSlot.OuterSingleton, Z_Construct_UClass_UNamedSlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNamedSlot.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UNamedSlot>()
	{
		return UNamedSlot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNamedSlot);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNamedSlot, UNamedSlot::StaticClass, TEXT("UNamedSlot"), &Z_Registration_Info_UClass_UNamedSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNamedSlot), 3007549042U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_3604451449(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
