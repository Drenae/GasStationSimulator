#ifndef UE4SS_SDK_CommonUI_HPP
#define UE4SS_SDK_CommonUI_HPP

#include "CommonUI_enums.hpp"

struct FCommonAnalogCursorSettings
{
    int32 PreprocessorPriority;                                                       // 0x0000 (size: 0x4)
    bool bEnableCursorAcceleration;                                                   // 0x0004 (size: 0x1)
    float CursorAcceleration;                                                         // 0x0008 (size: 0x4)
    float CursorMaxSpeed;                                                             // 0x000C (size: 0x4)
    float CursorDeadZone;                                                             // 0x0010 (size: 0x4)
    float HoverSlowdownFactor;                                                        // 0x0014 (size: 0x4)
    float ScrollDeadZone;                                                             // 0x0018 (size: 0x4)
    float ScrollUpdatePeriod;                                                         // 0x001C (size: 0x4)
    float ScrollMultiplier;                                                           // 0x0020 (size: 0x4)

}; // Size: 0x24

struct FCommonButtonStyleOptionalSlateSound
{
    bool bHasSound;                                                                   // 0x0000 (size: 0x1)
    FSlateSound Sound;                                                                // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FCommonInputActionDataBase : public FTableRowBase
{
    FText DisplayName;                                                                // 0x0008 (size: 0x18)
    FText HoldDisplayName;                                                            // 0x0020 (size: 0x18)
    FCommonInputTypeInfo KeyboardInputTypeInfo;                                       // 0x0038 (size: 0xA8)
    FCommonInputTypeInfo DefaultGamepadInputTypeInfo;                                 // 0x00E0 (size: 0xA8)
    TMap<FName, FCommonInputTypeInfo> GamepadInputOverrides;                          // 0x0188 (size: 0x50)
    FCommonInputTypeInfo TouchInputTypeInfo;                                          // 0x01D8 (size: 0xA8)

}; // Size: 0x280

struct FCommonInputActionHandlerData
{
    FDataTableRowHandle InputActionRow;                                               // 0x0000 (size: 0x10)
    EInputActionState State;                                                          // 0x0010 (size: 0x1)

}; // Size: 0x20

struct FCommonInputTypeInfo
{
    FKey Key;                                                                         // 0x0000 (size: 0x18)
    EInputActionState OverrrideState;                                                 // 0x0018 (size: 0x1)
    bool bActionRequiresHold;                                                         // 0x0019 (size: 0x1)
    float HoldTime;                                                                   // 0x001C (size: 0x4)
    FSlateBrush OverrideBrush;                                                        // 0x0020 (size: 0x88)

}; // Size: 0xA8

struct FCommonNumberFormattingOptions
{
    TEnumAsByte<ERoundingMode> RoundingMode;                                          // 0x0000 (size: 0x1)
    bool UseGrouping;                                                                 // 0x0001 (size: 0x1)
    int32 MinimumIntegralDigits;                                                      // 0x0004 (size: 0x4)
    int32 MaximumIntegralDigits;                                                      // 0x0008 (size: 0x4)
    int32 MinimumFractionalDigits;                                                    // 0x000C (size: 0x4)
    int32 MaximumFractionalDigits;                                                    // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FCommonRegisteredTabInfo
{
    int32 TabIndex;                                                                   // 0x0000 (size: 0x4)
    class UCommonButtonBase* TabButton;                                               // 0x0008 (size: 0x8)
    class UWidget* ContentInstance;                                                   // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FRichTextIconData : public FTableRowBase
{
    FText DisplayName;                                                                // 0x0008 (size: 0x18)
    TSoftObjectPtr<class UObject> ResourceObject;                                     // 0x0020 (size: 0x28)
    FVector2D ImageSize;                                                              // 0x0048 (size: 0x8)

}; // Size: 0x50

struct FUIActionKeyMapping
{
    FKey Key;                                                                         // 0x0000 (size: 0x18)
    float HoldTime;                                                                   // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FUIActionTag : public FUITag
{
}; // Size: 0x8

struct FUIInputAction
{
    FUIActionTag ActionTag;                                                           // 0x0000 (size: 0x8)
    FText DefaultDisplayName;                                                         // 0x0008 (size: 0x18)
    TArray<FUIActionKeyMapping> KeyMappings;                                          // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FUITag : public FGameplayTag
{
}; // Size: 0x8

class ICommonActionHandlerInterface : public IInterface
{
}; // Size: 0x28

class ICommonPoolableWidgetInterface : public IInterface
{

    void OnReleaseToPool();
    void OnAcquireFromPool();
}; // Size: 0x28

class UAnalogSlider : public USlider
{
    FAnalogSliderOnAnalogCapture OnAnalogCapture;                                     // 0x04F8 (size: 0x10)
    void OnFloatValueChangedEvent(float Value);

}; // Size: 0x518

class UCommonActionWidget : public UWidget
{
    FCommonActionWidgetOnInputMethodChanged OnInputMethodChanged;                     // 0x0108 (size: 0x10)
    void OnInputMethodChanged(bool bUsingGamepad);
    FSlateBrush ProgressMaterialBrush;                                                // 0x0118 (size: 0x88)
    FName ProgressMaterialParam;                                                      // 0x01A0 (size: 0x8)
    FSlateBrush IconRimBrush;                                                         // 0x01A8 (size: 0x88)
    TArray<FDataTableRowHandle> InputActions;                                         // 0x0230 (size: 0x10)
    class UMaterialInstanceDynamic* ProgressDynamicMaterial;                          // 0x0248 (size: 0x8)

    void SetInputActions(TArray<FDataTableRowHandle> NewInputActions);
    void SetInputAction(FDataTableRowHandle InputActionRow);
    void SetIconRimBrush(FSlateBrush InIconRimBrush);
    void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
    bool IsHeldAction();
    FSlateBrush GetIcon();
    FText GetDisplayText();
}; // Size: 0x320

class UCommonActivatableWidget : public UCommonUserWidget
{
    bool bAutoActivate;                                                               // 0x0288 (size: 0x1)
    bool bIsBackHandler;                                                              // 0x0289 (size: 0x1)
    bool bSupportsActivationFocus;                                                    // 0x028A (size: 0x1)
    bool bIsModal;                                                                    // 0x028B (size: 0x1)
    bool bAutoRestoreFocus;                                                           // 0x028C (size: 0x1)
    bool bSetVisibilityOnActivated;                                                   // 0x028D (size: 0x1)
    ESlateVisibility ActivatedVisibility;                                             // 0x028E (size: 0x1)
    bool bSetVisibilityOnDeactivated;                                                 // 0x028F (size: 0x1)
    ESlateVisibility DeactivatedVisibility;                                           // 0x0290 (size: 0x1)
    FCommonActivatableWidgetBP_OnWidgetActivated BP_OnWidgetActivated;                // 0x0298 (size: 0x10)
    void OnWidgetActivationChanged();
    FCommonActivatableWidgetBP_OnWidgetDeactivated BP_OnWidgetDeactivated;            // 0x02A8 (size: 0x10)
    void OnWidgetActivationChanged();
    bool bIsActive;                                                                   // 0x02B8 (size: 0x1)

    bool IsActivated();
    void DeactivateWidget();
    bool BP_OnHandleBackAction();
    void BP_OnDeactivated();
    void BP_OnActivated();
    class UWidget* BP_GetDesiredFocusTarget();
    void ActivateWidget();
}; // Size: 0x320

class UCommonActivatableWidgetContainerBase : public UWidget
{
    ECommonSwitcherTransition TransitionType;                                         // 0x0108 (size: 0x1)
    ETransitionCurve TransitionCurveType;                                             // 0x0109 (size: 0x1)
    float TransitionDuration;                                                         // 0x010C (size: 0x4)
    TArray<UCommonActivatableWidget*> WidgetList;                                     // 0x0110 (size: 0x10)
    class UCommonActivatableWidget* DisplayedWidget;                                  // 0x0120 (size: 0x8)
    FUserWidgetPool GeneratedWidgetsPool;                                             // 0x0128 (size: 0x80)

    void RemoveWidget(class UCommonActivatableWidget* WidgetToRemove);
    class UCommonActivatableWidget* GetActiveWidget();
    void ClearWidgets();
    class UCommonActivatableWidget* BP_AddWidget(TSubclassOf<class UCommonActivatableWidget> ActivatableWidgetClass);
}; // Size: 0x208

class UCommonActivatableWidgetQueue : public UCommonActivatableWidgetContainerBase
{
}; // Size: 0x208

class UCommonActivatableWidgetStack : public UCommonActivatableWidgetContainerBase
{
    TSubclassOf<class UCommonActivatableWidget> RootContentWidgetClass;               // 0x0208 (size: 0x8)
    class UCommonActivatableWidget* RootContentWidget;                                // 0x0210 (size: 0x8)

}; // Size: 0x218

class UCommonActivatableWidgetSwitcher : public UCommonAnimatedSwitcher
{
}; // Size: 0x190

class UCommonAnimatedSwitcher : public UWidgetSwitcher
{
    ECommonSwitcherTransition TransitionType;                                         // 0x0150 (size: 0x1)
    ETransitionCurve TransitionCurveType;                                             // 0x0151 (size: 0x1)
    float TransitionDuration;                                                         // 0x0154 (size: 0x4)

    void SetDisableTransitionAnimation(bool bDisableAnimation);
    bool HasWidgets();
    void ActivatePreviousWidget(bool bCanWrap);
    void ActivateNextWidget(bool bCanWrap);
}; // Size: 0x190

class UCommonBorder : public UBorder
{
    TSubclassOf<class UCommonBorderStyle> Style;                                      // 0x0270 (size: 0x8)
    bool bReducePaddingBySafezone;                                                    // 0x0278 (size: 0x1)
    FMargin MinimumPadding;                                                           // 0x027C (size: 0x10)

    void SetStyle(TSubclassOf<class UCommonBorderStyle> InStyle);
}; // Size: 0x290

class UCommonBorderStyle : public UObject
{
    FSlateBrush background;                                                           // 0x0028 (size: 0x88)

    void GetBackgroundBrush(FSlateBrush& Brush);
}; // Size: 0xB0

class UCommonBoundActionBar : public UDynamicEntryBoxBase
{
    TSubclassOf<class UCommonBoundActionButton> ActionButtonClass;                    // 0x01D8 (size: 0x8)
    bool bDisplayOwningPlayerActionsOnly;                                             // 0x01E0 (size: 0x1)

    void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions);
}; // Size: 0x1E8

class UCommonBoundActionButton : public UCommonButtonBase
{
    class UCommonTextBlock* Text_ActionName;                                          // 0x0BA0 (size: 0x8)

    void OnUpdateInputAction();
}; // Size: 0xBB0

class UCommonButtonBase : public UCommonUserWidget
{
    int32 MinWidth;                                                                   // 0x0288 (size: 0x4)
    int32 MinHeight;                                                                  // 0x028C (size: 0x4)
    TSubclassOf<class UCommonButtonStyle> Style;                                      // 0x0290 (size: 0x8)
    bool bHideInputAction;                                                            // 0x0298 (size: 0x1)
    FSlateSound PressedSlateSoundOverride;                                            // 0x02A0 (size: 0x18)
    FSlateSound HoveredSlateSoundOverride;                                            // 0x02B8 (size: 0x18)
    uint8 bApplyAlphaOnDisable;                                                       // 0x02D0 (size: 0x1)
    uint8 bSelectable;                                                                // 0x02D0 (size: 0x1)
    uint8 bShouldSelectUponReceivingFocus;                                            // 0x02D0 (size: 0x1)
    uint8 bInteractableWhenSelected;                                                  // 0x02D0 (size: 0x1)
    uint8 bToggleable;                                                                // 0x02D0 (size: 0x1)
    uint8 bDisplayInputActionWhenNotInteractable;                                     // 0x02D0 (size: 0x1)
    uint8 bHideInputActionWithKeyboard;                                               // 0x02D0 (size: 0x1)
    uint8 bShouldUseFallbackDefaultInputAction;                                       // 0x02D0 (size: 0x1)
    TEnumAsByte<EButtonClickMethod::Type> ClickMethod;                                // 0x02D2 (size: 0x1)
    TEnumAsByte<EButtonTouchMethod::Type> TouchMethod;                                // 0x02D3 (size: 0x1)
    TEnumAsByte<EButtonPressMethod::Type> PressMethod;                                // 0x02D4 (size: 0x1)
    int32 InputPriority;                                                              // 0x02D8 (size: 0x4)
    FDataTableRowHandle TriggeringInputAction;                                        // 0x02E0 (size: 0x10)
    FCommonButtonBaseOnSelectedChangedBase OnSelectedChangedBase;                     // 0x0300 (size: 0x10)
    void CommonSelectedStateChangedBase(class UCommonButtonBase* Button, bool Selected);
    FCommonButtonBaseOnButtonBaseClicked OnButtonBaseClicked;                         // 0x0310 (size: 0x10)
    void CommonButtonBaseClicked(class UCommonButtonBase* Button);
    FCommonButtonBaseOnButtonBaseDoubleClicked OnButtonBaseDoubleClicked;             // 0x0320 (size: 0x10)
    void CommonButtonBaseClicked(class UCommonButtonBase* Button);
    FCommonButtonBaseOnButtonBaseHovered OnButtonBaseHovered;                         // 0x0330 (size: 0x10)
    void CommonButtonBaseClicked(class UCommonButtonBase* Button);
    FCommonButtonBaseOnButtonBaseUnhovered OnButtonBaseUnhovered;                     // 0x0340 (size: 0x10)
    void CommonButtonBaseClicked(class UCommonButtonBase* Button);
    bool bIsPersistentBinding;                                                        // 0x0354 (size: 0x1)
    ECommonInputMode InputModeOverride;                                               // 0x0355 (size: 0x1)
    class UMaterialInstanceDynamic* SingleMaterialStyleMID;                           // 0x0388 (size: 0x8)
    FButtonStyle NormalStyle;                                                         // 0x0390 (size: 0x278)
    FButtonStyle SelectedStyle;                                                       // 0x0608 (size: 0x278)
    FButtonStyle DisabledStyle;                                                       // 0x0880 (size: 0x278)
    uint8 bStopDoubleClickPropagation;                                                // 0x0AF8 (size: 0x1)
    class UCommonActionWidget* InputActionWidget;                                     // 0x0B98 (size: 0x8)

    void StopDoubleClickPropagation();
    void SetTriggeringInputAction(const FDataTableRowHandle& InputActionRow);
    void SetTriggeredInputAction(const FDataTableRowHandle& InputActionRow);
    void SetTouchMethod(TEnumAsByte<EButtonTouchMethod::Type> InTouchMethod);
    void SetStyle(TSubclassOf<class UCommonButtonStyle> InStyle);
    void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction);
    void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus);
    void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast);
    void SetPressMethod(TEnumAsByte<EButtonPressMethod::Type> InPressMethod);
    void SetPressedSoundOverride(class USoundBase* Sound);
    void SetMinDimensions(int32 InMinWidth, int32 InMinHeight);
    void SetIsToggleable(bool bInIsToggleable);
    void SetIsSelected(bool InSelected, bool bGiveClickFeedback);
    void SetIsSelectable(bool bInIsSelectable);
    void SetIsInteractionEnabled(bool bInIsInteractionEnabled);
    void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected);
    void SetIsFocusable(bool bInIsFocusable);
    void SetInputActionProgressMaterial(const FSlateBrush& InProgressMaterialBrush, const FName& InProgressMaterialParam);
    void SetHoveredSoundOverride(class USoundBase* Sound);
    void SetClickMethod(TEnumAsByte<EButtonClickMethod::Type> InClickMethod);
    void OnTriggeredInputActionChanged(const FDataTableRowHandle& NewTriggeredAction);
    void OnInputMethodChanged(ECommonInputType CurrentInputType);
    void OnCurrentTextStyleChanged();
    void OnActionProgress(float HeldPercent);
    void OnActionComplete();
    void NativeOnActionProgress(float HeldPercent);
    void NativeOnActionComplete();
    bool IsPressed();
    bool IsInteractionEnabled();
    void HandleTriggeringActionCommited(bool& bPassThrough);
    void HandleFocusReceived();
    void HandleButtonReleased();
    void HandleButtonPressed();
    void HandleButtonClicked();
    class UCommonButtonStyle* GetStyle();
    class UMaterialInstanceDynamic* GetSingleMaterialStyleMID();
    bool GetShouldSelectUponReceivingFocus();
    bool GetSelected();
    bool GetIsFocusable();
    bool GetInputAction(FDataTableRowHandle& InputActionRow);
    TSubclassOf<class UCommonTextStyle> GetCurrentTextStyleClass();
    class UCommonTextStyle* GetCurrentTextStyle();
    void GetCurrentCustomPadding(FMargin& OutCustomPadding);
    void GetCurrentButtonPadding(FMargin& OutButtonPadding);
    void DisableButtonWithReason(const FText& DisabledReason);
    void ClearSelection();
    void BP_OnUnhovered();
    void BP_OnSelected();
    void BP_OnHovered();
    void BP_OnEnabled();
    void BP_OnDoubleClicked();
    void BP_OnDisabled();
    void BP_OnDeselected();
    void BP_OnClicked();
}; // Size: 0xBA0

