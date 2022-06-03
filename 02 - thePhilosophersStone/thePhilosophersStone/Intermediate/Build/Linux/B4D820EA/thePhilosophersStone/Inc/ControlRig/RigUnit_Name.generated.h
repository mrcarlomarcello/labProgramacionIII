// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_Name_generated_h
#error "RigUnit_Name.generated.h already included, missing '#pragma once' in RigUnit_Name.h"
#endif
#define CONTROLRIG_RigUnit_Name_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_Name_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_NameBase_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRigUnit Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_NameBase>();


#define FRigUnit_NameConcat_Execute() \
	void FRigUnit_NameConcat::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& A, \
		const FName& B, \
		FName& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_Name_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_NameConcat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& A, \
		const FName& B, \
		FName& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FName& A = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FName& B = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		FName& Result = *(FName*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			A, \
			B, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_NameBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_NameConcat>();


#define FRigUnit_NameTruncate_Execute() \
	void FRigUnit_NameTruncate::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Name, \
		const int32 Count, \
		const bool FromEnd, \
		FName& Remainder, \
		FName& Chopped, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_Name_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_NameTruncate_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Name, \
		const int32 Count, \
		const bool FromEnd, \
		FName& Remainder, \
		FName& Chopped, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FName& Name = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const int32 Count = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		const bool FromEnd = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		FName& Remainder = *(FName*)RigVMMemoryHandles[3].GetData(false); \
		FName& Chopped = *(FName*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Name, \
			Count, \
			FromEnd, \
			Remainder, \
			Chopped, \
			Context \
		); \
	} \
	typedef FRigUnit_NameBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_NameTruncate>();


#define FRigUnit_NameReplace_Execute() \
	void FRigUnit_NameReplace::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Name, \
		const FName& Old, \
		const FName& New, \
		FName& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_Name_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_NameReplace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Name, \
		const FName& Old, \
		const FName& New, \
		FName& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FName& Name = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Old = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		const FName& New = *(FName*)RigVMMemoryHandles[2].GetData(false); \
		FName& Result = *(FName*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Name, \
			Old, \
			New, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_NameBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_NameReplace>();


#define FRigUnit_EndsWith_Execute() \
	void FRigUnit_EndsWith::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Name, \
		const FName& Ending, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_Name_h_113_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_EndsWith_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Name, \
		const FName& Ending, \
		bool& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FName& Name = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Ending = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Name, \
			Ending, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_NameBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_EndsWith>();


#define FRigUnit_StartsWith_Execute() \
	void FRigUnit_StartsWith::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Name, \
		const FName& Start, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_Name_h_140_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_StartsWith_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Name, \
		const FName& Start, \
		bool& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FName& Name = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Start = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Name, \
			Start, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_NameBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_StartsWith>();


#define FRigUnit_Contains_Execute() \
	void FRigUnit_Contains::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Name, \
		const FName& Search, \
		bool& Result, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_Name_h_167_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_Contains_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Name, \
		const FName& Search, \
		bool& Result, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FName& Name = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const FName& Search = *(FName*)RigVMMemoryHandles[1].GetData(false); \
		bool& Result = *(bool*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Name, \
			Search, \
			Result, \
			Context \
		); \
	} \
	typedef FRigUnit_NameBase Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_Contains>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Core_RigUnit_Name_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
