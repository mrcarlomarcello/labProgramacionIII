// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Math/ControlRigMathLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigMathLibrary() {}
// Cross Module References
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigAnimEasingType();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRFourPointBezier();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControlRigAnimEasingType;
	static UEnum* EControlRigAnimEasingType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EControlRigAnimEasingType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EControlRigAnimEasingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigAnimEasingType, Z_Construct_UPackage__Script_ControlRig(), TEXT("EControlRigAnimEasingType"));
		}
		return Z_Registration_Info_UEnum_EControlRigAnimEasingType.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigAnimEasingType>()
	{
		return EControlRigAnimEasingType_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_EControlRigAnimEasingType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_EControlRigAnimEasingType_Statics::Enumerators[] = {
		{ "EControlRigAnimEasingType::Linear", (int64)EControlRigAnimEasingType::Linear },
		{ "EControlRigAnimEasingType::QuadraticEaseIn", (int64)EControlRigAnimEasingType::QuadraticEaseIn },
		{ "EControlRigAnimEasingType::QuadraticEaseOut", (int64)EControlRigAnimEasingType::QuadraticEaseOut },
		{ "EControlRigAnimEasingType::QuadraticEaseInOut", (int64)EControlRigAnimEasingType::QuadraticEaseInOut },
		{ "EControlRigAnimEasingType::CubicEaseIn", (int64)EControlRigAnimEasingType::CubicEaseIn },
		{ "EControlRigAnimEasingType::CubicEaseOut", (int64)EControlRigAnimEasingType::CubicEaseOut },
		{ "EControlRigAnimEasingType::CubicEaseInOut", (int64)EControlRigAnimEasingType::CubicEaseInOut },
		{ "EControlRigAnimEasingType::QuarticEaseIn", (int64)EControlRigAnimEasingType::QuarticEaseIn },
		{ "EControlRigAnimEasingType::QuarticEaseOut", (int64)EControlRigAnimEasingType::QuarticEaseOut },
		{ "EControlRigAnimEasingType::QuarticEaseInOut", (int64)EControlRigAnimEasingType::QuarticEaseInOut },
		{ "EControlRigAnimEasingType::QuinticEaseIn", (int64)EControlRigAnimEasingType::QuinticEaseIn },
		{ "EControlRigAnimEasingType::QuinticEaseOut", (int64)EControlRigAnimEasingType::QuinticEaseOut },
		{ "EControlRigAnimEasingType::QuinticEaseInOut", (int64)EControlRigAnimEasingType::QuinticEaseInOut },
		{ "EControlRigAnimEasingType::SineEaseIn", (int64)EControlRigAnimEasingType::SineEaseIn },
		{ "EControlRigAnimEasingType::SineEaseOut", (int64)EControlRigAnimEasingType::SineEaseOut },
		{ "EControlRigAnimEasingType::SineEaseInOut", (int64)EControlRigAnimEasingType::SineEaseInOut },
		{ "EControlRigAnimEasingType::CircularEaseIn", (int64)EControlRigAnimEasingType::CircularEaseIn },
		{ "EControlRigAnimEasingType::CircularEaseOut", (int64)EControlRigAnimEasingType::CircularEaseOut },
		{ "EControlRigAnimEasingType::CircularEaseInOut", (int64)EControlRigAnimEasingType::CircularEaseInOut },
		{ "EControlRigAnimEasingType::ExponentialEaseIn", (int64)EControlRigAnimEasingType::ExponentialEaseIn },
		{ "EControlRigAnimEasingType::ExponentialEaseOut", (int64)EControlRigAnimEasingType::ExponentialEaseOut },
		{ "EControlRigAnimEasingType::ExponentialEaseInOut", (int64)EControlRigAnimEasingType::ExponentialEaseInOut },
		{ "EControlRigAnimEasingType::ElasticEaseIn", (int64)EControlRigAnimEasingType::ElasticEaseIn },
		{ "EControlRigAnimEasingType::ElasticEaseOut", (int64)EControlRigAnimEasingType::ElasticEaseOut },
		{ "EControlRigAnimEasingType::ElasticEaseInOut", (int64)EControlRigAnimEasingType::ElasticEaseInOut },
		{ "EControlRigAnimEasingType::BackEaseIn", (int64)EControlRigAnimEasingType::BackEaseIn },
		{ "EControlRigAnimEasingType::BackEaseOut", (int64)EControlRigAnimEasingType::BackEaseOut },
		{ "EControlRigAnimEasingType::BackEaseInOut", (int64)EControlRigAnimEasingType::BackEaseInOut },
		{ "EControlRigAnimEasingType::BounceEaseIn", (int64)EControlRigAnimEasingType::BounceEaseIn },
		{ "EControlRigAnimEasingType::BounceEaseOut", (int64)EControlRigAnimEasingType::BounceEaseOut },
		{ "EControlRigAnimEasingType::BounceEaseInOut", (int64)EControlRigAnimEasingType::BounceEaseInOut },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_EControlRigAnimEasingType_Statics::Enum_MetaDataParams[] = {
		{ "BackEaseIn.Name", "EControlRigAnimEasingType::BackEaseIn" },
		{ "BackEaseInOut.Name", "EControlRigAnimEasingType::BackEaseInOut" },
		{ "BackEaseOut.Name", "EControlRigAnimEasingType::BackEaseOut" },
		{ "BounceEaseIn.Name", "EControlRigAnimEasingType::BounceEaseIn" },
		{ "BounceEaseInOut.Name", "EControlRigAnimEasingType::BounceEaseInOut" },
		{ "BounceEaseOut.Name", "EControlRigAnimEasingType::BounceEaseOut" },
		{ "CircularEaseIn.Name", "EControlRigAnimEasingType::CircularEaseIn" },
		{ "CircularEaseInOut.Name", "EControlRigAnimEasingType::CircularEaseInOut" },
		{ "CircularEaseOut.Name", "EControlRigAnimEasingType::CircularEaseOut" },
		{ "CubicEaseIn.Name", "EControlRigAnimEasingType::CubicEaseIn" },
		{ "CubicEaseInOut.Name", "EControlRigAnimEasingType::CubicEaseInOut" },
		{ "CubicEaseOut.Name", "EControlRigAnimEasingType::CubicEaseOut" },
		{ "ElasticEaseIn.Name", "EControlRigAnimEasingType::ElasticEaseIn" },
		{ "ElasticEaseInOut.Name", "EControlRigAnimEasingType::ElasticEaseInOut" },
		{ "ElasticEaseOut.Name", "EControlRigAnimEasingType::ElasticEaseOut" },
		{ "ExponentialEaseIn.Name", "EControlRigAnimEasingType::ExponentialEaseIn" },
		{ "ExponentialEaseInOut.Name", "EControlRigAnimEasingType::ExponentialEaseInOut" },
		{ "ExponentialEaseOut.Name", "EControlRigAnimEasingType::ExponentialEaseOut" },
		{ "Linear.Name", "EControlRigAnimEasingType::Linear" },
		{ "ModuleRelativePath", "Public/Math/ControlRigMathLibrary.h" },
		{ "QuadraticEaseIn.Name", "EControlRigAnimEasingType::QuadraticEaseIn" },
		{ "QuadraticEaseInOut.Name", "EControlRigAnimEasingType::QuadraticEaseInOut" },
		{ "QuadraticEaseOut.Name", "EControlRigAnimEasingType::QuadraticEaseOut" },
		{ "QuarticEaseIn.Name", "EControlRigAnimEasingType::QuarticEaseIn" },
		{ "QuarticEaseInOut.Name", "EControlRigAnimEasingType::QuarticEaseInOut" },
		{ "QuarticEaseOut.Name", "EControlRigAnimEasingType::QuarticEaseOut" },
		{ "QuinticEaseIn.Name", "EControlRigAnimEasingType::QuinticEaseIn" },
		{ "QuinticEaseInOut.Name", "EControlRigAnimEasingType::QuinticEaseInOut" },
		{ "QuinticEaseOut.Name", "EControlRigAnimEasingType::QuinticEaseOut" },
		{ "SineEaseIn.Name", "EControlRigAnimEasingType::SineEaseIn" },
		{ "SineEaseInOut.Name", "EControlRigAnimEasingType::SineEaseInOut" },
		{ "SineEaseOut.Name", "EControlRigAnimEasingType::SineEaseOut" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_EControlRigAnimEasingType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"EControlRigAnimEasingType",
		"EControlRigAnimEasingType",
		Z_Construct_UEnum_ControlRig_EControlRigAnimEasingType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigAnimEasingType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_EControlRigAnimEasingType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigAnimEasingType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_EControlRigAnimEasingType()
	{
		if (!Z_Registration_Info_UEnum_EControlRigAnimEasingType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControlRigAnimEasingType.InnerSingleton, Z_Construct_UEnum_ControlRig_EControlRigAnimEasingType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EControlRigAnimEasingType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CRFourPointBezier;
class UScriptStruct* FCRFourPointBezier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CRFourPointBezier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CRFourPointBezier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCRFourPointBezier, Z_Construct_UPackage__Script_ControlRig(), TEXT("CRFourPointBezier"));
	}
	return Z_Registration_Info_UScriptStruct_CRFourPointBezier.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FCRFourPointBezier>()
{
	return FCRFourPointBezier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCRFourPointBezier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_C;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_D_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_D;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRFourPointBezier_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Math/ControlRigMathLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCRFourPointBezier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCRFourPointBezier>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRFourPointBezier_Statics::NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Public/Math/ControlRigMathLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCRFourPointBezier_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCRFourPointBezier, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCRFourPointBezier_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRFourPointBezier_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRFourPointBezier_Statics::NewProp_B_MetaData[] = {
		{ "ModuleRelativePath", "Public/Math/ControlRigMathLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCRFourPointBezier_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCRFourPointBezier, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCRFourPointBezier_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRFourPointBezier_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRFourPointBezier_Statics::NewProp_C_MetaData[] = {
		{ "ModuleRelativePath", "Public/Math/ControlRigMathLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCRFourPointBezier_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCRFourPointBezier, C), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCRFourPointBezier_Statics::NewProp_C_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRFourPointBezier_Statics::NewProp_C_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRFourPointBezier_Statics::NewProp_D_MetaData[] = {
		{ "ModuleRelativePath", "Public/Math/ControlRigMathLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCRFourPointBezier_Statics::NewProp_D = { "D", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCRFourPointBezier, D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCRFourPointBezier_Statics::NewProp_D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRFourPointBezier_Statics::NewProp_D_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCRFourPointBezier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRFourPointBezier_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRFourPointBezier_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRFourPointBezier_Statics::NewProp_C,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRFourPointBezier_Statics::NewProp_D,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCRFourPointBezier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"CRFourPointBezier",
		sizeof(FCRFourPointBezier),
		alignof(FCRFourPointBezier),
		Z_Construct_UScriptStruct_FCRFourPointBezier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRFourPointBezier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCRFourPointBezier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRFourPointBezier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCRFourPointBezier()
	{
		if (!Z_Registration_Info_UScriptStruct_CRFourPointBezier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CRFourPointBezier.InnerSingleton, Z_Construct_UScriptStruct_FCRFourPointBezier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CRFourPointBezier.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_ControlRigMathLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_ControlRigMathLibrary_h_Statics::EnumInfo[] = {
		{ EControlRigAnimEasingType_StaticEnum, TEXT("EControlRigAnimEasingType"), &Z_Registration_Info_UEnum_EControlRigAnimEasingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3463141811U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_ControlRigMathLibrary_h_Statics::ScriptStructInfo[] = {
		{ FCRFourPointBezier::StaticStruct, Z_Construct_UScriptStruct_FCRFourPointBezier_Statics::NewStructOps, TEXT("CRFourPointBezier"), &Z_Registration_Info_UScriptStruct_CRFourPointBezier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCRFourPointBezier), 1161655069U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_ControlRigMathLibrary_h_3323087358(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_ControlRigMathLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_ControlRigMathLibrary_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_ControlRigMathLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_ControlRigMathLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