class UCommonButtonGroupBase : public UCommonWidgetGroupBase
{
    FCommonButtonGroupBaseOnSelectedButtonBaseChanged OnSelectedButtonBaseChanged;    // 0x0028 (size: 0x10)
    void SimpleButtonBaseGroupDelegate(class UCommonButtonBase* AssociatedButton, int32 ButtonIndex);
    FCommonButtonGroupBaseOnHoveredButtonBaseChanged OnHoveredButtonBaseChanged;      // 0x0050 (size: 0x10)
    void SimpleButtonBaseGroupDelegate(class UCommonButtonBase* AssociatedButton, int32 ButtonIndex);
    FCommonButtonGroupBaseOnButtonBaseClicked OnButtonBaseClicked;                    // 0x0078 (size: 0x10)
    void SimpleButtonBaseGroupDelegate(class UCommonButtonBase* AssociatedButton, int32 ButtonIndex);
    FCommonButtonGroupBaseOnButtonBaseDoubleClicked OnButtonBaseDoubleClicked;        // 0x00A0 (size: 0x10)
    void SimpleButtonBaseGroupDelegate(class UCommonButtonBase* AssociatedButton, int32 ButtonIndex);
    FCommonButtonGroupBaseOnSelectionCleared OnSelectionCleared;                      // 0x00C8 (size: 0x10)
    void OnSelectionCleared();
    bool bSelectionRequired;                                                          // 0x00F0 (size: 0x1)

