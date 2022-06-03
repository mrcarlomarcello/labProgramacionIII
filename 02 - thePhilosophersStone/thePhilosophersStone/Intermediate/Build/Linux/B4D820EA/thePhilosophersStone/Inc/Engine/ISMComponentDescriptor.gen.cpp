// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/ISMPartition/ISMComponentDescriptor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISMComponentDescriptor() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FISMComponentDescriptor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentMobility();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightmapType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightingChannels();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERayTracingGroupCullingPriority();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHasCustomNavigableGeometry();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERendererStencilMask();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHLODBatchingPolicy();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ISMComponentDescriptor;
class UScriptStruct* FISMComponentDescriptor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ISMComponentDescriptor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ISMComponentDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FISMComponentDescriptor, Z_Construct_UPackage__Script_Engine(), TEXT("ISMComponentDescriptor"));
	}
	return Z_Registration_Info_UScriptStruct_ISMComponentDescriptor.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FISMComponentDescriptor>()
{
	return FISMComponentDescriptor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Hash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverrideMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RuntimeVirtualTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeVirtualTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimeVirtualTextures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mobility_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mobility;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VirtualTextureRenderPassType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureRenderPassType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VirtualTextureRenderPassType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LightmapType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightmapType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LightmapType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightingChannels_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightingChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingGroupId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RayTracingGroupId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RayTracingGroupCullingPriority_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingGroupCullingPriority_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RayTracingGroupCullingPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasCustomNavigableGeometry_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_bHasCustomNavigableGeometry;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CustomDepthStencilWriteMask_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilWriteMask_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CustomDepthStencilWriteMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyInstance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BodyInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceStartCullDistance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceStartCullDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceEndCullDistance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceEndCullDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureCullMips_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VirtualTextureCullMips;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslucencySortPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TranslucencySortPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverriddenLightMapRes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OverriddenLightMapRes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CustomDepthStencilValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HLODBatchingPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HLODBatchingPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HLODBatchingPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadow_MetaData[];
#endif
		static void NewProp_bCastShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastDynamicShadow_MetaData[];
#endif
		static void NewProp_bCastDynamicShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastDynamicShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastStaticShadow_MetaData[];
#endif
		static void NewProp_bCastStaticShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastStaticShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastContactShadow_MetaData[];
#endif
		static void NewProp_bCastContactShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastContactShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadowAsTwoSided_MetaData[];
#endif
		static void NewProp_bCastShadowAsTwoSided_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadowAsTwoSided;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectDynamicIndirectLighting_MetaData[];
#endif
		static void NewProp_bAffectDynamicIndirectLighting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectDynamicIndirectLighting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectDistanceFieldLighting_MetaData[];
#endif
		static void NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectDistanceFieldLighting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReceivesDecals_MetaData[];
#endif
		static void NewProp_bReceivesDecals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceivesDecals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideLightMapRes_MetaData[];
#endif
		static void NewProp_bOverrideLightMapRes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideLightMapRes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAsOccluder_MetaData[];
#endif
		static void NewProp_bUseAsOccluder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsOccluder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDensityScaling_MetaData[];
#endif
		static void NewProp_bEnableDensityScaling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDensityScaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDiscardOnLoad_MetaData[];
#endif
		static void NewProp_bEnableDiscardOnLoad_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDiscardOnLoad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderCustomDepth_MetaData[];
#endif
		static void NewProp_bRenderCustomDepth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderCustomDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeInHLOD_MetaData[];
#endif
		static void NewProp_bIncludeInHLOD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeInHLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisibleInRayTracing_MetaData[];
#endif
		static void NewProp_bVisibleInRayTracing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleInRayTracing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHiddenInGame_MetaData[];
#endif
		static void NewProp_bHiddenInGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHiddenInGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEditorOnly_MetaData[];
#endif
		static void NewProp_bIsEditorOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEditorOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConsiderForActorPlacementWhenHidden_MetaData[];
#endif
		static void NewProp_bConsiderForActorPlacementWhenHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsiderForActorPlacementWhenHidden;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct that holds the relevant properties that can help decide if instances of different \n\x09StaticMeshComponents/InstancedStaticMeshComponents/HISM can be merged into a single component. */" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
		{ "ToolTip", "Struct that holds the relevant properties that can help decide if instances of different\n      StaticMeshComponents/InstancedStaticMeshComponents/HISM can be merged into a single component." },
	};
