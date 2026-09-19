#ifndef UE4SS_SDK_UI_Slider_HPP
#define UE4SS_SDK_UI_Slider_HPP

class UUI_Slider_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* btn_left;                                                          // 0x0268 (size: 0x8)
    class UButton* btn_right;                                                         // 0x0270 (size: 0x8)
    class UHorizontalBox* HorizontalBox-ElementsContainer;                            // 0x0278 (size: 0x8)
    class UImage* img_left_btn;                                                       // 0x0280 (size: 0x8)
    class UImage* img_right_btn;                                                      // 0x0288 (size: 0x8)
    class USizeBox* Locked;                                                           // 0x0290 (size: 0x8)
    class UImage* LockImage;                                                          // 0x0298 (size: 0x8)
    class UProgressBar* ProgressBar_63;                                               // 0x02A0 (size: 0x8)
    class USlider* Slider;                                                            // 0x02A8 (size: 0x8)
    class USizeBox* SliderBoxSize;                                                    // 0x02B0 (size: 0x8)
    class UTextBlock* SliderName;                                                     // 0x02B8 (size: 0x8)
    class UTextBlock* SliderValue;                                                    // 0x02C0 (size: 0x8)
    FText SliderTitle;                                                                // 0x02C8 (size: 0x18)
    FText Unit;                                                                       // 0x02E0 (size: 0x18)
    FText UnitPrefix;                                                                 // 0x02F8 (size: 0x18)
    FText SliderDefaultValueTip;                                                      // 0x0310 (size: 0x18)
    float DefaultValue;                                                               // 0x0328 (size: 0x4)
    float MinimumValue;                                                               // 0x032C (size: 0x4)
    float MaximumValue;                                                               // 0x0330 (size: 0x4)
    float StepSize;                                                                   // 0x0334 (size: 0x4)
    FMargin MarginSize;                                                               // 0x0338 (size: 0x10)
    float SliderSize;                                                                 // 0x0348 (size: 0x4)
    bool bInteger;                                                                    // 0x034C (size: 0x1)
    FLinearColor FocusedSliderHandleAndTextColor;                                     // 0x0350 (size: 0x10)
    FLinearColor UnfocusedSliderHandleAndTextColor;                                   // 0x0360 (size: 0x10)
    class UUI_PhotoMode_C* PhotoModeWidgetReference;                                  // 0x0370 (size: 0x8)
    FUI_Slider_COnSliderValueChanged OnSliderValueChanged;                            // 0x0378 (size: 0x10)
    void OnSliderValueChanged(float SliderValue, bool bReset);
    bool bShouldFocus;                                                                // 0x0388 (size: 0x1)
    FLinearColor FocusedSliderBarColor;                                               // 0x038C (size: 0x10)
    FLinearColor UnfocusedSliderBarColor;                                             // 0x039C (size: 0x10)
    bool bMapMinMax;                                                                  // 0x03AC (size: 0x1)
    float MappedMin;                                                                  // 0x03B0 (size: 0x4)
    float MappedMax;                                                                  // 0x03B4 (size: 0x4)
    float MappedStepSize;                                                             // 0x03B8 (size: 0x4)
    bool bUseGrouping;                                                                // 0x03BC (size: 0x1)
    int32 MinimumFractionalDigits;                                                    // 0x03C0 (size: 0x4)
    int32 MaximumFractionalDigits;                                                    // 0x03C4 (size: 0x4)
    bool bChangeSliderColorWhenFocused;                                               // 0x03C8 (size: 0x1)
    bool bChangeTextColorWhenFocused;                                                 // 0x03C9 (size: 0x1)
    FTimerHandle StepSizeHandler;                                                     // 0x03D0 (size: 0x8)
    bool bIncreaseStepSizeDynamicallyOnHold;                                          // 0x03D8 (size: 0x1)
    float DisabledValue;                                                              // 0x03DC (size: 0x4)
    bool WasDisabled;                                                                 // 0x03E0 (size: 0x1)
    bool IsEnabled;                                                                   // 0x03E1 (size: 0x1)

    float GetPercent_0();
    FEventReply OnMouseButtonDoubleClick(FGeometry InMyGeometry, const FPointerEvent& InMouseEvent);
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    ESlateVisibility TextValueVisibility();
    ESlateVisibility LockVisibility();
    FSlateBrush getRightButtonSettings();
    FSlateBrush getLeftButtonSettings();
    void getFocusedOrUnfocusedColor(bool bChangeSliderColorWhenFocused, bool bChangeTextColorWhenFocused, class USlider* Slider, class UImage* imgLeftButton, class UImage* imgRightButton, class UWidget* SliderTitle, class UWidget* SliderValue, bool bSetMargin, FSlateBrush& LeftButtonColor, FSlateBrush& RightButtonColor);
    FText getTxtValue();
    void PreConstruct(bool IsDesignTime);
    void Initialize(float DefaultValue);
    void BndEvt__btn_left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__btn_right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void ResetSlider(bool bShouldFocus);
    void ChangeValue(float Value, bool bSetFocus, bool bCallDispatcherNotify);
    void EnableDisableWidget(bool bEnable);
    void SetSliderFocus();
    void ResetSliderFocus();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void FocusWithMouseWheel();
    void ConstantStepSizeIncrease();
    void Construct();
    void FocusThisWidget();
    void ExecuteUbergraph_UI_Slider(int32 EntryPoint);
    void OnSliderValueChanged__DelegateSignature(float SliderValue, bool bReset);
}; // Size: 0x3E2

#endif
