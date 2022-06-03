// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Hierarchy/RigUnit_BoneName.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_BoneName() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Item();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BoneName();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SpaceName();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ControlName();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_Item>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_Item cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_Item;
class UScriptStruct* FRigUnit_Item::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_Item.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_Item.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_Item, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_Item"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_Item::Execute"), &FRigUnit_Item::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_Item.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_Item.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_Item>()
{
	return FRigUnit_Item::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_Item_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Item_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * The Item node is used to share a specific item across the graph\n */" },
		{ "Constant", "" },
		{ "DisplayName", "Item" },
		{ "DocumentationPolicy", "Strict" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_BoneName.h" },
		{ "NodeColor", "0.4627450108528137 1.0 0.3294120132923126" },
		{ "ToolTip", "The Item node is used to share a specific item across the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_Item_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_Item>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Item_Statics::NewProp_Item_MetaData[] = {
		{ "Comment", "/**\n\x09 * The item\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_BoneName.h" },
		{ "Output", "" },
		{ "ToolTip", "The item" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_Item_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_Item, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Item_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Item_Statics::NewProp_Item_MetaData)) }; // 3202328731
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_Item_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Item_Statics::NewProp_Item,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_Item_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_Item",
		sizeof(FRigUnit_Item),
		alignof(FRigUnit_Item),
		Z_Construct_UScriptStruct_FRigUnit_Item_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Item_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Item_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Item_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Item()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_Item.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_Item.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_Item_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_Item.InnerSingleton;
	}

void FRigUnit_Item::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Item,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_BoneName>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_BoneName cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_BoneName;
class UScriptStruct* FRigUnit_BoneName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_BoneName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_BoneName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_BoneName, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_BoneName"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_BoneName::Execute"), &FRigUnit_BoneName::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_BoneName.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_BoneName.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_BoneName>()
{
	return FRigUnit_BoneName::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_BoneName_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Bone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BoneName_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * BoneName is used to represent a bone name in the graph\n */" },
		{ "Constant", "" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Bone Name" },
		{ "DocumentationPolicy", "Strict" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_BoneName.h" },
		{ "ToolTip", "BoneName is used to represent a bone name in the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_BoneName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_BoneName>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BoneName_Statics::NewProp_Bone_MetaData[] = {
		{ "Comment", "/**\n\x09 * The name of the Bone\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_BoneName.h" },
		{ "Output", "" },
		{ "ToolTip", "The name of the Bone" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneName_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_BoneName, Bone), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BoneName_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneName_Statics::NewProp_Bone_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_BoneName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneName_Statics::NewProp_Bone,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_BoneName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_BoneName",
		sizeof(FRigUnit_BoneName),
		alignof(FRigUnit_BoneName),
		Z_Construct_UScriptStruct_FRigUnit_BoneName_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BoneName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BoneName()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_BoneName.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_BoneName.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_BoneName_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_BoneName.InnerSingleton;
	}

void FRigUnit_BoneName::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Bone,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_SpaceName>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_SpaceName cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SpaceName;
class UScriptStruct* FRigUnit_SpaceName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SpaceName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SpaceName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SpaceName, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SpaceName"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SpaceName::Execute"), &FRigUnit_SpaceName::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SpaceName.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SpaceName.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SpaceName>()
{
	return FRigUnit_SpaceName::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SpaceName_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Space;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpaceName_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * SpaceName is used to represent a Space name in the graph\n */" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Space Name" },
		{ "DocumentationPolicy", "Strict" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_BoneName.h" },
		{ "ToolTip", "SpaceName is used to represent a Space name in the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SpaceName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SpaceName>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpaceName_Statics::NewProp_Space_MetaData[] = {
		{ "Comment", "/**\n\x09 * The name of the Space\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_BoneName.h" },
		{ "Output", "" },
		{ "ToolTip", "The name of the Space" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SpaceName_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_SpaceName, Space), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpaceName_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpaceName_Statics::NewProp_Space_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SpaceName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpaceName_Statics::NewProp_Space,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SpaceName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_SpaceName",
		sizeof(FRigUnit_SpaceName),
		alignof(FRigUnit_SpaceName),
		Z_Construct_UScriptStruct_FRigUnit_SpaceName_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpaceName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpaceName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpaceName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SpaceName()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SpaceName.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SpaceName.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SpaceName_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SpaceName.InnerSingleton;
	}

void FRigUnit_SpaceName::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Space,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_ControlName>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_ControlName cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ControlName;
class UScriptStruct* FRigUnit_ControlName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ControlName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ControlName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ControlName, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ControlName"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ControlName::Execute"), &FRigUnit_ControlName::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ControlName.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ControlName.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ControlName>()
{
	return FRigUnit_ControlName::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ControlName_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Control;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ControlName_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * ControlName is used to represent a Control name in the graph\n */" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Control Name" },
		{ "DocumentationPolicy", "Strict" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_BoneName.h" },
		{ "ToolTip", "ControlName is used to represent a Control name in the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ControlName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ControlName>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ControlName_Statics::NewProp_Control_MetaData[] = {
		{ "Comment", "/**\n\x09 * The name of the Control\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_BoneName.h" },
		{ "Output", "" },
		{ "ToolTip", "The name of the Control" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_ControlName_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ControlName, Control), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ControlName_Statics::NewProp_Control_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ControlName_Statics::NewProp_Control_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ControlName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ControlName_Statics::NewProp_Control,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ControlName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_ControlName",
		sizeof(FRigUnit_ControlName),
		alignof(FRigUnit_ControlName),
		Z_Construct_UScriptStruct_FRigUnit_ControlName_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ControlName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ControlName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ControlName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ControlName()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ControlName.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ControlName.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ControlName_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ControlName.InnerSingleton;
	}

void FRigUnit_ControlName::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Control,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_BoneName_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_BoneName_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_Item::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_Item_Statics::NewStructOps, TEXT("RigUnit_Item"), &Z_Registration_Info_UScriptStruct_RigUnit_Item, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_Item), 48773080U) },
		{ FRigUnit_BoneName::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_BoneName_Statics::NewStructOps, TEXT("RigUnit_BoneName"), &Z_Registration_Info_UScriptStruct_RigUnit_BoneName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_BoneName), 1807563199U) },
		{ FRigUnit_SpaceName::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SpaceName_Statics::NewStructOps, TEXT("RigUnit_SpaceName"), &Z_Registration_Info_UScriptStruct_RigUnit_SpaceName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SpaceName), 1072567889U) },
		{ FRigUnit_ControlName::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ControlName_Statics::NewStructOps, TEXT("RigUnit_ControlName"), &Z_Registration_Info_UScriptStruct_RigUnit_ControlName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ControlName), 3701320099U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_BoneName_h_3276574758(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_BoneName_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_BoneName_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
