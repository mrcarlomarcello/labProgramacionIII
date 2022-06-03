// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/ForceFeedbackEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForceFeedbackEffect() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackChannelDetails();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackParameters();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActiveForceFeedbackEffect();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ForceFeedbackChannelDetails;
class UScriptStruct* FForceFeedbackChannelDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ForceFeedbackChannelDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ForceFeedbackChannelDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails, Z_Construct_UPackage__Script_Engine(), TEXT("ForceFeedbackChannelDetails"));
	}
	return Z_Registration_Info_UScriptStruct_ForceFeedbackChannelDetails.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FForceFeedbackChannelDetails>()
{
	return FForceFeedbackChannelDetails::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectsLeftLarge_MetaData[];
#endif
		static void NewProp_bAffectsLeftLarge_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectsLeftLarge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectsLeftSmall_MetaData[];
#endif
		static void NewProp_bAffectsLeftSmall_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectsLeftSmall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectsRightLarge_MetaData[];
#endif
		static void NewProp_bAffectsRightLarge_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectsRightLarge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectsRightSmall_MetaData[];
#endif
		static void NewProp_bAffectsRightSmall_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectsRightSmall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Curve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FForceFeedbackChannelDetails>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftLarge_MetaData[] = {
		{ "Category", "ChannelDetails" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftLarge_SetBit(void* Obj)
	{
		((FForceFeedbackChannelDetails*)Obj)->bAffectsLeftLarge = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftLarge = { "bAffectsLeftLarge", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FForceFeedbackChannelDetails), &Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftLarge_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftLarge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftLarge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftSmall_MetaData[] = {
		{ "Category", "ChannelDetails" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftSmall_SetBit(void* Obj)
	{
		((FForceFeedbackChannelDetails*)Obj)->bAffectsLeftSmall = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftSmall = { "bAffectsLeftSmall", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FForceFeedbackChannelDetails), &Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftSmall_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftSmall_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftSmall_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightLarge_MetaData[] = {
		{ "Category", "ChannelDetails" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightLarge_SetBit(void* Obj)
	{
		((FForceFeedbackChannelDetails*)Obj)->bAffectsRightLarge = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightLarge = { "bAffectsRightLarge", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FForceFeedbackChannelDetails), &Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightLarge_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightLarge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightLarge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightSmall_MetaData[] = {
		{ "Category", "ChannelDetails" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightSmall_SetBit(void* Obj)
	{
		((FForceFeedbackChannelDetails*)Obj)->bAffectsRightSmall = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightSmall = { "bAffectsRightSmall", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FForceFeedbackChannelDetails), &Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightSmall_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightSmall_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightSmall_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "ChannelDetails" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FForceFeedbackChannelDetails, Curve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_Curve_MetaData)) }; // 1196190759
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftLarge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsLeftSmall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightLarge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_bAffectsRightSmall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewProp_Curve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ForceFeedbackChannelDetails",
		sizeof(FForceFeedbackChannelDetails),
		alignof(FForceFeedbackChannelDetails),
		Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackChannelDetails()
	{
		if (!Z_Registration_Info_UScriptStruct_ForceFeedbackChannelDetails.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ForceFeedbackChannelDetails.InnerSingleton, Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ForceFeedbackChannelDetails.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ForceFeedbackParameters;
class UScriptStruct* FForceFeedbackParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ForceFeedbackParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ForceFeedbackParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FForceFeedbackParameters, Z_Construct_UPackage__Script_Engine(), TEXT("ForceFeedbackParameters"));
	}
	return Z_Registration_Info_UScriptStruct_ForceFeedbackParameters.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FForceFeedbackParameters>()
{
	return FForceFeedbackParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTimeDilation_MetaData[];
#endif
		static void NewProp_bIgnoreTimeDilation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTimeDilation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlayWhilePaused_MetaData[];
#endif
		static void NewProp_bPlayWhilePaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayWhilePaused;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** This structure is used to pass arguments to ClientPlayForceFeedback() client RPC function */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
		{ "ToolTip", "This structure is used to pass arguments to ClientPlayForceFeedback() client RPC function" },
	};
#endif
	void* Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FForceFeedbackParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_Tag_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FForceFeedbackParameters, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bLooping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((FForceFeedbackParameters*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FForceFeedbackParameters), &Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bIgnoreTimeDilation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bIgnoreTimeDilation_SetBit(void* Obj)
	{
		((FForceFeedbackParameters*)Obj)->bIgnoreTimeDilation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bIgnoreTimeDilation = { "bIgnoreTimeDilation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FForceFeedbackParameters), &Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bIgnoreTimeDilation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bIgnoreTimeDilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bIgnoreTimeDilation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bPlayWhilePaused_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bPlayWhilePaused_SetBit(void* Obj)
	{
		((FForceFeedbackParameters*)Obj)->bPlayWhilePaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bPlayWhilePaused = { "bPlayWhilePaused", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FForceFeedbackParameters), &Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bPlayWhilePaused_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bPlayWhilePaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bPlayWhilePaused_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bIgnoreTimeDilation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewProp_bPlayWhilePaused,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ForceFeedbackParameters",
		sizeof(FForceFeedbackParameters),
		alignof(FForceFeedbackParameters),
		Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_ForceFeedbackParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ForceFeedbackParameters.InnerSingleton, Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ForceFeedbackParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActiveForceFeedbackEffect;
class UScriptStruct* FActiveForceFeedbackEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveForceFeedbackEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActiveForceFeedbackEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveForceFeedbackEffect, Z_Construct_UPackage__Script_Engine(), TEXT("ActiveForceFeedbackEffect"));
	}
	return Z_Registration_Info_UScriptStruct_ActiveForceFeedbackEffect.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActiveForceFeedbackEffect>()
{
	return FActiveForceFeedbackEffect::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceFeedbackEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ForceFeedbackEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveForceFeedbackEffect>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::NewProp_ForceFeedbackEffect_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::NewProp_ForceFeedbackEffect = { "ForceFeedbackEffect", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActiveForceFeedbackEffect, ForceFeedbackEffect), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::NewProp_ForceFeedbackEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::NewProp_ForceFeedbackEffect_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::NewProp_ForceFeedbackEffect,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ActiveForceFeedbackEffect",
		sizeof(FActiveForceFeedbackEffect),
		alignof(FActiveForceFeedbackEffect),
		Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActiveForceFeedbackEffect()
	{
		if (!Z_Registration_Info_UScriptStruct_ActiveForceFeedbackEffect.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActiveForceFeedbackEffect.InnerSingleton, Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActiveForceFeedbackEffect.InnerSingleton;
	}
	void UForceFeedbackEffect::StaticRegisterNativesUForceFeedbackEffect()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UForceFeedbackEffect);
	UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister()
	{
		return UForceFeedbackEffect::StaticClass();
	}
	struct Z_Construct_UClass_UForceFeedbackEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelDetails_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelDetails_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChannelDetails;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UForceFeedbackEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackEffect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A predefined force-feedback effect to be played on a controller\n */" },
		{ "IncludePath", "GameFramework/ForceFeedbackEffect.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
		{ "ToolTip", "A predefined force-feedback effect to be played on a controller" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_ChannelDetails_Inner = { "ChannelDetails", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FForceFeedbackChannelDetails, METADATA_PARAMS(nullptr, 0) }; // 2828802327
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_ChannelDetails_MetaData[] = {
		{ "Category", "ForceFeedbackEffect" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_ChannelDetails = { "ChannelDetails", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UForceFeedbackEffect, ChannelDetails), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_ChannelDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_ChannelDetails_MetaData)) }; // 2828802327
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "Info" },
		{ "Comment", "/** Duration of force feedback pattern in seconds. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/ForceFeedbackEffect.h" },
		{ "ToolTip", "Duration of force feedback pattern in seconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010010000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UForceFeedbackEffect, Duration), METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_Duration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UForceFeedbackEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_ChannelDetails_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_ChannelDetails,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackEffect_Statics::NewProp_Duration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UForceFeedbackEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UForceFeedbackEffect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UForceFeedbackEffect_Statics::ClassParams = {
		&UForceFeedbackEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UForceFeedbackEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackEffect_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UForceFeedbackEffect()
	{
		if (!Z_Registration_Info_UClass_UForceFeedbackEffect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UForceFeedbackEffect.OuterSingleton, Z_Construct_UClass_UForceFeedbackEffect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UForceFeedbackEffect.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UForceFeedbackEffect>()
	{
		return UForceFeedbackEffect::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UForceFeedbackEffect);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_Statics::ScriptStructInfo[] = {
		{ FForceFeedbackChannelDetails::StaticStruct, Z_Construct_UScriptStruct_FForceFeedbackChannelDetails_Statics::NewStructOps, TEXT("ForceFeedbackChannelDetails"), &Z_Registration_Info_UScriptStruct_ForceFeedbackChannelDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FForceFeedbackChannelDetails), 2828802327U) },
		{ FForceFeedbackParameters::StaticStruct, Z_Construct_UScriptStruct_FForceFeedbackParameters_Statics::NewStructOps, TEXT("ForceFeedbackParameters"), &Z_Registration_Info_UScriptStruct_ForceFeedbackParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FForceFeedbackParameters), 687215170U) },
		{ FActiveForceFeedbackEffect::StaticStruct, Z_Construct_UScriptStruct_FActiveForceFeedbackEffect_Statics::NewStructOps, TEXT("ActiveForceFeedbackEffect"), &Z_Registration_Info_UScriptStruct_ActiveForceFeedbackEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveForceFeedbackEffect), 653854697U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UForceFeedbackEffect, UForceFeedbackEffect::StaticClass, TEXT("UForceFeedbackEffect"), &Z_Registration_Info_UClass_UForceFeedbackEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UForceFeedbackEffect), 1203058238U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_3055196807(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_ForceFeedbackEffect_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