    void SetSelectionRequired(bool bRequireSelection);
    void SelectPreviousButton(bool bAllowWrap);
    void SelectNextButton(bool bAllowWrap);
    void SelectButtonAtIndex(int32 ButtonIndex);
    void OnSelectionStateChangedBase(class UCommonButtonBase* BaseButton, bool bIsSelected);
    void OnHandleButtonBaseDoubleClicked(class UCommonButtonBase* BaseButton);
    void OnHandleButtonBaseClicked(class UCommonButtonBase* BaseButton);
    void OnButtonBaseUnhovered(class UCommonButtonBase* BaseButton);
    void OnButtonBaseHovered(class UCommonButtonBase* BaseButton);
    bool HasAnyButtons();
    int32 GetSelectedButtonIndex();
    class UCommonButtonBase* GetSelectedButtonBase();
    int32 GetHoveredButtonIndex();
    int32 GetButtonCount();
    class UCommonButtonBase* GetButtonBaseAtIndex(int32 Index);
    int32 FindButtonIndex(const class UCommonButtonBase* ButtonToFind);
    void DeselectAll();
}; // Size: 0x110

class UCommonButtonInternalBase : public UButton
{
    FCommonButtonInternalBaseOnDoubleClicked OnDoubleClicked;                         // 0x0438 (size: 0x10)
    void OnButtonClickedEvent();
    int32 MinWidth;                                                                   // 0x0458 (size: 0x4)
    int32 MinHeight;                                                                  // 0x045C (size: 0x4)
    bool bButtonEnabled;                                                              // 0x0460 (size: 0x1)
    bool bInteractionEnabled;                                                         // 0x0461 (size: 0x1)

}; // Size: 0x488

