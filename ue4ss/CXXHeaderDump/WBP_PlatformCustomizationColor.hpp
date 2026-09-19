#ifndef UE4SS_SDK_WBP_PlatformCustomizationColor_HPP
#define UE4SS_SDK_WBP_PlatformCustomizationColor_HPP

class UWBP_PlatformCustomizationColor_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* Hover;                                                    // 0x0268 (size: 0x8)
    class UButton* ColorButton;                                                       // 0x0270 (size: 0x8)
    class UGSSButton* CustomButton_Button;                                            // 0x0278 (size: 0x8)
    class UOverlay* CustomColor_Overlay;                                              // 0x0280 (size: 0x8)
    class UImage* CustomColorIcon;                                                    // 0x0288 (size: 0x8)
    class UImage* GamePadHover_IMG;                                                   // 0x0290 (size: 0x8)
    class UImage* GamePadHover_IMG2;                                                  // 0x0298 (size: 0x8)
    class UImage* Image;                                                              // 0x02A0 (size: 0x8)
    class UImage* Image_60;                                                           // 0x02A8 (size: 0x8)
    class UImage* Image_60_Gamepad;                                                   // 0x02B0 (size: 0x8)
    class UImage* ImageLocked;                                                        // 0x02B8 (size: 0x8)
    class UImage* None_icon;                                                          // 0x02C0 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x02C8 (size: 0x8)
    class UOverlay* Overlay_Locked;                                                   // 0x02D0 (size: 0x8)
    FWBP_PlatformCustomizationColor_COnColorSelected OnColorSelected;                 // 0x02D8 (size: 0x10)
    void OnColorSelected(FLinearColor Color, class UWBP_PlatformCustomizationColor_C* Button, int32 Index, bool bNoColor);
    FCarPaintColor ColorData;                                                         // 0x02E8 (size: 0x68)
    bool bIsActive;                                                                   // 0x0350 (size: 0x1)
    int32 Index;                                                                      // 0x0354 (size: 0x4)
    FWBP_PlatformCustomizationColor_COnColorHovered OnColorHovered;                   // 0x0358 (size: 0x10)
    void OnColorHovered(FCarPaintColor CarColor);
    FWBP_PlatformCustomizationColor_COnColorUnhovered OnColorUnhovered;               // 0x0368 (size: 0x10)
    void OnColorUnhovered();
    bool bNoColor;                                                                    // 0x0378 (size: 0x1)
    bool bIsCustomActive;                                                             // 0x0379 (size: 0x1)
    FWBP_PlatformCustomizationColor_COnCustomClicked OnCustomClicked;                 // 0x0380 (size: 0x10)
    void OnCustomClicked();

    void SetNormal_Gamepad();
    void SetActive_Gamepad();
    class UWidget* Color Info Tooltip();
    void SetCustomButton Active();
    void SetCustomButton Normal();
    void SetNormal();
    void SetActive();
    void OnLoaded_6179FE5640A6A7B19798AEA625A8321E(class UObject* Loaded);
    void Construct();
    void BndEvt__WBP_PlatformCustomizationColor_ColorButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Destruct();
    void BndEvt__WBP_PlatformCustomizationColor_ColorButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_PlatformCustomizationColor_ColorButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_PlatformCustomizationColor_CustomButton_Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_PlatformCustomizationColor_CustomButton_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_PlatformCustomizationColor_CustomButton_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void GamePadClickColors();
    void GamePadClickCustomButton();
    void ExecuteUbergraph_WBP_PlatformCustomizationColor(int32 EntryPoint);
    void OnCustomClicked__DelegateSignature();
    void OnColorUnhovered__DelegateSignature();
    void OnColorHovered__DelegateSignature(FCarPaintColor CarColor);
    void OnColorSelected__DelegateSignature(FLinearColor Color, class UWBP_PlatformCustomizationColor_C* Button, int32 Index, bool bNoColor);
}; // Size: 0x390

#endif
