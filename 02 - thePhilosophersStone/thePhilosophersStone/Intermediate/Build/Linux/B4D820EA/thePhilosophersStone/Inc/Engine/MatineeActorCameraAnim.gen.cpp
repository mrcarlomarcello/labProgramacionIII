// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Matinee/MatineeActorCameraAnim.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatineeActorCameraAnim() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AMatineeActorCameraAnim_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AMatineeActorCameraAnim();
	ENGINE_API UClass* Z_Construct_UClass_AMatineeActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnim_NoRegister();
// End Cross Module References
	void AMatineeActorCameraAnim::StaticRegisterNativesAMatineeActorCameraAnim()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMatineeActorCameraAnim);
	UClass* Z_Construct_UClass_AMatineeActorCameraAnim_NoRegister()
	{
		return AMatineeActorCameraAnim::StaticClass();
	}
	struct Z_Construct_UClass_AMatineeActorCameraAnim_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraAnim;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMatineeActorCameraAnim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMatineeActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActorCameraAnim_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Actor used to control temporary matinees for camera anims that only exist in the editor\n */" },
		{ "HideCategories", "Collision Game Input" },
		{ "IncludePath", "Matinee/MatineeActorCameraAnim.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActorCameraAnim.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput Game|Damage" },
		{ "ToolTip", "Actor used to control temporary matinees for camera anims that only exist in the editor" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMatineeActorCameraAnim_Statics::NewProp_CameraAnim_MetaData[] = {
		{ "Comment", "/** The camera anim we are editing */" },
		{ "ModuleRelativePath", "Classes/Matinee/MatineeActorCameraAnim.h" },
		{ "ToolTip", "The camera anim we are editing" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMatineeActorCameraAnim_Statics::NewProp_CameraAnim = { "CameraAnim", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMatineeActorCameraAnim, CameraAnim), Z_Construct_UClass_UCameraAnim_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMatineeActorCameraAnim_Statics::NewProp_CameraAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMatineeActorCameraAnim_Statics::NewProp_CameraAnim_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMatineeActorCameraAnim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMatineeActorCameraAnim_Statics::NewProp_CameraAnim,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMatineeActorCameraAnim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMatineeActorCameraAnim>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMatineeActorCameraAnim_Statics::ClassParams = {
		&AMatineeActorCameraAnim::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMatineeActorCameraAnim_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMatineeActorCameraAnim_Statics::PropPointers),
		0,
		0x008802A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMatineeActorCameraAnim_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMatineeActorCameraAnim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMatineeActorCameraAnim()
	{
		if (!Z_Registration_Info_UClass_AMatineeActorCameraAnim.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMatineeActorCameraAnim.OuterSingleton, Z_Construct_UClass_AMatineeActorCameraAnim_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMatineeActorCameraAnim.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<AMatineeActorCameraAnim>()
	{
		return AMatineeActorCameraAnim::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMatineeActorCameraAnim);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActorCameraAnim_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActorCameraAnim_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMatineeActorCameraAnim, AMatineeActorCameraAnim::StaticClass, TEXT("AMatineeActorCameraAnim"), &Z_Registration_Info_UClass_AMatineeActorCameraAnim, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMatineeActorCameraAnim), 2224755547U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActorCameraAnim_h_3697419831(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActorCameraAnim_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Matinee_MatineeActorCameraAnim_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
