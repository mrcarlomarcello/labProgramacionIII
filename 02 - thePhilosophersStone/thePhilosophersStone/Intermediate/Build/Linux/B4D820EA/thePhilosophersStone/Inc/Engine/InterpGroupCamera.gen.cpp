// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpGroupCamera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpGroupCamera() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraPreviewInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupCamera_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupCamera();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroup();
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnim_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraPreviewInfo;
class UScriptStruct* FCameraPreviewInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraPreviewInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraPreviewInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraPreviewInfo, Z_Construct_UPackage__Script_Engine(), TEXT("CameraPreviewInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CameraPreviewInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraPreviewInfo>()
{
	return FCameraPreviewInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PawnClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSeq_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimSeq;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnInst_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PawnInst;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Preview APawn class for this track\n */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupCamera.h" },
		{ "ToolTip", "Preview APawn class for this track" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraPreviewInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_PawnClass_MetaData[] = {
		{ "Category", "CameraPreviewInfo" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupCamera.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_PawnClass = { "PawnClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraPreviewInfo, PawnClass), Z_Construct_UClass_APawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_PawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_PawnClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_AnimSeq_MetaData[] = {
		{ "Category", "CameraPreviewInfo" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupCamera.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_AnimSeq = { "AnimSeq", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraPreviewInfo, AnimSeq), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_AnimSeq_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_AnimSeq_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "CameraPreviewInfo" },
		{ "Comment", "/* for now this is read-only. It has maintenance issue to be resolved if I enable this.*/" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupCamera.h" },
		{ "ToolTip", "for now this is read-only. It has maintenance issue to be resolved if I enable this." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraPreviewInfo, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "CameraPreviewInfo" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupCamera.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraPreviewInfo, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_PawnInst_MetaData[] = {
		{ "Comment", "/** APawn Inst - CameraAnimInst doesn't really exist in editor **/" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupCamera.h" },
		{ "ToolTip", "APawn Inst - CameraAnimInst doesn't really exist in editor *" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_PawnInst = { "PawnInst", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCameraPreviewInfo, PawnInst), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_PawnInst_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_PawnInst_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_PawnClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_AnimSeq,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewProp_PawnInst,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CameraPreviewInfo",
		sizeof(FCameraPreviewInfo),
		alignof(FCameraPreviewInfo),
		Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraPreviewInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_CameraPreviewInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraPreviewInfo.InnerSingleton, Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CameraPreviewInfo.InnerSingleton;
	}
	void UInterpGroupCamera::StaticRegisterNativesUInterpGroupCamera()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpGroupCamera);
	UClass* Z_Construct_UClass_UInterpGroupCamera_NoRegister()
	{
		return UInterpGroupCamera::StaticClass();
	}
	struct Z_Construct_UClass_UInterpGroupCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraAnimInst_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraAnimInst;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CompressTolerance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpGroupCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroupCamera_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Matinee/InterpGroupCamera.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupCamera.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroupCamera_Statics::NewProp_CameraAnimInst_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupCamera.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterpGroupCamera_Statics::NewProp_CameraAnimInst = { "CameraAnimInst", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpGroupCamera, CameraAnimInst), Z_Construct_UClass_UCameraAnim_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterpGroupCamera_Statics::NewProp_CameraAnimInst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpGroupCamera_Statics::NewProp_CameraAnimInst_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroupCamera_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "InterpGroupCamera" },
		{ "Comment", "// this is interaction property info for CameraAnim\n// this information isn't really saved with it\n" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupCamera.h" },
		{ "ToolTip", "this is interaction property info for CameraAnim\nthis information isn't really saved with it" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpGroupCamera_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpGroupCamera, Target), Z_Construct_UScriptStruct_FCameraPreviewInfo, METADATA_PARAMS(Z_Construct_UClass_UInterpGroupCamera_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpGroupCamera_Statics::NewProp_Target_MetaData)) }; // 1275878635
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroupCamera_Statics::NewProp_CompressTolerance_MetaData[] = {
		{ "Category", "InterpGroupCamera" },
		{ "Comment", "/** When compress, tolerance option **/" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupCamera.h" },
		{ "ToolTip", "When compress, tolerance option *" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpGroupCamera_Statics::NewProp_CompressTolerance = { "CompressTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpGroupCamera, CompressTolerance), METADATA_PARAMS(Z_Construct_UClass_UInterpGroupCamera_Statics::NewProp_CompressTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpGroupCamera_Statics::NewProp_CompressTolerance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpGroupCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroupCamera_Statics::NewProp_CameraAnimInst,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroupCamera_Statics::NewProp_Target,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroupCamera_Statics::NewProp_CompressTolerance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpGroupCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpGroupCamera>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpGroupCamera_Statics::ClassParams = {
		&UInterpGroupCamera::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpGroupCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpGroupCamera_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpGroupCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpGroupCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpGroupCamera()
	{
		if (!Z_Registration_Info_UClass_UInterpGroupCamera.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpGroupCamera.OuterSingleton, Z_Construct_UClass_UInterpGroupCamera_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpGroupCamera.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpGroupCamera>()
	{
		return UInterpGroupCamera::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpGroupCamera);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupCamera_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupCamera_h_Statics::ScriptStructInfo[] = {
		{ FCameraPreviewInfo::StaticStruct, Z_Construct_UScriptStruct_FCameraPreviewInfo_Statics::NewStructOps, TEXT("CameraPreviewInfo"), &Z_Registration_Info_UScriptStruct_CameraPreviewInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraPreviewInfo), 1275878635U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupCamera_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpGroupCamera, UInterpGroupCamera::StaticClass, TEXT("UInterpGroupCamera"), &Z_Registration_Info_UClass_UInterpGroupCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpGroupCamera), 2761352418U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupCamera_h_1519057433(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupCamera_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupCamera_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupCamera_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
