// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_BoneHarmonics() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigAnimEasingType();
	ANIMATIONCORE_API UEnum* Z_Construct_UEnum_AnimationCore_EEulerRotationOrder();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_BoneTarget;
class UScriptStruct* FRigUnit_BoneHarmonics_BoneTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_BoneTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_BoneTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_BoneHarmonics_BoneTarget"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_BoneTarget.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_BoneHarmonics_BoneTarget>()
{
	return FRigUnit_BoneHarmonics_BoneTarget::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Bone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Ratio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_BoneHarmonics_BoneTarget>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::NewProp_Bone_MetaData[] = {
		{ "Comment", "/**\n\x09 * The name of the bone to drive\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
		{ "ToolTip", "The name of the bone to drive" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_BoneHarmonics_BoneTarget, Bone), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::NewProp_Bone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::NewProp_Ratio_MetaData[] = {
		{ "Comment", "/**\n\x09 * The ratio of where the bone sits within the harmonics system.\n\x09 * Valid values reach from 0.0 to 1.0\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
		{ "ToolTip", "The ratio of where the bone sits within the harmonics system.\nValid values reach from 0.0 to 1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_BoneHarmonics_BoneTarget, Ratio), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::NewProp_Ratio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::NewProp_Ratio_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::NewProp_Bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::NewProp_Ratio,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_BoneHarmonics_BoneTarget",
		sizeof(FRigUnit_BoneHarmonics_BoneTarget),
		alignof(FRigUnit_BoneHarmonics_BoneTarget),
		Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_BoneTarget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_BoneTarget.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_BoneTarget.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_Harmonics_TargetItem;
class UScriptStruct* FRigUnit_Harmonics_TargetItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_Harmonics_TargetItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_Harmonics_TargetItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_Harmonics_TargetItem"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_Harmonics_TargetItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_Harmonics_TargetItem>()
{
	return FRigUnit_Harmonics_TargetItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Ratio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_Harmonics_TargetItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::NewProp_Item_MetaData[] = {
		{ "Comment", "/**\n\x09 * The name of the item to drive\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
		{ "ToolTip", "The name of the item to drive" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_Harmonics_TargetItem, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::NewProp_Item_MetaData)) }; // 3202328731
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::NewProp_Ratio_MetaData[] = {
		{ "Comment", "/**\n\x09 * The ratio of where the item sits within the harmonics system.\n\x09 * Valid values reach from 0.0 to 1.0\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
		{ "ToolTip", "The ratio of where the item sits within the harmonics system.\nValid values reach from 0.0 to 1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_Harmonics_TargetItem, Ratio), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::NewProp_Ratio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::NewProp_Ratio_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::NewProp_Ratio,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_Harmonics_TargetItem",
		sizeof(FRigUnit_Harmonics_TargetItem),
		alignof(FRigUnit_Harmonics_TargetItem),
		Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_Harmonics_TargetItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_Harmonics_TargetItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_Harmonics_TargetItem.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_WorkData;
class UScriptStruct* FRigUnit_BoneHarmonics_WorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_WorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_WorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_BoneHarmonics_WorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_WorkData.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_BoneHarmonics_WorkData>()
{
	return FRigUnit_BoneHarmonics_WorkData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedItems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaveTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_BoneHarmonics_WorkData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::NewProp_CachedItems_Inner = { "CachedItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(nullptr, 0) }; // 466782542
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::NewProp_CachedItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::NewProp_CachedItems = { "CachedItems", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_BoneHarmonics_WorkData, CachedItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::NewProp_CachedItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::NewProp_CachedItems_MetaData)) }; // 466782542
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::NewProp_WaveTime_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::NewProp_WaveTime = { "WaveTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_BoneHarmonics_WorkData, WaveTime), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::NewProp_WaveTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::NewProp_WaveTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::NewProp_CachedItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::NewProp_CachedItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::NewProp_WaveTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_BoneHarmonics_WorkData",
		sizeof(FRigUnit_BoneHarmonics_WorkData),
		alignof(FRigUnit_BoneHarmonics_WorkData),
		Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_WorkData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_WorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_WorkData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_BoneHarmonics>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_BoneHarmonics cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics;
class UScriptStruct* FRigUnit_BoneHarmonics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_BoneHarmonics"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_BoneHarmonics::Execute"), &FRigUnit_BoneHarmonics::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_BoneHarmonics>()
{
	return FRigUnit_BoneHarmonics::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaveFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveAmplitude_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaveAmplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaveOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveNoise_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaveNoise;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WaveEase_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveEase_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WaveEase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveMinimum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaveMinimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveMaximum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaveMaximum;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationOrder_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOrder_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[];
#endif
		static void NewProp_bPropagateToChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Performs point based simulation\n */" },
		{ "Deprecated", "4.250000" },
		{ "DisplayName", "Harmonics" },
		{ "Keywords", "Sin,Wave" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
		{ "ToolTip", "Performs point based simulation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_BoneHarmonics>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_Bones_Inner = { "Bones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget, METADATA_PARAMS(nullptr, 0) }; // 2696282930
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_Bones_MetaData[] = {
		{ "Comment", "/** The bones to drive. */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
		{ "ToolTip", "The bones to drive." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_Bones = { "Bones", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_BoneHarmonics, Bones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_Bones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_Bones_MetaData)) }; // 2696282930
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveSpeed_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveSpeed = { "WaveSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_BoneHarmonics, WaveSpeed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveFrequency_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveFrequency = { "WaveFrequency", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_BoneHarmonics, WaveFrequency), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveAmplitude_MetaData[] = {
		{ "Comment", "/** The amplitude in degrees per axis */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
		{ "ToolTip", "The amplitude in degrees per axis" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveAmplitude = { "WaveAmplitude", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_BoneHarmonics, WaveAmplitude), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveAmplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveAmplitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveOffset_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveOffset = { "WaveOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_BoneHarmonics, WaveOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveNoise_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveNoise = { "WaveNoise", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_BoneHarmonics, WaveNoise), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveNoise_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveNoise_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveEase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveEase_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveEase = { "WaveEase", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_BoneHarmonics, WaveEase), Z_Construct_UEnum_ControlRig_EControlRigAnimEasingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveEase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveEase_MetaData)) }; // 3463141811
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveMinimum_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveMinimum = { "WaveMinimum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_BoneHarmonics, WaveMinimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveMinimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveMinimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveMaximum_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveMaximum = { "WaveMaximum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_BoneHarmonics, WaveMaximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveMaximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveMaximum_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_RotationOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_RotationOrder_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_RotationOrder = { "RotationOrder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_BoneHarmonics, RotationOrder), Z_Construct_UEnum_AnimationCore_EEulerRotationOrder, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_RotationOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_RotationOrder_MetaData)) }; // 2684869264
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_BoneHarmonics*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_BoneHarmonics), &Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_BoneHarmonics, WorkData), Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WorkData_MetaData)) }; // 3734137739
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_Bones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_Bones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveAmplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveNoise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveEase_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveEase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveMinimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WaveMaximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_RotationOrder_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_RotationOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewProp_WorkData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_BoneHarmonics",
		sizeof(FRigUnit_BoneHarmonics),
		alignof(FRigUnit_BoneHarmonics),
		Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics.InnerSingleton;
	}

void FRigUnit_BoneHarmonics::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	TArrayView<const FRigUnit_BoneHarmonics_BoneTarget> Bones_0_Array(Bones);
	
    StaticExecute(
		RigVMExecuteContext,
		Bones_0_Array,
		WaveSpeed,
		WaveFrequency,
		WaveAmplitude,
		WaveOffset,
		WaveNoise,
		WaveEase,
		WaveMinimum,
		WaveMaximum,
		RotationOrder,
		bPropagateToChildren,
		WorkData,
		ExecuteContext,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_ItemHarmonics>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_ItemHarmonics cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ItemHarmonics;
class UScriptStruct* FRigUnit_ItemHarmonics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemHarmonics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ItemHarmonics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ItemHarmonics"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ItemHarmonics::Execute"), &FRigUnit_ItemHarmonics::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ItemHarmonics.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ItemHarmonics.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ItemHarmonics>()
{
	return FRigUnit_ItemHarmonics::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaveFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveAmplitude_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaveAmplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaveOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveNoise_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaveNoise;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WaveEase_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveEase_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WaveEase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveMinimum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaveMinimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveMaximum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaveMaximum;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationOrder_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOrder_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n * Drives an array of items through a harmonics spectrum\n */" },
		{ "DisplayName", "Harmonics" },
		{ "Keywords", "Sin,Wave" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
		{ "ToolTip", "Drives an array of items through a harmonics spectrum" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ItemHarmonics>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem, METADATA_PARAMS(nullptr, 0) }; // 63030860
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_Targets_MetaData[] = {
		{ "Comment", "/** The items to drive. */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
		{ "ToolTip", "The items to drive." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ItemHarmonics, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_Targets_MetaData)) }; // 63030860
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveSpeed_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveSpeed = { "WaveSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ItemHarmonics, WaveSpeed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveFrequency_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveFrequency = { "WaveFrequency", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ItemHarmonics, WaveFrequency), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveAmplitude_MetaData[] = {
		{ "Comment", "/** The amplitude in degrees per axis */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
		{ "ToolTip", "The amplitude in degrees per axis" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveAmplitude = { "WaveAmplitude", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ItemHarmonics, WaveAmplitude), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveAmplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveAmplitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveOffset_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveOffset = { "WaveOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ItemHarmonics, WaveOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveNoise_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveNoise = { "WaveNoise", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ItemHarmonics, WaveNoise), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveNoise_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveNoise_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveEase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveEase_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveEase = { "WaveEase", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ItemHarmonics, WaveEase), Z_Construct_UEnum_ControlRig_EControlRigAnimEasingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveEase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveEase_MetaData)) }; // 3463141811
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveMinimum_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveMinimum = { "WaveMinimum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ItemHarmonics, WaveMinimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveMinimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveMinimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveMaximum_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveMaximum = { "WaveMaximum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ItemHarmonics, WaveMaximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveMaximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveMaximum_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_RotationOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_RotationOrder_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_RotationOrder = { "RotationOrder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ItemHarmonics, RotationOrder), Z_Construct_UEnum_AnimationCore_EEulerRotationOrder, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_RotationOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_RotationOrder_MetaData)) }; // 2684869264
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Harmonics/RigUnit_BoneHarmonics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_ItemHarmonics, WorkData), Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WorkData_MetaData)) }; // 3734137739
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveAmplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveNoise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveEase_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveEase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveMinimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WaveMaximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_RotationOrder_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_RotationOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewProp_WorkData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_ItemHarmonics",
		sizeof(FRigUnit_ItemHarmonics),
		alignof(FRigUnit_ItemHarmonics),
		Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemHarmonics.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ItemHarmonics.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ItemHarmonics.InnerSingleton;
	}

void FRigUnit_ItemHarmonics::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	TArrayView<const FRigUnit_Harmonics_TargetItem> Targets_0_Array(Targets);
	
    StaticExecute(
		RigVMExecuteContext,
		Targets_0_Array,
		WaveSpeed,
		WaveFrequency,
		WaveAmplitude,
		WaveOffset,
		WaveNoise,
		WaveEase,
		WaveMinimum,
		WaveMaximum,
		RotationOrder,
		WorkData,
		ExecuteContext,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Harmonics_RigUnit_BoneHarmonics_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Harmonics_RigUnit_BoneHarmonics_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_BoneHarmonics_BoneTarget::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_BoneTarget_Statics::NewStructOps, TEXT("RigUnit_BoneHarmonics_BoneTarget"), &Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_BoneTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_BoneHarmonics_BoneTarget), 2696282930U) },
		{ FRigUnit_Harmonics_TargetItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_Harmonics_TargetItem_Statics::NewStructOps, TEXT("RigUnit_Harmonics_TargetItem"), &Z_Registration_Info_UScriptStruct_RigUnit_Harmonics_TargetItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_Harmonics_TargetItem), 63030860U) },
		{ FRigUnit_BoneHarmonics_WorkData::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_WorkData_Statics::NewStructOps, TEXT("RigUnit_BoneHarmonics_WorkData"), &Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics_WorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_BoneHarmonics_WorkData), 3734137739U) },
		{ FRigUnit_BoneHarmonics::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_BoneHarmonics_Statics::NewStructOps, TEXT("RigUnit_BoneHarmonics"), &Z_Registration_Info_UScriptStruct_RigUnit_BoneHarmonics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_BoneHarmonics), 4271781495U) },
		{ FRigUnit_ItemHarmonics::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ItemHarmonics_Statics::NewStructOps, TEXT("RigUnit_ItemHarmonics"), &Z_Registration_Info_UScriptStruct_RigUnit_ItemHarmonics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ItemHarmonics), 1759805340U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Harmonics_RigUnit_BoneHarmonics_h_2350247581(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Harmonics_RigUnit_BoneHarmonics_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Harmonics_RigUnit_BoneHarmonics_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
