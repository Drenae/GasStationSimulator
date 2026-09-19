#ifndef UE4SS_SDK_OptionsSlider_HPP
#define UE4SS_SDK_OptionsSlider_HPP

class UOptionsSlider_C : public UInteractableUserWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0670 (size: 0x8)
    class UButton* HoverButton;                                                       // 0x0678 (size: 0x8)
    class UBorder* LeftBorder;                                                        // 0x0680 (size: 0x8)
    class UTextBlock* OptionNameText;                                                 // 0x0688 (size: 0x8)
    class UBorder* OuterBorder;                                                       // 0x0690 (size: 0x8)
    class UBorder* RightBorder;                                                       // 0x0698 (size: 0x8)
    class UBorder* SliderBackgroundBorder;                                            // 0x06A0 (size: 0x8)
    class USlider* SliderHandle;                                                      // 0x06A8 (size: 0x8)
    class UProgressBar* SliderProgressBar;                                            // 0x06B0 (size: 0x8)
    class UTextBlock* SliderValueText;                                                // 0x06B8 (size: 0x8)
    FOptionsSlider_COnOptionChanged OnOptionChanged;                                  // 0x06C0 (size: 0x10)
    void OnOptionChanged();
    float DefaultValue;                                                               // 0x06D0 (size: 0x4)
    float SliderMinValue;                                                             // 0x06D4 (size: 0x4)
    float SliderMaxValue;                                                             // 0x06D8 (size: 0x4)
    int32 ValueDecimalPlaces;                                                         // 0x06DC (size: 0x4)
    float SliderStepSize;                                                             // 0x06E0 (size: 0x4)
    float MouseSliderStepSize;                                                        // 0x06E4 (size: 0x4)
    float CurrentValue;                                                               // 0x06E8 (size: 0x4)
    float CurrentValueNormalized;                                                     // 0x06EC (size: 0x4)
    FLinearColor OptionsSliderHighlightColor;                                         // 0x06F0 (size: 0x10)
    FLinearColor OptionsSliderBgColor;                                                // 0x0700 (size: 0x10)

    void UpdateSliderFromMouse(float InValue);
    float GetDefaultValueNormalized();
    void SetSliderHandleValue(float InValue);
    void GetScaledValue(float InValue, float& OnlyByMaxValue, float& Return Value);
    void IncrementSlider(float InIncrementValue);
    void SetupSliderInitial();
    void SetGlobalSettings();
    void SetupOptionNameText();
    void SetupSliderFromMenu(float InValue, bool OptionChangedIgnore);
    void UpdateSlider(float InValue, bool bPlaySound, bool bOptionChangeIgnore);
    void SetHoverEffect(bool IsON);
    void OnSetHoverEffect(bool bIsHovered, bool bPlaySound);
    void BndEvt__HoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void OnPressedLeft();
    void OnPressedRight();
    void PreConstruct(bool IsDesignTime);
    void OnGlobalSettingsApply();
    void BndEvt__SliderHandle_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__SliderHandle_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__SliderHandle_K2Node_ComponentBoundEvent_3_OnMouseCaptureBeginEvent__DelegateSignature();
    void ExecuteUbergraph_OptionsSlider(int32 EntryPoint);
    void OnOptionChanged__DelegateSignature();
}; // Size: 0x710

#endif
