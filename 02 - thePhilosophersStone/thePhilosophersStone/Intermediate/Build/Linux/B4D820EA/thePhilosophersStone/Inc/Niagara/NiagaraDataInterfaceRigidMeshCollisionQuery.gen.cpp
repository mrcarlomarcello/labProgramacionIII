// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraDataInterfaceRigidMeshCollisionQuery.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceRigidMeshCollisionQuery() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceRigidMeshCollisionQuery::StaticRegisterNativesUNiagaraDataInterfaceRigidMeshCollisionQuery()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceRigidMeshCollisionQuery);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_NoRegister()
	{
		return UNiagaraDataInterfaceRigidMeshCollisionQuery::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnlyUseMoveable_MetaData[];
#endif
		static void NewProp_OnlyUseMoveable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OnlyUseMoveable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumPrimitives_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxNumPrimitives;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::Class_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Data Interface used to collide against static meshes - whether it is the mesh distance field or a physics asset's collision primitive */" },
		{ "DisplayName", "Rigid Mesh Collision Query" },
		{ "IncludePath", "NiagaraDataInterfaceRigidMeshCollisionQuery.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceRigidMeshCollisionQuery.h" },
		{ "ToolTip", "Data Interface used to collide against static meshes - whether it is the mesh distance field or a physics asset's collision primitive" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "Static Mesh" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceRigidMeshCollisionQuery.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceRigidMeshCollisionQuery, Tag), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_OnlyUseMoveable_MetaData[] = {
		{ "Category", "Static Mesh" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceRigidMeshCollisionQuery.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_OnlyUseMoveable_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceRigidMeshCollisionQuery*)Obj)->OnlyUseMoveable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_OnlyUseMoveable = { "OnlyUseMoveable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceRigidMeshCollisionQuery), &Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_OnlyUseMoveable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_OnlyUseMoveable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_OnlyUseMoveable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_MaxNumPrimitives_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceRigidMeshCollisionQuery.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_MaxNumPrimitives = { "MaxNumPrimitives", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceRigidMeshCollisionQuery, MaxNumPrimitives), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_MaxNumPrimitives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_MaxNumPrimitives_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_OnlyUseMoveable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::NewProp_MaxNumPrimitives,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceRigidMeshCollisionQuery>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::ClassParams = {
		&UNiagaraDataInterfaceRigidMeshCollisionQuery::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceRigidMeshCollisionQuery>()
	{
		return UNiagaraDataInterfaceRigidMeshCollisionQuery::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceRigidMeshCollisionQuery);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery, UNiagaraDataInterfaceRigidMeshCollisionQuery::StaticClass, TEXT("UNiagaraDataInterfaceRigidMeshCollisionQuery"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceRigidMeshCollisionQuery), 2101157933U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_1480854399(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
