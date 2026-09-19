#ifndef UE4SS_SDK_UI_Selector_HPP
#define UE4SS_SDK_UI_Selector_HPP

class UUI_Selector_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UBorder* Border;                                                            // 0x0268 (size: 0x8)
    class UButton* btn_left;                                                          // 0x0270 (size: 0x8)
    class UButton* btn_right;                                                         // 0x0278 (size: 0x8)
    class UHorizontalBox* HorizontalBox-ElementsContainer;                            // 0x0280 (size: 0x8)
    class UImage* img_left_btn;                                                       // 0x0288 (size: 0x8)
    class UImage* img_right_btn;                                                      // 0x0290 (size: 0x8)
    class USizeBox* SizeBox;                                                          // 0x0298 (size: 0x8)
    class USlider* Slider;                                                            // 0x02A0 (size: 0x8)
    class UTextBlock* SliderName;                                                     // 0x02A8 (size: 0x8)
    class USizeBox* SliderSizeBox;                                                    // 0x02B0 (size: 0x8)
    class UTextBlock* SliderValue;                                                    // 0x02B8 (size: 0x8)
    FText SliderTitle;                                                                // 0x02C0 (size: 0x18)
    FText Unit;                                                                       // 0x02D8 (size: 0x18)
    FText UnitPrefix;                                                                 // 0x02F0 (size: 0x18)
    FText SliderDefaultValueTip;                                                      // 0x0308 (size: 0x18)
    bool bChangeTextColorWhenFocused;                                                 // 0x0320 (size: 0x1)
    FLinearColor FocusedSliderAndTextColor;                                           // 0x0324 (size: 0x10)
    FLinearColor UnfocusedSliderAndTextColor;                                         // 0x0334 (size: 0x10)
    FVector2D SliderSize;                                                             // 0x0344 (size: 0x8)
    float DefaultValue;                                                               // 0x034C (size: 0x4)
    TArray<FText> Options;                                                            // 0x0350 (size: 0x10)
    class UUI_PhotoMode_C* PhotoModeWidgetReference;                                  // 0x0360 (size: 0x8)
    FMargin MarginSize;                                                               // 0x0368 (size: 0x10)
    FLinearColor BackgroundColor;                                                     // 0x0378 (size: 0x10)
    bool bShouldFocus;                                                                // 0x0388 (size: 0x1)
    FUI_Selector_CResetDispatcher ResetDispatcher;                                    // 0x0390 (size: 0x10)
    void ResetDispatcher();
    FUI_Selector_COnOptionChanged OnOptionChanged;                                    // 0x03A0 (size: 0x10)
    void OnOptionChanged(int32 OptionIndex, FText OptionText);

    void ClearOptions();
    void AddOptions(Name)(TArray<FName>& Options);
    void AddOptions(Text)(TArray<FText>& Options);
    void AddOptions(String)(TArray<FString>& Options);
    void SetDefaultOptionByIndex(int32 DefaultIndex);
    void SetDefaultOptionByName(const FText& ItemToFind, bool& bSuccess);
    void GetSelectedOption(int32& SelectedIndex, FText& SelectedOption);
    void RemoveOption(const FText& Item);
    void Add Option(const FText& NewOption);
    FEventReply OnMouseButtonDoubleClick(FGeometry InMyGeometry, const FPointerEvent& InMouseEvent);
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FSlateBrush getRightButtonSettings();
    FSlateBrush getLeftButtonSettings();
    void getFocusedOrUnfocusedColor(bool bChangeSliderColorWhenFocused, bool bChangeTextColorWhenFocused, class USlider* Slider, class UImage* imgLeftButton, class UImage* imgRightButton, class UWidget* SliderTitle, class UWidget* SliderValue, bool bSetMargin, FSlateBrush& LeftButtonColor, FSlateBrush& RightButtonColor);
    FText getTxtValue();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__btn_left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__btn_right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void ResetSlider(bool bShouldFocus, bool bResetThisSlider);
    void SetSliderFocus();
    void ResetSliderFocus();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ChangeValue(float Value, bool bShouldFocus);
    void FocusWithMouseWheel();
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void Construct();
    void FocusThisWidget();
    void ExecuteUbergraph_UI_Selector(int32 EntryPoint);
    void OnOptionChanged__DelegateSignature(int32 OptionIndex, FText OptionText);
    void ResetDispatcher__DelegateSignature();
}; // Size: 0x3B0

#endif
