// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Animation/AnimInstanceProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimInstanceProxy() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugItemType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FQueuedDrawDebugItem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESceneDepthPriorityGroup();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDrawDebugItemType;
	static UEnum* EDrawDebugItemType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDrawDebugItemType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDrawDebugItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDrawDebugItemType, Z_Construct_UPackage__Script_Engine(), TEXT("EDrawDebugItemType"));
		}
		return Z_Registration_Info_UEnum_EDrawDebugItemType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EDrawDebugItemType::Type>()
	{
		return EDrawDebugItemType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EDrawDebugItemType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EDrawDebugItemType_Statics::Enumerators[] = {
		{ "EDrawDebugItemType::DirectionalArrow", (int64)EDrawDebugItemType::DirectionalArrow },
		{ "EDrawDebugItemType::Sphere", (int64)EDrawDebugItemType::Sphere },
		{ "EDrawDebugItemType::Line", (int64)EDrawDebugItemType::Line },
		{ "EDrawDebugItemType::OnScreenMessage", (int64)EDrawDebugItemType::OnScreenMessage },
		{ "EDrawDebugItemType::CoordinateSystem", (int64)EDrawDebugItemType::CoordinateSystem },
		{ "EDrawDebugItemType::Point", (int64)EDrawDebugItemType::Point },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EDrawDebugItemType_Statics::Enum_MetaDataParams[] = {
		{ "CoordinateSystem.Name", "EDrawDebugItemType::CoordinateSystem" },
		{ "DirectionalArrow.Name", "EDrawDebugItemType::DirectionalArrow" },
		{ "Line.Name", "EDrawDebugItemType::Line" },
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
		{ "OnScreenMessage.Name", "EDrawDebugItemType::OnScreenMessage" },
		{ "Point.Name", "EDrawDebugItemType::Point" },
		{ "Sphere.Name", "EDrawDebugItemType::Sphere" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EDrawDebugItemType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EDrawDebugItemType",
		"EDrawDebugItemType::Type",
		Z_Construct_UEnum_Engine_EDrawDebugItemType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDrawDebugItemType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EDrawDebugItemType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDrawDebugItemType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EDrawDebugItemType()
	{
		if (!Z_Registration_Info_UEnum_EDrawDebugItemType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDrawDebugItemType.InnerSingleton, Z_Construct_UEnum_Engine_EDrawDebugItemType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDrawDebugItemType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QueuedDrawDebugItem;
class UScriptStruct* FQueuedDrawDebugItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QueuedDrawDebugItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QueuedDrawDebugItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQueuedDrawDebugItem, Z_Construct_UPackage__Script_Engine(), TEXT("QueuedDrawDebugItem"));
	}
	return Z_Registration_Info_UScriptStruct_QueuedDrawDebugItem.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FQueuedDrawDebugItem>()
{
	return FQueuedDrawDebugItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartLoc_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartLoc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndLoc_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndLoc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Segments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPersistentLines_MetaData[];
#endif
		static void NewProp_bPersistentLines_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPersistentLines;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LifeTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthPriority_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DepthPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQueuedDrawDebugItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_ItemType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueuedDrawDebugItem, ItemType), Z_Construct_UEnum_Engine_EDrawDebugItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_ItemType_MetaData)) }; // 2023073382
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_StartLoc_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_StartLoc = { "StartLoc", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueuedDrawDebugItem, StartLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_StartLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_StartLoc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_EndLoc_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_EndLoc = { "EndLoc", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueuedDrawDebugItem, EndLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_EndLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_EndLoc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Center_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueuedDrawDebugItem, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueuedDrawDebugItem, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Radius_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueuedDrawDebugItem, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Size_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueuedDrawDebugItem, Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Segments_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueuedDrawDebugItem, Segments), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Segments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Segments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueuedDrawDebugItem, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_bPersistentLines_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_bPersistentLines_SetBit(void* Obj)
	{
		((FQueuedDrawDebugItem*)Obj)->bPersistentLines = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_bPersistentLines = { "bPersistentLines", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FQueuedDrawDebugItem), &Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_bPersistentLines_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_bPersistentLines_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_bPersistentLines_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_LifeTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_LifeTime = { "LifeTime", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueuedDrawDebugItem, LifeTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_LifeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_LifeTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Thickness_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueuedDrawDebugItem, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Message_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueuedDrawDebugItem, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_TextScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_TextScale = { "TextScale", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueuedDrawDebugItem, TextScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_TextScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_TextScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_DepthPriority_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_DepthPriority = { "DepthPriority", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQueuedDrawDebugItem, DepthPriority), Z_Construct_UEnum_Engine_ESceneDepthPriorityGroup, METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_DepthPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_DepthPriority_MetaData)) }; // 2382035653
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_ItemType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_StartLoc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_EndLoc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Segments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_bPersistentLines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_LifeTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_TextScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewProp_DepthPriority,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"QueuedDrawDebugItem",
		sizeof(FQueuedDrawDebugItem),
		alignof(FQueuedDrawDebugItem),
		Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQueuedDrawDebugItem()
	{
		if (!Z_Registration_Info_UScriptStruct_QueuedDrawDebugItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QueuedDrawDebugItem.InnerSingleton, Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QueuedDrawDebugItem.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimInstanceProxy;
class UScriptStruct* FAnimInstanceProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimInstanceProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimInstanceProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimInstanceProxy, Z_Construct_UPackage__Script_Engine(), TEXT("AnimInstanceProxy"));
	}
	return Z_Registration_Info_UScriptStruct_AnimInstanceProxy.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimInstanceProxy>()
{
	return FAnimInstanceProxy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimInstanceProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimInstanceProxy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Proxy object passed around during animation tree update in lieu of a UAnimInstance */" },
		{ "DisplayName", "Native Variables" },
		{ "ModuleRelativePath", "Public/Animation/AnimInstanceProxy.h" },
		{ "ToolTip", "Proxy object passed around during animation tree update in lieu of a UAnimInstance" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimInstanceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimInstanceProxy>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimInstanceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimInstanceProxy",
		sizeof(FAnimInstanceProxy),
		alignof(FAnimInstanceProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimInstanceProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimInstanceProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimInstanceProxy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimInstanceProxy.InnerSingleton, Z_Construct_UScriptStruct_FAnimInstanceProxy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimInstanceProxy.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimInstanceProxy_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimInstanceProxy_h_Statics::EnumInfo[] = {
		{ EDrawDebugItemType_StaticEnum, TEXT("EDrawDebugItemType"), &Z_Registration_Info_UEnum_EDrawDebugItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2023073382U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimInstanceProxy_h_Statics::ScriptStructInfo[] = {
		{ FQueuedDrawDebugItem::StaticStruct, Z_Construct_UScriptStruct_FQueuedDrawDebugItem_Statics::NewStructOps, TEXT("QueuedDrawDebugItem"), &Z_Registration_Info_UScriptStruct_QueuedDrawDebugItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQueuedDrawDebugItem), 2562054150U) },
		{ FAnimInstanceProxy::StaticStruct, Z_Construct_UScriptStruct_FAnimInstanceProxy_Statics::NewStructOps, TEXT("AnimInstanceProxy"), &Z_Registration_Info_UScriptStruct_AnimInstanceProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimInstanceProxy), 1118875064U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimInstanceProxy_h_1716666143(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimInstanceProxy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimInstanceProxy_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimInstanceProxy_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimInstanceProxy_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
