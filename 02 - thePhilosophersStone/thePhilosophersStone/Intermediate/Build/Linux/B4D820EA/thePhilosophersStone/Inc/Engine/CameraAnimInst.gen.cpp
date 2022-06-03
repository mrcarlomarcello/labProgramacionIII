// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Camera/CameraAnimInst.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraAnimInst() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnimInst_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnimInst();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnim_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupInst_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackMove_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstMove_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraShakePlaySpace();
// End Cross Module References
	DEFINE_FUNCTION(UCameraAnimInst::execSetScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScale(Z_Param_NewDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraAnimInst::execSetDuration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDuration(Z_Param_NewDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraAnimInst::execStop)
	{
		P_GET_UBOOL(Z_Param_bImmediate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop(Z_Param_bImmediate);
		P_NATIVE_END;
	}
	void UCameraAnimInst::StaticRegisterNativesUCameraAnimInst()
	{
		UClass* Class = UCameraAnimInst::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDuration", &UCameraAnimInst::execSetDuration },
			{ "SetScale", &UCameraAnimInst::execSetScale },
			{ "Stop", &UCameraAnimInst::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCameraAnimInst_SetDuration_Statics
	{
		struct CameraAnimInst_eventSetDuration_Parms
		{
			float NewDuration;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraAnimInst_SetDuration_Statics::NewProp_NewDuration = { "NewDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraAnimInst_eventSetDuration_Parms, NewDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraAnimInst_SetDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraAnimInst_SetDuration_Statics::NewProp_NewDuration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraAnimInst_SetDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraAnimInst" },
		{ "Comment", "/** Changes the running duration of this active anim, while maintaining playback position. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraAnimInst.h" },
		{ "ToolTip", "Changes the running duration of this active anim, while maintaining playback position." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraAnimInst_SetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraAnimInst, nullptr, "SetDuration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraAnimInst_SetDuration_Statics::CameraAnimInst_eventSetDuration_Parms), Z_Construct_UFunction_UCameraAnimInst_SetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimInst_SetDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraAnimInst_SetDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimInst_SetDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraAnimInst_SetDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraAnimInst_SetDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraAnimInst_SetScale_Statics
	{
		struct CameraAnimInst_eventSetScale_Parms
		{
			float NewDuration;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraAnimInst_SetScale_Statics::NewProp_NewDuration = { "NewDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CameraAnimInst_eventSetScale_Parms, NewDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraAnimInst_SetScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraAnimInst_SetScale_Statics::NewProp_NewDuration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraAnimInst_SetScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraAnimInst" },
		{ "Comment", "/** Changes the scale of the animation while playing.*/" },
		{ "ModuleRelativePath", "Classes/Camera/CameraAnimInst.h" },
		{ "ToolTip", "Changes the scale of the animation while playing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraAnimInst_SetScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraAnimInst, nullptr, "SetScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraAnimInst_SetScale_Statics::CameraAnimInst_eventSetScale_Parms), Z_Construct_UFunction_UCameraAnimInst_SetScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimInst_SetScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraAnimInst_SetScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimInst_SetScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraAnimInst_SetScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraAnimInst_SetScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraAnimInst_Stop_Statics
	{
		struct CameraAnimInst_eventStop_Parms
		{
			bool bImmediate;
		};
		static void NewProp_bImmediate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCameraAnimInst_Stop_Statics::NewProp_bImmediate_SetBit(void* Obj)
	{
		((CameraAnimInst_eventStop_Parms*)Obj)->bImmediate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraAnimInst_Stop_Statics::NewProp_bImmediate = { "bImmediate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CameraAnimInst_eventStop_Parms), &Z_Construct_UFunction_UCameraAnimInst_Stop_Statics::NewProp_bImmediate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraAnimInst_Stop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraAnimInst_Stop_Statics::NewProp_bImmediate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraAnimInst_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraAnimInst" },
		{ "Comment", "/** Stops this instance playing whatever animation it is playing. */" },
		{ "CPP_Default_bImmediate", "false" },
		{ "ModuleRelativePath", "Classes/Camera/CameraAnimInst.h" },
		{ "ToolTip", "Stops this instance playing whatever animation it is playing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraAnimInst_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraAnimInst, nullptr, "Stop", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraAnimInst_Stop_Statics::CameraAnimInst_eventStop_Parms), Z_Construct_UFunction_UCameraAnimInst_Stop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimInst_Stop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraAnimInst_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraAnimInst_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraAnimInst_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraAnimInst_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraAnimInst);
	UClass* Z_Construct_UClass_UCameraAnimInst_NoRegister()
	{
		return UCameraAnimInst::StaticClass();
	}
	struct Z_Construct_UClass_UCameraAnimInst_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CamAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CamAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpGroupInst_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InterpGroupInst;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveTrack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MoveTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveInst_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MoveInst;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlaySpace_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaySpace_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaySpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraAnimInst_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCameraAnimInst_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraAnimInst_SetDuration, "SetDuration" }, // 2130736174
		{ &Z_Construct_UFunction_UCameraAnimInst_SetScale, "SetScale" }, // 670949805
		{ &Z_Construct_UFunction_UCameraAnimInst_Stop, "Stop" }, // 1905797372
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimInst_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Camera/CameraAnimInst.h" },
		{ "ModuleRelativePath", "Classes/Camera/CameraAnimInst.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_CamAnim_MetaData[] = {
		{ "Comment", "/** which CameraAnim this is an instance of */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraAnimInst.h" },
		{ "ToolTip", "which CameraAnim this is an instance of" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_CamAnim = { "CamAnim", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraAnimInst, CamAnim), Z_Construct_UClass_UCameraAnim_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_CamAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_CamAnim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_InterpGroupInst_MetaData[] = {
		{ "Comment", "/** the UInterpGroupInst used to do the interpolation */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraAnimInst.h" },
		{ "ToolTip", "the UInterpGroupInst used to do the interpolation" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_InterpGroupInst = { "InterpGroupInst", nullptr, (EPropertyFlags)0x0046000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraAnimInst, InterpGroupInst), Z_Construct_UClass_UInterpGroupInst_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_InterpGroupInst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_InterpGroupInst_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "CameraAnimInst" },
		{ "Comment", "/** Multiplier for playback rate.  1.0 = normal. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraAnimInst.h" },
		{ "ToolTip", "Multiplier for playback rate.  1.0 = normal." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraAnimInst, PlayRate), METADATA_PARAMS(Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_MoveTrack_MetaData[] = {
		{ "Comment", "/** cached movement track from the currently playing anim so we don't have to go find it every frame */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraAnimInst.h" },
		{ "ToolTip", "cached movement track from the currently playing anim so we don't have to go find it every frame" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_MoveTrack = { "MoveTrack", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraAnimInst, MoveTrack), Z_Construct_UClass_UInterpTrackMove_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_MoveTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_MoveTrack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_MoveInst_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraAnimInst.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_MoveInst = { "MoveInst", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraAnimInst, MoveInst), Z_Construct_UClass_UInterpTrackInstMove_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_MoveInst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_MoveInst_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_PlaySpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_PlaySpace_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraAnimInst.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_PlaySpace = { "PlaySpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCameraAnimInst, PlaySpace), Z_Construct_UEnum_Engine_ECameraShakePlaySpace, METADATA_PARAMS(Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_PlaySpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_PlaySpace_MetaData)) }; // 1413967709
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraAnimInst_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_CamAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_InterpGroupInst,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_MoveTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_MoveInst,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_PlaySpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraAnimInst_Statics::NewProp_PlaySpace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraAnimInst_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraAnimInst>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraAnimInst_Statics::ClassParams = {
		&UCameraAnimInst::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCameraAnimInst_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimInst_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraAnimInst_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimInst_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraAnimInst()
	{
		if (!Z_Registration_Info_UClass_UCameraAnimInst.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraAnimInst.OuterSingleton, Z_Construct_UClass_UCameraAnimInst_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraAnimInst.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UCameraAnimInst>()
	{
		return UCameraAnimInst::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraAnimInst);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraAnimInst, UCameraAnimInst::StaticClass, TEXT("UCameraAnimInst"), &Z_Registration_Info_UClass_UCameraAnimInst, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraAnimInst), 3081554535U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_3906341729(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraAnimInst_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
