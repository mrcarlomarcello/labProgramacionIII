// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothingSystemRuntimeInterface/Public/ClothCollisionData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothCollisionData() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionData();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Convex();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Box();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClothCollisionData;
class UScriptStruct* FClothCollisionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClothCollisionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClothCollisionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothCollisionData, Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface(), TEXT("ClothCollisionData"));
	}
	return Z_Registration_Info_UScriptStruct_ClothCollisionData.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* StaticStruct<FClothCollisionData>()
{
	return FClothCollisionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClothCollisionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spheres_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spheres_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Spheres;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SphereConnections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereConnections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SphereConnections;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Convexes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Convexes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Convexes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Boxes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Boxes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Boxes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ClothCollisionData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothCollisionData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Spheres_Inner = { "Spheres", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere, METADATA_PARAMS(nullptr, 0) }; // 4122793725
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Spheres_MetaData[] = {
		{ "Category", "Collison" },
		{ "Comment", "// Sphere data\n" },
		{ "ModuleRelativePath", "Public/ClothCollisionData.h" },
		{ "ToolTip", "Sphere data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Spheres = { "Spheres", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothCollisionData, Spheres), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Spheres_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Spheres_MetaData)) }; // 4122793725
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_SphereConnections_Inner = { "SphereConnections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection, METADATA_PARAMS(nullptr, 0) }; // 2550655469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_SphereConnections_MetaData[] = {
		{ "Category", "Collison" },
		{ "Comment", "// Capsule data\n" },
		{ "ModuleRelativePath", "Public/ClothCollisionData.h" },
		{ "ToolTip", "Capsule data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_SphereConnections = { "SphereConnections", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothCollisionData, SphereConnections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_SphereConnections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_SphereConnections_MetaData)) }; // 2550655469
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Convexes_Inner = { "Convexes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FClothCollisionPrim_Convex, METADATA_PARAMS(nullptr, 0) }; // 1830746591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Convexes_MetaData[] = {
		{ "Category", "Collison" },
		{ "Comment", "// Convex Data\n" },
		{ "ModuleRelativePath", "Public/ClothCollisionData.h" },
		{ "ToolTip", "Convex Data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Convexes = { "Convexes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothCollisionData, Convexes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Convexes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Convexes_MetaData)) }; // 1830746591
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Boxes_Inner = { "Boxes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FClothCollisionPrim_Box, METADATA_PARAMS(nullptr, 0) }; // 146107206
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Boxes_MetaData[] = {
		{ "Category", "Collison" },
		{ "Comment", "// Box data\n" },
		{ "ModuleRelativePath", "Public/ClothCollisionData.h" },
		{ "ToolTip", "Box data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Boxes = { "Boxes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothCollisionData, Boxes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Boxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Boxes_MetaData)) }; // 146107206
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothCollisionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Spheres_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Spheres,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_SphereConnections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_SphereConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Convexes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Convexes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Boxes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewProp_Boxes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothCollisionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
		nullptr,
		&NewStructOps,
		"ClothCollisionData",
		sizeof(FClothCollisionData),
		alignof(FClothCollisionData),
		Z_Construct_UScriptStruct_FClothCollisionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothCollisionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionData()
	{
		if (!Z_Registration_Info_UScriptStruct_ClothCollisionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClothCollisionData.InnerSingleton, Z_Construct_UScriptStruct_FClothCollisionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClothCollisionData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothCollisionData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothCollisionData_h_Statics::ScriptStructInfo[] = {
		{ FClothCollisionData::StaticStruct, Z_Construct_UScriptStruct_FClothCollisionData_Statics::NewStructOps, TEXT("ClothCollisionData"), &Z_Registration_Info_UScriptStruct_ClothCollisionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClothCollisionData), 1478062750U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothCollisionData_h_2269353496(TEXT("/Script/ClothingSystemRuntimeInterface"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothCollisionData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothCollisionData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
