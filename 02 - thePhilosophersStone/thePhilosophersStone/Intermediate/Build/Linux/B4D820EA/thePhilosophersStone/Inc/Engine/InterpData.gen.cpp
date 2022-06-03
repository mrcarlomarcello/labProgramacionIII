// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpCurveEdSetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpFilter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupDirector_NoRegister();
// End Cross Module References
	void UInterpData::StaticRegisterNativesUInterpData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpData);
	UClass* Z_Construct_UClass_UInterpData_NoRegister()
	{
		return UInterpData::StaticClass();
	}
	struct Z_Construct_UClass_UInterpData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathBuildTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PathBuildTime;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InterpGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InterpGroups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveEdSetup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurveEdSetup;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InterpFilters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpFilters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InterpFilters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedFilter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectedFilter;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultFilters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFilters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultFilters;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdSectionStart_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EdSectionStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdSectionEnd_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EdSectionEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBakeAndPrune_MetaData[];
#endif
		static void NewProp_bShouldBakeAndPrune_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBakeAndPrune;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedDirectorGroup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedDirectorGroup;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AllEventNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllEventNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllEventNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Interpolation data, containing keyframe tracks, event tracks etc.\n * This does not contain any  AActor  references or state, so can safely be stored in\n * packages, shared between multiple MatineeActors etc.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpData.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
		{ "ToolTip", "Interpolation data, containing keyframe tracks, event tracks etc.\nThis does not contain any  AActor  references or state, so can safely be stored in\npackages, shared between multiple MatineeActors etc." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpData_Statics::NewProp_InterpLength_MetaData[] = {
		{ "Category", "InterpData" },
		{ "Comment", "/** Duration of interpolation sequence - in seconds. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
		{ "ToolTip", "Duration of interpolation sequence - in seconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_InterpLength = { "InterpLength", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpData, InterpLength), METADATA_PARAMS(Z_Construct_UClass_UInterpData_Statics::NewProp_InterpLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpData_Statics::NewProp_InterpLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpData_Statics::NewProp_PathBuildTime_MetaData[] = {
		{ "Comment", "/** Position in Interp to move things to for path-building in editor. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
		{ "ToolTip", "Position in Interp to move things to for path-building in editor." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_PathBuildTime = { "PathBuildTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpData, PathBuildTime), METADATA_PARAMS(Z_Construct_UClass_UInterpData_Statics::NewProp_PathBuildTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpData_Statics::NewProp_PathBuildTime_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_InterpGroups_Inner = { "InterpGroups", nullptr, (EPropertyFlags)0x0004000000000008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInterpGroup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpData_Statics::NewProp_InterpGroups_MetaData[] = {
		{ "Category", "InterpData" },
		{ "Comment", "/** Actual interpolation data. Groups of InterpTracks. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
		{ "ToolTip", "Actual interpolation data. Groups of InterpTracks." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_InterpGroups = { "InterpGroups", nullptr, (EPropertyFlags)0x001400000000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpData, InterpGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterpData_Statics::NewProp_InterpGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpData_Statics::NewProp_InterpGroups_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpData_Statics::NewProp_CurveEdSetup_MetaData[] = {
		{ "Comment", "/** Used for curve editor to remember curve-editing setup. Only loaded in editor. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
		{ "ToolTip", "Used for curve editor to remember curve-editing setup. Only loaded in editor." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_CurveEdSetup = { "CurveEdSetup", nullptr, (EPropertyFlags)0x0014000000000008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpData, CurveEdSetup), Z_Construct_UClass_UInterpCurveEdSetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterpData_Statics::NewProp_CurveEdSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpData_Statics::NewProp_CurveEdSetup_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_InterpFilters_Inner = { "InterpFilters", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInterpFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpData_Statics::NewProp_InterpFilters_MetaData[] = {
		{ "Comment", "/** Used for filtering which tracks are currently visible. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
		{ "ToolTip", "Used for filtering which tracks are currently visible." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_InterpFilters = { "InterpFilters", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpData, InterpFilters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterpData_Statics::NewProp_InterpFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpData_Statics::NewProp_InterpFilters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpData_Statics::NewProp_SelectedFilter_MetaData[] = {
		{ "Comment", "/** The currently selected filter. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
		{ "ToolTip", "The currently selected filter." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_SelectedFilter = { "SelectedFilter", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpData, SelectedFilter), Z_Construct_UClass_UInterpFilter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterpData_Statics::NewProp_SelectedFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpData_Statics::NewProp_SelectedFilter_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_DefaultFilters_Inner = { "DefaultFilters", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInterpFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpData_Statics::NewProp_DefaultFilters_MetaData[] = {
		{ "Comment", "/** Array of default filters. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
		{ "ToolTip", "Array of default filters." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_DefaultFilters = { "DefaultFilters", nullptr, (EPropertyFlags)0x0014000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpData, DefaultFilters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterpData_Statics::NewProp_DefaultFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpData_Statics::NewProp_DefaultFilters_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpData_Statics::NewProp_EdSectionStart_MetaData[] = {
		{ "Comment", "/** Used in editor for defining sections to loop, stretch etc. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
		{ "ToolTip", "Used in editor for defining sections to loop, stretch etc." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_EdSectionStart = { "EdSectionStart", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpData, EdSectionStart), METADATA_PARAMS(Z_Construct_UClass_UInterpData_Statics::NewProp_EdSectionStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpData_Statics::NewProp_EdSectionStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpData_Statics::NewProp_EdSectionEnd_MetaData[] = {
		{ "Comment", "/** Used in editor for defining sections to loop, stretch etc. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
		{ "ToolTip", "Used in editor for defining sections to loop, stretch etc." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_EdSectionEnd = { "EdSectionEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpData, EdSectionEnd), METADATA_PARAMS(Z_Construct_UClass_UInterpData_Statics::NewProp_EdSectionEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpData_Statics::NewProp_EdSectionEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpData_Statics::NewProp_bShouldBakeAndPrune_MetaData[] = {
		{ "Category", "InterpData" },
		{ "Comment", "/** If true, then the matinee should be baked and pruned at cook time. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
		{ "ToolTip", "If true, then the matinee should be baked and pruned at cook time." },
	};
#endif
	void Z_Construct_UClass_UInterpData_Statics::NewProp_bShouldBakeAndPrune_SetBit(void* Obj)
	{
		((UInterpData*)Obj)->bShouldBakeAndPrune = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_bShouldBakeAndPrune = { "bShouldBakeAndPrune", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpData), &Z_Construct_UClass_UInterpData_Statics::NewProp_bShouldBakeAndPrune_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpData_Statics::NewProp_bShouldBakeAndPrune_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpData_Statics::NewProp_bShouldBakeAndPrune_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpData_Statics::NewProp_CachedDirectorGroup_MetaData[] = {
		{ "Comment", "/** Cached version of the director group, if any, for easy access while in game */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
		{ "ToolTip", "Cached version of the director group, if any, for easy access while in game" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_CachedDirectorGroup = { "CachedDirectorGroup", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpData, CachedDirectorGroup), Z_Construct_UClass_UInterpGroupDirector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterpData_Statics::NewProp_CachedDirectorGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpData_Statics::NewProp_CachedDirectorGroup_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_AllEventNames_Inner = { "AllEventNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpData_Statics::NewProp_AllEventNames_MetaData[] = {
		{ "Comment", "/** Unique names of all events contained across all event tracks */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpData.h" },
		{ "ToolTip", "Unique names of all events contained across all event tracks" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpData_Statics::NewProp_AllEventNames = { "AllEventNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpData, AllEventNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterpData_Statics::NewProp_AllEventNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpData_Statics::NewProp_AllEventNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_InterpLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_PathBuildTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_InterpGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_InterpGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_CurveEdSetup,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_InterpFilters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_InterpFilters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_SelectedFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_DefaultFilters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_DefaultFilters,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_EdSectionStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_EdSectionEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_bShouldBakeAndPrune,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_CachedDirectorGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_AllEventNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpData_Statics::NewProp_AllEventNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpData_Statics::ClassParams = {
		&UInterpData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpData_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpData()
	{
		if (!Z_Registration_Info_UClass_UInterpData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpData.OuterSingleton, Z_Construct_UClass_UInterpData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpData.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpData>()
	{
		return UInterpData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpData);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpData, UInterpData::StaticClass, TEXT("UInterpData"), &Z_Registration_Info_UClass_UInterpData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpData), 1966817230U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpData_h_2912363977(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
