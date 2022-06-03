// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/Actions/PawnAction_Move.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnAction_Move() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnActionMoveMode();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_Move_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction_Move();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnAction();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPawnActionMoveMode;
	static UEnum* EPawnActionMoveMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPawnActionMoveMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPawnActionMoveMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPawnActionMoveMode, Z_Construct_UPackage__Script_AIModule(), TEXT("EPawnActionMoveMode"));
		}
		return Z_Registration_Info_UEnum_EPawnActionMoveMode.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EPawnActionMoveMode::Type>()
	{
		return EPawnActionMoveMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EPawnActionMoveMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EPawnActionMoveMode_Statics::Enumerators[] = {
		{ "EPawnActionMoveMode::UsePathfinding", (int64)EPawnActionMoveMode::UsePathfinding },
		{ "EPawnActionMoveMode::StraightLine", (int64)EPawnActionMoveMode::StraightLine },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EPawnActionMoveMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
		{ "StraightLine.Name", "EPawnActionMoveMode::StraightLine" },
		{ "UsePathfinding.Name", "EPawnActionMoveMode::UsePathfinding" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EPawnActionMoveMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EPawnActionMoveMode",
		"EPawnActionMoveMode::Type",
		Z_Construct_UEnum_AIModule_EPawnActionMoveMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPawnActionMoveMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EPawnActionMoveMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPawnActionMoveMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EPawnActionMoveMode()
	{
		if (!Z_Registration_Info_UEnum_EPawnActionMoveMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPawnActionMoveMode.InnerSingleton, Z_Construct_UEnum_AIModule_EPawnActionMoveMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPawnActionMoveMode.InnerSingleton;
	}
	void UPawnAction_Move::StaticRegisterNativesUPawnAction_Move()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPawnAction_Move);
	UClass* Z_Construct_UClass_UPawnAction_Move_NoRegister()
	{
		return UPawnAction_Move::StaticClass();
	}
	struct Z_Construct_UClass_UPawnAction_Move_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GoalActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GoalLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AcceptableRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptableRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_FilterClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowStrafe_MetaData[];
#endif
		static void NewProp_bAllowStrafe_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowStrafe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFinishOnOverlap_MetaData[];
#endif
		static void NewProp_bFinishOnOverlap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFinishOnOverlap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePathfinding_MetaData[];
#endif
		static void NewProp_bUsePathfinding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePathfinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPartialPath_MetaData[];
#endif
		static void NewProp_bAllowPartialPath_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPartialPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProjectGoalToNavigation_MetaData[];
#endif
		static void NewProp_bProjectGoalToNavigation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectGoalToNavigation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdatePathToGoal_MetaData[];
#endif
		static void NewProp_bUpdatePathToGoal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdatePathToGoal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAbortChildActionOnPathChange_MetaData[];
#endif
		static void NewProp_bAbortChildActionOnPathChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbortChildActionOnPathChange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPawnAction_Move_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnAction,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Move_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actions/PawnAction_Move.h" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_GoalActor_MetaData[] = {
		{ "Category", "PawnAction" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_GoalActor = { "GoalActor", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPawnAction_Move, GoalActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_GoalActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_GoalActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_GoalLocation_MetaData[] = {
		{ "Category", "PawnAction" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_GoalLocation = { "GoalLocation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPawnAction_Move, GoalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_GoalLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_GoalLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_AcceptableRadius_MetaData[] = {
		{ "Category", "PawnAction" },
		{ "ClampMin", "0.01" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_AcceptableRadius = { "AcceptableRadius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPawnAction_Move, AcceptableRadius), METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_AcceptableRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_AcceptableRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_FilterClass_MetaData[] = {
		{ "Category", "PawnAction" },
		{ "Comment", "/** \"None\" will result in default filter being used */" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
		{ "ToolTip", "\"None\" will result in default filter being used" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPawnAction_Move, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_FilterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_FilterClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAllowStrafe_MetaData[] = {
		{ "Category", "PawnAction" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
	};
#endif
	void Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAllowStrafe_SetBit(void* Obj)
	{
		((UPawnAction_Move*)Obj)->bAllowStrafe = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAllowStrafe = { "bAllowStrafe", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPawnAction_Move), &Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAllowStrafe_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAllowStrafe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAllowStrafe_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bFinishOnOverlap_MetaData[] = {
		{ "Comment", "/** if set to true (default) will make action succeed when the pawn's collision component overlaps with goal's collision component */" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
		{ "ToolTip", "if set to true (default) will make action succeed when the pawn's collision component overlaps with goal's collision component" },
	};
#endif
	void Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bFinishOnOverlap_SetBit(void* Obj)
	{
		((UPawnAction_Move*)Obj)->bFinishOnOverlap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bFinishOnOverlap = { "bFinishOnOverlap", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPawnAction_Move), &Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bFinishOnOverlap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bFinishOnOverlap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bFinishOnOverlap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bUsePathfinding_MetaData[] = {
		{ "Comment", "/** if set, movement will use path finding */" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
		{ "ToolTip", "if set, movement will use path finding" },
	};
#endif
	void Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bUsePathfinding_SetBit(void* Obj)
	{
		((UPawnAction_Move*)Obj)->bUsePathfinding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bUsePathfinding = { "bUsePathfinding", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPawnAction_Move), &Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bUsePathfinding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bUsePathfinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bUsePathfinding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAllowPartialPath_MetaData[] = {
		{ "Comment", "/** if set, use incomplete path when goal can't be reached */" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
		{ "ToolTip", "if set, use incomplete path when goal can't be reached" },
	};
#endif
	void Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAllowPartialPath_SetBit(void* Obj)
	{
		((UPawnAction_Move*)Obj)->bAllowPartialPath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAllowPartialPath = { "bAllowPartialPath", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPawnAction_Move), &Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAllowPartialPath_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAllowPartialPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAllowPartialPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bProjectGoalToNavigation_MetaData[] = {
		{ "Comment", "/** if set, GoalLocation will be projected on navigation before using  */" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
		{ "ToolTip", "if set, GoalLocation will be projected on navigation before using" },
	};
#endif
	void Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bProjectGoalToNavigation_SetBit(void* Obj)
	{
		((UPawnAction_Move*)Obj)->bProjectGoalToNavigation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bProjectGoalToNavigation = { "bProjectGoalToNavigation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPawnAction_Move), &Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bProjectGoalToNavigation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bProjectGoalToNavigation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bProjectGoalToNavigation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bUpdatePathToGoal_MetaData[] = {
		{ "Comment", "/** if set, path to GoalActor will be updated with goal's movement */" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
		{ "ToolTip", "if set, path to GoalActor will be updated with goal's movement" },
	};
#endif
	void Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bUpdatePathToGoal_SetBit(void* Obj)
	{
		((UPawnAction_Move*)Obj)->bUpdatePathToGoal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bUpdatePathToGoal = { "bUpdatePathToGoal", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPawnAction_Move), &Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bUpdatePathToGoal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bUpdatePathToGoal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bUpdatePathToGoal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAbortChildActionOnPathChange_MetaData[] = {
		{ "Comment", "/** if set, other actions with the same priority will be aborted when path is changed */" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Move.h" },
		{ "ToolTip", "if set, other actions with the same priority will be aborted when path is changed" },
	};
#endif
	void Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAbortChildActionOnPathChange_SetBit(void* Obj)
	{
		((UPawnAction_Move*)Obj)->bAbortChildActionOnPathChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAbortChildActionOnPathChange = { "bAbortChildActionOnPathChange", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPawnAction_Move), &Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAbortChildActionOnPathChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAbortChildActionOnPathChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAbortChildActionOnPathChange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPawnAction_Move_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_GoalActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_GoalLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_AcceptableRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_FilterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAllowStrafe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bFinishOnOverlap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bUsePathfinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAllowPartialPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bProjectGoalToNavigation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bUpdatePathToGoal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnAction_Move_Statics::NewProp_bAbortChildActionOnPathChange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPawnAction_Move_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnAction_Move>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPawnAction_Move_Statics::ClassParams = {
		&UPawnAction_Move::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPawnAction_Move_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Move_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPawnAction_Move_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnAction_Move_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPawnAction_Move()
	{
		if (!Z_Registration_Info_UClass_UPawnAction_Move.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPawnAction_Move.OuterSingleton, Z_Construct_UClass_UPawnAction_Move_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPawnAction_Move.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UPawnAction_Move>()
	{
		return UPawnAction_Move::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnAction_Move);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_Statics::EnumInfo[] = {
		{ EPawnActionMoveMode_StaticEnum, TEXT("EPawnActionMoveMode"), &Z_Registration_Info_UEnum_EPawnActionMoveMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2289358950U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPawnAction_Move, UPawnAction_Move::StaticClass, TEXT("UPawnAction_Move"), &Z_Registration_Info_UClass_UPawnAction_Move, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPawnAction_Move), 593010726U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_1536939078(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Move_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
