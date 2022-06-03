// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Components/CircularThrobber.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCircularThrobber() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UCircularThrobber_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCircularThrobber();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	ENGINE_API UClass* Z_Construct_UClass_USlateBrushAsset_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
// End Cross Module References
	DEFINE_FUNCTION(UCircularThrobber::execSetRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRadius(Z_Param_InRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCircularThrobber::execSetPeriod)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPeriod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPeriod(Z_Param_InPeriod);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCircularThrobber::execSetNumberOfPieces)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InNumberOfPieces);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNumberOfPieces(Z_Param_InNumberOfPieces);
		P_NATIVE_END;
	}
	void UCircularThrobber::StaticRegisterNativesUCircularThrobber()
	{
		UClass* Class = UCircularThrobber::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetNumberOfPieces", &UCircularThrobber::execSetNumberOfPieces },
			{ "SetPeriod", &UCircularThrobber::execSetPeriod },
			{ "SetRadius", &UCircularThrobber::execSetRadius },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics
	{
		struct CircularThrobber_eventSetNumberOfPieces_Parms
		{
			int32 InNumberOfPieces;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InNumberOfPieces;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::NewProp_InNumberOfPieces = { "InNumberOfPieces", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CircularThrobber_eventSetNumberOfPieces_Parms, InNumberOfPieces), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::NewProp_InNumberOfPieces,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets how many pieces there are. */" },
		{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
		{ "ToolTip", "Sets how many pieces there are." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCircularThrobber, nullptr, "SetNumberOfPieces", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::CircularThrobber_eventSetNumberOfPieces_Parms), Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics
	{
		struct CircularThrobber_eventSetPeriod_Parms
		{
			float InPeriod;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPeriod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::NewProp_InPeriod = { "InPeriod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CircularThrobber_eventSetPeriod_Parms, InPeriod), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::NewProp_InPeriod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the amount of time for a full circle (in seconds). */" },
		{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
		{ "ToolTip", "Sets the amount of time for a full circle (in seconds)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCircularThrobber, nullptr, "SetPeriod", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::CircularThrobber_eventSetPeriod_Parms), Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCircularThrobber_SetPeriod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCircularThrobber_SetPeriod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics
	{
		struct CircularThrobber_eventSetRadius_Parms
		{
			float InRadius;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::NewProp_InRadius = { "InRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CircularThrobber_eventSetRadius_Parms, InRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::NewProp_InRadius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Sets the radius of the circle. */" },
		{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
		{ "ToolTip", "Sets the radius of the circle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCircularThrobber, nullptr, "SetRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::CircularThrobber_eventSetRadius_Parms), Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCircularThrobber_SetRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCircularThrobber_SetRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCircularThrobber);
	UClass* Z_Construct_UClass_UCircularThrobber_NoRegister()
	{
		return UCircularThrobber::StaticClass();
	}
	struct Z_Construct_UClass_UCircularThrobber_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPieces_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPieces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Period;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PieceImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PieceImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Image;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRadius_MetaData[];
#endif
		static void NewProp_bEnableRadius_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCircularThrobber_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCircularThrobber_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCircularThrobber_SetNumberOfPieces, "SetNumberOfPieces" }, // 3649214173
		{ &Z_Construct_UFunction_UCircularThrobber_SetPeriod, "SetPeriod" }, // 105585305
		{ &Z_Construct_UFunction_UCircularThrobber_SetRadius, "SetRadius" }, // 299994557
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCircularThrobber_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A throbber widget that orients images in a spinning circle.\n * \n * * No Children\n * * Spinner Progress\n */" },
		{ "IncludePath", "Components/CircularThrobber.h" },
		{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
		{ "ToolTip", "A throbber widget that orients images in a spinning circle.\n\n* No Children\n* Spinner Progress" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCircularThrobber_Statics::NewProp_NumberOfPieces_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "25" },
		{ "ClampMin", "1" },
		{ "Comment", "/** How many pieces there are */" },
		{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
		{ "ToolTip", "How many pieces there are" },
		{ "UIMax", "25" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCircularThrobber_Statics::NewProp_NumberOfPieces = { "NumberOfPieces", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCircularThrobber, NumberOfPieces), METADATA_PARAMS(Z_Construct_UClass_UCircularThrobber_Statics::NewProp_NumberOfPieces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCircularThrobber_Statics::NewProp_NumberOfPieces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Period_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The amount of time for a full circle (in seconds) */" },
		{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
		{ "ToolTip", "The amount of time for a full circle (in seconds)" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCircularThrobber, Period), METADATA_PARAMS(Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Period_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Period_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The radius of the circle. If the throbber is a child of Canvas Panel, the 'Size to Content' option must be enabled in order to set Radius. */" },
		{ "EditCondition", "bEnableRadius" },
		{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
		{ "ToolTip", "The radius of the circle. If the throbber is a child of Canvas Panel, the 'Size to Content' option must be enabled in order to set Radius." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCircularThrobber, Radius), METADATA_PARAMS(Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCircularThrobber_Statics::NewProp_PieceImage_MetaData[] = {
		{ "Comment", "/** Image to use for each segment of the throbber */" },
		{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
		{ "ToolTip", "Image to use for each segment of the throbber" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCircularThrobber_Statics::NewProp_PieceImage = { "PieceImage", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCircularThrobber, PieceImage_DEPRECATED), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCircularThrobber_Statics::NewProp_PieceImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCircularThrobber_Statics::NewProp_PieceImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Image_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCircularThrobber, Image), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Image_MetaData)) }; // 852902259
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCircularThrobber_Statics::NewProp_bEnableRadius_MetaData[] = {
		{ "Category", "Appearance" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/CircularThrobber.h" },
	};
#endif
	void Z_Construct_UClass_UCircularThrobber_Statics::NewProp_bEnableRadius_SetBit(void* Obj)
	{
		((UCircularThrobber*)Obj)->bEnableRadius = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCircularThrobber_Statics::NewProp_bEnableRadius = { "bEnableRadius", nullptr, (EPropertyFlags)0x0040000000002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCircularThrobber), &Z_Construct_UClass_UCircularThrobber_Statics::NewProp_bEnableRadius_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCircularThrobber_Statics::NewProp_bEnableRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCircularThrobber_Statics::NewProp_bEnableRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCircularThrobber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircularThrobber_Statics::NewProp_NumberOfPieces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Period,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircularThrobber_Statics::NewProp_PieceImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircularThrobber_Statics::NewProp_Image,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCircularThrobber_Statics::NewProp_bEnableRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCircularThrobber_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCircularThrobber>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCircularThrobber_Statics::ClassParams = {
		&UCircularThrobber::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCircularThrobber_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCircularThrobber_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCircularThrobber_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCircularThrobber_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCircularThrobber()
	{
		if (!Z_Registration_Info_UClass_UCircularThrobber.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCircularThrobber.OuterSingleton, Z_Construct_UClass_UCircularThrobber_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCircularThrobber.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UCircularThrobber>()
	{
		return UCircularThrobber::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCircularThrobber);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCircularThrobber, UCircularThrobber::StaticClass, TEXT("UCircularThrobber"), &Z_Registration_Info_UClass_UCircularThrobber, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCircularThrobber), 2419794687U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_1754305679(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
