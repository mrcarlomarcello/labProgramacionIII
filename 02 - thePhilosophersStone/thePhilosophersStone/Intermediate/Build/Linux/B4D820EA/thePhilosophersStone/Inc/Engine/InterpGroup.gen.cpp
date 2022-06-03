// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpGroup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpGroup() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterpEdSelKey();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroup();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterpEdSelKey;
class UScriptStruct* FInterpEdSelKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterpEdSelKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterpEdSelKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterpEdSelKey, Z_Construct_UPackage__Script_Engine(), TEXT("InterpEdSelKey"));
	}
	return Z_Registration_Info_UScriptStruct_InterpEdSelKey.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInterpEdSelKey>()
{
	return FInterpEdSelKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInterpEdSelKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Track;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_KeyIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnsnappedPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnsnappedPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * A group, associated with a particular  AActor  or set of Actors, which contains a set of InterpTracks for interpolating \n * properties of the  AActor  over time.\n * The Outer of an UInterpGroup is an InterpData.\n */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
		{ "ToolTip", "A group, associated with a particular  AActor  or set of Actors, which contains a set of InterpTracks for interpolating\nproperties of the  AActor  over time.\nThe Outer of an UInterpGroup is an InterpData." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterpEdSelKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_Group_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInterpEdSelKey, Group), Z_Construct_UClass_UInterpGroup_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_Track_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInterpEdSelKey, Track), Z_Construct_UClass_UInterpTrack_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_Track_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_KeyIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_KeyIndex = { "KeyIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInterpEdSelKey, KeyIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_KeyIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_KeyIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_UnsnappedPosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_UnsnappedPosition = { "UnsnappedPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInterpEdSelKey, UnsnappedPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_UnsnappedPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_UnsnappedPosition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_Group,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_KeyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewProp_UnsnappedPosition,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InterpEdSelKey",
		sizeof(FInterpEdSelKey),
		alignof(FInterpEdSelKey),
		Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInterpEdSelKey()
	{
		if (!Z_Registration_Info_UScriptStruct_InterpEdSelKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterpEdSelKey.InnerSingleton, Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InterpEdSelKey.InnerSingleton;
	}
	void UInterpGroup::StaticRegisterNativesUInterpGroup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpGroup);
	UClass* Z_Construct_UClass_UInterpGroup_NoRegister()
	{
		return UInterpGroup::StaticClass();
	}
	struct Z_Construct_UClass_UInterpGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InterpTracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpTracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InterpTracks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCollapsed_MetaData[];
#endif
		static void NewProp_bCollapsed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollapsed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFolder_MetaData[];
#endif
		static void NewProp_bIsFolder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsParented_MetaData[];
#endif
		static void NewProp_bIsParented_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsParented;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSelected_MetaData[];
#endif
		static void NewProp_bIsSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroup_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpGroup.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterpGroup_Statics::NewProp_InterpTracks_Inner = { "InterpTracks", nullptr, (EPropertyFlags)0x0004000000000008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInterpTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroup_Statics::NewProp_InterpTracks_MetaData[] = {
		{ "Category", "InterpGroup" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpGroup_Statics::NewProp_InterpTracks = { "InterpTracks", nullptr, (EPropertyFlags)0x001400000000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpGroup, InterpTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterpGroup_Statics::NewProp_InterpTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpGroup_Statics::NewProp_InterpTracks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroup_Statics::NewProp_GroupName_MetaData[] = {
		{ "Comment", "/** \n\x09 *\x09Within an InterpData, all GroupNames must be unique. \n\x09 *\x09Used for naming Variable connectors on the Action in Kismet and finding each groups object.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
		{ "ToolTip", "Within an InterpData, all GroupNames must be unique.\nUsed for naming Variable connectors on the Action in Kismet and finding each groups object." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInterpGroup_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpGroup, GroupName), METADATA_PARAMS(Z_Construct_UClass_UInterpGroup_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpGroup_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroup_Statics::NewProp_GroupColor_MetaData[] = {
		{ "Category", "InterpGroup" },
		{ "Comment", "/** Colour used for drawing tracks etc. related to this group. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
		{ "ToolTip", "Colour used for drawing tracks etc. related to this group." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpGroup_Statics::NewProp_GroupColor = { "GroupColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpGroup, GroupColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UInterpGroup_Statics::NewProp_GroupColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpGroup_Statics::NewProp_GroupColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroup_Statics::NewProp_bCollapsed_MetaData[] = {
		{ "Comment", "/** Whether or not this group is folded away in the editor. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
		{ "ToolTip", "Whether or not this group is folded away in the editor." },
	};
#endif
	void Z_Construct_UClass_UInterpGroup_Statics::NewProp_bCollapsed_SetBit(void* Obj)
	{
		((UInterpGroup*)Obj)->bCollapsed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpGroup_Statics::NewProp_bCollapsed = { "bCollapsed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpGroup), &Z_Construct_UClass_UInterpGroup_Statics::NewProp_bCollapsed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpGroup_Statics::NewProp_bCollapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpGroup_Statics::NewProp_bCollapsed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroup_Statics::NewProp_bVisible_MetaData[] = {
		{ "Comment", "/** Whether or not this group is visible in the editor. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
		{ "ToolTip", "Whether or not this group is visible in the editor." },
	};
#endif
	void Z_Construct_UClass_UInterpGroup_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((UInterpGroup*)Obj)->bVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpGroup_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpGroup), &Z_Construct_UClass_UInterpGroup_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpGroup_Statics::NewProp_bVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpGroup_Statics::NewProp_bVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsFolder_MetaData[] = {
		{ "Comment", "/** When enabled, this group is treated like a folder in the editor, which should only be used for organization.  Folders are never associated with actors and don't have a presence in the Kismet graph. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
		{ "ToolTip", "When enabled, this group is treated like a folder in the editor, which should only be used for organization.  Folders are never associated with actors and don't have a presence in the Kismet graph." },
	};
#endif
	void Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsFolder_SetBit(void* Obj)
	{
		((UInterpGroup*)Obj)->bIsFolder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsFolder = { "bIsFolder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpGroup), &Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsFolder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsFolder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsParented_MetaData[] = {
		{ "Comment", "/** When true, this group is considered a 'visual child' of another group.  This doesn't at all affect the behavior of the group, it's only for visual organization.  Also, it's implied that the parent is the next prior group in the array that doesn't have a parent. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
		{ "ToolTip", "When true, this group is considered a 'visual child' of another group.  This doesn't at all affect the behavior of the group, it's only for visual organization.  Also, it's implied that the parent is the next prior group in the array that doesn't have a parent." },
	};
#endif
	void Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsParented_SetBit(void* Obj)
	{
		((UInterpGroup*)Obj)->bIsParented = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsParented = { "bIsParented", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpGroup), &Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsParented_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsParented_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsParented_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsSelected_MetaData[] = {
		{ "Comment", "/** When enabled, this group will be selected in the interp editor. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroup.h" },
		{ "ToolTip", "When enabled, this group will be selected in the interp editor." },
	};
#endif
	void Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsSelected_SetBit(void* Obj)
	{
		((UInterpGroup*)Obj)->bIsSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsSelected = { "bIsSelected", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpGroup), &Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsSelected_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroup_Statics::NewProp_InterpTracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroup_Statics::NewProp_InterpTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroup_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroup_Statics::NewProp_GroupColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroup_Statics::NewProp_bCollapsed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroup_Statics::NewProp_bVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsParented,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroup_Statics::NewProp_bIsSelected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpGroup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpGroup_Statics::ClassParams = {
		&UInterpGroup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpGroup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpGroup_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpGroup()
	{
		if (!Z_Registration_Info_UClass_UInterpGroup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpGroup.OuterSingleton, Z_Construct_UClass_UInterpGroup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpGroup.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpGroup>()
	{
		return UInterpGroup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpGroup);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroup_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroup_h_Statics::ScriptStructInfo[] = {
		{ FInterpEdSelKey::StaticStruct, Z_Construct_UScriptStruct_FInterpEdSelKey_Statics::NewStructOps, TEXT("InterpEdSelKey"), &Z_Registration_Info_UScriptStruct_InterpEdSelKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterpEdSelKey), 481668488U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpGroup, UInterpGroup::StaticClass, TEXT("UInterpGroup"), &Z_Registration_Info_UClass_UInterpGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpGroup), 4095705792U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroup_h_2058834052(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroup_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroup_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroup_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
