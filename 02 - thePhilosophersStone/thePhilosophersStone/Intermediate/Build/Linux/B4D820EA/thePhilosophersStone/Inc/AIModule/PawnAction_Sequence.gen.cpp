// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Actions/PawnAction_Sequence.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnAction_Sequence() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_Sequence_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_Sequence();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnActionFailHandling();
// End Cross Module References
	void UPawnAction_Sequence::StaticRegisterNativesUPawnAction_Sequence()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPawnAction_Sequence);
	UClass* Z_Construct_UClass_UPawnAction_Sequence_NoRegister()
	{
		return UPawnAction_Sequence::StaticClass();
	}
	struct Z_Construct_UClass_UPawnAction_Sequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActionSequence_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionSequence_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildFailureHandlingMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChildFailureHandlingMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecentActionCopy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RecentActionCopy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPawnAction_Sequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnAction,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Sequence_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actions/PawnAction_Sequence.h" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Sequence.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_ActionSequence_Inner = { "ActionSequence", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPawnAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_ActionSequence_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Sequence.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_ActionSequence = { "ActionSequence", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPawnAction_Sequence, ActionSequence), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_ActionSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_ActionSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_ChildFailureHandlingMode_MetaData[] = {
		{ "Category", "PawnAction" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Sequence.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_ChildFailureHandlingMode = { "ChildFailureHandlingMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPawnAction_Sequence, ChildFailureHandlingMode), Z_Construct_UEnum_AIModule_EPawnActionFailHandling, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_ChildFailureHandlingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_ChildFailureHandlingMode_MetaData)) }; // 4138157017
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_RecentActionCopy_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Sequence.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_RecentActionCopy = { "RecentActionCopy", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPawnAction_Sequence, RecentActionCopy), Z_Construct_UClass_UPawnAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_RecentActionCopy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_RecentActionCopy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPawnAction_Sequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_ActionSequence_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_ActionSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_ChildFailureHandlingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Sequence_Statics::NewProp_RecentActionCopy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPawnAction_Sequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnAction_Sequence>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPawnAction_Sequence_Statics::ClassParams = {
		&UPawnAction_Sequence::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPawnAction_Sequence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Sequence_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Sequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Sequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPawnAction_Sequence()
	{
		if (!Z_Registration_Info_UClass_UPawnAction_Sequence.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPawnAction_Sequence.OuterSingleton, Z_Construct_UClass_UPawnAction_Sequence_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPawnAction_Sequence.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UPawnAction_Sequence>()
	{
		return UPawnAction_Sequence::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnAction_Sequence);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Sequence_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Sequence_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPawnAction_Sequence, UPawnAction_Sequence::StaticClass, TEXT("UPawnAction_Sequence"), &Z_Registration_Info_UClass_UPawnAction_Sequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPawnAction_Sequence), 3590550774U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Sequence_h_1066273941(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Sequence_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Sequence_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
