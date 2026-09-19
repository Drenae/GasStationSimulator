#ifndef UE4SS_SDK_OptionsActionBinder_HPP
#define UE4SS_SDK_OptionsActionBinder_HPP

class UOptionsActionBinder_C : public UInteractableUserWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0670 (size: 0x8)
    class UButton* ActionButton;                                                      // 0x0678 (size: 0x8)
    class UTextBlock* DisplayNameText;                                                // 0x0680 (size: 0x8)
    class UImage* GamepadButtonImage;                                                 // 0x0688 (size: 0x8)
    class UTextBlock* KeyText;                                                        // 0x0690 (size: 0x8)
    class UBorder* OuterBorder;                                                       // 0x0698 (size: 0x8)
    FName InputName;                                                                  // 0x06A0 (size: 0x8)
    FInputActionKeyMapping CurrentActionMapping;                                      // 0x06A8 (size: 0x28)
    bool IsAxisMapping;                                                               // 0x06D0 (size: 0x1)
    FInputAxisKeyMapping CurrentAxisMapping;                                          // 0x06D8 (size: 0x28)
    float AxisScale;                                                                  // 0x0700 (size: 0x4)
    FInputChord SelectedKey;                                                          // 0x0708 (size: 0x20)
    FInputChord LastSelectedKey;                                                      // 0x0728 (size: 0x20)
    bool bAllowKeyChangeInput;                                                        // 0x0748 (size: 0x1)
    FOptionsActionBinder_COnKeyChanged OnKeyChanged;                                  // 0x0750 (size: 0x10)
    void OnKeyChanged();
    FOptionsActionBinder_COnKeyInit OnKeyInit;                                        // 0x0760 (size: 0x10)
    void OnKeyInit();
    bool IsGamepadBinding;                                                            // 0x0770 (size: 0x1)
    class UDecisionDialogWidgetBP_C* DecisionDialogWidget;                            // 0x0778 (size: 0x8)
    FInputActionKeyMapping OldActionMapping;                                          // 0x0780 (size: 0x28)
    FInputAxisKeyMapping OldAxisMapping;                                              // 0x07A8 (size: 0x28)
    FLinearColor OptionsActionBinderBgColor;                                          // 0x07D0 (size: 0x10)
    FLinearColor OptionsActionBinderHightlightColor;                                  // 0x07E0 (size: 0x10)
    TArray<UGamepadKey_C*> GamepadKeys;                                               // 0x07F0 (size: 0x10)
    FLinearColor OptionsActionBinderIconColor;                                        // 0x0800 (size: 0x10)
    bool bIsInEditMode;                                                               // 0x0810 (size: 0x1)
    bool bIsModifierKeyPressed;                                                       // 0x0811 (size: 0x1)
    FKey ModifierKey;                                                                 // 0x0818 (size: 0x18)
    FTimerHandle ModifierCooldownTimerHandle;                                         // 0x0830 (size: 0x8)
    FName KeyCategory;                                                                // 0x0838 (size: 0x8)
    bool InputEqual;                                                                  // 0x0840 (size: 0x1)
    FText KeyModifier;                                                                // 0x0848 (size: 0x18)
    bool ForceShift;                                                                  // 0x0860 (size: 0x1)

    void GetPSGamepadButtonImage(class UObject* B, class UTexture2D*& GamePadPlaystation);
    void SetGamepadButtonImage(class UTexture2D* Texture);
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void GetModifierKey(FKey InKey, bool& bIsShift, bool& bIsCtrl, bool& bIsAlt, bool& bIsCmd);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void SetAllowMenuNavigation(bool bIsAllowed);
    void IsBlacklistedKey(FKey InKey, bool& bIsBlacklisted);
    void SetKeyTextOrIcon(FInputChord InInputChord, bool bIsWaitingForInput);
    void ShowGamepadIcon();
    bool CheckIfNotSameKey(FInputChord InNewKey);
    FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void RebindInput(bool bRemoveOld);
    void ShowRebindDialog();
    void SetCurrentAxisMapping();
    void SetCurrentActionMapping();
    void IsKeyAlreadyBound(FInputChord InInputChord, bool bIsGamepad, bool& bIsAlreadyInUse, FInputActionKeyMapping& OldActionMapping, FInputAxisKeyMapping& OldAxisMapping);
    void SetGlobalSettings();
    void SetupDisplayNameText();
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void SetHoverEffect(bool IsHovered);
    void ChangeInputBinding(FInputChord InInputChord);
    void SetupInputBinding();
    void OnSetHoverEffect(bool bIsHovered, bool bPlaySound);
    void OnPressedSelect();
    void OnPressedBack();
    void Construct();
    void BndEvt__ActionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void OnEndKeyChange(FInputChord InInputChord);
    void OnStartKeyChange();
    void BndEvt__ActionButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void OnPressedLeft();
    void OnPressedRight();
    void OnGlobalSettingsApply();
    void PreConstruct(bool IsDesignTime);
    void OnRebindAccept();
    void OnRebindDecline();
    void OnCancelKeyChange();
    void OnLeaveEditMode();
    void OnModifierKeyCooldownStart();
    void OnModifierKeyCooldownEnd();
    void ExecuteUbergraph_OptionsActionBinder(int32 EntryPoint);
    void OnKeyInit__DelegateSignature();
    void OnKeyChanged__DelegateSignature();
}; // Size: 0x861

#endif
