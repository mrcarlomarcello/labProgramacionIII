// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_RigUnit_SetControlTransform_generated_h
#error "RigUnit_SetControlTransform.generated.h already included, missing '#pragma once' in RigUnit_SetControlTransform.h"
#endif
#define CONTROLRIG_RigUnit_SetControlTransform_generated_h


#define FRigUnit_SetControlBool_Execute() \
	void FRigUnit_SetControlBool::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Control, \
		bool& BoolValue, \
		FCachedRigElement& CachedControlIndex, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetControlBool_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Control, \
		bool& BoolValue, \
		FCachedRigElement& CachedControlIndex, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		bool& BoolValue = *(bool*)RigVMMemoryHandles[1].GetData(false); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Control, \
			BoolValue, \
			CachedControlIndex, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetControlBool>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Entry_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetMultiControlBool_Entry>();


#define FRigUnit_SetMultiControlBool_Execute() \
	void FRigUnit_SetMultiControlBool::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigUnit_SetMultiControlBool_Entry>& Entries, \
		TArray<FCachedRigElement>& CachedControlIndices, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigUnit_SetMultiControlBool_Entry>& Entries, \
		TArray<FCachedRigElement>& CachedControlIndices, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		TArray<FRigUnit_SetMultiControlBool_Entry>& Entries = *(TArray<FRigUnit_SetMultiControlBool_Entry>*)RigVMMemoryHandles[0].GetData(false); \
		TArray<FCachedRigElement>& CachedControlIndices = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[1].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[2].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Entries, \
			CachedControlIndices, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetMultiControlBool>();


#define FRigUnit_SetControlFloat_Execute() \
	void FRigUnit_SetControlFloat::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Control, \
		const float Weight, \
		float& FloatValue, \
		FCachedRigElement& CachedControlIndex, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetControlFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Control, \
		const float Weight, \
		float& FloatValue, \
		FCachedRigElement& CachedControlIndex, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[1].GetData(false); \
		float& FloatValue = *(float*)RigVMMemoryHandles[2].GetData(false); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Control, \
			Weight, \
			FloatValue, \
			CachedControlIndex, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetControlFloat>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_131_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Entry_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetMultiControlFloat_Entry>();


#define FRigUnit_SetMultiControlFloat_Execute() \
	void FRigUnit_SetMultiControlFloat::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigUnit_SetMultiControlFloat_Entry>& Entries, \
		const float Weight, \
		TArray<FCachedRigElement>& CachedControlIndices, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_155_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlFloat_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigUnit_SetMultiControlFloat_Entry>& Entries, \
		const float Weight, \
		TArray<FCachedRigElement>& CachedControlIndices, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		TArray<FRigUnit_SetMultiControlFloat_Entry>& Entries = *(TArray<FRigUnit_SetMultiControlFloat_Entry>*)RigVMMemoryHandles[0].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[1].GetData(false); \
		TArray<FCachedRigElement>& CachedControlIndices = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Entries, \
			Weight, \
			CachedControlIndices, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetMultiControlFloat>();


#define FRigUnit_SetControlInteger_Execute() \
	void FRigUnit_SetControlInteger::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Control, \
		const int32 Weight, \
		int32& IntegerValue, \
		FCachedRigElement& CachedControlIndex, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_191_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetControlInteger_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Control, \
		const int32 Weight, \
		int32& IntegerValue, \
		FCachedRigElement& CachedControlIndex, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const int32 Weight = *(int32*)RigVMMemoryHandles[1].GetData(false); \
		int32& IntegerValue = *(int32*)RigVMMemoryHandles[2].GetData(false); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Control, \
			Weight, \
			IntegerValue, \
			CachedControlIndex, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetControlInteger>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_228_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Entry_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetMultiControlInteger_Entry>();


#define FRigUnit_SetMultiControlInteger_Execute() \
	void FRigUnit_SetMultiControlInteger::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigUnit_SetMultiControlInteger_Entry>& Entries, \
		const float Weight, \
		TArray<FCachedRigElement>& CachedControlIndices, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_252_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlInteger_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigUnit_SetMultiControlInteger_Entry>& Entries, \
		const float Weight, \
		TArray<FCachedRigElement>& CachedControlIndices, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		TArray<FRigUnit_SetMultiControlInteger_Entry>& Entries = *(TArray<FRigUnit_SetMultiControlInteger_Entry>*)RigVMMemoryHandles[0].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[1].GetData(false); \
		TArray<FCachedRigElement>& CachedControlIndices = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Entries, \
			Weight, \
			CachedControlIndices, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetMultiControlInteger>();


#define FRigUnit_SetControlVector2D_Execute() \
	void FRigUnit_SetControlVector2D::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Control, \
		const float Weight, \
		FVector2D& Vector, \
		FCachedRigElement& CachedControlIndex, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_286_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetControlVector2D_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Control, \
		const float Weight, \
		FVector2D& Vector, \
		FCachedRigElement& CachedControlIndex, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[1].GetData(false); \
		FVector2D& Vector = *(FVector2D*)RigVMMemoryHandles[2].GetData(false); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[3].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[4].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Control, \
			Weight, \
			Vector, \
			CachedControlIndex, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetControlVector2D>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_323_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Entry_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetMultiControlVector2D_Entry>();


