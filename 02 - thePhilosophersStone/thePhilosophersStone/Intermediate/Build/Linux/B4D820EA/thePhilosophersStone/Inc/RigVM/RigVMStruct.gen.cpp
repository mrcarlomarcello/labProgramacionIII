// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMCore/RigVMStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMStruct() {}
// Cross Module References
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStruct();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMStruct;
class UScriptStruct* FRigVMStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMStruct, Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMStruct"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMStruct.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMStruct>()
{
	return FRigVMStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The base class for all RigVM enabled structs.\n */" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMStruct.h" },
		{ "ToolTip", "The base class for all RigVM enabled structs." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMStruct",
		sizeof(FRigVMStruct),
		alignof(FRigVMStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMStruct.InnerSingleton, Z_Construct_UScriptStruct_FRigVMStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMStruct_h_Statics::ScriptStructInfo[] = {
		{ FRigVMStruct::StaticStruct, Z_Construct_UScriptStruct_FRigVMStruct_Statics::NewStructOps, TEXT("RigVMStruct"), &Z_Registration_Info_UScriptStruct_RigVMStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMStruct), 143893982U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMStruct_h_3694686096(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
