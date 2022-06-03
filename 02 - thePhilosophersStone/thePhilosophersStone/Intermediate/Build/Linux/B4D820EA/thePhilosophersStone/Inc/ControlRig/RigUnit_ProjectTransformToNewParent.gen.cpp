// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Hierarchy/RigUnit_ProjectTransformToNewParent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_ProjectTransformToNewParent() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_ProjectTransformToNewParent>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_ProjectTransformToNewParent cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ProjectTransformToNewParent;
class UScriptStruct* FRigUnit_ProjectTransformToNewParent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ProjectTransformToNewParent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ProjectTransformToNewParent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ProjectTransformToNewParent"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ProjectTransformToNewParent::Execute"), &FRigUnit_ProjectTransformToNewParent::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ProjectTransformToNewParent.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ProjectTransformToNewParent.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ProjectTransformToNewParent>()
{
	return FRigUnit_ProjectTransformToNewParent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bChildInitial_MetaData[];
#endif
		static void NewProp_bChildInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bChildInitial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldParent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOldParentInitial_MetaData[];
#endif
		static void NewProp_bOldParentInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOldParentInitial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewParent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNewParentInitial_MetaData[];
#endif
		static void NewProp_bNewParentInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewParentInitial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedChild_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedChild;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedOldParent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedOldParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedNewParent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedNewParent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Gets the relative offset between the child and the old parent, then multiplies by new parent's transform.\n */" },
		{ "DisplayName", "Project to new Parent" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "ProjectTransformToNewParent,Relative,Reparent,Offset" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ProjectTransformToNewParent.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "ToolTip", "Gets the relative offset between the child and the old parent, then multiplies by new parent's transform." },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ProjectTransformToNewParent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_Child_MetaData[] = {
		{ "Comment", "/**\n\x09 * The element to project between parents\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ProjectTransformToNewParent.h" },
		{ "ToolTip", "The element to project between parents" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ProjectTransformToNewParent, Child), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_Child_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_Child_MetaData)) }; // 3202328731
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_bChildInitial_MetaData[] = {
		{ "Comment", "/**\n\x09 * If set to true the child will be retrieved in its initial transform\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ProjectTransformToNewParent.h" },
		{ "ToolTip", "If set to true the child will be retrieved in its initial transform" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_bChildInitial_SetBit(void* Obj)
	{
		((FRigUnit_ProjectTransformToNewParent*)Obj)->bChildInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_bChildInitial = { "bChildInitial", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_ProjectTransformToNewParent), &Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_bChildInitial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_bChildInitial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_bChildInitial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_OldParent_MetaData[] = {
		{ "Comment", "/**\n\x09 * The original parent of the child.\n\x09 * Can be an actual parent in the hierarchy or any other\n\x09 * item you want to use to compute to offset against.\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ProjectTransformToNewParent.h" },
		{ "ToolTip", "The original parent of the child.\nCan be an actual parent in the hierarchy or any other\nitem you want to use to compute to offset against." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_OldParent = { "OldParent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ProjectTransformToNewParent, OldParent), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_OldParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_OldParent_MetaData)) }; // 3202328731
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_bOldParentInitial_MetaData[] = {
		{ "Comment", "/**\n\x09 * If set to true the old parent will be retrieved in its initial transform\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ProjectTransformToNewParent.h" },
		{ "ToolTip", "If set to true the old parent will be retrieved in its initial transform" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_bOldParentInitial_SetBit(void* Obj)
	{
		((FRigUnit_ProjectTransformToNewParent*)Obj)->bOldParentInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_bOldParentInitial = { "bOldParentInitial", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_ProjectTransformToNewParent), &Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_bOldParentInitial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_bOldParentInitial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_bOldParentInitial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_NewParent_MetaData[] = {
		{ "Comment", "/**\n\x09 * The new parent of the child.\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ProjectTransformToNewParent.h" },
		{ "ToolTip", "The new parent of the child." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_NewParent = { "NewParent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ProjectTransformToNewParent, NewParent), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_NewParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_NewParent_MetaData)) }; // 3202328731
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_bNewParentInitial_MetaData[] = {
		{ "Comment", "/**\n\x09 * If set to true the new parent will be retrieved in its initial transform\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ProjectTransformToNewParent.h" },
		{ "ToolTip", "If set to true the new parent will be retrieved in its initial transform" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_bNewParentInitial_SetBit(void* Obj)
	{
		((FRigUnit_ProjectTransformToNewParent*)Obj)->bNewParentInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_bNewParentInitial = { "bNewParentInitial", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_ProjectTransformToNewParent), &Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_bNewParentInitial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_bNewParentInitial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_bNewParentInitial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_Transform_MetaData[] = {
		{ "Comment", "// The resulting transform\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ProjectTransformToNewParent.h" },
		{ "Output", "" },
		{ "ToolTip", "The resulting transform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ProjectTransformToNewParent, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_CachedChild_MetaData[] = {
		{ "Comment", "// Used to cache the internally used child\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ProjectTransformToNewParent.h" },
		{ "ToolTip", "Used to cache the internally used child" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_CachedChild = { "CachedChild", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ProjectTransformToNewParent, CachedChild), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_CachedChild_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_CachedChild_MetaData)) }; // 466782542
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_CachedOldParent_MetaData[] = {
		{ "Comment", "// Used to cache the internally used old parent\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ProjectTransformToNewParent.h" },
		{ "ToolTip", "Used to cache the internally used old parent" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_CachedOldParent = { "CachedOldParent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ProjectTransformToNewParent, CachedOldParent), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_CachedOldParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_CachedOldParent_MetaData)) }; // 466782542
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_CachedNewParent_MetaData[] = {
		{ "Comment", "// Used to cache the internally used new parent\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ProjectTransformToNewParent.h" },
		{ "ToolTip", "Used to cache the internally used new parent" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_CachedNewParent = { "CachedNewParent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ProjectTransformToNewParent, CachedNewParent), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_CachedNewParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_CachedNewParent_MetaData)) }; // 466782542
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_Child,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_bChildInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_OldParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_bOldParentInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_NewParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_bNewParentInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_CachedChild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_CachedOldParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewProp_CachedNewParent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_ProjectTransformToNewParent",
		sizeof(FRigUnit_ProjectTransformToNewParent),
		alignof(FRigUnit_ProjectTransformToNewParent),
		Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ProjectTransformToNewParent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ProjectTransformToNewParent.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ProjectTransformToNewParent.InnerSingleton;
	}

void FRigUnit_ProjectTransformToNewParent::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Child,
		bChildInitial,
		OldParent,
		bOldParentInitial,
		NewParent,
		bNewParentInitial,
		Transform,
		CachedChild,
		CachedOldParent,
		CachedNewParent,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ProjectTransformToNewParent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ProjectTransformToNewParent_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_ProjectTransformToNewParent::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ProjectTransformToNewParent_Statics::NewStructOps, TEXT("RigUnit_ProjectTransformToNewParent"), &Z_Registration_Info_UScriptStruct_RigUnit_ProjectTransformToNewParent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ProjectTransformToNewParent), 1796892253U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ProjectTransformToNewParent_h_892119739(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ProjectTransformToNewParent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ProjectTransformToNewParent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
