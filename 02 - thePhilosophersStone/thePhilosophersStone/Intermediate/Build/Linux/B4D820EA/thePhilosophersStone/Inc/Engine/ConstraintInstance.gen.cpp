// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/PhysicsEngine/ConstraintInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstraintInstance() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintProfileProperties();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLinearConstraint();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConeConstraint();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTwistConstraint();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLinearDriveConstraint();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAngularDriveConstraint();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EConstraintPlasticityType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintInstanceBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintInstance();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAngularDriveMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintInstanceAccessor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintProfileProperties;
class UScriptStruct* FConstraintProfileProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintProfileProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintProfileProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintProfileProperties, Z_Construct_UPackage__Script_Engine(), TEXT("ConstraintProfileProperties"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintProfileProperties.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FConstraintProfileProperties>()
{
	return FConstraintProfileProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionLinearTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectionLinearTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionAngularTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectionAngularTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionLinearAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectionLinearAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionAngularAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectionAngularAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShockPropagationAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShockPropagationAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearBreakThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearBreakThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearPlasticityThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearPlasticityThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularBreakThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularBreakThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularPlasticityThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularPlasticityThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContactTransferScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ContactTransferScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearLimit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConeLimit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConeLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwistLimit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TwistLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearDrive_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearDrive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularDrive_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularDrive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableCollision_MetaData[];
#endif
		static void NewProp_bDisableCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bParentDominates_MetaData[];
#endif
		static void NewProp_bParentDominates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bParentDominates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLinearProjection_MetaData[];
#endif
		static void NewProp_bEnableLinearProjection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLinearProjection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAngularProjection_MetaData[];
#endif
		static void NewProp_bEnableAngularProjection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAngularProjection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableShockPropagation_MetaData[];
#endif
		static void NewProp_bEnableShockPropagation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableShockPropagation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableProjection_MetaData[];
#endif
		static void NewProp_bEnableProjection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableProjection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSoftProjection_MetaData[];
#endif
		static void NewProp_bEnableSoftProjection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSoftProjection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAngularBreakable_MetaData[];
#endif
		static void NewProp_bAngularBreakable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAngularBreakable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAngularPlasticity_MetaData[];
#endif
		static void NewProp_bAngularPlasticity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAngularPlasticity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLinearBreakable_MetaData[];
#endif
		static void NewProp_bLinearBreakable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearBreakable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLinearPlasticity_MetaData[];
#endif
		static void NewProp_bLinearPlasticity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearPlasticity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearPlasticityType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LinearPlasticityType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Container for properties of a physics constraint that can be easily swapped at runtime. This is useful for switching different setups when going from ragdoll to standup for example */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Container for properties of a physics constraint that can be easily swapped at runtime. This is useful for switching different setups when going from ragdoll to standup for example" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintProfileProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionLinearTolerance_MetaData[] = {
		{ "Comment", "/** [PhysX only] Linear tolerance value in world units. If the distance error exceeds this tolerence limit, the body will be projected. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "[PhysX only] Linear tolerance value in world units. If the distance error exceeds this tolerence limit, the body will be projected." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionLinearTolerance = { "ProjectionLinearTolerance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintProfileProperties, ProjectionLinearTolerance), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionLinearTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionLinearTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionAngularTolerance_MetaData[] = {
		{ "Comment", "/** [PhysX only] Angular tolerance value in world units. If the distance error exceeds this tolerence limit, the body will be projected. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "[PhysX only] Angular tolerance value in world units. If the distance error exceeds this tolerence limit, the body will be projected." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionAngularTolerance = { "ProjectionAngularTolerance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintProfileProperties, ProjectionAngularTolerance), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionAngularTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionAngularTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionLinearAlpha_MetaData[] = {
		{ "Category", "Projection" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**  How much linear projection to apply [0-1] */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "How much linear projection to apply [0-1]" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionLinearAlpha = { "ProjectionLinearAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintProfileProperties, ProjectionLinearAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionLinearAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionLinearAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionAngularAlpha_MetaData[] = {
		{ "Category", "Projection" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How much angular projection to apply [0-1] */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "How much angular projection to apply [0-1]" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionAngularAlpha = { "ProjectionAngularAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintProfileProperties, ProjectionAngularAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionAngularAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionAngularAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ShockPropagationAlpha_MetaData[] = {
		{ "Category", "Projection" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** \n\x09 * How much shock propagation to apply [0-1]. Shock propagation increases the mass of the parent body for the last iteration of the\n\x09 * position and velocity solve phases. This can help stiffen up joint chains, but is also prone to introducing energy down the chain\n\x09 * especially at high alpha.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "How much shock propagation to apply [0-1]. Shock propagation increases the mass of the parent body for the last iteration of the\nposition and velocity solve phases. This can help stiffen up joint chains, but is also prone to introducing energy down the chain\nespecially at high alpha." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ShockPropagationAlpha = { "ShockPropagationAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintProfileProperties, ShockPropagationAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ShockPropagationAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ShockPropagationAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearBreakThreshold_MetaData[] = {
		{ "Category", "Linear" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Force needed to break the distance constraint. */" },
		{ "editcondition", "bLinearBreakable" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Force needed to break the distance constraint." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearBreakThreshold = { "LinearBreakThreshold", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintProfileProperties, LinearBreakThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearBreakThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearBreakThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearPlasticityThreshold_MetaData[] = {
		{ "Category", "Linear" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** [Chaos Only] Percent threshold from center of mass distance needed to reset the linear drive position target. This value can be greater than 1. */" },
		{ "editcondition", "bLinearPlasticity" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "[Chaos Only] Percent threshold from center of mass distance needed to reset the linear drive position target. This value can be greater than 1." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearPlasticityThreshold = { "LinearPlasticityThreshold", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintProfileProperties, LinearPlasticityThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearPlasticityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearPlasticityThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_AngularBreakThreshold_MetaData[] = {
		{ "Category", "Angular" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Torque needed to break the joint. */" },
		{ "editcondition", "bAngularBreakable" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Torque needed to break the joint." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_AngularBreakThreshold = { "AngularBreakThreshold", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintProfileProperties, AngularBreakThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_AngularBreakThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_AngularBreakThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_AngularPlasticityThreshold_MetaData[] = {
		{ "Category", "Angular" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** [Chaos Only] Degree threshold from target angle needed to reset the target angle.*/" },
		{ "editcondition", "bAngularPlasticity" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "[Chaos Only] Degree threshold from target angle needed to reset the target angle." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_AngularPlasticityThreshold = { "AngularPlasticityThreshold", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintProfileProperties, AngularPlasticityThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_AngularPlasticityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_AngularPlasticityThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ContactTransferScale_MetaData[] = {
		{ "Category", "Linear" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** [Chaos Only] Colliison transfer on parent from the joints child. Range is 0.0-MAX*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "[Chaos Only] Colliison transfer on parent from the joints child. Range is 0.0-MAX" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ContactTransferScale = { "ContactTransferScale", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintProfileProperties, ContactTransferScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ContactTransferScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ContactTransferScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearLimit_MetaData[] = {
		{ "Category", "Linear" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearLimit = { "LinearLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintProfileProperties, LinearLimit), Z_Construct_UScriptStruct_FLinearConstraint, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearLimit_MetaData)) }; // 1657253145
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ConeLimit_MetaData[] = {
		{ "Category", "Angular" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ConeLimit = { "ConeLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintProfileProperties, ConeLimit), Z_Construct_UScriptStruct_FConeConstraint, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ConeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ConeLimit_MetaData)) }; // 4096521794
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_TwistLimit_MetaData[] = {
		{ "Category", "Angular" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_TwistLimit = { "TwistLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintProfileProperties, TwistLimit), Z_Construct_UScriptStruct_FTwistConstraint, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_TwistLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_TwistLimit_MetaData)) }; // 798691302
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearDrive_MetaData[] = {
		{ "Category", "Linear" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearDrive = { "LinearDrive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintProfileProperties, LinearDrive), Z_Construct_UScriptStruct_FLinearDriveConstraint, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearDrive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearDrive_MetaData)) }; // 2512210963
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_AngularDrive_MetaData[] = {
		{ "Category", "Angular" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_AngularDrive = { "AngularDrive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintProfileProperties, AngularDrive), Z_Construct_UScriptStruct_FAngularDriveConstraint, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_AngularDrive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_AngularDrive_MetaData)) }; // 1548971370
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bDisableCollision_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "// Disable collision between bodies joined by this constraint.\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Disable collision between bodies joined by this constraint." },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bDisableCollision_SetBit(void* Obj)
	{
		((FConstraintProfileProperties*)Obj)->bDisableCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bDisableCollision = { "bDisableCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintProfileProperties), &Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bDisableCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bDisableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bDisableCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bParentDominates_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "// When set, the parent body in a constraint will not be affected by the motion of the child\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "When set, the parent body in a constraint will not be affected by the motion of the child" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bParentDominates_SetBit(void* Obj)
	{
		((FConstraintProfileProperties*)Obj)->bParentDominates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bParentDominates = { "bParentDominates", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintProfileProperties), &Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bParentDominates_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bParentDominates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bParentDominates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableLinearProjection_MetaData[] = {
		{ "Category", "Projection" },
		{ "Comment", "/**\n\x09* NOTE: RigidBody AnimNode only. Projection is not applied to ragdoll physics in the main scene. For Ragdolls, ShockPropagation has a similar effect\n\x09* and is more compatible with the world solver.\n\x09* \n\x09* Projection is a post-solve position and angular fixup where the parent body in the constraint is treated as having infinite mass and the child body is\n\x09* translated and rotated to resolve any remaining errors using a semi-physical correction. This can be used to make constraint chains significantly stiffer \n\x09* at lower iteration counts. Increasing iterations would have the same effect, but be much more expensive. Projection only works well if the chain is not \n\x09* interacting with other objects (e.g., through collisions) because the projection of the bodies in the chain will cause other constraints to be violated. \n\x09* Likewise, if a body is influenced by multiple constraints, then enabling projection on more than one constraint may lead to unexpected results - the \n\x09* \"last\" constraint would win but the order in which constraints are solved cannot be directly controlled.\n\x09* \n\x09* Projection is fairly expensive compared to a single position iteration, so if you can get the behaviour you need by adding a couple iterations, that\n\x09* is probably a better approach.\n\x09*\n\x09*\n\x09* Note: projection is only applied to hard-limit constraints, anf not applied to constraints with soft limits.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "NOTE: RigidBody AnimNode only. Projection is not applied to ragdoll physics in the main scene. For Ragdolls, ShockPropagation has a similar effect\nand is more compatible with the world solver.\n\nProjection is a post-solve position and angular fixup where the parent body in the constraint is treated as having infinite mass and the child body is\ntranslated and rotated to resolve any remaining errors using a semi-physical correction. This can be used to make constraint chains significantly stiffer\nat lower iteration counts. Increasing iterations would have the same effect, but be much more expensive. Projection only works well if the chain is not\ninteracting with other objects (e.g., through collisions) because the projection of the bodies in the chain will cause other constraints to be violated.\nLikewise, if a body is influenced by multiple constraints, then enabling projection on more than one constraint may lead to unexpected results - the\n\"last\" constraint would win but the order in which constraints are solved cannot be directly controlled.\n\nProjection is fairly expensive compared to a single position iteration, so if you can get the behaviour you need by adding a couple iterations, that\nis probably a better approach.\n\n\nNote: projection is only applied to hard-limit constraints, anf not applied to constraints with soft limits." },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableLinearProjection_SetBit(void* Obj)
	{
		((FConstraintProfileProperties*)Obj)->bEnableLinearProjection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableLinearProjection = { "bEnableLinearProjection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintProfileProperties), &Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableLinearProjection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableLinearProjection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableLinearProjection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableAngularProjection_MetaData[] = {
		{ "Category", "Projection" },
		{ "Comment", "/**\n\x09 * NOTE: RigidBody AnimNode only. See coments on bEnableLinearProjection\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "NOTE: RigidBody AnimNode only. See coments on bEnableLinearProjection" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableAngularProjection_SetBit(void* Obj)
	{
		((FConstraintProfileProperties*)Obj)->bEnableAngularProjection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableAngularProjection = { "bEnableAngularProjection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintProfileProperties), &Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableAngularProjection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableAngularProjection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableAngularProjection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableShockPropagation_MetaData[] = {
		{ "Category", "Projection" },
		{ "Comment", "/**\n\x09 * Shock propagation increases the mass of the parent body for the last iteration of the position and velocity solve phases. \n\x09 * This can help stiffen up joint chains, but is also prone to introducing energy down the chain especially at high alpha.\n\x09 * \n\x09 * NOTE: This is intended to be used for world constraints, not RigidBody AnimNodes which have the Projection system.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Shock propagation increases the mass of the parent body for the last iteration of the position and velocity solve phases.\nThis can help stiffen up joint chains, but is also prone to introducing energy down the chain especially at high alpha.\n\nNOTE: This is intended to be used for world constraints, not RigidBody AnimNodes which have the Projection system." },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableShockPropagation_SetBit(void* Obj)
	{
		((FConstraintProfileProperties*)Obj)->bEnableShockPropagation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableShockPropagation = { "bEnableShockPropagation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintProfileProperties), &Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableShockPropagation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableShockPropagation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableShockPropagation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableProjection_MetaData[] = {
		{ "Comment", "// HIDDEN - TO BE DEPRECATED\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "HIDDEN - TO BE DEPRECATED" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableProjection_SetBit(void* Obj)
	{
		((FConstraintProfileProperties*)Obj)->bEnableProjection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableProjection = { "bEnableProjection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintProfileProperties), &Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableProjection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableProjection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableProjection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableSoftProjection_MetaData[] = {
		{ "Comment", "// HIDDEN - TO BE DEPRECATED\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "HIDDEN - TO BE DEPRECATED" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableSoftProjection_SetBit(void* Obj)
	{
		((FConstraintProfileProperties*)Obj)->bEnableSoftProjection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableSoftProjection = { "bEnableSoftProjection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintProfileProperties), &Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableSoftProjection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableSoftProjection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableSoftProjection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bAngularBreakable_MetaData[] = {
		{ "Category", "Angular" },
		{ "Comment", "/** Whether it is possible to break the joint with angular force. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Whether it is possible to break the joint with angular force." },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bAngularBreakable_SetBit(void* Obj)
	{
		((FConstraintProfileProperties*)Obj)->bAngularBreakable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bAngularBreakable = { "bAngularBreakable", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintProfileProperties), &Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bAngularBreakable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bAngularBreakable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bAngularBreakable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bAngularPlasticity_MetaData[] = {
		{ "Category", "Angular" },
		{ "Comment", "/** Whether it is possible to reset target rotations from the angular displacement. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Whether it is possible to reset target rotations from the angular displacement." },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bAngularPlasticity_SetBit(void* Obj)
	{
		((FConstraintProfileProperties*)Obj)->bAngularPlasticity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bAngularPlasticity = { "bAngularPlasticity", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintProfileProperties), &Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bAngularPlasticity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bAngularPlasticity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bAngularPlasticity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bLinearBreakable_MetaData[] = {
		{ "Category", "Linear" },
		{ "Comment", "/** Whether it is possible to break the joint with linear force. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Whether it is possible to break the joint with linear force." },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bLinearBreakable_SetBit(void* Obj)
	{
		((FConstraintProfileProperties*)Obj)->bLinearBreakable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bLinearBreakable = { "bLinearBreakable", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintProfileProperties), &Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bLinearBreakable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bLinearBreakable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bLinearBreakable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bLinearPlasticity_MetaData[] = {
		{ "Category", "Linear" },
		{ "Comment", "/** Whether it is possible to reset spring rest length from the linear deformation. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Whether it is possible to reset spring rest length from the linear deformation." },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bLinearPlasticity_SetBit(void* Obj)
	{
		((FConstraintProfileProperties*)Obj)->bLinearPlasticity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bLinearPlasticity = { "bLinearPlasticity", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintProfileProperties), &Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bLinearPlasticity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bLinearPlasticity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bLinearPlasticity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearPlasticityType_MetaData[] = {
		{ "Category", "Linear" },
		{ "Comment", "/** Whether linear plasticity has a operation mode [free]*/" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Whether linear plasticity has a operation mode [free]" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearPlasticityType = { "LinearPlasticityType", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintProfileProperties, LinearPlasticityType), Z_Construct_UEnum_PhysicsCore_EConstraintPlasticityType, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearPlasticityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearPlasticityType_MetaData)) }; // 3233059018
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionLinearTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionAngularTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionLinearAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ProjectionAngularAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ShockPropagationAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearBreakThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearPlasticityThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_AngularBreakThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_AngularPlasticityThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ContactTransferScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_ConeLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_TwistLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_AngularDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bDisableCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bParentDominates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableLinearProjection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableAngularProjection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableShockPropagation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableProjection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bEnableSoftProjection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bAngularBreakable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bAngularPlasticity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bLinearBreakable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_bLinearPlasticity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewProp_LinearPlasticityType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ConstraintProfileProperties",
		sizeof(FConstraintProfileProperties),
		alignof(FConstraintProfileProperties),
		Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintProfileProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_ConstraintProfileProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintProfileProperties.InnerSingleton, Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConstraintProfileProperties.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintInstanceBase;
class UScriptStruct* FConstraintInstanceBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintInstanceBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintInstanceBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintInstanceBase, Z_Construct_UPackage__Script_Engine(), TEXT("ConstraintInstanceBase"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintInstanceBase.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FConstraintInstanceBase>()
{
	return FConstraintInstanceBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConstraintInstanceBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstanceBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstraintInstanceBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintInstanceBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintInstanceBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ConstraintInstanceBase",
		sizeof(FConstraintInstanceBase),
		alignof(FConstraintInstanceBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstanceBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstanceBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintInstanceBase()
	{
		if (!Z_Registration_Info_UScriptStruct_ConstraintInstanceBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintInstanceBase.InnerSingleton, Z_Construct_UScriptStruct_FConstraintInstanceBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConstraintInstanceBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FConstraintInstance>() == std::is_polymorphic<FConstraintInstanceBase>(), "USTRUCT FConstraintInstance cannot be polymorphic unless super FConstraintInstanceBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintInstance;
class UScriptStruct* FConstraintInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintInstance, Z_Construct_UPackage__Script_Engine(), TEXT("ConstraintInstance"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintInstance.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FConstraintInstance>()
{
	return FConstraintInstance::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConstraintInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JointName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_JointName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintBone1_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConstraintBone1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintBone2_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConstraintBone2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pos1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pos1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriAxis1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PriAxis1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecAxis1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SecAxis1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pos2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pos2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriAxis2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PriAxis2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecAxis2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SecAxis2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularRotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularRotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScaleLinearLimits_MetaData[];
#endif
		static void NewProp_bScaleLinearLimits_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleLinearLimits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileInstance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProfileInstance;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableCollision_MetaData[];
#endif
		static void NewProp_bDisableCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableProjection_MetaData[];
#endif
		static void NewProp_bEnableProjection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableProjection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionLinearTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectionLinearTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionAngularTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectionAngularTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearXMotion_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LinearXMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearYMotion_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LinearYMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearZMotion_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LinearZMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearLimitSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearLimitSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLinearLimitSoft_MetaData[];
#endif
		static void NewProp_bLinearLimitSoft_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearLimitSoft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearLimitStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearLimitStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearLimitDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearLimitDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLinearBreakable_MetaData[];
#endif
		static void NewProp_bLinearBreakable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearBreakable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearBreakThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearBreakThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularSwing1Motion_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AngularSwing1Motion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularTwistMotion_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AngularTwistMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularSwing2Motion_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AngularSwing2Motion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSwingLimitSoft_MetaData[];
#endif
		static void NewProp_bSwingLimitSoft_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSwingLimitSoft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTwistLimitSoft_MetaData[];
#endif
		static void NewProp_bTwistLimitSoft_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTwistLimitSoft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Swing1LimitAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Swing1LimitAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwistLimitAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistLimitAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Swing2LimitAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Swing2LimitAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwingLimitStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SwingLimitStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwingLimitDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SwingLimitDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwistLimitStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistLimitStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwistLimitDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistLimitDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAngularBreakable_MetaData[];
#endif
		static void NewProp_bAngularBreakable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAngularBreakable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularBreakThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularBreakThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLinearXPositionDrive_MetaData[];
#endif
		static void NewProp_bLinearXPositionDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearXPositionDrive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLinearXVelocityDrive_MetaData[];
#endif
		static void NewProp_bLinearXVelocityDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearXVelocityDrive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLinearYPositionDrive_MetaData[];
#endif
		static void NewProp_bLinearYPositionDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearYPositionDrive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLinearYVelocityDrive_MetaData[];
#endif
		static void NewProp_bLinearYVelocityDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearYVelocityDrive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLinearZPositionDrive_MetaData[];
#endif
		static void NewProp_bLinearZPositionDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearZPositionDrive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLinearZVelocityDrive_MetaData[];
#endif
		static void NewProp_bLinearZVelocityDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearZVelocityDrive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLinearPositionDrive_MetaData[];
#endif
		static void NewProp_bLinearPositionDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearPositionDrive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLinearVelocityDrive_MetaData[];
#endif
		static void NewProp_bLinearVelocityDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearVelocityDrive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearPositionTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearPositionTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocityTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocityTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearDriveSpring_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearDriveSpring;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearDriveDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearDriveDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearDriveForceLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearDriveForceLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSwingPositionDrive_MetaData[];
#endif
		static void NewProp_bSwingPositionDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSwingPositionDrive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSwingVelocityDrive_MetaData[];
#endif
		static void NewProp_bSwingVelocityDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSwingVelocityDrive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTwistPositionDrive_MetaData[];
#endif
		static void NewProp_bTwistPositionDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTwistPositionDrive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTwistVelocityDrive_MetaData[];
#endif
		static void NewProp_bTwistVelocityDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTwistVelocityDrive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAngularSlerpDrive_MetaData[];
#endif
		static void NewProp_bAngularSlerpDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAngularSlerpDrive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAngularOrientationDrive_MetaData[];
#endif
		static void NewProp_bAngularOrientationDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAngularOrientationDrive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSwingDrive_MetaData[];
#endif
		static void NewProp_bEnableSwingDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSwingDrive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTwistDrive_MetaData[];
#endif
		static void NewProp_bEnableTwistDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTwistDrive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAngularVelocityDrive_MetaData[];
#endif
		static void NewProp_bAngularVelocityDrive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAngularVelocityDrive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularPositionTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularPositionTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularDriveMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AngularDriveMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularOrientationTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularOrientationTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocityTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocityTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularDriveSpring_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularDriveSpring;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularDriveDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularDriveDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularDriveForceLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularDriveForceLimit;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Container for a physics representation of an object. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Container for a physics representation of an object." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintInstance>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_JointName_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** Name of bone that this joint is associated with. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Name of bone that this joint is associated with." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_JointName = { "JointName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, JointName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_JointName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_JointName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ConstraintBone1_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** \n\x09 *\x09Name of first bone (body) that this constraint is connecting. \n\x09 *\x09This will be the 'child' bone in a PhysicsAsset.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Name of first bone (body) that this constraint is connecting.\nThis will be the 'child' bone in a PhysicsAsset." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ConstraintBone1 = { "ConstraintBone1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, ConstraintBone1), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ConstraintBone1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ConstraintBone1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ConstraintBone2_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** \n\x09 *\x09Name of second bone (body) that this constraint is connecting. \n\x09 *\x09This will be the 'parent' bone in a PhysicsAset.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Name of second bone (body) that this constraint is connecting.\nThis will be the 'parent' bone in a PhysicsAset." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ConstraintBone2 = { "ConstraintBone2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, ConstraintBone2), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ConstraintBone2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ConstraintBone2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Pos1_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** Location of constraint in Body1 reference frame (usually the \"child\" body for skeletal meshes). */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Location of constraint in Body1 reference frame (usually the \"child\" body for skeletal meshes)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Pos1 = { "Pos1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, Pos1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Pos1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Pos1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_PriAxis1_MetaData[] = {
		{ "Comment", "/** Primary (twist) axis in Body1 reference frame. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Primary (twist) axis in Body1 reference frame." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_PriAxis1 = { "PriAxis1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, PriAxis1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_PriAxis1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_PriAxis1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SecAxis1_MetaData[] = {
		{ "Comment", "/** Seconday axis in Body1 reference frame. Orthogonal to PriAxis1. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Seconday axis in Body1 reference frame. Orthogonal to PriAxis1." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SecAxis1 = { "SecAxis1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, SecAxis1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SecAxis1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SecAxis1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Pos2_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** Location of constraint in Body2 reference frame (usually the \"parent\" body for skeletal meshes). */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Location of constraint in Body2 reference frame (usually the \"parent\" body for skeletal meshes)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Pos2 = { "Pos2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, Pos2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Pos2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Pos2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_PriAxis2_MetaData[] = {
		{ "Comment", "/** Primary (twist) axis in Body2 reference frame. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Primary (twist) axis in Body2 reference frame." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_PriAxis2 = { "PriAxis2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, PriAxis2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_PriAxis2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_PriAxis2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SecAxis2_MetaData[] = {
		{ "Comment", "/** Seconday axis in Body2 reference frame. Orthogonal to PriAxis2. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Seconday axis in Body2 reference frame. Orthogonal to PriAxis2." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SecAxis2 = { "SecAxis2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, SecAxis2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SecAxis2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SecAxis2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularRotationOffset_MetaData[] = {
		{ "Category", "Angular" },
		{ "Comment", "/** Specifies the angular offset between the two frames of reference. By default limit goes from (-Angle, +Angle)\n\x09* This allows you to bias the limit for swing1 swing2 and twist. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Specifies the angular offset between the two frames of reference. By default limit goes from (-Angle, +Angle)\nThis allows you to bias the limit for swing1 swing2 and twist." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularRotationOffset = { "AngularRotationOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, AngularRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularRotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularRotationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bScaleLinearLimits_MetaData[] = {
		{ "Category", "Linear" },
		{ "Comment", "/** If true, linear limits scale using the absolute min of the 3d scale of the owning component */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "If true, linear limits scale using the absolute min of the 3d scale of the owning component" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bScaleLinearLimits_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bScaleLinearLimits = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bScaleLinearLimits = { "bScaleLinearLimits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bScaleLinearLimits_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bScaleLinearLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bScaleLinearLimits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProfileInstance_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "//Constraint Data (properties easily swapped at runtime based on different constraint profiles)\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Constraint Data (properties easily swapped at runtime based on different constraint profiles)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProfileInstance = { "ProfileInstance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, ProfileInstance), Z_Construct_UScriptStruct_FConstraintProfileProperties, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProfileInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProfileInstance_MetaData)) }; // 2798388967
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bDisableCollision_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bDisableCollision_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bDisableCollision_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bDisableCollision = { "bDisableCollision", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bDisableCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bDisableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bDisableCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableProjection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableProjection_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bEnableProjection_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableProjection = { "bEnableProjection", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableProjection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableProjection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableProjection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProjectionLinearTolerance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProjectionLinearTolerance = { "ProjectionLinearTolerance", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, ProjectionLinearTolerance_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProjectionLinearTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProjectionLinearTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProjectionAngularTolerance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProjectionAngularTolerance = { "ProjectionAngularTolerance", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, ProjectionAngularTolerance_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProjectionAngularTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProjectionAngularTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearXMotion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearXMotion = { "LinearXMotion", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, LinearXMotion_DEPRECATED), Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearXMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearXMotion_MetaData)) }; // 266339221
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearYMotion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearYMotion = { "LinearYMotion", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, LinearYMotion_DEPRECATED), Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearYMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearYMotion_MetaData)) }; // 266339221
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearZMotion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearZMotion = { "LinearZMotion", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, LinearZMotion_DEPRECATED), Z_Construct_UEnum_PhysicsCore_ELinearConstraintMotion, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearZMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearZMotion_MetaData)) }; // 266339221
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitSize = { "LinearLimitSize", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, LinearLimitSize_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearLimitSoft_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearLimitSoft_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bLinearLimitSoft_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearLimitSoft = { "bLinearLimitSoft", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearLimitSoft_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearLimitSoft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearLimitSoft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitStiffness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitStiffness = { "LinearLimitStiffness", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, LinearLimitStiffness_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitDamping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitDamping = { "LinearLimitDamping", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, LinearLimitDamping_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearBreakable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearBreakable_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bLinearBreakable_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearBreakable = { "bLinearBreakable", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearBreakable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearBreakable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearBreakable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearBreakThreshold_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearBreakThreshold = { "LinearBreakThreshold", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, LinearBreakThreshold_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearBreakThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearBreakThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularSwing1Motion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularSwing1Motion = { "AngularSwing1Motion", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, AngularSwing1Motion_DEPRECATED), Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularSwing1Motion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularSwing1Motion_MetaData)) }; // 2540577704
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularTwistMotion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularTwistMotion = { "AngularTwistMotion", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, AngularTwistMotion_DEPRECATED), Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularTwistMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularTwistMotion_MetaData)) }; // 2540577704
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularSwing2Motion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularSwing2Motion = { "AngularSwing2Motion", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, AngularSwing2Motion_DEPRECATED), Z_Construct_UEnum_PhysicsCore_EAngularConstraintMotion, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularSwing2Motion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularSwing2Motion_MetaData)) }; // 2540577704
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingLimitSoft_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingLimitSoft_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bSwingLimitSoft_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingLimitSoft = { "bSwingLimitSoft", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingLimitSoft_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingLimitSoft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingLimitSoft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistLimitSoft_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistLimitSoft_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bTwistLimitSoft_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistLimitSoft = { "bTwistLimitSoft", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistLimitSoft_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistLimitSoft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistLimitSoft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Swing1LimitAngle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Swing1LimitAngle = { "Swing1LimitAngle", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, Swing1LimitAngle_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Swing1LimitAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Swing1LimitAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitAngle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitAngle = { "TwistLimitAngle", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, TwistLimitAngle_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Swing2LimitAngle_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Swing2LimitAngle = { "Swing2LimitAngle", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, Swing2LimitAngle_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Swing2LimitAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Swing2LimitAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SwingLimitStiffness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SwingLimitStiffness = { "SwingLimitStiffness", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, SwingLimitStiffness_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SwingLimitStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SwingLimitStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SwingLimitDamping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SwingLimitDamping = { "SwingLimitDamping", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, SwingLimitDamping_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SwingLimitDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SwingLimitDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitStiffness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitStiffness = { "TwistLimitStiffness", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, TwistLimitStiffness_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitDamping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitDamping = { "TwistLimitDamping", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, TwistLimitDamping_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularBreakable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularBreakable_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bAngularBreakable_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularBreakable = { "bAngularBreakable", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularBreakable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularBreakable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularBreakable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularBreakThreshold_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularBreakThreshold = { "AngularBreakThreshold", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, AngularBreakThreshold_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularBreakThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularBreakThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXPositionDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXPositionDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bLinearXPositionDrive_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXPositionDrive = { "bLinearXPositionDrive", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXPositionDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXPositionDrive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXPositionDrive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXVelocityDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXVelocityDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bLinearXVelocityDrive_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXVelocityDrive = { "bLinearXVelocityDrive", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXVelocityDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXVelocityDrive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXVelocityDrive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYPositionDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYPositionDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bLinearYPositionDrive_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYPositionDrive = { "bLinearYPositionDrive", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYPositionDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYPositionDrive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYPositionDrive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYVelocityDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYVelocityDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bLinearYVelocityDrive_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYVelocityDrive = { "bLinearYVelocityDrive", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYVelocityDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYVelocityDrive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYVelocityDrive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZPositionDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZPositionDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bLinearZPositionDrive_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZPositionDrive = { "bLinearZPositionDrive", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZPositionDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZPositionDrive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZPositionDrive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZVelocityDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZVelocityDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bLinearZVelocityDrive_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZVelocityDrive = { "bLinearZVelocityDrive", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZVelocityDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZVelocityDrive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZVelocityDrive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearPositionDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearPositionDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bLinearPositionDrive_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearPositionDrive = { "bLinearPositionDrive", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearPositionDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearPositionDrive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearPositionDrive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearVelocityDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearVelocityDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bLinearVelocityDrive_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearVelocityDrive = { "bLinearVelocityDrive", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearVelocityDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearVelocityDrive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearVelocityDrive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearPositionTarget_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearPositionTarget = { "LinearPositionTarget", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, LinearPositionTarget_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearPositionTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearPositionTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearVelocityTarget_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearVelocityTarget = { "LinearVelocityTarget", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, LinearVelocityTarget_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearVelocityTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearVelocityTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveSpring_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveSpring = { "LinearDriveSpring", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, LinearDriveSpring_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveSpring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveSpring_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveDamping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveDamping = { "LinearDriveDamping", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, LinearDriveDamping_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveForceLimit_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveForceLimit = { "LinearDriveForceLimit", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, LinearDriveForceLimit_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveForceLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveForceLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingPositionDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingPositionDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bSwingPositionDrive_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingPositionDrive = { "bSwingPositionDrive", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingPositionDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingPositionDrive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingPositionDrive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingVelocityDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingVelocityDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bSwingVelocityDrive_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingVelocityDrive = { "bSwingVelocityDrive", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingVelocityDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingVelocityDrive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingVelocityDrive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistPositionDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistPositionDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bTwistPositionDrive_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistPositionDrive = { "bTwistPositionDrive", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistPositionDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistPositionDrive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistPositionDrive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistVelocityDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistVelocityDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bTwistVelocityDrive_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistVelocityDrive = { "bTwistVelocityDrive", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistVelocityDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistVelocityDrive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistVelocityDrive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularSlerpDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularSlerpDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bAngularSlerpDrive_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularSlerpDrive = { "bAngularSlerpDrive", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularSlerpDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularSlerpDrive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularSlerpDrive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularOrientationDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularOrientationDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bAngularOrientationDrive_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularOrientationDrive = { "bAngularOrientationDrive", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularOrientationDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularOrientationDrive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularOrientationDrive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableSwingDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableSwingDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bEnableSwingDrive_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableSwingDrive = { "bEnableSwingDrive", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableSwingDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableSwingDrive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableSwingDrive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableTwistDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableTwistDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bEnableTwistDrive_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableTwistDrive = { "bEnableTwistDrive", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableTwistDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableTwistDrive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableTwistDrive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularVelocityDrive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularVelocityDrive_SetBit(void* Obj)
	{
		((FConstraintInstance*)Obj)->bAngularVelocityDrive_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularVelocityDrive = { "bAngularVelocityDrive", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FConstraintInstance), &Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularVelocityDrive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularVelocityDrive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularVelocityDrive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularPositionTarget_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularPositionTarget = { "AngularPositionTarget", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, AngularPositionTarget_DEPRECATED), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularPositionTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularPositionTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveMode = { "AngularDriveMode", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, AngularDriveMode_DEPRECATED), Z_Construct_UEnum_Engine_EAngularDriveMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveMode_MetaData)) }; // 315531254
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularOrientationTarget_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularOrientationTarget = { "AngularOrientationTarget", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, AngularOrientationTarget_DEPRECATED), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularOrientationTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularOrientationTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularVelocityTarget_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularVelocityTarget = { "AngularVelocityTarget", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, AngularVelocityTarget_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularVelocityTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularVelocityTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveSpring_MetaData[] = {
		{ "Comment", "// Revolutions per second\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Revolutions per second" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveSpring = { "AngularDriveSpring", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, AngularDriveSpring_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveSpring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveSpring_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveDamping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveDamping = { "AngularDriveDamping", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, AngularDriveDamping_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveForceLimit_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveForceLimit = { "AngularDriveForceLimit", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstance, AngularDriveForceLimit_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveForceLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveForceLimit_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_JointName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ConstraintBone1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ConstraintBone2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Pos1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_PriAxis1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SecAxis1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Pos2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_PriAxis2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SecAxis2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularRotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bScaleLinearLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProfileInstance,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bDisableCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableProjection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProjectionLinearTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_ProjectionAngularTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearXMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearYMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearZMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearLimitSoft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearLimitDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearBreakable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearBreakThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularSwing1Motion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularTwistMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularSwing2Motion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingLimitSoft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistLimitSoft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Swing1LimitAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_Swing2LimitAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SwingLimitStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_SwingLimitDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_TwistLimitDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularBreakable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularBreakThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXPositionDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearXVelocityDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYPositionDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearYVelocityDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZPositionDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearZVelocityDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearPositionDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bLinearVelocityDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearPositionTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearVelocityTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveSpring,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_LinearDriveForceLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingPositionDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bSwingVelocityDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistPositionDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bTwistVelocityDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularSlerpDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularOrientationDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableSwingDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bEnableTwistDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_bAngularVelocityDrive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularPositionTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularOrientationTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularVelocityTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveSpring,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewProp_AngularDriveForceLimit,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FConstraintInstanceBase,
		&NewStructOps,
		"ConstraintInstance",
		sizeof(FConstraintInstance),
		alignof(FConstraintInstance),
		Z_Construct_UScriptStruct_FConstraintInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintInstance()
	{
		if (!Z_Registration_Info_UScriptStruct_ConstraintInstance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintInstance.InnerSingleton, Z_Construct_UScriptStruct_FConstraintInstance_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConstraintInstance.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintInstanceAccessor;
class UScriptStruct* FConstraintInstanceAccessor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintInstanceAccessor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintInstanceAccessor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintInstanceAccessor, Z_Construct_UPackage__Script_Engine(), TEXT("ConstraintInstanceAccessor"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintInstanceAccessor.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FConstraintInstanceAccessor>()
{
	return FConstraintInstanceAccessor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Wrapping type around instance pointer to be returned per value in Blueprints\n" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
		{ "ToolTip", "Wrapping type around instance pointer to be returned per value in Blueprints" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintInstanceAccessor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstanceAccessor, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::NewProp_Owner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/ConstraintInstance.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FConstraintInstanceAccessor, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::NewProp_Index,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ConstraintInstanceAccessor",
		sizeof(FConstraintInstanceAccessor),
		alignof(FConstraintInstanceAccessor),
		Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintInstanceAccessor()
	{
		if (!Z_Registration_Info_UScriptStruct_ConstraintInstanceAccessor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintInstanceAccessor.InnerSingleton, Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConstraintInstanceAccessor.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstance_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstance_h_Statics::ScriptStructInfo[] = {
		{ FConstraintProfileProperties::StaticStruct, Z_Construct_UScriptStruct_FConstraintProfileProperties_Statics::NewStructOps, TEXT("ConstraintProfileProperties"), &Z_Registration_Info_UScriptStruct_ConstraintProfileProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintProfileProperties), 2798388967U) },
		{ FConstraintInstanceBase::StaticStruct, Z_Construct_UScriptStruct_FConstraintInstanceBase_Statics::NewStructOps, TEXT("ConstraintInstanceBase"), &Z_Registration_Info_UScriptStruct_ConstraintInstanceBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintInstanceBase), 3180447474U) },
		{ FConstraintInstance::StaticStruct, Z_Construct_UScriptStruct_FConstraintInstance_Statics::NewStructOps, TEXT("ConstraintInstance"), &Z_Registration_Info_UScriptStruct_ConstraintInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintInstance), 289669747U) },
		{ FConstraintInstanceAccessor::StaticStruct, Z_Construct_UScriptStruct_FConstraintInstanceAccessor_Statics::NewStructOps, TEXT("ConstraintInstanceAccessor"), &Z_Registration_Info_UScriptStruct_ConstraintInstanceAccessor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintInstanceAccessor), 3007182115U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstance_h_835335251(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstance_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
