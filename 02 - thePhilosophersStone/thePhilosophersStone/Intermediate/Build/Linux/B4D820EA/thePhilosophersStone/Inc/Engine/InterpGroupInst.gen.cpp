// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/InterpGroupInst.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpGroupInst() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupInst_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupInst();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst_NoRegister();
// End Cross Module References
	void UInterpGroupInst::StaticRegisterNativesUInterpGroupInst()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpGroupInst);
	UClass* Z_Construct_UClass_UInterpGroupInst_NoRegister()
	{
		return UInterpGroupInst::StaticClass();
	}
	struct Z_Construct_UClass_UInterpGroupInst_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GroupActor;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TrackInst_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackInst_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackInst;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpGroupInst_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroupInst_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matinee/InterpGroupInst.h" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupInst.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_Group_MetaData[] = {
		{ "Comment", "/** UInterpGroup within the InterpData that this is an instance of. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupInst.h" },
		{ "ToolTip", "UInterpGroup within the InterpData that this is an instance of." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpGroupInst, Group), Z_Construct_UClass_UInterpGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_GroupActor_MetaData[] = {
		{ "Comment", "/** \n\x09 *\x09""Actor that this Group instance is acting upon.\n\x09 *\x09NB: that this may be set to NULL at any time as a result of the  AActor  being destroyed.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupInst.h" },
		{ "ToolTip", "Actor that this Group instance is acting upon.\nNB: that this may be set to NULL at any time as a result of the  AActor  being destroyed." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_GroupActor = { "GroupActor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpGroupInst, GroupActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_GroupActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_GroupActor_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_TrackInst_Inner = { "TrackInst", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInterpTrackInst_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_TrackInst_MetaData[] = {
		{ "Comment", "/** Array if InterpTrack instances. TrackInst.Num() == UInterpGroup.InterpTrack.Num() must be true. */" },
		{ "ModuleRelativePath", "Classes/Matinee/InterpGroupInst.h" },
		{ "ToolTip", "Array if InterpTrack instances. TrackInst.Num() == UInterpGroup.InterpTrack.Num() must be true." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_TrackInst = { "TrackInst", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInterpGroupInst, TrackInst), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_TrackInst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_TrackInst_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpGroupInst_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_Group,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_GroupActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_TrackInst_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpGroupInst_Statics::NewProp_TrackInst,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpGroupInst_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpGroupInst>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpGroupInst_Statics::ClassParams = {
		&UInterpGroupInst::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterpGroupInst_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterpGroupInst_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterpGroupInst_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterpGroupInst_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpGroupInst()
	{
		if (!Z_Registration_Info_UClass_UInterpGroupInst.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpGroupInst.OuterSingleton, Z_Construct_UClass_UInterpGroupInst_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterpGroupInst.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInterpGroupInst>()
	{
		return UInterpGroupInst::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpGroupInst);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupInst_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupInst_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterpGroupInst, UInterpGroupInst::StaticClass, TEXT("UInterpGroupInst"), &Z_Registration_Info_UClass_UInterpGroupInst, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpGroupInst), 2246313472U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupInst_h_130306627(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupInst_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_InterpGroupInst_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