class UCommonButtonStyle : public UObject
{
    bool bSingleMaterial;                                                             // 0x0028 (size: 0x1)
    FSlateBrush SingleMaterialBrush;                                                  // 0x0030 (size: 0x88)
    FSlateBrush NormalBase;                                                           // 0x00B8 (size: 0x88)
    FSlateBrush NormalHovered;                                                        // 0x0140 (size: 0x88)
    FSlateBrush NormalPressed;                                                        // 0x01C8 (size: 0x88)
    FSlateBrush SelectedBase;                                                         // 0x0250 (size: 0x88)
    FSlateBrush SelectedHovered;                                                      // 0x02D8 (size: 0x88)
    FSlateBrush SelectedPressed;                                                      // 0x0360 (size: 0x88)
    FSlateBrush Disabled;                                                             // 0x03E8 (size: 0x88)
    FMargin ButtonPadding;                                                            // 0x0470 (size: 0x10)
    FMargin CustomPadding;                                                            // 0x0480 (size: 0x10)
    int32 MinWidth;                                                                   // 0x0490 (size: 0x4)
    int32 MinHeight;                                                                  // 0x0494 (size: 0x4)
    TSubclassOf<class UCommonTextStyle> NormalTextStyle;                              // 0x0498 (size: 0x8)
    TSubclassOf<class UCommonTextStyle> NormalHoveredTextStyle;                       // 0x04A0 (size: 0x8)
    TSubclassOf<class UCommonTextStyle> SelectedTextStyle;                            // 0x04A8 (size: 0x8)
    TSubclassOf<class UCommonTextStyle> SelectedHoveredTextStyle;                     // 0x04B0 (size: 0x8)
    TSubclassOf<class UCommonTextStyle> DisabledTextStyle;                            // 0x04B8 (size: 0x8)
    FSlateSound PressedSlateSound;                                                    // 0x04C0 (size: 0x18)
    FCommonButtonStyleOptionalSlateSound SelectedPressedSlateSound;                   // 0x04D8 (size: 0x20)
    FCommonButtonStyleOptionalSlateSound DisabledPressedSlateSound;                   // 0x04F8 (size: 0x20)
    FSlateSound HoveredSlateSound;                                                    // 0x0518 (size: 0x18)
    FCommonButtonStyleOptionalSlateSound SelectedHoveredSlateSound;                   // 0x0530 (size: 0x20)
    FCommonButtonStyleOptionalSlateSound DisabledHoveredSlateSound;                   // 0x0550 (size: 0x20)

