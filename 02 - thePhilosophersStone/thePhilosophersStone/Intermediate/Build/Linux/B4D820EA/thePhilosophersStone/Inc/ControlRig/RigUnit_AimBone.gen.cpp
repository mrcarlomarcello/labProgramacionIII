// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_AimBone() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimBone_Target();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigVectorKind();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimItem_Target();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimBoneMath();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimBone();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimItem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AimBone_Target;
class UScriptStruct* FRigUnit_AimBone_Target::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AimBone_Target.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AimBone_Target.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AimBone_Target, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AimBone_Target"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AimBone_Target.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AimBone_Target>()
{
	return FRigUnit_AimBone_Target::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Kind_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Kind_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Kind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Space;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AimBone_Target>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "AimTarget" },
		{ "Comment", "/**\n\x09 * The amount of aim rotation to apply on this target.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The amount of aim rotation to apply on this target." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimBone_Target, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Axis_MetaData[] = {
		{ "Category", "AimTarget" },
		{ "Comment", "/**\n\x09 * The axis to align with the aim on this target\n\x09 */" },
		{ "EditCondition", "Weight > 0.0" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The axis to align with the aim on this target" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimBone_Target, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Axis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "AimTarget" },
		{ "Comment", "/**\n\x09 * The target to aim at - can be a direction or location based on the Kind setting\n\x09 */" },
		{ "EditCondition", "Weight > 0.0" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The target to aim at - can be a direction or location based on the Kind setting" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimBone_Target, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Target_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Kind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Kind_MetaData[] = {
		{ "Category", "AimTarget" },
		{ "Comment", "/**\n\x09 * The kind of target this is representing - can be a direction or a location\n\x09 */" },
		{ "EditCondition", "Weight > 0.0" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The kind of target this is representing - can be a direction or a location" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Kind = { "Kind", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimBone_Target, Kind), Z_Construct_UEnum_ControlRig_EControlRigVectorKind, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Kind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Kind_MetaData)) }; // 2351274891
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "AimTarget" },
		{ "Comment", "/**\n\x09 * The space in which the target is expressed\n\x09 */" },
		{ "DisplayName", "Target Space" },
		{ "EditCondition", "Weight > 0.0" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The space in which the target is expressed" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimBone_Target, Space), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Space_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Kind_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Kind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewProp_Space,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_AimBone_Target",
		sizeof(FRigUnit_AimBone_Target),
		alignof(FRigUnit_AimBone_Target),
		Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimBone_Target()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AimBone_Target.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AimBone_Target.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AimBone_Target.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AimItem_Target;
class UScriptStruct* FRigUnit_AimItem_Target::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AimItem_Target.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AimItem_Target.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AimItem_Target, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AimItem_Target"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AimItem_Target.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AimItem_Target>()
{
	return FRigUnit_AimItem_Target::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Kind_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Kind_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Kind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Space;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AimItem_Target>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "AimTarget" },
		{ "Comment", "/**\n\x09 * The amount of aim rotation to apply on this target.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The amount of aim rotation to apply on this target." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimItem_Target, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Axis_MetaData[] = {
		{ "Category", "AimTarget" },
		{ "Comment", "/**\n\x09 * The axis to align with the aim on this target\n\x09 */" },
		{ "EditCondition", "Weight > 0.0" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The axis to align with the aim on this target" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimItem_Target, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Axis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "AimTarget" },
		{ "Comment", "/**\n\x09 * The target to aim at - can be a direction or location based on the Kind setting\n\x09 */" },
		{ "EditCondition", "Weight > 0.0" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The target to aim at - can be a direction or location based on the Kind setting" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimItem_Target, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Target_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Kind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Kind_MetaData[] = {
		{ "Category", "AimTarget" },
		{ "Comment", "/**\n\x09 * The kind of target this is representing - can be a direction or a location\n\x09 */" },
		{ "EditCondition", "Weight > 0.0" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The kind of target this is representing - can be a direction or a location" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Kind = { "Kind", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimItem_Target, Kind), Z_Construct_UEnum_ControlRig_EControlRigVectorKind, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Kind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Kind_MetaData)) }; // 2351274891
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "AimTarget" },
		{ "Comment", "/**\n\x09 * The space in which the target is expressed\n\x09 */" },
		{ "DisplayName", "Target Space" },
		{ "EditCondition", "Weight > 0.0" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The space in which the target is expressed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimItem_Target, Space), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Space_MetaData)) }; // 3202328731
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Kind_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Kind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewProp_Space,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_AimItem_Target",
		sizeof(FRigUnit_AimItem_Target),
		alignof(FRigUnit_AimItem_Target),
		Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimItem_Target()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AimItem_Target.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AimItem_Target.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AimItem_Target.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AimBone_DebugSettings;
class UScriptStruct* FRigUnit_AimBone_DebugSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AimBone_DebugSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AimBone_DebugSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AimBone_DebugSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AimBone_DebugSettings.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AimBone_DebugSettings>()
{
	return FRigUnit_AimBone_DebugSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AimBone_DebugSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/**\n\x09 * If enabled debug information will be drawn \n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "If enabled debug information will be drawn" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigUnit_AimBone_DebugSettings*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_AimBone_DebugSettings), &Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/**\n\x09 * The size of the debug drawing information\n\x09 */" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The size of the debug drawing information" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimBone_DebugSettings, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::NewProp_WorldOffset_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/**\n\x09 * The offset at which to draw the debug information in the world\n\x09 */" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The offset at which to draw the debug information in the world" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimBone_DebugSettings, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::NewProp_WorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::NewProp_WorldOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::NewProp_WorldOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_AimBone_DebugSettings",
		sizeof(FRigUnit_AimBone_DebugSettings),
		alignof(FRigUnit_AimBone_DebugSettings),
		Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AimBone_DebugSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AimBone_DebugSettings.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AimBone_DebugSettings.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_AimBoneMath>() == std::is_polymorphic<FRigUnit_HighlevelBase>(), "USTRUCT FRigUnit_AimBoneMath cannot be polymorphic unless super FRigUnit_HighlevelBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AimBoneMath;
class UScriptStruct* FRigUnit_AimBoneMath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AimBoneMath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AimBoneMath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AimBoneMath, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AimBoneMath"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AimBoneMath::Execute"), &FRigUnit_AimBoneMath::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AimBoneMath.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AimBoneMath.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AimBoneMath>()
{
	return FRigUnit_AimBoneMath::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Primary_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Primary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Secondary_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Secondary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryCachedSpace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryCachedSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryCachedSpace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryCachedSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Outputs an aligned transform of a primary and secondary axis of an input transform to a world target.\n * Note: This node operates in world space!\n */" },
		{ "DisplayName", "Aim Math" },
		{ "Keywords", "Lookat" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "Outputs an aligned transform of a primary and secondary axis of an input transform to a world target.\nNote: This node operates in world space!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AimBoneMath>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_InputTransform_MetaData[] = {
		{ "Comment", "/**\n\x09 * The transform (in global space) before the aim was applied (optional)\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The transform (in global space) before the aim was applied (optional)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_InputTransform = { "InputTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimBoneMath, InputTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_InputTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_InputTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_Primary_MetaData[] = {
		{ "Comment", "/**\n\x09 * The primary target for the aim\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The primary target for the aim" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_Primary = { "Primary", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimBoneMath, Primary), Z_Construct_UScriptStruct_FRigUnit_AimItem_Target, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_Primary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_Primary_MetaData)) }; // 4148466425
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_Secondary_MetaData[] = {
		{ "Comment", "/**\n\x09 * The secondary target for the aim - also referred to as PoleVector / UpVector\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The secondary target for the aim - also referred to as PoleVector / UpVector" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_Secondary = { "Secondary", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimBoneMath, Secondary), Z_Construct_UScriptStruct_FRigUnit_AimItem_Target, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_Secondary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_Secondary_MetaData)) }; // 4148466425
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_Weight_MetaData[] = {
		{ "Comment", "/**\n\x09 * The weight of the change - how much the change should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The weight of the change - how much the change should be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimBoneMath, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_Result_MetaData[] = {
		{ "Comment", "/**\n\x09 * The resulting transform\n\x09 */" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "Output", "" },
		{ "ToolTip", "The resulting transform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimBoneMath, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_DebugSettings_MetaData[] = {
		{ "Comment", "/** The debug setting for the node */" },
		{ "DetailsOnly", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The debug setting for the node" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_DebugSettings = { "DebugSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimBoneMath, DebugSettings), Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_DebugSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_DebugSettings_MetaData)) }; // 2747065276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_PrimaryCachedSpace_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_PrimaryCachedSpace = { "PrimaryCachedSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimBoneMath, PrimaryCachedSpace), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_PrimaryCachedSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_PrimaryCachedSpace_MetaData)) }; // 466782542
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_SecondaryCachedSpace_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_SecondaryCachedSpace = { "SecondaryCachedSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimBoneMath, SecondaryCachedSpace), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_SecondaryCachedSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_SecondaryCachedSpace_MetaData)) }; // 466782542
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_InputTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_Primary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_Secondary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_DebugSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_PrimaryCachedSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewProp_SecondaryCachedSpace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBase,
		&NewStructOps,
		"RigUnit_AimBoneMath",
		sizeof(FRigUnit_AimBoneMath),
		alignof(FRigUnit_AimBoneMath),
		Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimBoneMath()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AimBoneMath.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AimBoneMath.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AimBoneMath.InnerSingleton;
	}

void FRigUnit_AimBoneMath::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		InputTransform,
		Primary,
		Secondary,
		Weight,
		Result,
		DebugSettings,
		PrimaryCachedSpace,
		SecondaryCachedSpace,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_AimBone>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_AimBone cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AimBone;
class UScriptStruct* FRigUnit_AimBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AimBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AimBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AimBone, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AimBone"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AimBone::Execute"), &FRigUnit_AimBone::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AimBone.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AimBone.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AimBone>()
{
	return FRigUnit_AimBone::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Primary_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Primary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Secondary_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Secondary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[];
#endif
		static void NewProp_bPropagateToChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedBoneIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedBoneIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryCachedSpace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryCachedSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryCachedSpace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryCachedSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Aligns the rotation of a primary and secondary axis of a bone to a global target.\n * Note: This node operates in global space!\n */" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Aim" },
		{ "Keywords", "Lookat" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "Aligns the rotation of a primary and secondary axis of a bone to a global target.\nNote: This node operates in global space!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AimBone>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_Bone_MetaData[] = {
		{ "Comment", "/** \n\x09 * The name of the bone to align\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The name of the bone to align" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimBone, Bone), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_Bone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_Primary_MetaData[] = {
		{ "Comment", "/**\n\x09 * The primary target for the aim \n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The primary target for the aim" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_Primary = { "Primary", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimBone, Primary), Z_Construct_UScriptStruct_FRigUnit_AimBone_Target, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_Primary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_Primary_MetaData)) }; // 2819767513
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_Secondary_MetaData[] = {
		{ "Comment", "/**\n\x09 * The secondary target for the aim - also referred to as PoleVector / UpVector\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The secondary target for the aim - also referred to as PoleVector / UpVector" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_Secondary = { "Secondary", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimBone, Secondary), Z_Construct_UScriptStruct_FRigUnit_AimBone_Target, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_Secondary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_Secondary_MetaData)) }; // 2819767513
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_Weight_MetaData[] = {
		{ "Comment", "/**\n\x09 * The weight of the change - how much the change should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The weight of the change - how much the change should be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimBone, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_AimBone*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_AimBone), &Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_DebugSettings_MetaData[] = {
		{ "Comment", "/** The debug setting for the node */" },
		{ "DetailsOnly", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The debug setting for the node" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_DebugSettings = { "DebugSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimBone, DebugSettings), Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_DebugSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_DebugSettings_MetaData)) }; // 2747065276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_CachedBoneIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_CachedBoneIndex = { "CachedBoneIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimBone, CachedBoneIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_CachedBoneIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_CachedBoneIndex_MetaData)) }; // 466782542
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_PrimaryCachedSpace_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_PrimaryCachedSpace = { "PrimaryCachedSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimBone, PrimaryCachedSpace), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_PrimaryCachedSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_PrimaryCachedSpace_MetaData)) }; // 466782542
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_SecondaryCachedSpace_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_SecondaryCachedSpace = { "SecondaryCachedSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimBone, SecondaryCachedSpace), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_SecondaryCachedSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_SecondaryCachedSpace_MetaData)) }; // 466782542
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_Bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_Primary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_Secondary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_DebugSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_CachedBoneIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_PrimaryCachedSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewProp_SecondaryCachedSpace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_AimBone",
		sizeof(FRigUnit_AimBone),
		alignof(FRigUnit_AimBone),
		Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimBone()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AimBone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AimBone.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AimBone.InnerSingleton;
	}

void FRigUnit_AimBone::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Bone,
		Primary,
		Secondary,
		Weight,
		bPropagateToChildren,
		DebugSettings,
		CachedBoneIndex,
		PrimaryCachedSpace,
		SecondaryCachedSpace,
		ExecuteContext,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_AimItem>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_AimItem cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AimItem;
class UScriptStruct* FRigUnit_AimItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AimItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AimItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AimItem, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AimItem"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AimItem::Execute"), &FRigUnit_AimItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AimItem.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AimItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AimItem>()
{
	return FRigUnit_AimItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Primary_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Primary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Secondary_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Secondary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedItem_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryCachedSpace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryCachedSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryCachedSpace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryCachedSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Aligns the rotation of a primary and secondary axis of a bone to a global target.\n * Note: This node operates in global space!\n */" },
		{ "DisplayName", "Aim" },
		{ "Keywords", "Lookat" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "Aligns the rotation of a primary and secondary axis of a bone to a global target.\nNote: This node operates in global space!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AimItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_Item_MetaData[] = {
		{ "Comment", "/** \n\x09 * The name of the item to align\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The name of the item to align" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimItem, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_Item_MetaData)) }; // 3202328731
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_Primary_MetaData[] = {
		{ "Comment", "/**\n\x09 * The primary target for the aim \n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The primary target for the aim" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_Primary = { "Primary", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimItem, Primary), Z_Construct_UScriptStruct_FRigUnit_AimItem_Target, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_Primary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_Primary_MetaData)) }; // 4148466425
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_Secondary_MetaData[] = {
		{ "Comment", "/**\n\x09 * The secondary target for the aim - also referred to as PoleVector / UpVector\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The secondary target for the aim - also referred to as PoleVector / UpVector" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_Secondary = { "Secondary", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimItem, Secondary), Z_Construct_UScriptStruct_FRigUnit_AimItem_Target, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_Secondary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_Secondary_MetaData)) }; // 4148466425
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_Weight_MetaData[] = {
		{ "Comment", "/**\n\x09 * The weight of the change - how much the change should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The weight of the change - how much the change should be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimItem, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_DebugSettings_MetaData[] = {
		{ "Comment", "/** The debug setting for the node */" },
		{ "DetailsOnly", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
		{ "ToolTip", "The debug setting for the node" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_DebugSettings = { "DebugSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimItem, DebugSettings), Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_DebugSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_DebugSettings_MetaData)) }; // 2747065276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_CachedItem_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_CachedItem = { "CachedItem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimItem, CachedItem), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_CachedItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_CachedItem_MetaData)) }; // 466782542
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_PrimaryCachedSpace_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_PrimaryCachedSpace = { "PrimaryCachedSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimItem, PrimaryCachedSpace), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_PrimaryCachedSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_PrimaryCachedSpace_MetaData)) }; // 466782542
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_SecondaryCachedSpace_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_AimBone.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_SecondaryCachedSpace = { "SecondaryCachedSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_AimItem, SecondaryCachedSpace), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_SecondaryCachedSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_SecondaryCachedSpace_MetaData)) }; // 466782542
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_Primary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_Secondary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_DebugSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_CachedItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_PrimaryCachedSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewProp_SecondaryCachedSpace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_AimItem",
		sizeof(FRigUnit_AimItem),
		alignof(FRigUnit_AimItem),
		Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AimItem()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AimItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AimItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AimItem.InnerSingleton;
	}

void FRigUnit_AimItem::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Item,
		Primary,
		Secondary,
		Weight,
		DebugSettings,
		CachedItem,
		PrimaryCachedSpace,
		SecondaryCachedSpace,
		ExecuteContext,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_AimBone_Target::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AimBone_Target_Statics::NewStructOps, TEXT("RigUnit_AimBone_Target"), &Z_Registration_Info_UScriptStruct_RigUnit_AimBone_Target, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AimBone_Target), 2819767513U) },
		{ FRigUnit_AimItem_Target::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AimItem_Target_Statics::NewStructOps, TEXT("RigUnit_AimItem_Target"), &Z_Registration_Info_UScriptStruct_RigUnit_AimItem_Target, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AimItem_Target), 4148466425U) },
		{ FRigUnit_AimBone_DebugSettings::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AimBone_DebugSettings_Statics::NewStructOps, TEXT("RigUnit_AimBone_DebugSettings"), &Z_Registration_Info_UScriptStruct_RigUnit_AimBone_DebugSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AimBone_DebugSettings), 2747065276U) },
		{ FRigUnit_AimBoneMath::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AimBoneMath_Statics::NewStructOps, TEXT("RigUnit_AimBoneMath"), &Z_Registration_Info_UScriptStruct_RigUnit_AimBoneMath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AimBoneMath), 682395910U) },
		{ FRigUnit_AimBone::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AimBone_Statics::NewStructOps, TEXT("RigUnit_AimBone"), &Z_Registration_Info_UScriptStruct_RigUnit_AimBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AimBone), 2381092025U) },
		{ FRigUnit_AimItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AimItem_Statics::NewStructOps, TEXT("RigUnit_AimItem"), &Z_Registration_Info_UScriptStruct_RigUnit_AimItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AimItem), 848667083U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_2469745586(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_AimBone_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
