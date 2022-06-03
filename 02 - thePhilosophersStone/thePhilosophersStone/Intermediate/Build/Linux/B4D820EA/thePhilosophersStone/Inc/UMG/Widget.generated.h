// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSlateColor;
struct FLinearColor;
struct FSlateBrush;
enum class ESlateVisibility : uint8;
enum class ECheckBoxState : uint8;
class UWidget;
class UObject;
struct FEventReply;
struct FGeometry;
struct FPointerEvent;
class ULocalPlayer;
class APlayerController;
class UGameInstance;
class UPanelWidget;
enum class EUINavigation : uint8;
enum class EUINavigationRule : uint8;
enum class EWidgetClipping : uint8;
struct FWidgetTransform;
#ifdef UMG_Widget_generated_h
#error "Widget.generated.h already included, missing '#pragma once' in Widget.h"
#endif
#define UMG_Widget_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_229_DELEGATE \
struct Widget_eventGetBool_Parms \
{ \
	bool ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	Widget_eventGetBool_Parms() \
		: ReturnValue(false) \
	{ \
	} \
}; \
static inline bool FGetBool_DelegateWrapper(const FScriptDelegate& GetBool) \
{ \
	Widget_eventGetBool_Parms Parms; \
	GetBool.ProcessDelegate<UObject>(&Parms); \
	return !!Parms.ReturnValue; \
}


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_230_DELEGATE \
struct Widget_eventGetFloat_Parms \
{ \
	float ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	Widget_eventGetFloat_Parms() \
		: ReturnValue(0) \
	{ \
	} \
}; \
static inline float FGetFloat_DelegateWrapper(const FScriptDelegate& GetFloat) \
{ \
	Widget_eventGetFloat_Parms Parms; \
	GetFloat.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_231_DELEGATE \
struct Widget_eventGetInt32_Parms \
{ \
	int32 ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	Widget_eventGetInt32_Parms() \
		: ReturnValue(0) \
	{ \
	} \
}; \
static inline int32 FGetInt32_DelegateWrapper(const FScriptDelegate& GetInt32) \
{ \
	Widget_eventGetInt32_Parms Parms; \
	GetInt32.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_232_DELEGATE \
struct Widget_eventGetText_Parms \
{ \
	FText ReturnValue; \
}; \
static inline FText FGetText_DelegateWrapper(const FScriptDelegate& GetText) \
{ \
	Widget_eventGetText_Parms Parms; \
	GetText.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_233_DELEGATE \
struct Widget_eventGetSlateColor_Parms \
{ \
	FSlateColor ReturnValue; \
}; \
static inline FSlateColor FGetSlateColor_DelegateWrapper(const FScriptDelegate& GetSlateColor) \
{ \
	Widget_eventGetSlateColor_Parms Parms; \
	GetSlateColor.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_234_DELEGATE \
struct Widget_eventGetLinearColor_Parms \
{ \
	FLinearColor ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	Widget_eventGetLinearColor_Parms() \
		: ReturnValue(ForceInit) \
	{ \
	} \
}; \
static inline FLinearColor FGetLinearColor_DelegateWrapper(const FScriptDelegate& GetLinearColor) \
{ \
	Widget_eventGetLinearColor_Parms Parms; \
	GetLinearColor.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_235_DELEGATE \
struct Widget_eventGetSlateBrush_Parms \
{ \
	FSlateBrush ReturnValue; \
}; \
static inline FSlateBrush FGetSlateBrush_DelegateWrapper(const FScriptDelegate& GetSlateBrush) \
{ \
	Widget_eventGetSlateBrush_Parms Parms; \
	GetSlateBrush.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_236_DELEGATE \
struct Widget_eventGetSlateVisibility_Parms \
{ \
	ESlateVisibility ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	Widget_eventGetSlateVisibility_Parms() \
		: ReturnValue((ESlateVisibility)0) \
	{ \
	} \
}; \
static inline ESlateVisibility FGetSlateVisibility_DelegateWrapper(const FScriptDelegate& GetSlateVisibility) \
{ \
	Widget_eventGetSlateVisibility_Parms Parms; \
	GetSlateVisibility.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_237_DELEGATE \
struct Widget_eventGetMouseCursor_Parms \
{ \
	TEnumAsByte<EMouseCursor::Type> ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	Widget_eventGetMouseCursor_Parms() \
		: ReturnValue(0) \
	{ \
	} \
}; \
static inline EMouseCursor::Type FGetMouseCursor_DelegateWrapper(const FScriptDelegate& GetMouseCursor) \
{ \
	Widget_eventGetMouseCursor_Parms Parms; \
	GetMouseCursor.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_238_DELEGATE \
struct Widget_eventGetCheckBoxState_Parms \
{ \
	ECheckBoxState ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	Widget_eventGetCheckBoxState_Parms() \
		: ReturnValue((ECheckBoxState)0) \
	{ \
	} \
}; \
static inline ECheckBoxState FGetCheckBoxState_DelegateWrapper(const FScriptDelegate& GetCheckBoxState) \
{ \
	Widget_eventGetCheckBoxState_Parms Parms; \
	GetCheckBoxState.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_239_DELEGATE \
struct Widget_eventGetWidget_Parms \
{ \
	UWidget* ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	Widget_eventGetWidget_Parms() \
		: ReturnValue(NULL) \
	{ \
	} \
}; \
static inline UWidget* FGetWidget_DelegateWrapper(const FScriptDelegate& GetWidget) \
{ \
	Widget_eventGetWidget_Parms Parms; \
	GetWidget.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_242_DELEGATE \
struct Widget_eventGenerateWidgetForString_Parms \
{ \
	FString Item; \
	UWidget* ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	Widget_eventGenerateWidgetForString_Parms() \
		: ReturnValue(NULL) \
	{ \
	} \
}; \
static inline UWidget* FGenerateWidgetForString_DelegateWrapper(const FScriptDelegate& GenerateWidgetForString, const FString& Item) \
{ \
	Widget_eventGenerateWidgetForString_Parms Parms; \
	Parms.Item=Item; \
	GenerateWidgetForString.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_243_DELEGATE \
struct Widget_eventGenerateWidgetForObject_Parms \
{ \
	UObject* Item; \
	UWidget* ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	Widget_eventGenerateWidgetForObject_Parms() \
		: ReturnValue(NULL) \
	{ \
	} \
}; \
static inline UWidget* FGenerateWidgetForObject_DelegateWrapper(const FScriptDelegate& GenerateWidgetForObject, UObject* Item) \
{ \
	Widget_eventGenerateWidgetForObject_Parms Parms; \
	Parms.Item=Item; \
	GenerateWidgetForObject.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_246_DELEGATE \
struct Widget_eventOnReply_Parms \
{ \
	FEventReply ReturnValue; \
}; \
static inline FEventReply FOnReply_DelegateWrapper(const FScriptDelegate& OnReply) \
{ \
	Widget_eventOnReply_Parms Parms; \
	OnReply.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_247_DELEGATE \
struct Widget_eventOnPointerEvent_Parms \
{ \
	FGeometry MyGeometry; \
	FPointerEvent MouseEvent; \
	FEventReply ReturnValue; \
}; \
static inline FEventReply FOnPointerEvent_DelegateWrapper(const FScriptDelegate& OnPointerEvent, FGeometry MyGeometry, FPointerEvent const& MouseEvent) \
{ \
	Widget_eventOnPointerEvent_Parms Parms; \
	Parms.MyGeometry=MyGeometry; \
	Parms.MouseEvent=MouseEvent; \
	OnPointerEvent.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_222_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_222_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAccessibleSummaryText); \
	DECLARE_FUNCTION(execGetAccessibleText); \
	DECLARE_FUNCTION(execGetOwningLocalPlayer); \
	DECLARE_FUNCTION(execGetOwningPlayer); \
	DECLARE_FUNCTION(execGetGameInstance); \
	DECLARE_FUNCTION(execGetPaintSpaceGeometry); \
	DECLARE_FUNCTION(execGetTickSpaceGeometry); \
	DECLARE_FUNCTION(execGetCachedGeometry); \
	DECLARE_FUNCTION(execRemoveFromParent); \
	DECLARE_FUNCTION(execGetParent); \
	DECLARE_FUNCTION(execSetNavigationRuleCustomBoundary); \
	DECLARE_FUNCTION(execSetNavigationRuleCustom); \
	DECLARE_FUNCTION(execSetNavigationRuleExplicit); \
	DECLARE_FUNCTION(execSetNavigationRuleBase); \
	DECLARE_FUNCTION(execSetNavigationRule); \
	DECLARE_FUNCTION(execSetAllNavigationRules); \
	DECLARE_FUNCTION(execGetDesiredSize); \
	DECLARE_FUNCTION(execInvalidateLayoutAndVolatility); \
	DECLARE_FUNCTION(execForceLayoutPrepass); \
	DECLARE_FUNCTION(execSetUserFocus); \
	DECLARE_FUNCTION(execSetFocus); \
	DECLARE_FUNCTION(execHasUserFocusedDescendants); \
	DECLARE_FUNCTION(execHasFocusedDescendants); \
	DECLARE_FUNCTION(execHasAnyUserFocus); \
	DECLARE_FUNCTION(execHasUserFocus); \
	DECLARE_FUNCTION(execSetKeyboardFocus); \
	DECLARE_FUNCTION(execHasMouseCaptureByUser); \
	DECLARE_FUNCTION(execHasMouseCapture); \
	DECLARE_FUNCTION(execHasKeyboardFocus); \
	DECLARE_FUNCTION(execIsHovered); \
	DECLARE_FUNCTION(execForceVolatile); \
	DECLARE_FUNCTION(execSetClipping); \
	DECLARE_FUNCTION(execGetClipping); \
	DECLARE_FUNCTION(execSetRenderOpacity); \
	DECLARE_FUNCTION(execGetRenderOpacity); \
	DECLARE_FUNCTION(execSetVisibility); \
	DECLARE_FUNCTION(execGetVisibility); \
	DECLARE_FUNCTION(execIsVisible); \
	DECLARE_FUNCTION(execResetCursor); \
	DECLARE_FUNCTION(execSetCursor); \
	DECLARE_FUNCTION(execSetToolTip); \
	DECLARE_FUNCTION(execSetToolTipText); \
	DECLARE_FUNCTION(execSetIsEnabled); \
	DECLARE_FUNCTION(execGetIsEnabled); \
	DECLARE_FUNCTION(execSetRenderTransformPivot); \
	DECLARE_FUNCTION(execSetRenderTranslation); \
	DECLARE_FUNCTION(execGetRenderTransformAngle); \
	DECLARE_FUNCTION(execSetRenderTransformAngle); \
	DECLARE_FUNCTION(execSetRenderShear); \
	DECLARE_FUNCTION(execSetRenderScale); \
	DECLARE_FUNCTION(execSetRenderTransform);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_222_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAccessibleSummaryText); \
	DECLARE_FUNCTION(execGetAccessibleText); \
	DECLARE_FUNCTION(execGetOwningLocalPlayer); \
	DECLARE_FUNCTION(execGetOwningPlayer); \
	DECLARE_FUNCTION(execGetGameInstance); \
	DECLARE_FUNCTION(execGetPaintSpaceGeometry); \
	DECLARE_FUNCTION(execGetTickSpaceGeometry); \
	DECLARE_FUNCTION(execGetCachedGeometry); \
	DECLARE_FUNCTION(execRemoveFromParent); \
	DECLARE_FUNCTION(execGetParent); \
	DECLARE_FUNCTION(execSetNavigationRuleCustomBoundary); \
	DECLARE_FUNCTION(execSetNavigationRuleCustom); \
	DECLARE_FUNCTION(execSetNavigationRuleExplicit); \
	DECLARE_FUNCTION(execSetNavigationRuleBase); \
	DECLARE_FUNCTION(execSetNavigationRule); \
	DECLARE_FUNCTION(execSetAllNavigationRules); \
	DECLARE_FUNCTION(execGetDesiredSize); \
	DECLARE_FUNCTION(execInvalidateLayoutAndVolatility); \
	DECLARE_FUNCTION(execForceLayoutPrepass); \
	DECLARE_FUNCTION(execSetUserFocus); \
	DECLARE_FUNCTION(execSetFocus); \
	DECLARE_FUNCTION(execHasUserFocusedDescendants); \
	DECLARE_FUNCTION(execHasFocusedDescendants); \
	DECLARE_FUNCTION(execHasAnyUserFocus); \
	DECLARE_FUNCTION(execHasUserFocus); \
	DECLARE_FUNCTION(execSetKeyboardFocus); \
	DECLARE_FUNCTION(execHasMouseCaptureByUser); \
	DECLARE_FUNCTION(execHasMouseCapture); \
	DECLARE_FUNCTION(execHasKeyboardFocus); \
	DECLARE_FUNCTION(execIsHovered); \
	DECLARE_FUNCTION(execForceVolatile); \
	DECLARE_FUNCTION(execSetClipping); \
	DECLARE_FUNCTION(execGetClipping); \
	DECLARE_FUNCTION(execSetRenderOpacity); \
	DECLARE_FUNCTION(execGetRenderOpacity); \
	DECLARE_FUNCTION(execSetVisibility); \
	DECLARE_FUNCTION(execGetVisibility); \
	DECLARE_FUNCTION(execIsVisible); \
	DECLARE_FUNCTION(execResetCursor); \
	DECLARE_FUNCTION(execSetCursor); \
	DECLARE_FUNCTION(execSetToolTip); \
	DECLARE_FUNCTION(execSetToolTipText); \
	DECLARE_FUNCTION(execSetIsEnabled); \
	DECLARE_FUNCTION(execGetIsEnabled); \
	DECLARE_FUNCTION(execSetRenderTransformPivot); \
	DECLARE_FUNCTION(execSetRenderTranslation); \
	DECLARE_FUNCTION(execGetRenderTransformAngle); \
	DECLARE_FUNCTION(execSetRenderTransformAngle); \
	DECLARE_FUNCTION(execSetRenderShear); \
	DECLARE_FUNCTION(execSetRenderScale); \
	DECLARE_FUNCTION(execSetRenderTransform);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_222_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidget(); \
	friend struct Z_Construct_UClass_UWidget_Statics; \
public: \
	DECLARE_CLASS(UWidget, UVisual, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidget)


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_222_INCLASS \
private: \
	static void StaticRegisterNativesUWidget(); \
	friend struct Z_Construct_UClass_UWidget_Statics; \
public: \
	DECLARE_CLASS(UWidget, UVisual, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidget)


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_222_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidget(UWidget&&); \
	NO_API UWidget(const UWidget&); \
public:


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_222_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidget(UWidget&&); \
	NO_API UWidget(const UWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidget)


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_219_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_222_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_222_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_222_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_222_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_222_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_222_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_222_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_222_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_222_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h_222_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Widget."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_Widget_h


#define FOREACH_ENUM_EWIDGETDESIGNFLAGS(op) \
	op(EWidgetDesignFlags::None) \
	op(EWidgetDesignFlags::Designing) \
	op(EWidgetDesignFlags::ShowOutline) \
	op(EWidgetDesignFlags::ExecutePreConstruct) 

enum class EWidgetDesignFlags : uint8;
template<> UMG_API UEnum* StaticEnum<EWidgetDesignFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