#endif
	void* Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FISMComponentDescriptor>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_Hash_MetaData[] = {
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FISMComponentDescriptor, Hash), METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_Hash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_Hash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_ComponentClass_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FISMComponentDescriptor, ComponentClass), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_ComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_ComponentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FISMComponentDescriptor, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_StaticMesh_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_OverrideMaterials_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FISMComponentDescriptor, OverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_OverrideMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_OverrideMaterials_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures_Inner = { "RuntimeVirtualTextures", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures = { "RuntimeVirtualTextures", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FISMComponentDescriptor, RuntimeVirtualTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_Mobility_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_Mobility = { "Mobility", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FISMComponentDescriptor, Mobility), Z_Construct_UEnum_Engine_EComponentMobility, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_Mobility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_Mobility_MetaData)) }; // 3258784245
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_VirtualTextureRenderPassType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_VirtualTextureRenderPassType_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_VirtualTextureRenderPassType = { "VirtualTextureRenderPassType", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FISMComponentDescriptor, VirtualTextureRenderPassType), Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_VirtualTextureRenderPassType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_VirtualTextureRenderPassType_MetaData)) }; // 439338851
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_LightmapType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_LightmapType_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_LightmapType = { "LightmapType", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FISMComponentDescriptor, LightmapType), Z_Construct_UEnum_Engine_ELightmapType, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_LightmapType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_LightmapType_MetaData)) }; // 1796898336
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_LightingChannels_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_LightingChannels = { "LightingChannels", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FISMComponentDescriptor, LightingChannels), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_LightingChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_LightingChannels_MetaData)) }; // 4241287548
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_RayTracingGroupId_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_RayTracingGroupId = { "RayTracingGroupId", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FISMComponentDescriptor, RayTracingGroupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_RayTracingGroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_RayTracingGroupId_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_RayTracingGroupCullingPriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_RayTracingGroupCullingPriority_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_RayTracingGroupCullingPriority = { "RayTracingGroupCullingPriority", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FISMComponentDescriptor, RayTracingGroupCullingPriority), Z_Construct_UEnum_Engine_ERayTracingGroupCullingPriority, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_RayTracingGroupCullingPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_RayTracingGroupCullingPriority_MetaData)) }; // 1023802708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bHasCustomNavigableGeometry_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bHasCustomNavigableGeometry = { "bHasCustomNavigableGeometry", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FISMComponentDescriptor, bHasCustomNavigableGeometry), Z_Construct_UEnum_Engine_EHasCustomNavigableGeometry, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bHasCustomNavigableGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bHasCustomNavigableGeometry_MetaData)) }; // 947603777
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_CustomDepthStencilWriteMask_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_CustomDepthStencilWriteMask_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_CustomDepthStencilWriteMask = { "CustomDepthStencilWriteMask", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FISMComponentDescriptor, CustomDepthStencilWriteMask), Z_Construct_UEnum_Engine_ERendererStencilMask, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_CustomDepthStencilWriteMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_CustomDepthStencilWriteMask_MetaData)) }; // 2676219362
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_BodyInstance_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_BodyInstance = { "BodyInstance", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FISMComponentDescriptor, BodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_BodyInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_BodyInstance_MetaData)) }; // 743185417
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_InstanceStartCullDistance_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_InstanceStartCullDistance = { "InstanceStartCullDistance", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FISMComponentDescriptor, InstanceStartCullDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_InstanceStartCullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_InstanceStartCullDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_InstanceEndCullDistance_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_InstanceEndCullDistance = { "InstanceEndCullDistance", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FISMComponentDescriptor, InstanceEndCullDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_InstanceEndCullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_InstanceEndCullDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_VirtualTextureCullMips_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_VirtualTextureCullMips = { "VirtualTextureCullMips", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FISMComponentDescriptor, VirtualTextureCullMips), METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_VirtualTextureCullMips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_VirtualTextureCullMips_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_TranslucencySortPriority_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_TranslucencySortPriority = { "TranslucencySortPriority", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FISMComponentDescriptor, TranslucencySortPriority), METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_TranslucencySortPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_TranslucencySortPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_OverriddenLightMapRes_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_OverriddenLightMapRes = { "OverriddenLightMapRes", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FISMComponentDescriptor, OverriddenLightMapRes), METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_OverriddenLightMapRes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_OverriddenLightMapRes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_CustomDepthStencilValue_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_CustomDepthStencilValue = { "CustomDepthStencilValue", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FISMComponentDescriptor, CustomDepthStencilValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_CustomDepthStencilValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_CustomDepthStencilValue_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_HLODBatchingPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_HLODBatchingPolicy_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_HLODBatchingPolicy = { "HLODBatchingPolicy", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FISMComponentDescriptor, HLODBatchingPolicy), Z_Construct_UEnum_Engine_EHLODBatchingPolicy, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_HLODBatchingPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_HLODBatchingPolicy_MetaData)) }; // 3663747580
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastShadow_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastShadow_SetBit(void* Obj)
	{
		((FISMComponentDescriptor*)Obj)->bCastShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastShadow = { "bCastShadow", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FISMComponentDescriptor), &Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastShadow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastShadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastDynamicShadow_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastDynamicShadow_SetBit(void* Obj)
	{
		((FISMComponentDescriptor*)Obj)->bCastDynamicShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastDynamicShadow = { "bCastDynamicShadow", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FISMComponentDescriptor), &Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastDynamicShadow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastDynamicShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastDynamicShadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastStaticShadow_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastStaticShadow_SetBit(void* Obj)
	{
		((FISMComponentDescriptor*)Obj)->bCastStaticShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastStaticShadow = { "bCastStaticShadow", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FISMComponentDescriptor), &Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastStaticShadow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastStaticShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastStaticShadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastContactShadow_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastContactShadow_SetBit(void* Obj)
	{
		((FISMComponentDescriptor*)Obj)->bCastContactShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastContactShadow = { "bCastContactShadow", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FISMComponentDescriptor), &Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastContactShadow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastContactShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastContactShadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastShadowAsTwoSided_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastShadowAsTwoSided_SetBit(void* Obj)
	{
		((FISMComponentDescriptor*)Obj)->bCastShadowAsTwoSided = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastShadowAsTwoSided = { "bCastShadowAsTwoSided", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FISMComponentDescriptor), &Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastShadowAsTwoSided_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastShadowAsTwoSided_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastShadowAsTwoSided_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bAffectDynamicIndirectLighting_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bAffectDynamicIndirectLighting_SetBit(void* Obj)
	{
		((FISMComponentDescriptor*)Obj)->bAffectDynamicIndirectLighting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bAffectDynamicIndirectLighting = { "bAffectDynamicIndirectLighting", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FISMComponentDescriptor), &Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bAffectDynamicIndirectLighting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bAffectDynamicIndirectLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bAffectDynamicIndirectLighting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bAffectDistanceFieldLighting_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj)
	{
		((FISMComponentDescriptor*)Obj)->bAffectDistanceFieldLighting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bAffectDistanceFieldLighting = { "bAffectDistanceFieldLighting", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FISMComponentDescriptor), &Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bAffectDistanceFieldLighting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bAffectDistanceFieldLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bAffectDistanceFieldLighting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bReceivesDecals_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bReceivesDecals_SetBit(void* Obj)
	{
		((FISMComponentDescriptor*)Obj)->bReceivesDecals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bReceivesDecals = { "bReceivesDecals", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FISMComponentDescriptor), &Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bReceivesDecals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bReceivesDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bReceivesDecals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bOverrideLightMapRes_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bOverrideLightMapRes_SetBit(void* Obj)
	{
		((FISMComponentDescriptor*)Obj)->bOverrideLightMapRes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bOverrideLightMapRes = { "bOverrideLightMapRes", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FISMComponentDescriptor), &Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bOverrideLightMapRes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bOverrideLightMapRes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bOverrideLightMapRes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bUseAsOccluder_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bUseAsOccluder_SetBit(void* Obj)
	{
		((FISMComponentDescriptor*)Obj)->bUseAsOccluder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bUseAsOccluder = { "bUseAsOccluder", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FISMComponentDescriptor), &Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bUseAsOccluder_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bUseAsOccluder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bUseAsOccluder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bEnableDensityScaling_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bEnableDensityScaling_SetBit(void* Obj)
	{
		((FISMComponentDescriptor*)Obj)->bEnableDensityScaling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bEnableDensityScaling = { "bEnableDensityScaling", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FISMComponentDescriptor), &Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bEnableDensityScaling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bEnableDensityScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bEnableDensityScaling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bEnableDiscardOnLoad_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bEnableDiscardOnLoad_SetBit(void* Obj)
	{
		((FISMComponentDescriptor*)Obj)->bEnableDiscardOnLoad = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bEnableDiscardOnLoad = { "bEnableDiscardOnLoad", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FISMComponentDescriptor), &Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bEnableDiscardOnLoad_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bEnableDiscardOnLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bEnableDiscardOnLoad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bRenderCustomDepth_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bRenderCustomDepth_SetBit(void* Obj)
	{
		((FISMComponentDescriptor*)Obj)->bRenderCustomDepth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bRenderCustomDepth = { "bRenderCustomDepth", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FISMComponentDescriptor), &Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bRenderCustomDepth_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bRenderCustomDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bRenderCustomDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bIncludeInHLOD_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bIncludeInHLOD_SetBit(void* Obj)
	{
		((FISMComponentDescriptor*)Obj)->bIncludeInHLOD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bIncludeInHLOD = { "bIncludeInHLOD", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FISMComponentDescriptor), &Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bIncludeInHLOD_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bIncludeInHLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bIncludeInHLOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bVisibleInRayTracing_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bVisibleInRayTracing_SetBit(void* Obj)
	{
		((FISMComponentDescriptor*)Obj)->bVisibleInRayTracing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bVisibleInRayTracing = { "bVisibleInRayTracing", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FISMComponentDescriptor), &Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bVisibleInRayTracing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bVisibleInRayTracing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bVisibleInRayTracing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bHiddenInGame_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bHiddenInGame_SetBit(void* Obj)
	{
		((FISMComponentDescriptor*)Obj)->bHiddenInGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bHiddenInGame = { "bHiddenInGame", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FISMComponentDescriptor), &Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bHiddenInGame_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bHiddenInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bHiddenInGame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bIsEditorOnly_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bIsEditorOnly_SetBit(void* Obj)
	{
		((FISMComponentDescriptor*)Obj)->bIsEditorOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bIsEditorOnly = { "bIsEditorOnly", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FISMComponentDescriptor), &Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bIsEditorOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bIsEditorOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bIsEditorOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bVisible_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((FISMComponentDescriptor*)Obj)->bVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FISMComponentDescriptor), &Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bConsiderForActorPlacementWhenHidden_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bConsiderForActorPlacementWhenHidden_SetBit(void* Obj)
	{
		((FISMComponentDescriptor*)Obj)->bConsiderForActorPlacementWhenHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bConsiderForActorPlacementWhenHidden = { "bConsiderForActorPlacementWhenHidden", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FISMComponentDescriptor), &Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bConsiderForActorPlacementWhenHidden_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bConsiderForActorPlacementWhenHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bConsiderForActorPlacementWhenHidden_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_Hash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_ComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_OverrideMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_OverrideMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_Mobility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_VirtualTextureRenderPassType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_VirtualTextureRenderPassType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_LightmapType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_LightmapType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_LightingChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_RayTracingGroupId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_RayTracingGroupCullingPriority_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_RayTracingGroupCullingPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bHasCustomNavigableGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_CustomDepthStencilWriteMask_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_CustomDepthStencilWriteMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_BodyInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_InstanceStartCullDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_InstanceEndCullDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_VirtualTextureCullMips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_TranslucencySortPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_OverriddenLightMapRes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_CustomDepthStencilValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_HLODBatchingPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_HLODBatchingPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastDynamicShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastStaticShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastContactShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bCastShadowAsTwoSided,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bAffectDynamicIndirectLighting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bAffectDistanceFieldLighting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bReceivesDecals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bOverrideLightMapRes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bUseAsOccluder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bEnableDensityScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bEnableDiscardOnLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bRenderCustomDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bIncludeInHLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bVisibleInRayTracing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bHiddenInGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bIsEditorOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_bConsiderForActorPlacementWhenHidden,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ISMComponentDescriptor",
		sizeof(FISMComponentDescriptor),
		alignof(FISMComponentDescriptor),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FISMComponentDescriptor()
	{
		if (!Z_Registration_Info_UScriptStruct_ISMComponentDescriptor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ISMComponentDescriptor.InnerSingleton, Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ISMComponentDescriptor.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMComponentDescriptor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMComponentDescriptor_h_Statics::ScriptStructInfo[] = {
		{ FISMComponentDescriptor::StaticStruct, Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewStructOps, TEXT("ISMComponentDescriptor"), &Z_Registration_Info_UScriptStruct_ISMComponentDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FISMComponentDescriptor), 1883110407U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMComponentDescriptor_h_1576439372(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMComponentDescriptor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMComponentDescriptor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
