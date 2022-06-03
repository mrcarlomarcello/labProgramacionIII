// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/WorldPartition/WorldPartitionRuntimeCell.h"
#include "Engine/Public/WorldPartition/WorldPartition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeCell() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorContainerID();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWorldPartitionRuntimeCellState();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCell();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellObjectMapping;
class UScriptStruct* FWorldPartitionRuntimeCellObjectMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellObjectMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellObjectMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping, Z_Construct_UPackage__Script_Engine(), TEXT("WorldPartitionRuntimeCellObjectMapping"));
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellObjectMapping.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FWorldPartitionRuntimeCellObjectMapping>()
{
	return FWorldPartitionRuntimeCellObjectMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Package_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Package;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerPackage_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ContainerPackage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedPath_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LoadedPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldPartitionRuntimeCellObjectMapping>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_Package_MetaData[] = {
		{ "Comment", "/** \n\x09 * The name of the package to load to resolve on disk (can contain a single actor or a data chunk)\n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
		{ "ToolTip", "The name of the package to load to resolve on disk (can contain a single actor or a data chunk)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_Package = { "Package", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorldPartitionRuntimeCellObjectMapping, Package), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_Package_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_Package_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_Path_MetaData[] = {
		{ "Comment", "/** \n\x09 * The complete name path of the contained object\n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
		{ "ToolTip", "The complete name path of the contained object" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorldPartitionRuntimeCellObjectMapping, Path), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_ContainerID_MetaData[] = {
		{ "Comment", "/**\n\x09 * ID of the owning container instance\n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
		{ "ToolTip", "ID of the owning container instance" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_ContainerID = { "ContainerID", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorldPartitionRuntimeCellObjectMapping, ContainerID), Z_Construct_UScriptStruct_FActorContainerID, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_ContainerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_ContainerID_MetaData)) }; // 3032495807
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_ContainerTransform_MetaData[] = {
		{ "Comment", "/** \n\x09 * Transform of the owning container instance\n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
		{ "ToolTip", "Transform of the owning container instance" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_ContainerTransform = { "ContainerTransform", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorldPartitionRuntimeCellObjectMapping, ContainerTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_ContainerTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_ContainerTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_ContainerPackage_MetaData[] = {
		{ "Comment", "/**\n\x09 * Package of the owning container instance\n\x09 */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
		{ "ToolTip", "Package of the owning container instance" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_ContainerPackage = { "ContainerPackage", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorldPartitionRuntimeCellObjectMapping, ContainerPackage), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_ContainerPackage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_ContainerPackage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_LoadedPath_MetaData[] = {
		{ "Comment", "/**\n\x09* Loaded actor path (when cooking or pie)\n\x09* \n\x09* Depending on if the actor was part of a container instance or the main partition this will be the path\n\x09* of the loaded or duplicated actor before it is moved into its runtime cell.\n\x09* \n\x09* If the actor was part of the world partition this path should match the Path property.\n\x09*/" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
		{ "ToolTip", "Loaded actor path (when cooking or pie)\n\nDepending on if the actor was part of a container instance or the main partition this will be the path\nof the loaded or duplicated actor before it is moved into its runtime cell.\n\nIf the actor was part of the world partition this path should match the Path property." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_LoadedPath = { "LoadedPath", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorldPartitionRuntimeCellObjectMapping, LoadedPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_LoadedPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_LoadedPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_Package,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_ContainerID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_ContainerTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_ContainerPackage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewProp_LoadedPath,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"WorldPartitionRuntimeCellObjectMapping",
		sizeof(FWorldPartitionRuntimeCellObjectMapping),
		alignof(FWorldPartitionRuntimeCellObjectMapping),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellObjectMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellObjectMapping.InnerSingleton, Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellObjectMapping.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWorldPartitionRuntimeCellState;
	static UEnum* EWorldPartitionRuntimeCellState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWorldPartitionRuntimeCellState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWorldPartitionRuntimeCellState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EWorldPartitionRuntimeCellState, Z_Construct_UPackage__Script_Engine(), TEXT("EWorldPartitionRuntimeCellState"));
		}
		return Z_Registration_Info_UEnum_EWorldPartitionRuntimeCellState.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EWorldPartitionRuntimeCellState>()
	{
		return EWorldPartitionRuntimeCellState_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EWorldPartitionRuntimeCellState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EWorldPartitionRuntimeCellState_Statics::Enumerators[] = {
		{ "EWorldPartitionRuntimeCellState::Unloaded", (int64)EWorldPartitionRuntimeCellState::Unloaded },
		{ "EWorldPartitionRuntimeCellState::Loaded", (int64)EWorldPartitionRuntimeCellState::Loaded },
		{ "EWorldPartitionRuntimeCellState::Activated", (int64)EWorldPartitionRuntimeCellState::Activated },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EWorldPartitionRuntimeCellState_Statics::Enum_MetaDataParams[] = {
		{ "Activated.Name", "EWorldPartitionRuntimeCellState::Activated" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Cell State\n */" },
		{ "Loaded.Name", "EWorldPartitionRuntimeCellState::Loaded" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
		{ "ToolTip", "Cell State" },
		{ "Unloaded.Name", "EWorldPartitionRuntimeCellState::Unloaded" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EWorldPartitionRuntimeCellState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EWorldPartitionRuntimeCellState",
		"EWorldPartitionRuntimeCellState",
		Z_Construct_UEnum_Engine_EWorldPartitionRuntimeCellState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWorldPartitionRuntimeCellState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EWorldPartitionRuntimeCellState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWorldPartitionRuntimeCellState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EWorldPartitionRuntimeCellState()
	{
		if (!Z_Registration_Info_UEnum_EWorldPartitionRuntimeCellState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWorldPartitionRuntimeCellState.InnerSingleton, Z_Construct_UEnum_Engine_EWorldPartitionRuntimeCellState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWorldPartitionRuntimeCellState.InnerSingleton;
	}
	void UWorldPartitionRuntimeCell::StaticRegisterNativesUWorldPartitionRuntimeCell()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionRuntimeCell);
	UClass* Z_Construct_UClass_UWorldPartitionRuntimeCell_NoRegister()
	{
		return UWorldPartitionRuntimeCell::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAlwaysLoaded_MetaData[];
#endif
		static void NewProp_bIsAlwaysLoaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAlwaysLoaded;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DataLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Coords_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Coords;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GridName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DebugName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClientOnlyVisible_MetaData[];
#endif
		static void NewProp_bClientOnlyVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClientOnlyVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsHLOD_MetaData[];
#endif
		static void NewProp_bIsHLOD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBlockOnSlowLoading_MetaData[];
#endif
		static void NewProp_bBlockOnSlowLoading_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockOnSlowLoading;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents a PIE/Game streaming cell which points to external actor/data chunk packages\n */" },
		{ "IncludePath", "WorldPartition/WorldPartitionRuntimeCell.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
		{ "ToolTip", "Represents a PIE/Game streaming cell which points to external actor/data chunk packages" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bIsAlwaysLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bIsAlwaysLoaded_SetBit(void* Obj)
	{
		((UWorldPartitionRuntimeCell*)Obj)->bIsAlwaysLoaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bIsAlwaysLoaded = { "bIsAlwaysLoaded", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWorldPartitionRuntimeCell), &Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bIsAlwaysLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bIsAlwaysLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bIsAlwaysLoaded_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_DataLayers_Inner = { "DataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_DataLayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWorldPartitionRuntimeCell, DataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_DataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_DataLayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_Coords_MetaData[] = {
		{ "Comment", "// Debug Info\n" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
		{ "ToolTip", "Debug Info" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_Coords = { "Coords", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWorldPartitionRuntimeCell, Coords), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_Coords_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_Coords_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_GridName_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_GridName = { "GridName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWorldPartitionRuntimeCell, GridName), METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_GridName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_GridName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_DebugName_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWorldPartitionRuntimeCell, DebugName), METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_DebugName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_DebugName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_Priority_MetaData[] = {
		{ "Comment", "// Custom Priority\n" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
		{ "ToolTip", "Custom Priority" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWorldPartitionRuntimeCell, Priority), METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bClientOnlyVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bClientOnlyVisible_SetBit(void* Obj)
	{
		((UWorldPartitionRuntimeCell*)Obj)->bClientOnlyVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bClientOnlyVisible = { "bClientOnlyVisible", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWorldPartitionRuntimeCell), &Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bClientOnlyVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bClientOnlyVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bClientOnlyVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bIsHLOD_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bIsHLOD_SetBit(void* Obj)
	{
		((UWorldPartitionRuntimeCell*)Obj)->bIsHLOD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bIsHLOD = { "bIsHLOD", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWorldPartitionRuntimeCell), &Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bIsHLOD_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bIsHLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bIsHLOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bBlockOnSlowLoading_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCell.h" },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bBlockOnSlowLoading_SetBit(void* Obj)
	{
		((UWorldPartitionRuntimeCell*)Obj)->bBlockOnSlowLoading = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bBlockOnSlowLoading = { "bBlockOnSlowLoading", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWorldPartitionRuntimeCell), &Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bBlockOnSlowLoading_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bBlockOnSlowLoading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bBlockOnSlowLoading_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bIsAlwaysLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_DataLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_DataLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_Coords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_GridName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_DebugName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bClientOnlyVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bIsHLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::NewProp_bBlockOnSlowLoading,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionRuntimeCell>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::ClassParams = {
		&UWorldPartitionRuntimeCell::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionRuntimeCell()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionRuntimeCell.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionRuntimeCell.OuterSingleton, Z_Construct_UClass_UWorldPartitionRuntimeCell_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionRuntimeCell.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UWorldPartitionRuntimeCell>()
	{
		return UWorldPartitionRuntimeCell::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionRuntimeCell);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_Statics::EnumInfo[] = {
		{ EWorldPartitionRuntimeCellState_StaticEnum, TEXT("EWorldPartitionRuntimeCellState"), &Z_Registration_Info_UEnum_EWorldPartitionRuntimeCellState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 245423371U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_Statics::ScriptStructInfo[] = {
		{ FWorldPartitionRuntimeCellObjectMapping::StaticStruct, Z_Construct_UScriptStruct_FWorldPartitionRuntimeCellObjectMapping_Statics::NewStructOps, TEXT("WorldPartitionRuntimeCellObjectMapping"), &Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeCellObjectMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldPartitionRuntimeCellObjectMapping), 4258931674U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionRuntimeCell, UWorldPartitionRuntimeCell::StaticClass, TEXT("UWorldPartitionRuntimeCell"), &Z_Registration_Info_UClass_UWorldPartitionRuntimeCell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionRuntimeCell), 1489115342U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_2957948506(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCell_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
