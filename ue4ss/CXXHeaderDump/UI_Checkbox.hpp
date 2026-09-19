#ifndef UE4SS_SDK_UI_Checkbox_HPP
#define UE4SS_SDK_UI_Checkbox_HPP

class UUI_Checkbox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCheckBox* CheckBox;                                                        // 0x0268 (size: 0x8)
    class UTextBlock* CheckboxName;                                                   // 0x0270 (size: 0x8)
    class UTextBlock* CheckboxValue;                                                  // 0x0278 (size: 0x8)
    class UHorizontalBox* HorizontalBox-ElementsContainer;                            // 0x0280 (size: 0x8)
    FText ToggleTitle;                                                                // 0x0288 (size: 0x18)
    FText CheckboxDefaultValueTip;                                                    // 0x02A0 (size: 0x18)
    bool bDefaultValue;                                                               // 0x02B8 (size: 0x1)
    bool bChangeCheckboxColorWhenFocused;                                             // 0x02B9 (size: 0x1)
    bool bChangeTextColorWhenFocused;                                                 // 0x02BA (size: 0x1)
    FLinearColor FocusedToggleAndTextColor;                                           // 0x02BC (size: 0x10)
    FLinearColor UnfocusedToggleAndTextColor;                                         // 0x02CC (size: 0x10)
    class UUI_PhotoMode_C* PhotoModeWidget;                                           // 0x02E0 (size: 0x8)
    FText OptionFalse;                                                                // 0x02E8 (size: 0x18)
    FText OptionTrue;                                                                 // 0x0300 (size: 0x18)
    FUI_Checkbox_COnCheckboxValueChanged OnCheckboxValueChanged;                      // 0x0318 (size: 0x10)
    void OnCheckboxValueChanged(bool Value);
    bool bShouldFocus;                                                                // 0x0328 (size: 0x1)
    FMargin CheckboxMargin;                                                           // 0x032C (size: 0x10)

    class UWidget* ToggleUsingArrows(EUINavigation Navigation);
    void Set Focused or Unfocused Color(bool bChangeCheckboxColorWhenFocused, bool bChangeTextColorWhenFocused, class UCheckBox* CheckBox, class UWidget* CheckboxTitle, class UWidget* CheckboxValue);
    FText setTxtValue();
    void PreConstruct(bool IsDesignTime);
    void Initialize(bool bDefaultValue);
    void ResetCheckbox(bool bShouldFocus);
    void ChangeValue(bool bValue, bool bShouldFocus);
    void BndEvt__ToggleDoF_1_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void SetToggleFocus();
    void ResetToggleFocus();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Construct();
    void ExecuteUbergraph_UI_Checkbox(int32 EntryPoint);
    void OnCheckboxValueChanged__DelegateSignature(bool Value);
}; // Size: 0x33C

#endif