    class UCommonTextStyle* GetSelectedTextStyle();
    void GetSelectedPressedBrush(FSlateBrush& Brush);
    class UCommonTextStyle* GetSelectedHoveredTextStyle();
    void GetSelectedHoveredBrush(FSlateBrush& Brush);
    void GetSelectedBaseBrush(FSlateBrush& Brush);
    class UCommonTextStyle* GetNormalTextStyle();
    void GetNormalPressedBrush(FSlateBrush& Brush);
    class UCommonTextStyle* GetNormalHoveredTextStyle();
    void GetNormalHoveredBrush(FSlateBrush& Brush);
    void GetNormalBaseBrush(FSlateBrush& Brush);
    void GetMaterialBrush(FSlateBrush& Brush);
    class UCommonTextStyle* GetDisabledTextStyle();
    void GetDisabledBrush(FSlateBrush& Brush);
    void GetCustomPadding(FMargin& OutCustomPadding);
    void GetButtonPadding(FMargin& OutButtonPadding);
}; // Size: 0x570

class UCommonCustomNavigation : public UBorder
{
    FCommonCustomNavigationOnNavigationEvent OnNavigationEvent;                       // 0x0270 (size: 0x10)
    bool OnCustomNavigationEvent(EUINavigation NavigationType);

}; // Size: 0x280

class UCommonDateTimeTextBlock : public UCommonTextBlock
{

    void SetTimespanValue(const FTimespan InTimespan);
    void SetDateTimeValue(const FDateTime InDateTime, bool bShowAsCountdown, float InRefreshDelay);
    void SetCountDownCompletionText(const FText InCompletionText);
    FDateTime GetDateTime();
}; // Size: 0x310

class UCommonGameViewportClient : public UGameViewportClient
{
}; // Size: 0x3A0

class UCommonHierarchicalScrollBox : public UScrollBox
{
}; // Size: 0x880

class UCommonLazyImage : public UImage
{
    FSlateBrush LoadingBackgroundBrush;                                               // 0x0210 (size: 0x88)
    FName MaterialTextureParamName;                                                   // 0x0298 (size: 0x8)
    FCommonLazyImageBP_OnLoadingStateChanged BP_OnLoadingStateChanged;                // 0x02A0 (size: 0x10)
    void OnLoadGuardStateChangedDynamic(bool bIsLoading);

    void SetMaterialTextureParamName(FName TextureParamName);
    void SetBrushFromLazyTexture(const TSoftObjectPtr<class UTexture2D>& LazyTexture, bool bMatchSize);
    void SetBrushFromLazyMaterial(const TSoftObjectPtr<class UMaterialInterface>& LazyMaterial);
    void SetBrushFromLazyDisplayAsset(const TSoftObjectPtr<class UObject>& LazyObject, bool bMatchTextureSize);
    bool IsLoading();
}; // Size: 0x2D8

class UCommonLazyWidget : public UWidget
{
    FSlateBrush LoadingBackgroundBrush;                                               // 0x0108 (size: 0x88)
    class UUserWidget* Content;                                                       // 0x0190 (size: 0x8)
    FCommonLazyWidgetBP_OnLoadingStateChanged BP_OnLoadingStateChanged;               // 0x01C0 (size: 0x10)
    void OnLoadGuardStateChangedDynamic(bool bIsLoading);

    void SetLazyContent(const TSoftClassPtr<UUserWidget> SoftWidget);
    bool IsLoading();
    class UUserWidget* GetContent();
}; // Size: 0x210

class UCommonListView : public UListView
{

    void SetEntrySpacing(float InEntrySpacing);
}; // Size: 0x368

class UCommonLoadGuard : public UContentWidget
{
    FSlateBrush LoadingBackgroundBrush;                                               // 0x0120 (size: 0x88)
    TEnumAsByte<EHorizontalAlignment> ThrobberAlignment;                              // 0x01A8 (size: 0x1)
    FMargin ThrobberPadding;                                                          // 0x01AC (size: 0x10)
    FText LoadingText;                                                                // 0x01C0 (size: 0x18)
    TSubclassOf<class UCommonTextStyle> TextStyle;                                    // 0x01D8 (size: 0x8)
    FCommonLoadGuardBP_OnLoadingStateChanged BP_OnLoadingStateChanged;                // 0x01E0 (size: 0x10)
    void OnLoadGuardStateChangedDynamic(bool bIsLoading);
    FSoftObjectPath SpinnerMaterialPath;                                              // 0x01F0 (size: 0x18)

    void SetLoadingText(const FText& InLoadingText);
    void SetIsLoading(bool bInIsLoading);
    void OnAssetLoaded__DelegateSignature(class UObject* Object);
    bool IsLoading();
    void BP_GuardAndLoadAsset(const TSoftObjectPtr<class UObject>& InLazyAsset, const FBP_GuardAndLoadAssetOnAssetLoaded& OnAssetLoaded);
}; // Size: 0x230

