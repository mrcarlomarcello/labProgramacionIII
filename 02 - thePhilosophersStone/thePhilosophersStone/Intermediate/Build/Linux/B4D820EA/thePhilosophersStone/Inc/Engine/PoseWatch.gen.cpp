// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/PoseWatch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseWatch() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPoseWatchFolder_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPoseWatchFolder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UPoseWatch_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPoseWatch();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	void UPoseWatchFolder::StaticRegisterNativesUPoseWatchFolder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseWatchFolder);
	UClass* Z_Construct_UClass_UPoseWatchFolder_NoRegister()
	{
		return UPoseWatchFolder::StaticClass();
	}
	struct Z_Construct_UClass_UPoseWatchFolder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[];
#endif
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsExpanded_MetaData[];
#endif
		static void NewProp_bIsExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExpanded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseWatchFolder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatchFolder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/PoseWatch.h" },
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_Label_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPoseWatchFolder, Label), METADATA_PARAMS(Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0024080800000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPoseWatchFolder, Parent), Z_Construct_UClass_UPoseWatchFolder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsVisible_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
	void Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((UPoseWatchFolder*)Obj)->bIsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPoseWatchFolder), &Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
	void Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsExpanded_SetBit(void* Obj)
	{
		((UPoseWatchFolder*)Obj)->bIsExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsExpanded = { "bIsExpanded", nullptr, (EPropertyFlags)0x0020080800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPoseWatchFolder), &Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsExpanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsExpanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsExpanded_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseWatchFolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsExpanded,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseWatchFolder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseWatchFolder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseWatchFolder_Statics::ClassParams = {
		&UPoseWatchFolder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UPoseWatchFolder_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchFolder_Statics::PropPointers), 0),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPoseWatchFolder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchFolder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseWatchFolder()
	{
		if (!Z_Registration_Info_UClass_UPoseWatchFolder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseWatchFolder.OuterSingleton, Z_Construct_UClass_UPoseWatchFolder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseWatchFolder.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPoseWatchFolder>()
	{
		return UPoseWatchFolder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseWatchFolder);
	void UPoseWatch::StaticRegisterNativesUPoseWatch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseWatch);
	UClass* Z_Construct_UClass_UPoseWatch_NoRegister()
	{
		return UPoseWatch::StaticClass();
	}
	struct Z_Construct_UClass_UPoseWatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeleteOnDeselection_MetaData[];
#endif
		static void NewProp_bDeleteOnDeselection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteOnDeselection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[];
#endif
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Parent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseWatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/PoseWatch.h" },
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatch_Statics::NewProp_Node_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPoseWatch, Node), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseWatch_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::NewProp_Node_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatch_Statics::NewProp_bDeleteOnDeselection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
	void Z_Construct_UClass_UPoseWatch_Statics::NewProp_bDeleteOnDeselection_SetBit(void* Obj)
	{
		((UPoseWatch*)Obj)->bDeleteOnDeselection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_bDeleteOnDeselection = { "bDeleteOnDeselection", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPoseWatch), &Z_Construct_UClass_UPoseWatch_Statics::NewProp_bDeleteOnDeselection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPoseWatch_Statics::NewProp_bDeleteOnDeselection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::NewProp_bDeleteOnDeselection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsVisible_MetaData[] = {
		{ "Comment", "// If true will draw the pose to the viewport\n" },
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
		{ "ToolTip", "If true will draw the pose to the viewport" },
	};
#endif
	void Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((UPoseWatch*)Obj)->bIsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPoseWatch), &Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Comment", "// If true, the pose is able to be drawn to the viewport\n" },
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
		{ "ToolTip", "If true, the pose is able to be drawn to the viewport" },
	};
#endif
	void Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((UPoseWatch*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0020080800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPoseWatch), &Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatch_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPoseWatch, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UPoseWatch_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatch_Statics::NewProp_Label_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPoseWatch, Label), METADATA_PARAMS(Z_Construct_UClass_UPoseWatch_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatch_Statics::NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0024080800000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPoseWatch, Parent), Z_Construct_UClass_UPoseWatchFolder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseWatch_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::NewProp_Parent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseWatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_bDeleteOnDeselection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_Parent,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseWatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseWatch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseWatch_Statics::ClassParams = {
		&UPoseWatch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UPoseWatch_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::PropPointers), 0),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPoseWatch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseWatch()
	{
		if (!Z_Registration_Info_UClass_UPoseWatch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseWatch.OuterSingleton, Z_Construct_UClass_UPoseWatch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseWatch.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPoseWatch>()
	{
		return UPoseWatch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseWatch);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoseWatchFolder, UPoseWatchFolder::StaticClass, TEXT("UPoseWatchFolder"), &Z_Registration_Info_UClass_UPoseWatchFolder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseWatchFolder), 3232302293U) },
		{ Z_Construct_UClass_UPoseWatch, UPoseWatch::StaticClass, TEXT("UPoseWatch"), &Z_Registration_Info_UClass_UPoseWatch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseWatch), 1017320683U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_2226934125(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
