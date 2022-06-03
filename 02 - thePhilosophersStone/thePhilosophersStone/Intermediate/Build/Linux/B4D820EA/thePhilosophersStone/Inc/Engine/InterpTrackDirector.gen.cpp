// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpTrackDirector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackDirector() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectorTrackCut();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackDirector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackDirector();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DirectorTrackCut;
class UScriptStruct* FDirectorTrackCut::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DirectorTrackCut.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DirectorTrackCut.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDirectorTrackCut, Z_Construct_UPackage__Script_Engine(), TEXT("DirectorTrackCut"));
	}
	return Z_Registration_Info_UScriptStruct_DirectorTrackCut.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDirectorTrackCut>()
{
	return FDirectorTrackCut::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDirectorTrackCut_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TransitionTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetCamGroup_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetCamGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ShotNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Information for one cut in this track. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackDirector.h" },
		{ "ToolTip", "Information for one cut in this track." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDirectorTrackCut>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_Time_MetaData[] = {
		{ "Comment", "/** Time to perform the cut. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackDirector.h" },
		{ "ToolTip", "Time to perform the cut." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDirectorTrackCut, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_TransitionTime_MetaData[] = {
		{ "Comment", "/** Time taken to move view to new camera. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackDirector.h" },
		{ "ToolTip", "Time taken to move view to new camera." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_TransitionTime = { "TransitionTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDirectorTrackCut, TransitionTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_TransitionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_TransitionTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_TargetCamGroup_MetaData[] = {
		{ "Category", "DirectorTrackCut" },
		{ "Comment", "/** GroupName of UInterpGroup to cut viewpoint to. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackDirector.h" },
		{ "ToolTip", "GroupName of UInterpGroup to cut viewpoint to." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_TargetCamGroup = { "TargetCamGroup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDirectorTrackCut, TargetCamGroup), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_TargetCamGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_TargetCamGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_ShotNumber_MetaData[] = {
		{ "Comment", "/** Shot number for developer reference */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackDirector.h" },
		{ "ToolTip", "Shot number for developer reference" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_ShotNumber = { "ShotNumber", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDirectorTrackCut, ShotNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_ShotNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_ShotNumber_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_TransitionTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_TargetCamGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewProp_ShotNumber,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DirectorTrackCut",
		sizeof(FDirectorTrackCut),
		alignof(FDirectorTrackCut),
		Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDirectorTrackCut()
	{
		if (!Z_Registration_Info_UScriptStruct_DirectorTrackCut.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DirectorTrackCut.InnerSingleton, Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DirectorTrackCut.InnerSingleton;
	}
	void UInterpTrackDirector::StaticRegisterNativesUInterpTrackDirector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpTrackDirector);
	UClass* Z_Construct_UClass_UInterpTrackDirector_NoRegister()
	{
		return UInterpTrackDirector::StaticClass();
	}
	struct Z_Construct_UClass_UInterpTrackDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CutTrack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CutTrack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CutTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSimulateCameraCutsOnClients_MetaData[];
#endif
		static void NewProp_bSimulateCameraCutsOnClients_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimulateCameraCutsOnClients;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewCamera;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpTrackDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterpTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackDirector_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Director Track" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Matinee/InterpTrackDirector.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackDirector.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_CutTrack_Inner = { "CutTrack", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDirectorTrackCut, METADATA_PARAMS(nullptr, 0) }; // 755321210
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_CutTrack_MetaData[] = {
		{ "Comment", "/** Array of cuts between cameras. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackDirector.h" },
		{ "ToolTip", "Array of cuts between cameras." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_CutTrack = { "CutTrack", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackDirector, CutTrack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_CutTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_CutTrack_MetaData)) }; // 755321210
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_bSimulateCameraCutsOnClients_MetaData[] = {
		{ "Category", "InterpTrackDirector" },
		{ "Comment", "/** True to allow clients to simulate their own camera cuts.  Can help with latency-induced timing issues. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackDirector.h" },
		{ "ToolTip", "True to allow clients to simulate their own camera cuts.  Can help with latency-induced timing issues." },
	};
#endif
	void Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_bSimulateCameraCutsOnClients_SetBit(void* Obj)
	{
		((UInterpTrackDirector*)Obj)->bSimulateCameraCutsOnClients = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_bSimulateCameraCutsOnClients = { "bSimulateCameraCutsOnClients", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UInterpTrackDirector), &Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_bSimulateCameraCutsOnClients_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_bSimulateCameraCutsOnClients_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_bSimulateCameraCutsOnClients_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_PreviewCamera_MetaData[] = {
		{ "Comment", "/** The camera actor which the track is currently focused on. Only valid if this track or it's group is selected */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpTrackDirector.h" },
		{ "ToolTip", "The camera actor which the track is currently focused on. Only valid if this track or it's group is selected" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_PreviewCamera = { "PreviewCamera", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpTrackDirector, PreviewCamera), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_PreviewCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_PreviewCamera_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpTrackDirector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_CutTrack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_CutTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_bSimulateCameraCutsOnClients,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpTrackDirector_Statics::NewProp_PreviewCamera,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpTrackDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpTrackDirector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpTrackDirector_Statics::ClassParams = {
		&UInterpTrackDirector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpTrackDirector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackDirector_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpTrackDirector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpTrackDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpTrackDirector()
	{
		if (!Z_Registration_Info_UClass_UInterpTrackDirector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpTrackDirector.OuterSingleton, Z_Construct_UClass_UInterpTrackDirector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpTrackDirector.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpTrackDirector>()
	{
		return UInterpTrackDirector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackDirector);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackDirector_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackDirector_h_Statics::ScriptStructInfo[] = {
		{ FDirectorTrackCut::StaticStruct, Z_Construct_UScriptStruct_FDirectorTrackCut_Statics::NewStructOps, TEXT("DirectorTrackCut"), &Z_Registration_Info_UScriptStruct_DirectorTrackCut, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDirectorTrackCut), 755321210U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackDirector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpTrackDirector, UInterpTrackDirector::StaticClass, TEXT("UInterpTrackDirector"), &Z_Registration_Info_UClass_UInterpTrackDirector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpTrackDirector), 50481116U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackDirector_h_4285754435(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackDirector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackDirector_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackDirector_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpTrackDirector_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
