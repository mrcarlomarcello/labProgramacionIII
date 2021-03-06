// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "thePhilosophersStone/ShootingCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootingCharacter() {}
// Cross Module References
	THEPHILOSOPHERSSTONE_API UClass* Z_Construct_UClass_AShootingCharacter_NoRegister();
	THEPHILOSOPHERSSTONE_API UClass* Z_Construct_UClass_AShootingCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_thePhilosophersStone();
	THEPHILOSOPHERSSTONE_API UClass* Z_Construct_UClass_AGun_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(AShootingCharacter::execGetHealthPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealthPercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShootingCharacter::execisDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->isDead();
		P_NATIVE_END;
	}
	void AShootingCharacter::StaticRegisterNativesAShootingCharacter()
	{
		UClass* Class = AShootingCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHealthPercent", &AShootingCharacter::execGetHealthPercent },
			{ "isDead", &AShootingCharacter::execisDead },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShootingCharacter_GetHealthPercent_Statics
	{
		struct ShootingCharacter_eventGetHealthPercent_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShootingCharacter_GetHealthPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShootingCharacter_eventGetHealthPercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShootingCharacter_GetHealthPercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShootingCharacter_GetHealthPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingCharacter_GetHealthPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShootingCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingCharacter_GetHealthPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingCharacter, nullptr, "GetHealthPercent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AShootingCharacter_GetHealthPercent_Statics::ShootingCharacter_eventGetHealthPercent_Parms), Z_Construct_UFunction_AShootingCharacter_GetHealthPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingCharacter_GetHealthPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShootingCharacter_GetHealthPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingCharacter_GetHealthPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShootingCharacter_GetHealthPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShootingCharacter_GetHealthPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShootingCharacter_isDead_Statics
	{
		struct ShootingCharacter_eventisDead_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AShootingCharacter_isDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ShootingCharacter_eventisDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AShootingCharacter_isDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ShootingCharacter_eventisDead_Parms), &Z_Construct_UFunction_AShootingCharacter_isDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShootingCharacter_isDead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShootingCharacter_isDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShootingCharacter_isDead_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//generalmente const y BlueprintPure van de la mano!\n" },
		{ "ModuleRelativePath", "ShootingCharacter.h" },
		{ "ToolTip", "generalmente const y BlueprintPure van de la mano!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShootingCharacter_isDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShootingCharacter, nullptr, "isDead", nullptr, nullptr, sizeof(Z_Construct_UFunction_AShootingCharacter_isDead_Statics::ShootingCharacter_eventisDead_Parms), Z_Construct_UFunction_AShootingCharacter_isDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingCharacter_isDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShootingCharacter_isDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShootingCharacter_isDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShootingCharacter_isDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShootingCharacter_isDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShootingCharacter);
	UClass* Z_Construct_UClass_AShootingCharacter_NoRegister()
	{
		return AShootingCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AShootingCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GunClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GunClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gun_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Gun;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShootingCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_thePhilosophersStone,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShootingCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShootingCharacter_GetHealthPercent, "GetHealthPercent" }, // 2350826881
		{ &Z_Construct_UFunction_AShootingCharacter_isDead, "isDead" }, // 1072875331
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ShootingCharacter.h" },
		{ "ModuleRelativePath", "ShootingCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingCharacter_Statics::NewProp_RotationRate_MetaData[] = {
		{ "Category", "ShootingCharacter" },
		{ "Comment", "//ESTA PROPIEDAD TENDREMOS QUE AGREGARLA A SETTINGS DESPUES!!!\n" },
		{ "ModuleRelativePath", "ShootingCharacter.h" },
		{ "ToolTip", "ESTA PROPIEDAD TENDREMOS QUE AGREGARLA A SETTINGS DESPUES!!!" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShootingCharacter_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootingCharacter, RotationRate), METADATA_PARAMS(Z_Construct_UClass_AShootingCharacter_Statics::NewProp_RotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingCharacter_Statics::NewProp_RotationRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingCharacter_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "ShootingCharacter" },
		{ "ModuleRelativePath", "ShootingCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShootingCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootingCharacter, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_AShootingCharacter_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingCharacter_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "ShootingCharacter" },
		{ "ModuleRelativePath", "ShootingCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShootingCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootingCharacter, Health), METADATA_PARAMS(Z_Construct_UClass_AShootingCharacter_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingCharacter_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingCharacter_Statics::NewProp_GunClass_MetaData[] = {
		{ "Category", "ShootingCharacter" },
		{ "ModuleRelativePath", "ShootingCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShootingCharacter_Statics::NewProp_GunClass = { "GunClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootingCharacter, GunClass), Z_Construct_UClass_AGun_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShootingCharacter_Statics::NewProp_GunClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingCharacter_Statics::NewProp_GunClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingCharacter_Statics::NewProp_Gun_MetaData[] = {
		{ "ModuleRelativePath", "ShootingCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShootingCharacter_Statics::NewProp_Gun = { "Gun", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShootingCharacter, Gun), Z_Construct_UClass_AGun_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShootingCharacter_Statics::NewProp_Gun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingCharacter_Statics::NewProp_Gun_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShootingCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingCharacter_Statics::NewProp_RotationRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingCharacter_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingCharacter_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingCharacter_Statics::NewProp_GunClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShootingCharacter_Statics::NewProp_Gun,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShootingCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootingCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShootingCharacter_Statics::ClassParams = {
		&AShootingCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShootingCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShootingCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShootingCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShootingCharacter()
	{
		if (!Z_Registration_Info_UClass_AShootingCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShootingCharacter.OuterSingleton, Z_Construct_UClass_AShootingCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShootingCharacter.OuterSingleton;
	}
	template<> THEPHILOSOPHERSSTONE_API UClass* StaticClass<AShootingCharacter>()
	{
		return AShootingCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShootingCharacter);
	struct Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_ShootingCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_ShootingCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShootingCharacter, AShootingCharacter::StaticClass, TEXT("AShootingCharacter"), &Z_Registration_Info_UClass_AShootingCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShootingCharacter), 331054289U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_ShootingCharacter_h_2310711416(TEXT("/Script/thePhilosophersStone"),
		Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_ShootingCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_thePhilosophersStone_Source_thePhilosophersStone_ShootingCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
