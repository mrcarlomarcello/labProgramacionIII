// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Execution/RigUnit_DynamicHierarchy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_DynamicHierarchy() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBase();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBaseMutable();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AddParent();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigSwitchParentMode();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SwitchParent();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementWeight();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKeyCollection();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_DynamicHierarchyBase>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_DynamicHierarchyBase cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DynamicHierarchyBase;
class UScriptStruct* FRigUnit_DynamicHierarchyBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DynamicHierarchyBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DynamicHierarchyBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBase, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DynamicHierarchyBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DynamicHierarchyBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DynamicHierarchyBase>()
{
	return FRigUnit_DynamicHierarchyBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "DynamicHierarchy" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_DynamicHierarchy.h" },
		{ "NodeColor", "0.262745, 0.8, 0, 0.229412" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DynamicHierarchyBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_DynamicHierarchyBase",
		sizeof(FRigUnit_DynamicHierarchyBase),
		alignof(FRigUnit_DynamicHierarchyBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_DynamicHierarchyBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DynamicHierarchyBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_DynamicHierarchyBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_DynamicHierarchyBaseMutable>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_DynamicHierarchyBaseMutable cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DynamicHierarchyBaseMutable;
class UScriptStruct* FRigUnit_DynamicHierarchyBaseMutable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DynamicHierarchyBaseMutable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DynamicHierarchyBaseMutable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBaseMutable, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DynamicHierarchyBaseMutable"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DynamicHierarchyBaseMutable.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DynamicHierarchyBaseMutable>()
{
	return FRigUnit_DynamicHierarchyBaseMutable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBaseMutable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBaseMutable_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "DynamicHierarchy" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_DynamicHierarchy.h" },
		{ "NodeColor", "0.262745, 0.8, 0, 0.229412" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBaseMutable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DynamicHierarchyBaseMutable>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBaseMutable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_DynamicHierarchyBaseMutable",
		sizeof(FRigUnit_DynamicHierarchyBaseMutable),
		alignof(FRigUnit_DynamicHierarchyBaseMutable),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBaseMutable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBaseMutable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBaseMutable()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_DynamicHierarchyBaseMutable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DynamicHierarchyBaseMutable.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBaseMutable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_DynamicHierarchyBaseMutable.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_AddParent>() == std::is_polymorphic<FRigUnit_DynamicHierarchyBaseMutable>(), "USTRUCT FRigUnit_AddParent cannot be polymorphic unless super FRigUnit_DynamicHierarchyBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AddParent;
class UScriptStruct* FRigUnit_AddParent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AddParent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AddParent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AddParent, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AddParent"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AddParent::Execute"), &FRigUnit_AddParent::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AddParent.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AddParent.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AddParent>()
{
	return FRigUnit_AddParent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AddParent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Child;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AddParent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Adds a new parent to an element. The weight for the new parent will be 0.0.\n* You can use the SetParentWeights node to change the parent weights later.\n*/" },
		{ "DisplayName", "Add Parent" },
		{ "Keywords", "Children,Parent,Constraint,Space" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_DynamicHierarchy.h" },
		{ "ToolTip", "Adds a new parent to an element. The weight for the new parent will be 0.0.\nYou can use the SetParentWeights node to change the parent weights later." },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AddParent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AddParent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AddParent_Statics::NewProp_Child_MetaData[] = {
		{ "Comment", "/*\n\x09 * The child to be parented under the new parent\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_DynamicHierarchy.h" },
		{ "ToolTip", "* The child to be parented under the new parent" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AddParent_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AddParent, Child), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AddParent_Statics::NewProp_Child_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AddParent_Statics::NewProp_Child_MetaData)) }; // 3202328731
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AddParent_Statics::NewProp_Parent_MetaData[] = {
		{ "Comment", "/*\n\x09 * The new parent to be added to the child\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_DynamicHierarchy.h" },
		{ "ToolTip", "* The new parent to be added to the child" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AddParent_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AddParent, Parent), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AddParent_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AddParent_Statics::NewProp_Parent_MetaData)) }; // 3202328731
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AddParent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AddParent_Statics::NewProp_Child,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AddParent_Statics::NewProp_Parent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AddParent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBaseMutable,
		&NewStructOps,
		"RigUnit_AddParent",
		sizeof(FRigUnit_AddParent),
		alignof(FRigUnit_AddParent),
		Z_Construct_UScriptStruct_FRigUnit_AddParent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AddParent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AddParent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AddParent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AddParent()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AddParent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AddParent.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AddParent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AddParent.InnerSingleton;
	}

void FRigUnit_AddParent::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Child,
		Parent,
		ExecuteContext,
		Context
	);
}

	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigSwitchParentMode;
	static UEnum* ERigSwitchParentMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigSwitchParentMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigSwitchParentMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigSwitchParentMode, Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigSwitchParentMode"));
		}
		return Z_Registration_Info_UEnum_ERigSwitchParentMode.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<ERigSwitchParentMode>()
	{
		return ERigSwitchParentMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_ERigSwitchParentMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_ERigSwitchParentMode_Statics::Enumerators[] = {
		{ "ERigSwitchParentMode::World", (int64)ERigSwitchParentMode::World },
		{ "ERigSwitchParentMode::DefaultParent", (int64)ERigSwitchParentMode::DefaultParent },
		{ "ERigSwitchParentMode::ParentItem", (int64)ERigSwitchParentMode::ParentItem },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_ERigSwitchParentMode_Statics::Enum_MetaDataParams[] = {
		{ "DefaultParent.Comment", "/** Switches back to the original / default parent */" },
		{ "DefaultParent.Name", "ERigSwitchParentMode::DefaultParent" },
		{ "DefaultParent.ToolTip", "Switches back to the original / default parent" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_DynamicHierarchy.h" },
		{ "ParentItem.Comment", "/** Switches the child to the provided parent item */" },
		{ "ParentItem.Name", "ERigSwitchParentMode::ParentItem" },
		{ "ParentItem.ToolTip", "Switches the child to the provided parent item" },
		{ "World.Comment", "/** Switches the element to be parented to the world */" },
		{ "World.Name", "ERigSwitchParentMode::World" },
		{ "World.ToolTip", "Switches the element to be parented to the world" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigSwitchParentMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"ERigSwitchParentMode",
		"ERigSwitchParentMode",
		Z_Construct_UEnum_ControlRig_ERigSwitchParentMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigSwitchParentMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_ERigSwitchParentMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigSwitchParentMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_ERigSwitchParentMode()
	{
		if (!Z_Registration_Info_UEnum_ERigSwitchParentMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigSwitchParentMode.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigSwitchParentMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigSwitchParentMode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_SwitchParent>() == std::is_polymorphic<FRigUnit_DynamicHierarchyBaseMutable>(), "USTRUCT FRigUnit_SwitchParent cannot be polymorphic unless super FRigUnit_DynamicHierarchyBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SwitchParent;
class UScriptStruct* FRigUnit_SwitchParent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SwitchParent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SwitchParent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SwitchParent, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SwitchParent"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SwitchParent::Execute"), &FRigUnit_SwitchParent::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SwitchParent.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SwitchParent.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SwitchParent>()
{
	return FRigUnit_SwitchParent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Child;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainGlobal_MetaData[];
#endif
		static void NewProp_bMaintainGlobal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainGlobal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Switches an element to a new parent.\n*/" },
		{ "DisplayName", "Switch Parent" },
		{ "Keywords", "Children,Parent,Constraint,Space,Switch" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_DynamicHierarchy.h" },
		{ "ToolTip", "Switches an element to a new parent." },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SwitchParent>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::NewProp_Mode_MetaData[] = {
		{ "Comment", "/* Depending on this the child will switch to the world,\n\x09 * back to its default or to the item provided by the Parent pin\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_DynamicHierarchy.h" },
		{ "ToolTip", "Depending on this the child will switch to the world,\n       * back to its default or to the item provided by the Parent pin" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_SwitchParent, Mode), Z_Construct_UEnum_ControlRig_ERigSwitchParentMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::NewProp_Mode_MetaData)) }; // 2981214668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::NewProp_Child_MetaData[] = {
		{ "Comment", "/* The child to switch to a new parent */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_DynamicHierarchy.h" },
		{ "ToolTip", "The child to switch to a new parent" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_SwitchParent, Child), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::NewProp_Child_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::NewProp_Child_MetaData)) }; // 3202328731
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::NewProp_Parent_MetaData[] = {
		{ "Comment", "/* The optional parent to switch to. This is only used if the mode is set to 'Parent Item' */" },
		{ "EditCondition", "Mode==ParentItem" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_DynamicHierarchy.h" },
		{ "ToolTip", "The optional parent to switch to. This is only used if the mode is set to 'Parent Item'" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_SwitchParent, Parent), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::NewProp_Parent_MetaData)) }; // 3202328731
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::NewProp_bMaintainGlobal_MetaData[] = {
		{ "Comment", "/* If set to true the item will maintain its global transform,\n\x09 * otherwise it will maintain local\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_DynamicHierarchy.h" },
		{ "ToolTip", "If set to true the item will maintain its global transform,\n       * otherwise it will maintain local" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::NewProp_bMaintainGlobal_SetBit(void* Obj)
	{
		((FRigUnit_SwitchParent*)Obj)->bMaintainGlobal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::NewProp_bMaintainGlobal = { "bMaintainGlobal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_SwitchParent), &Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::NewProp_bMaintainGlobal_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::NewProp_bMaintainGlobal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::NewProp_bMaintainGlobal_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::NewProp_Child,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::NewProp_bMaintainGlobal,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBaseMutable,
		&NewStructOps,
		"RigUnit_SwitchParent",
		sizeof(FRigUnit_SwitchParent),
		alignof(FRigUnit_SwitchParent),
		Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SwitchParent()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SwitchParent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SwitchParent.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SwitchParent.InnerSingleton;
	}

void FRigUnit_SwitchParent::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Mode,
		Child,
		Parent,
		bMaintainGlobal,
		ExecuteContext,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_HierarchyGetParentWeights>() == std::is_polymorphic<FRigUnit_DynamicHierarchyBase>(), "USTRUCT FRigUnit_HierarchyGetParentWeights cannot be polymorphic unless super FRigUnit_DynamicHierarchyBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParentWeights;
class UScriptStruct* FRigUnit_HierarchyGetParentWeights::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParentWeights.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParentWeights.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_HierarchyGetParentWeights"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_HierarchyGetParentWeights::Execute"), &FRigUnit_HierarchyGetParentWeights::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParentWeights.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParentWeights.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_HierarchyGetParentWeights>()
{
	return FRigUnit_HierarchyGetParentWeights::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Child;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Weights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Weights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Returns the item's parents' weights\n*/" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Get Parent Weights" },
		{ "Keywords", "Chain,Parents,Hierarchy" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_DynamicHierarchy.h" },
		{ "ToolTip", "Returns the item's parents' weights" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_HierarchyGetParentWeights>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics::NewProp_Child_MetaData[] = {
		{ "Comment", "/*\n\x09 * The child to retrieve the weights for\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_DynamicHierarchy.h" },
		{ "ToolTip", "* The child to retrieve the weights for" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_HierarchyGetParentWeights, Child), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics::NewProp_Child_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics::NewProp_Child_MetaData)) }; // 3202328731
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics::NewProp_Weights_Inner = { "Weights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRigElementWeight, METADATA_PARAMS(nullptr, 0) }; // 695102695
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics::NewProp_Weights_MetaData[] = {
		{ "Comment", "/*\n\x09 * The weight of each parent\n\x09 */" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_DynamicHierarchy.h" },
		{ "Output", "" },
		{ "ToolTip", "* The weight of each parent" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics::NewProp_Weights = { "Weights", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_HierarchyGetParentWeights, Weights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics::NewProp_Weights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics::NewProp_Weights_MetaData)) }; // 695102695
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics::NewProp_Parents_MetaData[] = {
		{ "Comment", "/*\n\x09 * The key for each parent\n\x09 */" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_DynamicHierarchy.h" },
		{ "Output", "" },
		{ "ToolTip", "* The key for each parent" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics::NewProp_Parents = { "Parents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_HierarchyGetParentWeights, Parents), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics::NewProp_Parents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics::NewProp_Parents_MetaData)) }; // 4167578013
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics::NewProp_Child,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics::NewProp_Weights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics::NewProp_Weights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics::NewProp_Parents,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBase,
		&NewStructOps,
		"RigUnit_HierarchyGetParentWeights",
		sizeof(FRigUnit_HierarchyGetParentWeights),
		alignof(FRigUnit_HierarchyGetParentWeights),
		Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParentWeights.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParentWeights.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParentWeights.InnerSingleton;
	}

void FRigUnit_HierarchyGetParentWeights::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Child,
		Weights,
		Parents,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_HierarchyGetParentWeightsArray>() == std::is_polymorphic<FRigUnit_DynamicHierarchyBase>(), "USTRUCT FRigUnit_HierarchyGetParentWeightsArray cannot be polymorphic unless super FRigUnit_DynamicHierarchyBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParentWeightsArray;
class UScriptStruct* FRigUnit_HierarchyGetParentWeightsArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParentWeightsArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParentWeightsArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_HierarchyGetParentWeightsArray"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_HierarchyGetParentWeightsArray::Execute"), &FRigUnit_HierarchyGetParentWeightsArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParentWeightsArray.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParentWeightsArray.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_HierarchyGetParentWeightsArray>()
{
	return FRigUnit_HierarchyGetParentWeightsArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Child;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Weights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Weights;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Parents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Returns the item's parents' weights\n*/" },
		{ "DisplayName", "Get Parent Weights" },
		{ "Keywords", "Chain,Parents,Hierarchy" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_DynamicHierarchy.h" },
		{ "ToolTip", "Returns the item's parents' weights" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_HierarchyGetParentWeightsArray>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics::NewProp_Child_MetaData[] = {
		{ "Comment", "/*\n\x09 * The child to retrieve the weights for\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_DynamicHierarchy.h" },
		{ "ToolTip", "* The child to retrieve the weights for" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_HierarchyGetParentWeightsArray, Child), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics::NewProp_Child_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics::NewProp_Child_MetaData)) }; // 3202328731
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics::NewProp_Weights_Inner = { "Weights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRigElementWeight, METADATA_PARAMS(nullptr, 0) }; // 695102695
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics::NewProp_Weights_MetaData[] = {
		{ "Comment", "/*\n\x09 * The weight of each parent\n\x09 */" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_DynamicHierarchy.h" },
		{ "Output", "" },
		{ "ToolTip", "* The weight of each parent" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics::NewProp_Weights = { "Weights", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_HierarchyGetParentWeightsArray, Weights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics::NewProp_Weights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics::NewProp_Weights_MetaData)) }; // 695102695
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics::NewProp_Parents_Inner = { "Parents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 3202328731
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics::NewProp_Parents_MetaData[] = {
		{ "Comment", "/*\n\x09 * The key for each parent\n\x09 */" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_DynamicHierarchy.h" },
		{ "Output", "" },
		{ "ToolTip", "* The key for each parent" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics::NewProp_Parents = { "Parents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_HierarchyGetParentWeightsArray, Parents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics::NewProp_Parents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics::NewProp_Parents_MetaData)) }; // 3202328731
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics::NewProp_Child,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics::NewProp_Weights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics::NewProp_Weights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics::NewProp_Parents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics::NewProp_Parents,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBase,
		&NewStructOps,
		"RigUnit_HierarchyGetParentWeightsArray",
		sizeof(FRigUnit_HierarchyGetParentWeightsArray),
		alignof(FRigUnit_HierarchyGetParentWeightsArray),
		Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParentWeightsArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParentWeightsArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParentWeightsArray.InnerSingleton;
	}

void FRigUnit_HierarchyGetParentWeightsArray::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Child,
		Weights,
		Parents,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_HierarchySetParentWeights>() == std::is_polymorphic<FRigUnit_DynamicHierarchyBaseMutable>(), "USTRUCT FRigUnit_HierarchySetParentWeights cannot be polymorphic unless super FRigUnit_DynamicHierarchyBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_HierarchySetParentWeights;
class UScriptStruct* FRigUnit_HierarchySetParentWeights::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchySetParentWeights.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_HierarchySetParentWeights.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_HierarchySetParentWeights"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_HierarchySetParentWeights::Execute"), &FRigUnit_HierarchySetParentWeights::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_HierarchySetParentWeights.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_HierarchySetParentWeights.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_HierarchySetParentWeights>()
{
	return FRigUnit_HierarchySetParentWeights::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Child;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Weights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Weights;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Sets the item's parents' weights\n*/" },
		{ "DisplayName", "Set Parent Weights" },
		{ "Keywords", "Chain,Parents,Hierarchy" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_DynamicHierarchy.h" },
		{ "ToolTip", "Sets the item's parents' weights" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_HierarchySetParentWeights>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights_Statics::NewProp_Child_MetaData[] = {
		{ "Comment", "/*\n\x09 * The child to set the parents' weights for\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_DynamicHierarchy.h" },
		{ "ToolTip", "* The child to set the parents' weights for" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_HierarchySetParentWeights, Child), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights_Statics::NewProp_Child_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights_Statics::NewProp_Child_MetaData)) }; // 3202328731
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights_Statics::NewProp_Weights_Inner = { "Weights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRigElementWeight, METADATA_PARAMS(nullptr, 0) }; // 695102695
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights_Statics::NewProp_Weights_MetaData[] = {
		{ "Comment", "/*\n\x09 * The weights to set for the child's parents.\n\x09 * The number of weights needs to match the current number of parents.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_DynamicHierarchy.h" },
		{ "ToolTip", "* The weights to set for the child's parents.\n* The number of weights needs to match the current number of parents." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights_Statics::NewProp_Weights = { "Weights", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_HierarchySetParentWeights, Weights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights_Statics::NewProp_Weights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights_Statics::NewProp_Weights_MetaData)) }; // 695102695
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights_Statics::NewProp_Child,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights_Statics::NewProp_Weights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights_Statics::NewProp_Weights,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBaseMutable,
		&NewStructOps,
		"RigUnit_HierarchySetParentWeights",
		sizeof(FRigUnit_HierarchySetParentWeights),
		alignof(FRigUnit_HierarchySetParentWeights),
		Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchySetParentWeights.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_HierarchySetParentWeights.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_HierarchySetParentWeights.InnerSingleton;
	}

void FRigUnit_HierarchySetParentWeights::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	TArrayView<const FRigElementWeight> Weights_1_Array(Weights);
	
    StaticExecute(
		RigVMExecuteContext,
		Child,
		Weights_1_Array,
		ExecuteContext,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_Statics::EnumInfo[] = {
		{ ERigSwitchParentMode_StaticEnum, TEXT("ERigSwitchParentMode"), &Z_Registration_Info_UEnum_ERigSwitchParentMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2981214668U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_DynamicHierarchyBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBase_Statics::NewStructOps, TEXT("RigUnit_DynamicHierarchyBase"), &Z_Registration_Info_UScriptStruct_RigUnit_DynamicHierarchyBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DynamicHierarchyBase), 2328643919U) },
		{ FRigUnit_DynamicHierarchyBaseMutable::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DynamicHierarchyBaseMutable_Statics::NewStructOps, TEXT("RigUnit_DynamicHierarchyBaseMutable"), &Z_Registration_Info_UScriptStruct_RigUnit_DynamicHierarchyBaseMutable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DynamicHierarchyBaseMutable), 67284290U) },
		{ FRigUnit_AddParent::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AddParent_Statics::NewStructOps, TEXT("RigUnit_AddParent"), &Z_Registration_Info_UScriptStruct_RigUnit_AddParent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AddParent), 2708249116U) },
		{ FRigUnit_SwitchParent::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SwitchParent_Statics::NewStructOps, TEXT("RigUnit_SwitchParent"), &Z_Registration_Info_UScriptStruct_RigUnit_SwitchParent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SwitchParent), 1601306646U) },
		{ FRigUnit_HierarchyGetParentWeights::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics::NewStructOps, TEXT("RigUnit_HierarchyGetParentWeights"), &Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParentWeights, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_HierarchyGetParentWeights), 2972899922U) },
		{ FRigUnit_HierarchyGetParentWeightsArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeightsArray_Statics::NewStructOps, TEXT("RigUnit_HierarchyGetParentWeightsArray"), &Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParentWeightsArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_HierarchyGetParentWeightsArray), 1904877972U) },
		{ FRigUnit_HierarchySetParentWeights::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights_Statics::NewStructOps, TEXT("RigUnit_HierarchySetParentWeights"), &Z_Registration_Info_UScriptStruct_RigUnit_HierarchySetParentWeights, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_HierarchySetParentWeights), 2644468709U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_3470399379(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_DynamicHierarchy_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
