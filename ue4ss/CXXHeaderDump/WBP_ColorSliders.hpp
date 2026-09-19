#ifndef UE4SS_SDK_WBP_ColorSliders_HPP
#define UE4SS_SDK_WBP_ColorSliders_HPP

class UWBP_ColorSliders_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* GamepadCurrentSlider_Saturation;                                    // 0x0268 (size: 0x8)
    class UImage* GamepadCurrentSlider_Value;                                         // 0x0270 (size: 0x8)
    class USlider* Slider_saturation;                                                 // 0x0278 (size: 0x8)
    class USlider* Slider_value;                                                      // 0x0280 (size: 0x8)
    FLinearColor Color;                                                               // 0x0288 (size: 0x10)
    FWBP_ColorSliders_CChangeColor ChangeColor;                                       // 0x0298 (size: 0x10)
    void ChangeColor(FLinearColor Color);
    float MinSaturation;                                                              // 0x02A8 (size: 0x4)
    float MaxSaturation;                                                              // 0x02AC (size: 0x4)
    float MinBrightness;                                                              // 0x02B0 (size: 0x4)
    float MaxBrightness;                                                              // 0x02B4 (size: 0x4)
    int32 ColorIndex;                                                                 // 0x02B8 (size: 0x4)
    float ValueSaturation;                                                            // 0x02BC (size: 0x4)
    float SliderValue;                                                                // 0x02C0 (size: 0x4)
    int32 GamePadCurrentSlider;                                                       // 0x02C4 (size: 0x4)

    void UpdateColor();
    void UpdateValueSliderColor(FLinearColor Color);
    void UpdateSaturationSliderColor(FLinearColor Color, float ValueValue);
    void SetColor(FLinearColor Color, int32 Index);
    void Construct();
    void BndEvt__WBP_ColorSliders_Slider_saturation_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__WBP_ColorSliders_Slider_value_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void GamePadSliderSaturation(float Value);
    void GamePadSliderValue(float Value);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_ColorSliders(int32 EntryPoint);
    void ChangeColor__DelegateSignature(FLinearColor Color);
}; // Size: 0x2C8

#endif