class UCommonNumericTextBlock : public UCommonTextBlock
{
    FCommonNumericTextBlockOnInterpolationStartedEvent OnInterpolationStartedEvent;   // 0x02D0 (size: 0x10)
    void OnInterpolationStarted(class UCommonNumericTextBlock* NumericTextBlock);
    FCommonNumericTextBlockOnInterpolationUpdatedEvent OnInterpolationUpdatedEvent;   // 0x02E0 (size: 0x10)
    void OnInterpolationUpdated(class UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue);
    FCommonNumericTextBlockOnOutroEvent OnOutroEvent;                                 // 0x02F0 (size: 0x10)
    void OnOutro(class UCommonNumericTextBlock* NumericTextBlock);
    FCommonNumericTextBlockOnInterpolationEndedEvent OnInterpolationEndedEvent;       // 0x0300 (size: 0x10)
    void OnInterpolationEnded(class UCommonNumericTextBlock* NumericTextBlock, const bool HadCompleted);
    float CurrentNumericValue;                                                        // 0x0310 (size: 0x4)
    ECommonNumericType NumericType;                                                   // 0x0314 (size: 0x1)
    FCommonNumberFormattingOptions FormattingSpecification;                           // 0x0318 (size: 0x14)
    float EaseOutInterpolationExponent;                                               // 0x032C (size: 0x4)
    float InterpolationUpdateInterval;                                                // 0x0330 (size: 0x4)
    float PostInterpolationShrinkDuration;                                            // 0x0334 (size: 0x4)
    bool PerformSizeInterpolation;                                                    // 0x0338 (size: 0x1)
    bool IsPercentage;                                                                // 0x0339 (size: 0x1)

    void SetNumericType(ECommonNumericType InNumericType);
    void SetCurrentValue(const float NewValue);
    void OnOutro__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);
    void OnInterpolationUpdated__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue);
    void OnInterpolationStarted__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);
    void OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, const bool HadCompleted);
    bool IsInterpolatingNumericValue();
    void InterpolateToValue(const float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset);
    float GetTargetValue();
}; // Size: 0x370

class UCommonRichTextBlock : public URichTextBlock
{
    ERichTextInlineIconDisplayMode InlineIconDisplayMode;                             // 0x0678 (size: 0x1)
    bool bTintInlineIcon;                                                             // 0x0679 (size: 0x1)
    TSubclassOf<class UCommonTextStyle> DefaultTextStyleOverrideClass;                // 0x0680 (size: 0x8)
    float MobileTextBlockScale;                                                       // 0x0688 (size: 0x4)
    TSubclassOf<class UCommonTextScrollStyle> ScrollStyle;                            // 0x0690 (size: 0x8)
    bool bDisplayAllCaps;                                                             // 0x0698 (size: 0x1)

}; // Size: 0x6B0

class UCommonRotator : public UCommonButtonBase
{
    FCommonRotatorOnRotated OnRotated;                                                // 0x0BB0 (size: 0x10)
    void OnRotated(int32 Value);
    class UCommonTextBlock* MyText;                                                   // 0x0BD8 (size: 0x8)

    void ShiftTextRight();
    void ShiftTextLeft();
    void SetSelectedItem(int32 InValue);
    void PopulateTextLabels(TArray<FText> Labels);
    FText GetSelectedText();
    int32 GetSelectedIndex();
    void BP_OnOptionsPopulated(int32 Count);
    void BP_OnOptionSelected(int32 Index);
}; // Size: 0xBF8

class UCommonTabListWidgetBase : public UCommonUserWidget
{
    FCommonTabListWidgetBaseOnTabSelected OnTabSelected;                              // 0x0288 (size: 0x10)
    void OnTabSelected(FName TabId);
    FCommonTabListWidgetBaseOnTabButtonCreation OnTabButtonCreation;                  // 0x0298 (size: 0x10)
    void OnTabButtonCreation(FName TabId, class UCommonButtonBase* TabButton);
    FCommonTabListWidgetBaseOnTabButtonRemoval OnTabButtonRemoval;                    // 0x02A8 (size: 0x10)
    void OnTabButtonRemoval(FName TabId, class UCommonButtonBase* TabButton);
    FDataTableRowHandle NextTabInputActionData;                                       // 0x02B8 (size: 0x10)
    FDataTableRowHandle PreviousTabInputActionData;                                   // 0x02C8 (size: 0x10)
    bool bAutoListenForInput;                                                         // 0x02D8 (size: 0x1)
    TWeakObjectPtr<class UCommonAnimatedSwitcher> LinkedSwitcher;                     // 0x02DC (size: 0x8)
    class UCommonButtonGroupBase* TabButtonGroup;                                     // 0x02E8 (size: 0x8)
    TMap<FName, FCommonRegisteredTabInfo> RegisteredTabsByID;                         // 0x02F8 (size: 0x50)

