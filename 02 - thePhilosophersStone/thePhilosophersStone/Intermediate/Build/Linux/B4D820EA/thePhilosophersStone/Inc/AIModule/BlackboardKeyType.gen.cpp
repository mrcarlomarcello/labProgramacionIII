// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardKeyType() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBasicKeyOperation();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EArithmeticKeyOperation();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETextKeyOperation();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBasicKeyOperation;
	static UEnum* EBasicKeyOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBasicKeyOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBasicKeyOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EBasicKeyOperation, Z_Construct_UPackage__Script_AIModule(), TEXT("EBasicKeyOperation"));
		}
		return Z_Registration_Info_UEnum_EBasicKeyOperation.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EBasicKeyOperation::Type>()
	{
		return EBasicKeyOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EBasicKeyOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EBasicKeyOperation_Statics::Enumerators[] = {
		{ "EBasicKeyOperation::Set", (int64)EBasicKeyOperation::Set },
		{ "EBasicKeyOperation::NotSet", (int64)EBasicKeyOperation::NotSet },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EBasicKeyOperation_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType.h" },
		{ "NotSet.DisplayName", "Is Not Set" },
		{ "NotSet.Name", "EBasicKeyOperation::NotSet" },
		{ "Set.DisplayName", "Is Set" },
		{ "Set.Name", "EBasicKeyOperation::Set" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EBasicKeyOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EBasicKeyOperation",
		"EBasicKeyOperation::Type",
		Z_Construct_UEnum_AIModule_EBasicKeyOperation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EBasicKeyOperation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EBasicKeyOperation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EBasicKeyOperation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EBasicKeyOperation()
	{
		if (!Z_Registration_Info_UEnum_EBasicKeyOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBasicKeyOperation.InnerSingleton, Z_Construct_UEnum_AIModule_EBasicKeyOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBasicKeyOperation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EArithmeticKeyOperation;
	static UEnum* EArithmeticKeyOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EArithmeticKeyOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EArithmeticKeyOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EArithmeticKeyOperation, Z_Construct_UPackage__Script_AIModule(), TEXT("EArithmeticKeyOperation"));
		}
		return Z_Registration_Info_UEnum_EArithmeticKeyOperation.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EArithmeticKeyOperation::Type>()
	{
		return EArithmeticKeyOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EArithmeticKeyOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EArithmeticKeyOperation_Statics::Enumerators[] = {
		{ "EArithmeticKeyOperation::Equal", (int64)EArithmeticKeyOperation::Equal },
		{ "EArithmeticKeyOperation::NotEqual", (int64)EArithmeticKeyOperation::NotEqual },
		{ "EArithmeticKeyOperation::Less", (int64)EArithmeticKeyOperation::Less },
		{ "EArithmeticKeyOperation::LessOrEqual", (int64)EArithmeticKeyOperation::LessOrEqual },
		{ "EArithmeticKeyOperation::Greater", (int64)EArithmeticKeyOperation::Greater },
		{ "EArithmeticKeyOperation::GreaterOrEqual", (int64)EArithmeticKeyOperation::GreaterOrEqual },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EArithmeticKeyOperation_Statics::Enum_MetaDataParams[] = {
		{ "Equal.DisplayName", "Is Equal To" },
		{ "Equal.Name", "EArithmeticKeyOperation::Equal" },
		{ "Greater.DisplayName", "Is Greater Than" },
		{ "Greater.Name", "EArithmeticKeyOperation::Greater" },
		{ "GreaterOrEqual.DisplayName", "Is Greater Than Or Equal To" },
		{ "GreaterOrEqual.Name", "EArithmeticKeyOperation::GreaterOrEqual" },
		{ "Less.DisplayName", "Is Less Than" },
		{ "Less.Name", "EArithmeticKeyOperation::Less" },
		{ "LessOrEqual.DisplayName", "Is Less Than Or Equal To" },
		{ "LessOrEqual.Name", "EArithmeticKeyOperation::LessOrEqual" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType.h" },
		{ "NotEqual.DisplayName", "Is Not Equal To" },
		{ "NotEqual.Name", "EArithmeticKeyOperation::NotEqual" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EArithmeticKeyOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EArithmeticKeyOperation",
		"EArithmeticKeyOperation::Type",
		Z_Construct_UEnum_AIModule_EArithmeticKeyOperation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EArithmeticKeyOperation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EArithmeticKeyOperation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EArithmeticKeyOperation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EArithmeticKeyOperation()
	{
		if (!Z_Registration_Info_UEnum_EArithmeticKeyOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EArithmeticKeyOperation.InnerSingleton, Z_Construct_UEnum_AIModule_EArithmeticKeyOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EArithmeticKeyOperation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextKeyOperation;
	static UEnum* ETextKeyOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextKeyOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextKeyOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_ETextKeyOperation, Z_Construct_UPackage__Script_AIModule(), TEXT("ETextKeyOperation"));
		}
		return Z_Registration_Info_UEnum_ETextKeyOperation.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<ETextKeyOperation::Type>()
	{
		return ETextKeyOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_ETextKeyOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_ETextKeyOperation_Statics::Enumerators[] = {
		{ "ETextKeyOperation::Equal", (int64)ETextKeyOperation::Equal },
		{ "ETextKeyOperation::NotEqual", (int64)ETextKeyOperation::NotEqual },
		{ "ETextKeyOperation::Contain", (int64)ETextKeyOperation::Contain },
		{ "ETextKeyOperation::NotContain", (int64)ETextKeyOperation::NotContain },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_ETextKeyOperation_Statics::Enum_MetaDataParams[] = {
		{ "Contain.DisplayName", "Contains" },
		{ "Contain.Name", "ETextKeyOperation::Contain" },
		{ "Equal.DisplayName", "Is Equal To" },
		{ "Equal.Name", "ETextKeyOperation::Equal" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType.h" },
		{ "NotContain.DisplayName", "Not Contains" },
		{ "NotContain.Name", "ETextKeyOperation::NotContain" },
		{ "NotEqual.DisplayName", "Is Not Equal To" },
		{ "NotEqual.Name", "ETextKeyOperation::NotEqual" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_ETextKeyOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"ETextKeyOperation",
		"ETextKeyOperation::Type",
		Z_Construct_UEnum_AIModule_ETextKeyOperation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_ETextKeyOperation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_ETextKeyOperation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_ETextKeyOperation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_ETextKeyOperation()
	{
		if (!Z_Registration_Info_UEnum_ETextKeyOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextKeyOperation.InnerSingleton, Z_Construct_UEnum_AIModule_ETextKeyOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextKeyOperation.InnerSingleton;
	}
	void UBlackboardKeyType::StaticRegisterNativesUBlackboardKeyType()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlackboardKeyType);
	UClass* Z_Construct_UClass_UBlackboardKeyType_NoRegister()
	{
		return UBlackboardKeyType::StaticClass();
	}
	struct Z_Construct_UClass_UBlackboardKeyType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlackboardKeyType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardKeyType_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Blackboard" },
		{ "IncludePath", "BehaviorTree/Blackboard/BlackboardKeyType.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlackboardKeyType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackboardKeyType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlackboardKeyType_Statics::ClassParams = {
		&UBlackboardKeyType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBlackboardKeyType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlackboardKeyType()
	{
		if (!Z_Registration_Info_UClass_UBlackboardKeyType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlackboardKeyType.OuterSingleton, Z_Construct_UClass_UBlackboardKeyType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlackboardKeyType.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBlackboardKeyType>()
	{
		return UBlackboardKeyType::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardKeyType);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_Statics::EnumInfo[] = {
		{ EBasicKeyOperation_StaticEnum, TEXT("EBasicKeyOperation"), &Z_Registration_Info_UEnum_EBasicKeyOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3204099174U) },
		{ EArithmeticKeyOperation_StaticEnum, TEXT("EArithmeticKeyOperation"), &Z_Registration_Info_UEnum_EArithmeticKeyOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1575397918U) },
		{ ETextKeyOperation_StaticEnum, TEXT("ETextKeyOperation"), &Z_Registration_Info_UEnum_ETextKeyOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4027460092U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlackboardKeyType, UBlackboardKeyType::StaticClass, TEXT("UBlackboardKeyType"), &Z_Registration_Info_UClass_UBlackboardKeyType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlackboardKeyType), 1410432347U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_710887686(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Blackboard_BlackboardKeyType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
