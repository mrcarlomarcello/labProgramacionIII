// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Units/Collision/RigUnit_WorldCollision.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_WorldCollision() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_SphereTraceWorld>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_SphereTraceWorld cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceWorld;
class UScriptStruct* FRigUnit_SphereTraceWorld::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceWorld.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceWorld.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SphereTraceWorld"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SphereTraceWorld::Execute"), &FRigUnit_SphereTraceWorld::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceWorld.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceWorld.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SphereTraceWorld>()
{
	return FRigUnit_SphereTraceWorld::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Channel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHit_MetaData[];
#endif
		static void NewProp_bHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitNormal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n * Sweeps a sphere against the world and return the first blocking hit using a specific channel\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Sphere Trace" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "Sweep,Raytrace,Collision,Collide,Trace" },
		{ "ModuleRelativePath", "Private/Units/Collision/RigUnit_WorldCollision.h" },
		{ "NodeColor", "0.2 0.4 0.7" },
		{ "ToolTip", "Sweeps a sphere against the world and return the first blocking hit using a specific channel" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SphereTraceWorld>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_Start_MetaData[] = {
		{ "Comment", "/** Start of the trace in rig / global space */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Collision/RigUnit_WorldCollision.h" },
		{ "ToolTip", "Start of the trace in rig / global space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_SphereTraceWorld, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_End_MetaData[] = {
		{ "Comment", "/** End of the trace in rig / global space */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Collision/RigUnit_WorldCollision.h" },
		{ "ToolTip", "End of the trace in rig / global space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_SphereTraceWorld, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_End_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_Channel_MetaData[] = {
		{ "Comment", "/** The 'channel' that this trace is in, used to determine which components to hit */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Collision/RigUnit_WorldCollision.h" },
		{ "ToolTip", "The 'channel' that this trace is in, used to determine which components to hit" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_SphereTraceWorld, Channel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_Channel_MetaData)) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_Radius_MetaData[] = {
		{ "Comment", "/** Radius of the sphere to use for sweeping / tracing */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Collision/RigUnit_WorldCollision.h" },
		{ "ToolTip", "Radius of the sphere to use for sweeping / tracing" },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_SphereTraceWorld, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_bHit_MetaData[] = {
		{ "Comment", "/** Returns true if there was a hit */" },
		{ "ModuleRelativePath", "Private/Units/Collision/RigUnit_WorldCollision.h" },
		{ "Output", "" },
		{ "ToolTip", "Returns true if there was a hit" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_bHit_SetBit(void* Obj)
	{
		((FRigUnit_SphereTraceWorld*)Obj)->bHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_bHit = { "bHit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_SphereTraceWorld), &Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_bHit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_bHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_bHit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_HitLocation_MetaData[] = {
		{ "Comment", "/** Hit location in rig / global Space */" },
		{ "ModuleRelativePath", "Private/Units/Collision/RigUnit_WorldCollision.h" },
		{ "Output", "" },
		{ "ToolTip", "Hit location in rig / global Space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_SphereTraceWorld, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_HitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_HitLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_HitNormal_MetaData[] = {
		{ "Comment", "/** Hit normal in rig / global Space */" },
		{ "ModuleRelativePath", "Private/Units/Collision/RigUnit_WorldCollision.h" },
		{ "Output", "" },
		{ "ToolTip", "Hit normal in rig / global Space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_SphereTraceWorld, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_HitNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_HitNormal_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_bHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_HitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewProp_HitNormal,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_SphereTraceWorld",
		sizeof(FRigUnit_SphereTraceWorld),
		alignof(FRigUnit_SphereTraceWorld),
		Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceWorld.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceWorld.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceWorld.InnerSingleton;
	}

void FRigUnit_SphereTraceWorld::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Start,
		End,
		Channel,
		Radius,
		bHit,
		HitLocation,
		HitNormal,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_SphereTraceByTraceChannel>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_SphereTraceByTraceChannel cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByTraceChannel;
class UScriptStruct* FRigUnit_SphereTraceByTraceChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByTraceChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByTraceChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SphereTraceByTraceChannel"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SphereTraceByTraceChannel::Execute"), &FRigUnit_SphereTraceByTraceChannel::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByTraceChannel.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByTraceChannel.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SphereTraceByTraceChannel>()
{
	return FRigUnit_SphereTraceByTraceChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHit_MetaData[];
#endif
		static void NewProp_bHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitNormal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n * Sweeps a sphere against the world and return the first blocking hit using a specific channel. Target objects can have different object types, but they need to have the same trace channel set to \"block\" in their collision response settings. \n * You can create custom trace channels in Project Setting - Collision. \n */" },
		{ "DisplayName", "Sphere Trace By Trace Channel" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "Sweep,Raytrace,Collision,Collide,Trace" },
		{ "ModuleRelativePath", "Private/Units/Collision/RigUnit_WorldCollision.h" },
		{ "NodeColor", "0.2 0.4 0.7" },
		{ "ToolTip", "Sweeps a sphere against the world and return the first blocking hit using a specific channel. Target objects can have different object types, but they need to have the same trace channel set to \"block\" in their collision response settings.\nYou can create custom trace channels in Project Setting - Collision." },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SphereTraceByTraceChannel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_Start_MetaData[] = {
		{ "Comment", "/** Start of the trace in rig / global space */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Collision/RigUnit_WorldCollision.h" },
		{ "ToolTip", "Start of the trace in rig / global space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_SphereTraceByTraceChannel, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_End_MetaData[] = {
		{ "Comment", "/** End of the trace in rig / global space */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Collision/RigUnit_WorldCollision.h" },
		{ "ToolTip", "End of the trace in rig / global space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_SphereTraceByTraceChannel, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_End_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Comment", "/** The 'channel' that this trace is in, used to determine which components to hit */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Collision/RigUnit_WorldCollision.h" },
		{ "ToolTip", "The 'channel' that this trace is in, used to determine which components to hit" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_SphereTraceByTraceChannel, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_TraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_TraceChannel_MetaData)) }; // 2906040657
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_Radius_MetaData[] = {
		{ "Comment", "/** Radius of the sphere to use for sweeping / tracing */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Collision/RigUnit_WorldCollision.h" },
		{ "ToolTip", "Radius of the sphere to use for sweeping / tracing" },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_SphereTraceByTraceChannel, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_bHit_MetaData[] = {
		{ "Comment", "/** Returns true if there was a hit */" },
		{ "ModuleRelativePath", "Private/Units/Collision/RigUnit_WorldCollision.h" },
		{ "Output", "" },
		{ "ToolTip", "Returns true if there was a hit" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_bHit_SetBit(void* Obj)
	{
		((FRigUnit_SphereTraceByTraceChannel*)Obj)->bHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_bHit = { "bHit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_SphereTraceByTraceChannel), &Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_bHit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_bHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_bHit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_HitLocation_MetaData[] = {
		{ "Comment", "/** Hit location in rig / global Space */" },
		{ "ModuleRelativePath", "Private/Units/Collision/RigUnit_WorldCollision.h" },
		{ "Output", "" },
		{ "ToolTip", "Hit location in rig / global Space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_SphereTraceByTraceChannel, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_HitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_HitLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_HitNormal_MetaData[] = {
		{ "Comment", "/** Hit normal in rig / global Space */" },
		{ "ModuleRelativePath", "Private/Units/Collision/RigUnit_WorldCollision.h" },
		{ "Output", "" },
		{ "ToolTip", "Hit normal in rig / global Space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_SphereTraceByTraceChannel, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_HitNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_HitNormal_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_TraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_bHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_HitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewProp_HitNormal,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_SphereTraceByTraceChannel",
		sizeof(FRigUnit_SphereTraceByTraceChannel),
		alignof(FRigUnit_SphereTraceByTraceChannel),
		Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByTraceChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByTraceChannel.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByTraceChannel.InnerSingleton;
	}

void FRigUnit_SphereTraceByTraceChannel::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
    StaticExecute(
		RigVMExecuteContext,
		Start,
		End,
		TraceChannel,
		Radius,
		bHit,
		HitLocation,
		HitNormal,
		Context
	);
}


static_assert(std::is_polymorphic<FRigUnit_SphereTraceByObjectTypes>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_SphereTraceByObjectTypes cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByObjectTypes;
class UScriptStruct* FRigUnit_SphereTraceByObjectTypes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByObjectTypes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByObjectTypes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes, Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SphereTraceByObjectTypes"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SphereTraceByObjectTypes::Execute"), &FRigUnit_SphereTraceByObjectTypes::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByObjectTypes.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByObjectTypes.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SphereTraceByObjectTypes>()
{
	return FRigUnit_SphereTraceByObjectTypes::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHit_MetaData[];
#endif
		static void NewProp_bHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitNormal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n * Sweeps a sphere against the world and return the first blocking hit. The trace is filtered by object types only, the collision response settings are ignored.\n * You can create custom object types in Project Setting - Collision\n */" },
		{ "DisplayName", "Sphere Trace By Object Types" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "Sweep,Raytrace,Collision,Collide,Trace" },
		{ "ModuleRelativePath", "Private/Units/Collision/RigUnit_WorldCollision.h" },
		{ "NodeColor", "0.2 0.4 0.7" },
		{ "ToolTip", "Sweeps a sphere against the world and return the first blocking hit. The trace is filtered by object types only, the collision response settings are ignored.\nYou can create custom object types in Project Setting - Collision" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SphereTraceByObjectTypes>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_Start_MetaData[] = {
		{ "Comment", "/** Start of the trace in rig / global space */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Collision/RigUnit_WorldCollision.h" },
		{ "ToolTip", "Start of the trace in rig / global space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_SphereTraceByObjectTypes, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_End_MetaData[] = {
		{ "Comment", "/** End of the trace in rig / global space */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Collision/RigUnit_WorldCollision.h" },
		{ "ToolTip", "End of the trace in rig / global space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_SphereTraceByObjectTypes, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_End_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_ObjectTypes_MetaData[] = {
		{ "Comment", "/** The types of objects that this trace can hit */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Collision/RigUnit_WorldCollision.h" },
		{ "ToolTip", "The types of objects that this trace can hit" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_SphereTraceByObjectTypes, ObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_ObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_ObjectTypes_MetaData)) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_Radius_MetaData[] = {
		{ "Comment", "/** Radius of the sphere to use for sweeping / tracing */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Collision/RigUnit_WorldCollision.h" },
		{ "ToolTip", "Radius of the sphere to use for sweeping / tracing" },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_SphereTraceByObjectTypes, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_bHit_MetaData[] = {
		{ "Comment", "/** Returns true if there was a hit */" },
		{ "ModuleRelativePath", "Private/Units/Collision/RigUnit_WorldCollision.h" },
		{ "Output", "" },
		{ "ToolTip", "Returns true if there was a hit" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_bHit_SetBit(void* Obj)
	{
		((FRigUnit_SphereTraceByObjectTypes*)Obj)->bHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_bHit = { "bHit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_SphereTraceByObjectTypes), &Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_bHit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_bHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_bHit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_HitLocation_MetaData[] = {
		{ "Comment", "/** Hit location in rig / global Space */" },
		{ "ModuleRelativePath", "Private/Units/Collision/RigUnit_WorldCollision.h" },
		{ "Output", "" },
		{ "ToolTip", "Hit location in rig / global Space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_SphereTraceByObjectTypes, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_HitLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_HitLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_HitNormal_MetaData[] = {
		{ "Comment", "/** Hit normal in rig / global Space */" },
		{ "ModuleRelativePath", "Private/Units/Collision/RigUnit_WorldCollision.h" },
		{ "Output", "" },
		{ "ToolTip", "Hit normal in rig / global Space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_SphereTraceByObjectTypes, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_HitNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_HitNormal_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_ObjectTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_ObjectTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_bHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_HitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewProp_HitNormal,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_SphereTraceByObjectTypes",
		sizeof(FRigUnit_SphereTraceByObjectTypes),
		alignof(FRigUnit_SphereTraceByObjectTypes),
		Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByObjectTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByObjectTypes.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByObjectTypes.InnerSingleton;
	}

void FRigUnit_SphereTraceByObjectTypes::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	TArrayView<const TEnumAsByte<EObjectTypeQuery> > ObjectTypes_2_Array(ObjectTypes);
	
    StaticExecute(
		RigVMExecuteContext,
		Start,
		End,
		ObjectTypes_2_Array,
		Radius,
		bHit,
		HitLocation,
		HitNormal,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Collision_RigUnit_WorldCollision_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Collision_RigUnit_WorldCollision_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_SphereTraceWorld::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SphereTraceWorld_Statics::NewStructOps, TEXT("RigUnit_SphereTraceWorld"), &Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceWorld, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SphereTraceWorld), 944922435U) },
		{ FRigUnit_SphereTraceByTraceChannel::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SphereTraceByTraceChannel_Statics::NewStructOps, TEXT("RigUnit_SphereTraceByTraceChannel"), &Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByTraceChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SphereTraceByTraceChannel), 1030713772U) },
		{ FRigUnit_SphereTraceByObjectTypes::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SphereTraceByObjectTypes_Statics::NewStructOps, TEXT("RigUnit_SphereTraceByObjectTypes"), &Z_Registration_Info_UScriptStruct_RigUnit_SphereTraceByObjectTypes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SphereTraceByObjectTypes), 3522946926U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Collision_RigUnit_WorldCollision_h_978127166(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Collision_RigUnit_WorldCollision_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Collision_RigUnit_WorldCollision_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
