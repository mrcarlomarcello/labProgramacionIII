// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/RigUnitContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnitContext() {}
// Cross Module References
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigState();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControlRigState;
	static UEnum* EControlRigState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EControlRigState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EControlRigState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigState, Z_Construct_UPackage__Script_ControlRig(), TEXT("EControlRigState"));
		}
		return Z_Registration_Info_UEnum_EControlRigState.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigState>()
	{
		return EControlRigState_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_EControlRigState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_EControlRigState_Statics::Enumerators[] = {
		{ "EControlRigState::Init", (int64)EControlRigState::Init },
		{ "EControlRigState::Update", (int64)EControlRigState::Update },
		{ "EControlRigState::Invalid", (int64)EControlRigState::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_EControlRigState_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Current state of rig\n*\x09What  state Control Rig currently is\n*/" },
		{ "Init.Name", "EControlRigState::Init" },
		{ "Invalid.Name", "EControlRigState::Invalid" },
		{ "ModuleRelativePath", "Public/Units/RigUnitContext.h" },
		{ "ToolTip", "Current state of rig\n    What  state Control Rig currently is" },
		{ "Update.Name", "EControlRigState::Update" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_EControlRigState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"EControlRigState",
		"EControlRigState",
		Z_Construct_UEnum_ControlRig_EControlRigState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_EControlRigState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_EControlRigState()
	{
		if (!Z_Registration_Info_UEnum_EControlRigState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControlRigState.InnerSingleton, Z_Construct_UEnum_ControlRig_EControlRigState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EControlRigState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h_Statics::EnumInfo[] = {
		{ EControlRigState_StaticEnum, TEXT("EControlRigState"), &Z_Registration_Info_UEnum_EControlRigState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2776213756U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h_3179501532(TEXT("/Script/ControlRig"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
