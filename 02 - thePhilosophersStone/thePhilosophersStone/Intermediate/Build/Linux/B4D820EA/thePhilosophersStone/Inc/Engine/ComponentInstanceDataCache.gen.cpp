// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/ComponentInstanceDataCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentInstanceDataCache() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentCreationMethod();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponentInstanceDataTransientOuter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponentInstanceDataTransientOuter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorComponentInstanceData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComponentCreationMethod;
	static UEnum* EComponentCreationMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EComponentCreationMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EComponentCreationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EComponentCreationMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EComponentCreationMethod"));
		}
		return Z_Registration_Info_UEnum_EComponentCreationMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EComponentCreationMethod>()
	{
		return EComponentCreationMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EComponentCreationMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EComponentCreationMethod_Statics::Enumerators[] = {
		{ "EComponentCreationMethod::Native", (int64)EComponentCreationMethod::Native },
		{ "EComponentCreationMethod::SimpleConstructionScript", (int64)EComponentCreationMethod::SimpleConstructionScript },
		{ "EComponentCreationMethod::UserConstructionScript", (int64)EComponentCreationMethod::UserConstructionScript },
		{ "EComponentCreationMethod::Instance", (int64)EComponentCreationMethod::Instance },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EComponentCreationMethod_Statics::Enum_MetaDataParams[] = {
		{ "Instance.Comment", "/** A component added to a single Actor instance via the Component section of the Actor's details panel. */" },
		{ "Instance.Name", "EComponentCreationMethod::Instance" },
		{ "Instance.ToolTip", "A component added to a single Actor instance via the Component section of the Actor's details panel." },
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "Native.Comment", "/** A component that is part of a native class. */" },
		{ "Native.Name", "EComponentCreationMethod::Native" },
		{ "Native.ToolTip", "A component that is part of a native class." },
		{ "SimpleConstructionScript.Comment", "/** A component that is created from a template defined in the Components section of the Blueprint. */" },
		{ "SimpleConstructionScript.Name", "EComponentCreationMethod::SimpleConstructionScript" },
		{ "SimpleConstructionScript.ToolTip", "A component that is created from a template defined in the Components section of the Blueprint." },
		{ "UserConstructionScript.Comment", "/**A dynamically created component, either from the UserConstructionScript or from a Add Component node in a Blueprint event graph. */" },
		{ "UserConstructionScript.Name", "EComponentCreationMethod::UserConstructionScript" },
		{ "UserConstructionScript.ToolTip", "A dynamically created component, either from the UserConstructionScript or from a Add Component node in a Blueprint event graph." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EComponentCreationMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EComponentCreationMethod",
		"EComponentCreationMethod",
		Z_Construct_UEnum_Engine_EComponentCreationMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EComponentCreationMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EComponentCreationMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EComponentCreationMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EComponentCreationMethod()
	{
		if (!Z_Registration_Info_UEnum_EComponentCreationMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComponentCreationMethod.InnerSingleton, Z_Construct_UEnum_Engine_EComponentCreationMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EComponentCreationMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorComponentDuplicatedObjectData;
class UScriptStruct* FActorComponentDuplicatedObjectData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorComponentDuplicatedObjectData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorComponentDuplicatedObjectData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData, Z_Construct_UPackage__Script_Engine(), TEXT("ActorComponentDuplicatedObjectData"));
	}
	return Z_Registration_Info_UScriptStruct_ActorComponentDuplicatedObjectData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActorComponentDuplicatedObjectData>()
{
	return FActorComponentDuplicatedObjectData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorComponentDuplicatedObjectData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ActorComponentDuplicatedObjectData",
		sizeof(FActorComponentDuplicatedObjectData),
		alignof(FActorComponentDuplicatedObjectData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorComponentDuplicatedObjectData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorComponentDuplicatedObjectData.InnerSingleton, Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorComponentDuplicatedObjectData.InnerSingleton;
	}
	void UActorComponentInstanceDataTransientOuter::StaticRegisterNativesUActorComponentInstanceDataTransientOuter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorComponentInstanceDataTransientOuter);
	UClass* Z_Construct_UClass_UActorComponentInstanceDataTransientOuter_NoRegister()
	{
		return UActorComponentInstanceDataTransientOuter::StaticClass();
	}
	struct Z_Construct_UClass_UActorComponentInstanceDataTransientOuter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorComponentInstanceDataTransientOuter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorComponentInstanceDataTransientOuter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Dummy class to use as an outer as we can instantiate a UObject since it is abstract class. */" },
		{ "IncludePath", "ComponentInstanceDataCache.h" },
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "ToolTip", "Dummy class to use as an outer as we can instantiate a UObject since it is abstract class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorComponentInstanceDataTransientOuter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorComponentInstanceDataTransientOuter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorComponentInstanceDataTransientOuter_Statics::ClassParams = {
		&UActorComponentInstanceDataTransientOuter::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActorComponentInstanceDataTransientOuter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorComponentInstanceDataTransientOuter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorComponentInstanceDataTransientOuter()
	{
		if (!Z_Registration_Info_UClass_UActorComponentInstanceDataTransientOuter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorComponentInstanceDataTransientOuter.OuterSingleton, Z_Construct_UClass_UActorComponentInstanceDataTransientOuter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorComponentInstanceDataTransientOuter.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UActorComponentInstanceDataTransientOuter>()
	{
		return UActorComponentInstanceDataTransientOuter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorComponentInstanceDataTransientOuter);
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorComponentInstanceData;
class UScriptStruct* FActorComponentInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorComponentInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorComponentInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorComponentInstanceData, Z_Construct_UPackage__Script_Engine(), TEXT("ActorComponentInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_ActorComponentInstanceData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActorComponentInstanceData>()
{
	return FActorComponentInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceComponentTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceComponentTemplate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceComponentCreationMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceComponentCreationMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceComponentCreationMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceComponentTypeSerializedIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SourceComponentTypeSerializedIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SavedProperties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedProperties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueTransientPackage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueTransientPackage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DuplicatedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DuplicatedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DuplicatedObjects;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReferencedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencedObjects;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReferencedNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencedNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Base class for component instance cached data of a particular type. */" },
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "ToolTip", "Base class for component instance cached data of a particular type." },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorComponentInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentTemplate_MetaData[] = {
		{ "Comment", "/** The template used to create the source component */" },
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The template used to create the source component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentTemplate = { "SourceComponentTemplate", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorComponentInstanceData, SourceComponentTemplate), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentTemplate_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentCreationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentCreationMethod_MetaData[] = {
		{ "Comment", "/** The method that was used to create the source component */" },
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "ToolTip", "The method that was used to create the source component" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentCreationMethod = { "SourceComponentCreationMethod", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorComponentInstanceData, SourceComponentCreationMethod), Z_Construct_UEnum_Engine_EComponentCreationMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentCreationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentCreationMethod_MetaData)) }; // 609420841
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentTypeSerializedIndex_MetaData[] = {
		{ "Comment", "/** The index of the source component in its owner's serialized array\n\x09when filtered to just that component type */" },
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "ToolTip", "The index of the source component in its owner's serialized array\n      when filtered to just that component type" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentTypeSerializedIndex = { "SourceComponentTypeSerializedIndex", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorComponentInstanceData, SourceComponentTypeSerializedIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentTypeSerializedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentTypeSerializedIndex_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SavedProperties_Inner = { "SavedProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SavedProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SavedProperties = { "SavedProperties", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorComponentInstanceData, SavedProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SavedProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SavedProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_UniqueTransientPackage_MetaData[] = {
		{ "Comment", "/** \n\x09 * A unique outer created in the transient package to act as outer for this component's duplicated objects \n\x09 * to avoid name conflicts of objects that already exist in the transient package\n\x09 */" },
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "ToolTip", "A unique outer created in the transient package to act as outer for this component's duplicated objects\nto avoid name conflicts of objects that already exist in the transient package" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_UniqueTransientPackage = { "UniqueTransientPackage", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorComponentInstanceData, UniqueTransientPackage), Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_UniqueTransientPackage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_UniqueTransientPackage_MetaData)) }; // 827929032
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_DuplicatedObjects_Inner = { "DuplicatedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData, METADATA_PARAMS(nullptr, 0) }; // 827929032
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_DuplicatedObjects_MetaData[] = {
		{ "Comment", "// Duplicated objects created when saving component instance properties\n" },
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "ToolTip", "Duplicated objects created when saving component instance properties" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_DuplicatedObjects = { "DuplicatedObjects", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorComponentInstanceData, DuplicatedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_DuplicatedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_DuplicatedObjects_MetaData)) }; // 827929032
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_ReferencedObjects_Inner = { "ReferencedObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_ReferencedObjects_MetaData[] = {
		{ "Comment", "// Referenced objects in component instance saved properties\n" },
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "ToolTip", "Referenced objects in component instance saved properties" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_ReferencedObjects = { "ReferencedObjects", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorComponentInstanceData, ReferencedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_ReferencedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_ReferencedObjects_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_ReferencedNames_Inner = { "ReferencedNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_ReferencedNames_MetaData[] = {
		{ "Comment", "// Referenced names in component instance saved properties\n" },
		{ "ModuleRelativePath", "Public/ComponentInstanceDataCache.h" },
		{ "ToolTip", "Referenced names in component instance saved properties" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_ReferencedNames = { "ReferencedNames", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorComponentInstanceData, ReferencedNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_ReferencedNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_ReferencedNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentCreationMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentCreationMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SourceComponentTypeSerializedIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SavedProperties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_SavedProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_UniqueTransientPackage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_DuplicatedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_DuplicatedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_ReferencedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_ReferencedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_ReferencedNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewProp_ReferencedNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ActorComponentInstanceData",
		sizeof(FActorComponentInstanceData),
		alignof(FActorComponentInstanceData),
		Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorComponentInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorComponentInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorComponentInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorComponentInstanceData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_Statics::EnumInfo[] = {
		{ EComponentCreationMethod_StaticEnum, TEXT("EComponentCreationMethod"), &Z_Registration_Info_UEnum_EComponentCreationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 609420841U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_Statics::ScriptStructInfo[] = {
		{ FActorComponentDuplicatedObjectData::StaticStruct, Z_Construct_UScriptStruct_FActorComponentDuplicatedObjectData_Statics::NewStructOps, TEXT("ActorComponentDuplicatedObjectData"), &Z_Registration_Info_UScriptStruct_ActorComponentDuplicatedObjectData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorComponentDuplicatedObjectData), 827929032U) },
		{ FActorComponentInstanceData::StaticStruct, Z_Construct_UScriptStruct_FActorComponentInstanceData_Statics::NewStructOps, TEXT("ActorComponentInstanceData"), &Z_Registration_Info_UScriptStruct_ActorComponentInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorComponentInstanceData), 2679331947U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorComponentInstanceDataTransientOuter, UActorComponentInstanceDataTransientOuter::StaticClass, TEXT("UActorComponentInstanceDataTransientOuter"), &Z_Registration_Info_UClass_UActorComponentInstanceDataTransientOuter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorComponentInstanceDataTransientOuter), 3501345746U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_2450923344(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ComponentInstanceDataCache_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
