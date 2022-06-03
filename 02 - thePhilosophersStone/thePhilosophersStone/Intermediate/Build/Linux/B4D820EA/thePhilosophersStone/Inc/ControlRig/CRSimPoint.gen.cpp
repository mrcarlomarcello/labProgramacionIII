// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Math/Simulation/CRSimPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCRSimPoint() {}
// Cross Module References
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ECRSimPointIntegrateType();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECRSimPointIntegrateType;
	static UEnum* ECRSimPointIntegrateType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECRSimPointIntegrateType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECRSimPointIntegrateType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ECRSimPointIntegrateType, Z_Construct_UPackage__Script_ControlRig(), TEXT("ECRSimPointIntegrateType"));
		}
		return Z_Registration_Info_UEnum_ECRSimPointIntegrateType.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<ECRSimPointIntegrateType>()
	{
		return ECRSimPointIntegrateType_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_ECRSimPointIntegrateType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_ECRSimPointIntegrateType_Statics::Enumerators[] = {
		{ "ECRSimPointIntegrateType::Verlet", (int64)ECRSimPointIntegrateType::Verlet },
		{ "ECRSimPointIntegrateType::SemiExplicitEuler", (int64)ECRSimPointIntegrateType::SemiExplicitEuler },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_ECRSimPointIntegrateType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPoint.h" },
		{ "SemiExplicitEuler.Name", "ECRSimPointIntegrateType::SemiExplicitEuler" },
		{ "Verlet.Name", "ECRSimPointIntegrateType::Verlet" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ECRSimPointIntegrateType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"ECRSimPointIntegrateType",
		"ECRSimPointIntegrateType",
		Z_Construct_UEnum_ControlRig_ECRSimPointIntegrateType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ECRSimPointIntegrateType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_ECRSimPointIntegrateType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ECRSimPointIntegrateType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_ECRSimPointIntegrateType()
	{
		if (!Z_Registration_Info_UEnum_ECRSimPointIntegrateType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECRSimPointIntegrateType.InnerSingleton, Z_Construct_UEnum_ControlRig_ECRSimPointIntegrateType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECRSimPointIntegrateType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CRSimPoint;
class UScriptStruct* FCRSimPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CRSimPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CRSimPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCRSimPoint, Z_Construct_UPackage__Script_ControlRig(), TEXT("CRSimPoint"));
	}
	return Z_Registration_Info_UScriptStruct_CRSimPoint.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FCRSimPoint>()
{
	return FCRSimPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCRSimPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InheritMotion_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InheritMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimPoint_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPoint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCRSimPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewProp_Mass_MetaData[] = {
		{ "Comment", "/**\n\x09 * The mass of the point\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPoint.h" },
		{ "ToolTip", "The mass of the point" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCRSimPoint, Mass), METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewProp_Size_MetaData[] = {
		{ "Comment", "/**\n\x09 * Size of the point - only used for collision\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPoint.h" },
		{ "ToolTip", "Size of the point - only used for collision" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCRSimPoint, Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewProp_LinearDamping_MetaData[] = {
		{ "Comment", "/**\n\x09 * The linear damping of the point\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPoint.h" },
		{ "ToolTip", "The linear damping of the point" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewProp_LinearDamping = { "LinearDamping", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCRSimPoint, LinearDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewProp_LinearDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewProp_LinearDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewProp_InheritMotion_MetaData[] = {
		{ "Comment", "/**\n\x09 * Defines how much the point will inherit motion from its input.\n\x09 * This does not have an effect on passive (mass == 0.0) points.\n\x09 * Values can be higher than 1 due to timestep - but they are clamped internally.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPoint.h" },
		{ "ToolTip", "Defines how much the point will inherit motion from its input.\nThis does not have an effect on passive (mass == 0.0) points.\nValues can be higher than 1 due to timestep - but they are clamped internally." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewProp_InheritMotion = { "InheritMotion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCRSimPoint, InheritMotion), METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewProp_InheritMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewProp_InheritMotion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewProp_Position_MetaData[] = {
		{ "Comment", "/**\n\x09 * The position of the point\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPoint.h" },
		{ "ToolTip", "The position of the point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCRSimPoint, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewProp_LinearVelocity_MetaData[] = {
		{ "Comment", "/**\n\x09 * The velocity of the point per second\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPoint.h" },
		{ "ToolTip", "The velocity of the point per second" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCRSimPoint, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewProp_LinearVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewProp_LinearVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCRSimPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewProp_Mass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewProp_LinearDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewProp_InheritMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewProp_LinearVelocity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCRSimPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"CRSimPoint",
		sizeof(FCRSimPoint),
		alignof(FCRSimPoint),
		Z_Construct_UScriptStruct_FCRSimPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCRSimPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_CRSimPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CRSimPoint.InnerSingleton, Z_Construct_UScriptStruct_FCRSimPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CRSimPoint.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPoint_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPoint_h_Statics::EnumInfo[] = {
		{ ECRSimPointIntegrateType_StaticEnum, TEXT("ECRSimPointIntegrateType"), &Z_Registration_Info_UEnum_ECRSimPointIntegrateType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2666222048U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPoint_h_Statics::ScriptStructInfo[] = {
		{ FCRSimPoint::StaticStruct, Z_Construct_UScriptStruct_FCRSimPoint_Statics::NewStructOps, TEXT("CRSimPoint"), &Z_Registration_Info_UScriptStruct_CRSimPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCRSimPoint), 3211597404U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPoint_h_2025453072(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPoint_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPoint_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPoint_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPoint_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
