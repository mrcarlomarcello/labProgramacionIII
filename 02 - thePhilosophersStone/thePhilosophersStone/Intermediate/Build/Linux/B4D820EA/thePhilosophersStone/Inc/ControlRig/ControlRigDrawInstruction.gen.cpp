// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Drawing/ControlRigDrawInstruction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigDrawInstruction() {}
// Cross Module References
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigDrawSettings();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigDrawInstruction();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControlRigDrawSettings;
	static UEnum* EControlRigDrawSettings_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EControlRigDrawSettings.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EControlRigDrawSettings.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigDrawSettings, Z_Construct_UPackage__Script_ControlRig(), TEXT("EControlRigDrawSettings"));
		}
		return Z_Registration_Info_UEnum_EControlRigDrawSettings.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigDrawSettings::Primitive>()
	{
		return EControlRigDrawSettings_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_EControlRigDrawSettings_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_EControlRigDrawSettings_Statics::Enumerators[] = {
		{ "EControlRigDrawSettings::Points", (int64)EControlRigDrawSettings::Points },
		{ "EControlRigDrawSettings::Lines", (int64)EControlRigDrawSettings::Lines },
		{ "EControlRigDrawSettings::LineStrip", (int64)EControlRigDrawSettings::LineStrip },
		{ "EControlRigDrawSettings::DynamicMesh", (int64)EControlRigDrawSettings::DynamicMesh },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_EControlRigDrawSettings_Statics::Enum_MetaDataParams[] = {
		{ "DynamicMesh.Name", "EControlRigDrawSettings::DynamicMesh" },
		{ "Lines.Name", "EControlRigDrawSettings::Lines" },
		{ "LineStrip.Name", "EControlRigDrawSettings::LineStrip" },
		{ "ModuleRelativePath", "Public/Drawing/ControlRigDrawInstruction.h" },
		{ "Points.Name", "EControlRigDrawSettings::Points" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_EControlRigDrawSettings_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"EControlRigDrawSettings",
		"EControlRigDrawSettings::Primitive",
		Z_Construct_UEnum_ControlRig_EControlRigDrawSettings_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigDrawSettings_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_EControlRigDrawSettings_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigDrawSettings_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_EControlRigDrawSettings()
	{
		if (!Z_Registration_Info_UEnum_EControlRigDrawSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControlRigDrawSettings.InnerSingleton, Z_Construct_UEnum_ControlRig_EControlRigDrawSettings_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EControlRigDrawSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigDrawInstruction;
class UScriptStruct* FControlRigDrawInstruction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigDrawInstruction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigDrawInstruction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigDrawInstruction, Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlRigDrawInstruction"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigDrawInstruction.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlRigDrawInstruction>()
{
	return FControlRigDrawInstruction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PrimitiveType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Drawing/ControlRigDrawInstruction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigDrawInstruction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "DrawInstruction" },
		{ "ModuleRelativePath", "Public/Drawing/ControlRigDrawInstruction.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FControlRigDrawInstruction, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_PrimitiveType_MetaData[] = {
		{ "Category", "DrawInstruction" },
		{ "ModuleRelativePath", "Public/Drawing/ControlRigDrawInstruction.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_PrimitiveType = { "PrimitiveType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FControlRigDrawInstruction, PrimitiveType), Z_Construct_UEnum_ControlRig_EControlRigDrawSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_PrimitiveType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_PrimitiveType_MetaData)) }; // 3787610500
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_Positions_MetaData[] = {
		{ "Category", "DrawInstruction" },
		{ "ModuleRelativePath", "Public/Drawing/ControlRigDrawInstruction.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FControlRigDrawInstruction, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_Positions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_Positions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "DrawInstruction" },
		{ "ModuleRelativePath", "Public/Drawing/ControlRigDrawInstruction.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FControlRigDrawInstruction, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "DrawInstruction" },
		{ "ModuleRelativePath", "Public/Drawing/ControlRigDrawInstruction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FControlRigDrawInstruction, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "DrawInstruction" },
		{ "ModuleRelativePath", "Public/Drawing/ControlRigDrawInstruction.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FControlRigDrawInstruction, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_PrimitiveType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_Positions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_Positions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"ControlRigDrawInstruction",
		sizeof(FControlRigDrawInstruction),
		alignof(FControlRigDrawInstruction),
		Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlRigDrawInstruction()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlRigDrawInstruction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigDrawInstruction.InnerSingleton, Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlRigDrawInstruction.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Drawing_ControlRigDrawInstruction_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Drawing_ControlRigDrawInstruction_h_Statics::EnumInfo[] = {
		{ EControlRigDrawSettings_StaticEnum, TEXT("EControlRigDrawSettings"), &Z_Registration_Info_UEnum_EControlRigDrawSettings, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3787610500U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Drawing_ControlRigDrawInstruction_h_Statics::ScriptStructInfo[] = {
		{ FControlRigDrawInstruction::StaticStruct, Z_Construct_UScriptStruct_FControlRigDrawInstruction_Statics::NewStructOps, TEXT("ControlRigDrawInstruction"), &Z_Registration_Info_UScriptStruct_ControlRigDrawInstruction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigDrawInstruction), 3547487396U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Drawing_ControlRigDrawInstruction_h_3722695366(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Drawing_ControlRigDrawInstruction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Drawing_ControlRigDrawInstruction_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Drawing_ControlRigDrawInstruction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Drawing_ControlRigDrawInstruction_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
