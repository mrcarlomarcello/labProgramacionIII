// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Drawing/ControlRigDrawContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigDrawContainer() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigDrawContainer();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigDrawInstruction();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigDrawContainer;
class UScriptStruct* FControlRigDrawContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigDrawContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigDrawContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigDrawContainer, Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlRigDrawContainer"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigDrawContainer.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlRigDrawContainer>()
{
	return FControlRigDrawContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlRigDrawContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Instructions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instructions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Instructions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigDrawContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Drawing/ControlRigDrawContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlRigDrawContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigDrawContainer>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControlRigDrawContainer_Statics::NewProp_Instructions_Inner = { "Instructions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FControlRigDrawInstruction, METADATA_PARAMS(nullptr, 0) }; // 3547487396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigDrawContainer_Statics::NewProp_Instructions_MetaData[] = {
		{ "Category", "DrawContainer" },
		{ "ModuleRelativePath", "Public/Drawing/ControlRigDrawContainer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FControlRigDrawContainer_Statics::NewProp_Instructions = { "Instructions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FControlRigDrawContainer, Instructions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigDrawContainer_Statics::NewProp_Instructions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigDrawContainer_Statics::NewProp_Instructions_MetaData)) }; // 3547487396
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRigDrawContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigDrawContainer_Statics::NewProp_Instructions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigDrawContainer_Statics::NewProp_Instructions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigDrawContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"ControlRigDrawContainer",
		sizeof(FControlRigDrawContainer),
		alignof(FControlRigDrawContainer),
		Z_Construct_UScriptStruct_FControlRigDrawContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigDrawContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigDrawContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigDrawContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlRigDrawContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlRigDrawContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigDrawContainer.InnerSingleton, Z_Construct_UScriptStruct_FControlRigDrawContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlRigDrawContainer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Drawing_ControlRigDrawContainer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Drawing_ControlRigDrawContainer_h_Statics::ScriptStructInfo[] = {
		{ FControlRigDrawContainer::StaticStruct, Z_Construct_UScriptStruct_FControlRigDrawContainer_Statics::NewStructOps, TEXT("ControlRigDrawContainer"), &Z_Registration_Info_UScriptStruct_ControlRigDrawContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigDrawContainer), 3932998753U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Drawing_ControlRigDrawContainer_h_3407251891(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Drawing_ControlRigDrawContainer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Drawing_ControlRigDrawContainer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
