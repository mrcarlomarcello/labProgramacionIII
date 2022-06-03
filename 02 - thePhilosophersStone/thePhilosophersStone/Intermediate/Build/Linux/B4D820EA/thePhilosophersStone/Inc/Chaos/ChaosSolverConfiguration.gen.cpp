// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chaos/Public/ChaosSolverConfiguration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosSolverConfiguration() {}
// Cross Module References
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EClusterUnionMethod();
	UPackage* Z_Construct_UPackage__Script_Chaos();
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FChaosSolverConfiguration();
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FSolverCollisionFilterSettings();
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FSolverBreakingFilterSettings();
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FSolverTrailingFilterSettings();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClusterUnionMethod;
	static UEnum* EClusterUnionMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EClusterUnionMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EClusterUnionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EClusterUnionMethod, Z_Construct_UPackage__Script_Chaos(), TEXT("EClusterUnionMethod"));
		}
		return Z_Registration_Info_UEnum_EClusterUnionMethod.OuterSingleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EClusterUnionMethod>()
	{
		return EClusterUnionMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Chaos_EClusterUnionMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chaos_EClusterUnionMethod_Statics::Enumerators[] = {
		{ "EClusterUnionMethod::PointImplicit", (int64)EClusterUnionMethod::PointImplicit },
		{ "EClusterUnionMethod::DelaunayTriangulation", (int64)EClusterUnionMethod::DelaunayTriangulation },
		{ "EClusterUnionMethod::MinimalSpanningSubsetDelaunayTriangulation", (int64)EClusterUnionMethod::MinimalSpanningSubsetDelaunayTriangulation },
		{ "EClusterUnionMethod::PointImplicitAugmentedWithMinimalDelaunay", (int64)EClusterUnionMethod::PointImplicitAugmentedWithMinimalDelaunay },
		{ "EClusterUnionMethod::None", (int64)EClusterUnionMethod::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chaos_EClusterUnionMethod_Statics::Enum_MetaDataParams[] = {
		{ "DelaunayTriangulation.Name", "EClusterUnionMethod::DelaunayTriangulation" },
		{ "MinimalSpanningSubsetDelaunayTriangulation.Name", "EClusterUnionMethod::MinimalSpanningSubsetDelaunayTriangulation" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
		{ "None.Name", "EClusterUnionMethod::None" },
		{ "PointImplicit.Name", "EClusterUnionMethod::PointImplicit" },
		{ "PointImplicitAugmentedWithMinimalDelaunay.Name", "EClusterUnionMethod::PointImplicitAugmentedWithMinimalDelaunay" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EClusterUnionMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		"EClusterUnionMethod",
		"EClusterUnionMethod",
		Z_Construct_UEnum_Chaos_EClusterUnionMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EClusterUnionMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Chaos_EClusterUnionMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EClusterUnionMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chaos_EClusterUnionMethod()
	{
		if (!Z_Registration_Info_UEnum_EClusterUnionMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClusterUnionMethod.InnerSingleton, Z_Construct_UEnum_Chaos_EClusterUnionMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EClusterUnionMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosSolverConfiguration;
class UScriptStruct* FChaosSolverConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosSolverConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosSolverConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosSolverConfiguration, Z_Construct_UPackage__Script_Chaos(), TEXT("ChaosSolverConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosSolverConfiguration.OuterSingleton;
}
template<> CHAOS_API UScriptStruct* StaticStruct<FChaosSolverConfiguration>()
{
	return FChaosSolverConfiguration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Iterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Iterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionPairIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionPairIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PushOutIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PushOutIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionPushOutPairIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionPushOutPairIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMarginFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionMarginFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMarginMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionMarginMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionCullDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionCullDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMaxPushOutVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionMaxPushOutVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JointPairIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_JointPairIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JointPushOutPairIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_JointPushOutPairIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterConnectionFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClusterConnectionFactor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClusterUnionConnectionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterUnionConnectionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ClusterUnionConnectionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateCollisionData_MetaData[];
#endif
		static void NewProp_bGenerateCollisionData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateCollisionData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionFilterSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionFilterSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateBreakData_MetaData[];
#endif
		static void NewProp_bGenerateBreakData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateBreakData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BreakingFilterSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BreakingFilterSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateTrailingData_MetaData[];
#endif
		static void NewProp_bGenerateTrailingData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateTrailingData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrailingFilterSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrailingFilterSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateContactGraph_MetaData[];
#endif
		static void NewProp_bGenerateContactGraph_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateContactGraph;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosSolverConfiguration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_Iterations_MetaData[] = {
		{ "Category", "SolverConfiguration|Iterations" },
		{ "Comment", "// The number of iterations to run during the constraint solver step\n" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
		{ "ToolTip", "The number of iterations to run during the constraint solver step" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_Iterations = { "Iterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosSolverConfiguration, Iterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_Iterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_Iterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionPairIterations_MetaData[] = {
		{ "Category", "SolverConfiguration|Iterations" },
		{ "Comment", "// During solver iterations we solve each constraint in turn. For each constraint\n// we run the solve step CollisionPairIterations times in a row.\n" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
		{ "ToolTip", "During solver iterations we solve each constraint in turn. For each constraint\nwe run the solve step CollisionPairIterations times in a row." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionPairIterations = { "CollisionPairIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosSolverConfiguration, CollisionPairIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionPairIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionPairIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_PushOutIterations_MetaData[] = {
		{ "Category", "SolverConfiguration|Iterations" },
		{ "Comment", "// The number of iterations to run during the constraint fixup step. This applies a post-solve\n// correction that can address errors left behind during the main solver iterations.\n" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
		{ "ToolTip", "The number of iterations to run during the constraint fixup step. This applies a post-solve\ncorrection that can address errors left behind during the main solver iterations." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_PushOutIterations = { "PushOutIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosSolverConfiguration, PushOutIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_PushOutIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_PushOutIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionPushOutPairIterations_MetaData[] = {
		{ "Category", "SolverConfiguration|Iterations" },
		{ "Comment", "// During pushout iterations we pushout each constraint in turn. For each constraint\n// we run the pushout step CollisionPairIterations times in a row.\n" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
		{ "ToolTip", "During pushout iterations we pushout each constraint in turn. For each constraint\nwe run the pushout step CollisionPairIterations times in a row." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionPushOutPairIterations = { "CollisionPushOutPairIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosSolverConfiguration, CollisionPushOutPairIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionPushOutPairIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionPushOutPairIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionMarginFraction_MetaData[] = {
		{ "Category", "SolverConfiguration|Collision" },
		{ "Comment", "// A collision margin as a fraction of size used by some boxes and convex shapes to improve collision detection results.\n// The core geometry of shapes that support a margin are reduced in size by the margin, and the margin\n// is added back on during collision detection. The net result is a shape of the same size but with rounded corners.\n" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
		{ "ToolTip", "A collision margin as a fraction of size used by some boxes and convex shapes to improve collision detection results.\nThe core geometry of shapes that support a margin are reduced in size by the margin, and the margin\nis added back on during collision detection. The net result is a shape of the same size but with rounded corners." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionMarginFraction = { "CollisionMarginFraction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosSolverConfiguration, CollisionMarginFraction), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionMarginFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionMarginFraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionMarginMax_MetaData[] = {
		{ "Category", "SolverConfiguration|Collision" },
		{ "Comment", "// An upper limit on the collision margin that will be subtracted from boxes and convex shapes. See CollisionMarginFraction\n" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
		{ "ToolTip", "An upper limit on the collision margin that will be subtracted from boxes and convex shapes. See CollisionMarginFraction" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionMarginMax = { "CollisionMarginMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosSolverConfiguration, CollisionMarginMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionMarginMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionMarginMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionCullDistance_MetaData[] = {
		{ "Category", "SolverConfiguration|Collision" },
		{ "Comment", "// During collision detection, if tweo shapes are at least this far apart we do not calculate their nearest features\n// during the collision detection step.\n" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
		{ "ToolTip", "During collision detection, if tweo shapes are at least this far apart we do not calculate their nearest features\nduring the collision detection step." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionCullDistance = { "CollisionCullDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosSolverConfiguration, CollisionCullDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionCullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionCullDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionMaxPushOutVelocity_MetaData[] = {
		{ "Category", "SolverConfiguration|Collision" },
		{ "Comment", "// The maximum speed at which two bodies can be extracted from each other when they start a frame inter-penetrating. This can\n// happen because they spawned on top of each other, or the solver failed to fully reolve collisions last frame. A value of\n// zero means \"no limit\". A non-zero value can be used to prevent explosive behaviour when bodies start deeply penetrating. \n// An alternative to using this approach is to increase the number of Velocity Iterations, which is more expensive but will \n// ensure the bdoies are depenetrated in a single frame without explosive behaviour.\n" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
		{ "ToolTip", "The maximum speed at which two bodies can be extracted from each other when they start a frame inter-penetrating. This can\nhappen because they spawned on top of each other, or the solver failed to fully reolve collisions last frame. A value of\nzero means \"no limit\". A non-zero value can be used to prevent explosive behaviour when bodies start deeply penetrating.\nAn alternative to using this approach is to increase the number of Velocity Iterations, which is more expensive but will\nensure the bdoies are depenetrated in a single frame without explosive behaviour." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionMaxPushOutVelocity = { "CollisionMaxPushOutVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosSolverConfiguration, CollisionMaxPushOutVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionMaxPushOutVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionMaxPushOutVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_JointPairIterations_MetaData[] = {
		{ "Category", "SolverConfiguration|Iterations" },
		{ "Comment", "// The number of iterations to run on each constraint during the constraint solver step\n" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
		{ "ToolTip", "The number of iterations to run on each constraint during the constraint solver step" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_JointPairIterations = { "JointPairIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosSolverConfiguration, JointPairIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_JointPairIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_JointPairIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_JointPushOutPairIterations_MetaData[] = {
		{ "Category", "SolverConfiguration|Iterations" },
		{ "Comment", "// The number of iterations to run during the constraint fixup step for each joint. This applies a post-solve\n// correction that can address errors left behind during the main solver iterations.\n" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
		{ "ToolTip", "The number of iterations to run during the constraint fixup step for each joint. This applies a post-solve\ncorrection that can address errors left behind during the main solver iterations." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_JointPushOutPairIterations = { "JointPushOutPairIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosSolverConfiguration, JointPushOutPairIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_JointPushOutPairIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_JointPushOutPairIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_ClusterConnectionFactor_MetaData[] = {
		{ "Category", "SolverConfiguration|Clustering" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_ClusterConnectionFactor = { "ClusterConnectionFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosSolverConfiguration, ClusterConnectionFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_ClusterConnectionFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_ClusterConnectionFactor_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_ClusterUnionConnectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_ClusterUnionConnectionType_MetaData[] = {
		{ "Category", "SolverConfiguration|Clustering" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_ClusterUnionConnectionType = { "ClusterUnionConnectionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosSolverConfiguration, ClusterUnionConnectionType), Z_Construct_UEnum_Chaos_EClusterUnionMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_ClusterUnionConnectionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_ClusterUnionConnectionType_MetaData)) }; // 1317409783
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateCollisionData_MetaData[] = {
		{ "Category", "SolverConfiguration|GeneratedData" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateCollisionData_SetBit(void* Obj)
	{
		((FChaosSolverConfiguration*)Obj)->bGenerateCollisionData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateCollisionData = { "bGenerateCollisionData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FChaosSolverConfiguration), &Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateCollisionData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateCollisionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateCollisionData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionFilterSettings_MetaData[] = {
		{ "Category", "SolverConfiguration|GeneratedData" },
		{ "EditCondition", "bGenerateCollisionData" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionFilterSettings = { "CollisionFilterSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosSolverConfiguration, CollisionFilterSettings), Z_Construct_UScriptStruct_FSolverCollisionFilterSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionFilterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionFilterSettings_MetaData)) }; // 1674579267
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateBreakData_MetaData[] = {
		{ "Category", "SolverConfiguration|GeneratedData" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateBreakData_SetBit(void* Obj)
	{
		((FChaosSolverConfiguration*)Obj)->bGenerateBreakData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateBreakData = { "bGenerateBreakData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FChaosSolverConfiguration), &Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateBreakData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateBreakData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateBreakData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_BreakingFilterSettings_MetaData[] = {
		{ "Category", "SolverConfiguration|GeneratedData" },
		{ "EditCondition", "bGenerateBreakData" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_BreakingFilterSettings = { "BreakingFilterSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosSolverConfiguration, BreakingFilterSettings), Z_Construct_UScriptStruct_FSolverBreakingFilterSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_BreakingFilterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_BreakingFilterSettings_MetaData)) }; // 1478598304
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateTrailingData_MetaData[] = {
		{ "Category", "SolverConfiguration|GeneratedData" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateTrailingData_SetBit(void* Obj)
	{
		((FChaosSolverConfiguration*)Obj)->bGenerateTrailingData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateTrailingData = { "bGenerateTrailingData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FChaosSolverConfiguration), &Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateTrailingData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateTrailingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateTrailingData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_TrailingFilterSettings_MetaData[] = {
		{ "Category", "SolverConfiguration|GeneratedData" },
		{ "EditCondition", "bGenerateTrailingData" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_TrailingFilterSettings = { "TrailingFilterSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosSolverConfiguration, TrailingFilterSettings), Z_Construct_UScriptStruct_FSolverTrailingFilterSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_TrailingFilterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_TrailingFilterSettings_MetaData)) }; // 2582662007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateContactGraph_MetaData[] = {
		{ "Category", "SolverConfiguration|Contacts" },
		{ "ModuleRelativePath", "Public/ChaosSolverConfiguration.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateContactGraph_SetBit(void* Obj)
	{
		((FChaosSolverConfiguration*)Obj)->bGenerateContactGraph = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateContactGraph = { "bGenerateContactGraph", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FChaosSolverConfiguration), &Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateContactGraph_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateContactGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateContactGraph_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_Iterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionPairIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_PushOutIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionPushOutPairIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionMarginFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionMarginMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionCullDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionMaxPushOutVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_JointPairIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_JointPushOutPairIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_ClusterConnectionFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_ClusterUnionConnectionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_ClusterUnionConnectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateCollisionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_CollisionFilterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateBreakData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_BreakingFilterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateTrailingData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_TrailingFilterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewProp_bGenerateContactGraph,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		&NewStructOps,
		"ChaosSolverConfiguration",
		sizeof(FChaosSolverConfiguration),
		alignof(FChaosSolverConfiguration),
		Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaosSolverConfiguration()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosSolverConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosSolverConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosSolverConfiguration.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_ChaosSolverConfiguration_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_ChaosSolverConfiguration_h_Statics::EnumInfo[] = {
		{ EClusterUnionMethod_StaticEnum, TEXT("EClusterUnionMethod"), &Z_Registration_Info_UEnum_EClusterUnionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1317409783U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_ChaosSolverConfiguration_h_Statics::ScriptStructInfo[] = {
		{ FChaosSolverConfiguration::StaticStruct, Z_Construct_UScriptStruct_FChaosSolverConfiguration_Statics::NewStructOps, TEXT("ChaosSolverConfiguration"), &Z_Registration_Info_UScriptStruct_ChaosSolverConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosSolverConfiguration), 4229150103U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_ChaosSolverConfiguration_h_4037117499(TEXT("/Script/Chaos"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_ChaosSolverConfiguration_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_ChaosSolverConfiguration_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_ChaosSolverConfiguration_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_ChaosSolverConfiguration_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