    void SetTabVisibility(FName TabNameID, ESlateVisibility NewVisibility);
    void SetTabInteractionEnabled(FName TabNameID, bool bEnable);
    void SetTabEnabled(FName TabNameID, bool bEnable);
    void SetListeningForInput(bool bShouldListen);
    void SetLinkedSwitcher(class UCommonAnimatedSwitcher* CommonSwitcher);
    bool SelectTabByID(FName TabNameID, bool bSuppressClickFeedback);
    bool RemoveTab(FName TabNameID);
    void RemoveAllTabs();
    bool RegisterTab(FName TabNameID, TSubclassOf<class UCommonButtonBase> ButtonWidgetType, class UWidget* ContentWidget);
    void OnTabSelected__DelegateSignature(FName TabId);
    void OnTabButtonRemoval__DelegateSignature(FName TabId, class UCommonButtonBase* TabButton);
    void OnTabButtonCreation__DelegateSignature(FName TabId, class UCommonButtonBase* TabButton);
    void HandleTabRemoval(FName TabNameID, class UCommonButtonBase* TabButton);
    void HandleTabCreation(FName TabNameID, class UCommonButtonBase* TabButton);
    void HandleTabButtonSelected(class UCommonButtonBase* SelectedTabButton, int32 ButtonIndex);
    void HandlePreviousTabInputAction(bool& bPassThrough);
    void HandlePreLinkedSwitcherChanged_BP();
    void HandlePostLinkedSwitcherChanged_BP();
    void HandleNextTabInputAction(bool& bPassThrough);
    FName GetTabIdAtIndex(int32 Index);
    int32 GetTabCount();
    class UCommonButtonBase* GetTabButtonBaseByID(FName TabNameID);
    FName GetSelectedTabId();
    class UCommonAnimatedSwitcher* GetLinkedSwitcher();
    FName GetActiveTab();
    void DisableTabWithReason(FName TabNameID, const FText& Reason);
}; // Size: 0x358

class UCommonTextBlock : public UTextBlock
{
    TSubclassOf<class UCommonTextStyle> Style;                                        // 0x02A8 (size: 0x8)
    TSubclassOf<class UCommonTextScrollStyle> ScrollStyle;                            // 0x02B0 (size: 0x8)
    bool bDisplayAllCaps;                                                             // 0x02B8 (size: 0x1)
    bool bAutoCollapseWithEmptyText;                                                  // 0x02B9 (size: 0x1)
    float MobileFontSizeMultiplier;                                                   // 0x02BC (size: 0x4)

    void SetWrapTextWidth(int32 InWrapTextAt);
    void SetTextCase(bool bUseAllCaps);
    void SetStyle(TSubclassOf<class UCommonTextStyle> InStyle);
    void ResetScrollState();
}; // Size: 0x2D0

class UCommonTextScrollStyle : public UObject
{
    float Speed;                                                                      // 0x0028 (size: 0x4)
    float StartDelay;                                                                 // 0x002C (size: 0x4)
    float EndDelay;                                                                   // 0x0030 (size: 0x4)
    float FadeInDelay;                                                                // 0x0034 (size: 0x4)
    float FadeOutDelay;                                                               // 0x0038 (size: 0x4)

}; // Size: 0x40

class UCommonTextStyle : public UObject
{
    FSlateFontInfo Font;                                                              // 0x0028 (size: 0x58)
    FLinearColor Color;                                                               // 0x0080 (size: 0x10)
    bool bUsesDropShadow;                                                             // 0x0090 (size: 0x1)
    FVector2D ShadowOffset;                                                           // 0x0094 (size: 0x8)
    FLinearColor ShadowColor;                                                         // 0x009C (size: 0x10)
    FMargin Margin;                                                                   // 0x00AC (size: 0x10)
    FSlateBrush StrikeBrush;                                                          // 0x00C0 (size: 0x88)
    float LineHeightPercentage;                                                       // 0x0148 (size: 0x4)

    void GetStrikeBrush(FSlateBrush& OutStrikeBrush);
    void GetShadowOffset(FVector2D& OutShadowOffset);
    void GetShadowColor(FLinearColor& OutColor);
    void GetMargin(FMargin& OutMargin);
    float GetLineHeightPercentage();
    void GetFont(FSlateFontInfo& OutFont);
    void GetColor(FLinearColor& OutColor);
}; // Size: 0x150

class UCommonTileView : public UTileView
{
}; // Size: 0x388

class UCommonTreeView : public UTreeView
{
}; // Size: 0x3C0

class UCommonUIActionRouterBase : public ULocalPlayerSubsystem
{
}; // Size: 0x100

class UCommonUIEditorSettings : public UObject
{
    TSoftClassPtr<UCommonTextStyle> TemplateTextStyle;                                // 0x0028 (size: 0x28)
    TSoftClassPtr<UCommonButtonStyle> TemplateButtonStyle;                            // 0x0050 (size: 0x28)
    TSoftClassPtr<UCommonBorderStyle> TemplateBorderStyle;                            // 0x0078 (size: 0x28)

}; // Size: 0xA8

class UCommonUIInputSettings : public UObject
{
    bool bLinkCursorToGamepadFocus;                                                   // 0x0028 (size: 0x1)
    int32 UIActionProcessingPriority;                                                 // 0x002C (size: 0x4)
    TArray<FUIInputAction> InputActions;                                              // 0x0030 (size: 0x10)
    TArray<FUIInputAction> ActionOverrides;                                           // 0x0040 (size: 0x10)
    FCommonAnalogCursorSettings AnalogCursorSettings;                                 // 0x0050 (size: 0x24)

}; // Size: 0x78

class UCommonUILibrary : public UBlueprintFunctionLibrary
{

    FText FormatTimeToTwoDigitText(int32 Time);
    class UWidget* FindParentWidgetOfType(class UWidget* StartingWidget, TSubclassOf<class UWidget> Type);
}; // Size: 0x28

class UCommonUIRichTextData : public UObject
{
    class UDataTable* InlineIconSet;                                                  // 0x0028 (size: 0x8)

}; // Size: 0x30

class UCommonUISettings : public UObject
{
    bool bAutoLoadData;                                                               // 0x0028 (size: 0x1)
    TSoftObjectPtr<class UObject> DefaultImageResourceObject;                         // 0x0030 (size: 0x28)
    TSoftObjectPtr<class UMaterialInterface> DefaultThrobberMaterial;                 // 0x0058 (size: 0x28)
    TSoftClassPtr<UCommonUIRichTextData> DefaultRichTextDataClass;                    // 0x0080 (size: 0x28)
    class UObject* DefaultImageResourceObjectInstance;                                // 0x00B0 (size: 0x8)
    class UMaterialInterface* DefaultThrobberMaterialInstance;                        // 0x00B8 (size: 0x8)
    FSlateBrush DefaultThrobberBrush;                                                 // 0x00C0 (size: 0x88)
    class UCommonUIRichTextData* RichTextDataInstance;                                // 0x0148 (size: 0x8)

}; // Size: 0x150

