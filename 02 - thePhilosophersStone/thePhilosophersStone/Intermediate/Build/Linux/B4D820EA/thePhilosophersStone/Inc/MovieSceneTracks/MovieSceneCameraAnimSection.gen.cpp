// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Sections/MovieSceneCameraAnimSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraAnimSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnim_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraAnimSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraAnimSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneCameraAnimSectionData;
class UScriptStruct* FMovieSceneCameraAnimSectionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneCameraAnimSectionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneCameraAnimSectionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData, Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneCameraAnimSectionData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneCameraAnimSectionData.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneCameraAnimSectionData>()
{
	return FMovieSceneCameraAnimSectionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendInTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOutTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneCameraAnimSectionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_CameraAnim_MetaData[] = {
		{ "Category", "Camera Anim" },
		{ "Comment", "/** The camera anim to play */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
		{ "ToolTip", "The camera anim to play" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_CameraAnim = { "CameraAnim", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCameraAnimSectionData, CameraAnim), Z_Construct_UClass_UCameraAnim_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_CameraAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_CameraAnim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Camera Anim" },
		{ "Comment", "/** How fast to play back the animation. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
		{ "ToolTip", "How fast to play back the animation." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCameraAnimSectionData, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_PlayScale_MetaData[] = {
		{ "Category", "Camera Anim" },
		{ "Comment", "/** Scalar to control intensity of the animation. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
		{ "ToolTip", "Scalar to control intensity of the animation." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_PlayScale = { "PlayScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCameraAnimSectionData, PlayScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_PlayScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_PlayScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_BlendInTime_MetaData[] = {
		{ "Category", "Camera Anim" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_BlendInTime = { "BlendInTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCameraAnimSectionData, BlendInTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_BlendInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_BlendInTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_BlendOutTime_MetaData[] = {
		{ "Category", "Camera Anim" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneCameraAnimSectionData, BlendOutTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_BlendOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_BlendOutTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "Camera Anim" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((FMovieSceneCameraAnimSectionData*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovieSceneCameraAnimSectionData), &Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_bLooping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_CameraAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_PlayScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_BlendInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_BlendOutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewProp_bLooping,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneCameraAnimSectionData",
		sizeof(FMovieSceneCameraAnimSectionData),
		alignof(FMovieSceneCameraAnimSectionData),
		Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneCameraAnimSectionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneCameraAnimSectionData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneCameraAnimSectionData.InnerSingleton;
	}
	void UMovieSceneCameraAnimSection::StaticRegisterNativesUMovieSceneCameraAnimSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCameraAnimSection);
	UClass* Z_Construct_UClass_UMovieSceneCameraAnimSection_NoRegister()
	{
		return UMovieSceneCameraAnimSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendInTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOutTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Sections/MovieSceneCameraAnimSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_AnimData_MetaData[] = {
		{ "Category", "Camera Anim" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_AnimData = { "AnimData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCameraAnimSection, AnimData), Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_AnimData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_AnimData_MetaData)) }; // 3752540481
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_CameraAnim_MetaData[] = {
		{ "Comment", "/** Deprecated members */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
		{ "ToolTip", "Deprecated members" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_CameraAnim = { "CameraAnim", nullptr, (EPropertyFlags)0x0044000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCameraAnimSection, CameraAnim_DEPRECATED), Z_Construct_UClass_UCameraAnim_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_CameraAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_CameraAnim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_PlayRate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCameraAnimSection, PlayRate_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_PlayScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_PlayScale = { "PlayScale", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCameraAnimSection, PlayScale_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_PlayScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_PlayScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_BlendInTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_BlendInTime = { "BlendInTime", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCameraAnimSection, BlendInTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_BlendInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_BlendInTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_BlendOutTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneCameraAnimSection, BlendOutTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_BlendOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_BlendOutTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_bLooping_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraAnimSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((UMovieSceneCameraAnimSection*)Obj)->bLooping_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneCameraAnimSection), &Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_bLooping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_AnimData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_CameraAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_PlayScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_BlendInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_BlendOutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::NewProp_bLooping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCameraAnimSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::ClassParams = {
		&UMovieSceneCameraAnimSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCameraAnimSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneCameraAnimSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCameraAnimSection.OuterSingleton, Z_Construct_UClass_UMovieSceneCameraAnimSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneCameraAnimSection.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneCameraAnimSection>()
	{
		return UMovieSceneCameraAnimSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCameraAnimSection);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraAnimSection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraAnimSection_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneCameraAnimSectionData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneCameraAnimSectionData_Statics::NewStructOps, TEXT("MovieSceneCameraAnimSectionData"), &Z_Registration_Info_UScriptStruct_MovieSceneCameraAnimSectionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneCameraAnimSectionData), 3752540481U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraAnimSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCameraAnimSection, UMovieSceneCameraAnimSection::StaticClass, TEXT("UMovieSceneCameraAnimSection"), &Z_Registration_Info_UClass_UMovieSceneCameraAnimSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCameraAnimSection), 801782609U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraAnimSection_h_3387398887(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraAnimSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraAnimSection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraAnimSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraAnimSection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
