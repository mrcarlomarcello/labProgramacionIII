// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Audio/ActorSoundParameterInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorSoundParameterInterface() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorSoundParameterInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorSoundParameterInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Engine();
	AUDIOEXTENSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioParameter();
// End Cross Module References
	void IActorSoundParameterInterface::GetActorSoundParams(TArray<FAudioParameter>& Params) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetActorSoundParams instead.");
	}
	void UActorSoundParameterInterface::StaticRegisterNativesUActorSoundParameterInterface()
	{
	}
	struct Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams_Statics::NewProp_Params_Inner = { "Params", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAudioParameter, METADATA_PARAMS(nullptr, 0) }; // 3261947345
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorSoundParameterInterface_eventGetActorSoundParams_Parms, Params), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3261947345
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams_Statics::NewProp_Params_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams_Statics::NewProp_Params,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Audio/ActorSoundParameterInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorSoundParameterInterface, nullptr, "GetActorSoundParams", nullptr, nullptr, sizeof(ActorSoundParameterInterface_eventGetActorSoundParams_Parms), Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorSoundParameterInterface);
	UClass* Z_Construct_UClass_UActorSoundParameterInterface_NoRegister()
	{
		return UActorSoundParameterInterface::StaticClass();
	}
	struct Z_Construct_UClass_UActorSoundParameterInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorSoundParameterInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActorSoundParameterInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams, "GetActorSoundParams" }, // 1589987091
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSoundParameterInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Audio/ActorSoundParameterInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorSoundParameterInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IActorSoundParameterInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorSoundParameterInterface_Statics::ClassParams = {
		&UActorSoundParameterInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UActorSoundParameterInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSoundParameterInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorSoundParameterInterface()
	{
		if (!Z_Registration_Info_UClass_UActorSoundParameterInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorSoundParameterInterface.OuterSingleton, Z_Construct_UClass_UActorSoundParameterInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorSoundParameterInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UActorSoundParameterInterface>()
	{
		return UActorSoundParameterInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorSoundParameterInterface);
	static FName NAME_UActorSoundParameterInterface_GetActorSoundParams = FName(TEXT("GetActorSoundParams"));
	void IActorSoundParameterInterface::Execute_GetActorSoundParams(const UObject* O, TArray<FAudioParameter>& Params)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UActorSoundParameterInterface::StaticClass()));
		ActorSoundParameterInterface_eventGetActorSoundParams_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UActorSoundParameterInterface_GetActorSoundParams);
		if (Func)
		{
			Parms.Params=Params;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
			Params=Parms.Params;
		}
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorSoundParameterInterface, UActorSoundParameterInterface::StaticClass, TEXT("UActorSoundParameterInterface"), &Z_Registration_Info_UClass_UActorSoundParameterInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorSoundParameterInterface), 440693995U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_2000008110(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