class UCommonUISubsystemBase : public UGameInstanceSubsystem
{

    FSlateBrush GetInputActionButtonIcon(const FDataTableRowHandle& InputActionRowHandle, ECommonInputType InputType, const FName& GamepadName);
}; // Size: 0x40

class UCommonUserWidget : public UUserWidget
{
    bool bConsumePointerInput;                                                        // 0x0260 (size: 0x1)

    void SetConsumePointerInput(bool bInConsumePointerInput);
}; // Size: 0x288

class UCommonVideoPlayer : public UWidget
{
    class UMediaSource* Video;                                                        // 0x0108 (size: 0x8)
    class UMediaPlayer* MediaPlayer;                                                  // 0x0110 (size: 0x8)
    class UMediaTexture* MediaTexture;                                                // 0x0118 (size: 0x8)
    class UMaterial* VideoMaterial;                                                   // 0x0120 (size: 0x8)
    class UMediaSoundComponent* SoundComponent;                                       // 0x0128 (size: 0x8)
    FSlateBrush VideoBrush;                                                           // 0x0130 (size: 0x88)

}; // Size: 0x218

class UCommonVisibilitySwitcher : public UOverlay
{
    ESlateVisibility ShownVisibility;                                                 // 0x0130 (size: 0x1)
    int32 ActiveWidgetIndex;                                                          // 0x0134 (size: 0x4)
    bool bAutoActivateSlot;                                                           // 0x0138 (size: 0x1)
    bool bActivateFirstSlotOnAdding;                                                  // 0x0139 (size: 0x1)

    void SetActiveWidgetIndex(int32 Index);
    void SetActiveWidget(const class UWidget* Widget);
    void IncrementActiveWidgetIndex(bool bAllowWrapping);
    int32 GetActiveWidgetIndex();
    class UWidget* GetActiveWidget();
    void DecrementActiveWidgetIndex(bool bAllowWrapping);
    void DeactivateVisibleSlot();
    void ActivateVisibleSlot();
}; // Size: 0x158

class UCommonVisibilitySwitcherSlot : public UOverlaySlot
{
}; // Size: 0x68

class UCommonVisibilityWidgetBase : public UCommonBorder
{
    TMap<FName, bool> VisibilityControls;                                             // 0x0290 (size: 0x50)
    bool bShowForGamepad;                                                             // 0x02E0 (size: 0x1)
    bool bShowForMouseAndKeyboard;                                                    // 0x02E1 (size: 0x1)
    bool bShowForTouch;                                                               // 0x02E2 (size: 0x1)
    ESlateVisibility VisibleType;                                                     // 0x02E3 (size: 0x1)
    ESlateVisibility HiddenType;                                                      // 0x02E4 (size: 0x1)

    TArray<FName> GetRegisteredPlatforms();
}; // Size: 0x2E8

class UCommonVisualAttachment : public USizeBox
{
    FVector2D ContentAnchor;                                                          // 0x0158 (size: 0x8)

}; // Size: 0x170

class UCommonWidgetCarousel : public UPanelWidget
{
    int32 ActiveWidgetIndex;                                                          // 0x0120 (size: 0x4)
    FCommonWidgetCarouselOnCurrentPageIndexChanged OnCurrentPageIndexChanged;         // 0x0128 (size: 0x10)
    void OnCurrentPageIndexChanged(class UCommonWidgetCarousel* CarouselWidget, int32 CurrentPageIndex);

    void SetActiveWidgetIndex(int32 Index);
    void SetActiveWidget(class UWidget* Widget);
    void PreviousPage();
    void NextPage();
    class UWidget* GetWidgetAtIndex(int32 Index);
    int32 GetActiveWidgetIndex();
    void EndAutoScrolling();
    void BeginAutoScrolling(float ScrollInterval);
}; // Size: 0x160

class UCommonWidgetCarouselNavBar : public UWidget
{
    TSubclassOf<class UCommonButtonBase> ButtonWidgetType;                            // 0x0108 (size: 0x8)
    FMargin ButtonPadding;                                                            // 0x0110 (size: 0x10)
    class UCommonWidgetCarousel* LinkedCarousel;                                      // 0x0130 (size: 0x8)
    class UCommonButtonGroupBase* ButtonGroup;                                        // 0x0138 (size: 0x8)
    TArray<UCommonButtonBase*> Buttons;                                               // 0x0140 (size: 0x10)

    void SetLinkedCarousel(class UCommonWidgetCarousel* CommonCarousel);
    void HandlePageChanged(class UCommonWidgetCarousel* CommonCarousel, int32 PageIndex);
    void HandleButtonClicked(class UCommonButtonBase* AssociatedButton, int32 ButtonIndex);
}; // Size: 0x150

class UCommonWidgetGroupBase : public UObject
{

    void RemoveWidget(class UWidget* InWidget);
    void RemoveAll();
    void AddWidget(class UWidget* InWidget);
}; // Size: 0x28

class ULoadGuardSlot : public UPanelSlot
{
    FMargin Padding;                                                                  // 0x0038 (size: 0x10)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;                            // 0x0048 (size: 0x1)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;                                // 0x0049 (size: 0x1)

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
}; // Size: 0x60

#endif