#define FRigUnit_SetMultiControlVector2D_Execute() \
	void FRigUnit_SetMultiControlVector2D::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigUnit_SetMultiControlVector2D_Entry>& Entries, \
		const float Weight, \
		TArray<FCachedRigElement>& CachedControlIndices, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_348_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlVector2D_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigUnit_SetMultiControlVector2D_Entry>& Entries, \
		const float Weight, \
		TArray<FCachedRigElement>& CachedControlIndices, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		TArray<FRigUnit_SetMultiControlVector2D_Entry>& Entries = *(TArray<FRigUnit_SetMultiControlVector2D_Entry>*)RigVMMemoryHandles[0].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[1].GetData(false); \
		TArray<FCachedRigElement>& CachedControlIndices = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Entries, \
			Weight, \
			CachedControlIndices, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetMultiControlVector2D>();


#define FRigUnit_SetControlVector_Execute() \
	void FRigUnit_SetControlVector::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Control, \
		const float Weight, \
		FVector& Vector, \
		const EBoneGetterSetterMode Space, \
		FCachedRigElement& CachedControlIndex, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_382_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetControlVector_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Control, \
		const float Weight, \
		FVector& Vector, \
		const EBoneGetterSetterMode Space, \
		FCachedRigElement& CachedControlIndex, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[1].GetData(false); \
		FVector& Vector = *(FVector*)RigVMMemoryHandles[2].GetData(false); \
		const EBoneGetterSetterMode Space = *(EBoneGetterSetterMode*)RigVMMemoryHandles[3].GetData(false); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Control, \
			Weight, \
			Vector, \
			Space, \
			CachedControlIndex, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetControlVector>();


#define FRigUnit_SetControlRotator_Execute() \
	void FRigUnit_SetControlRotator::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Control, \
		const float Weight, \
		FRotator& Rotator, \
		const EBoneGetterSetterMode Space, \
		FCachedRigElement& CachedControlIndex, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_430_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetControlRotator_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Control, \
		const float Weight, \
		FRotator& Rotator, \
		const EBoneGetterSetterMode Space, \
		FCachedRigElement& CachedControlIndex, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[1].GetData(false); \
		FRotator& Rotator = *(FRotator*)RigVMMemoryHandles[2].GetData(false); \
		const EBoneGetterSetterMode Space = *(EBoneGetterSetterMode*)RigVMMemoryHandles[3].GetData(false); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Control, \
			Weight, \
			Rotator, \
			Space, \
			CachedControlIndex, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetControlRotator>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_475_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Entry_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetMultiControlRotator_Entry>();


#define FRigUnit_SetMultiControlRotator_Execute() \
	void FRigUnit_SetMultiControlRotator::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigUnit_SetMultiControlRotator_Entry>& Entries, \
		const float Weight, \
		TArray<FCachedRigElement>& CachedControlIndices, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_509_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetMultiControlRotator_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const TArrayView<const FRigUnit_SetMultiControlRotator_Entry>& Entries, \
		const float Weight, \
		TArray<FCachedRigElement>& CachedControlIndices, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		TArray<FRigUnit_SetMultiControlRotator_Entry>& Entries = *(TArray<FRigUnit_SetMultiControlRotator_Entry>*)RigVMMemoryHandles[0].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[1].GetData(false); \
		TArray<FCachedRigElement>& CachedControlIndices = *(TArray<FCachedRigElement>*)RigVMMemoryHandles[2].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[3].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Entries, \
			Weight, \
			CachedControlIndices, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetMultiControlRotator>();


#define FRigUnit_SetControlTransform_Execute() \
	void FRigUnit_SetControlTransform::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Control, \
		const float Weight, \
		FTransform& Transform, \
		const EBoneGetterSetterMode Space, \
		FCachedRigElement& CachedControlIndex, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h_543_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_SetControlTransform_Statics; \
	static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Control, \
		const float Weight, \
		FTransform& Transform, \
		const EBoneGetterSetterMode Space, \
		FCachedRigElement& CachedControlIndex, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FName& Control = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const float Weight = *(float*)RigVMMemoryHandles[1].GetData(false); \
		FTransform& Transform = *(FTransform*)RigVMMemoryHandles[2].GetData(false); \
		const EBoneGetterSetterMode Space = *(EBoneGetterSetterMode*)RigVMMemoryHandles[3].GetData(false); \
		FCachedRigElement& CachedControlIndex = *(FCachedRigElement*)RigVMMemoryHandles[4].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[5].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Control, \
			Weight, \
			Transform, \
			Space, \
			CachedControlIndex, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> CONTROLRIG_API UScriptStruct* StaticStruct<struct FRigUnit_SetControlTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlTransform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
