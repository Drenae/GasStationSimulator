#ifndef UE4SS_SDK_WBP_PlatformCustomizationPaintStyle_HPP
#define UE4SS_SDK_WBP_PlatformCustomizationPaintStyle_HPP

class UWBP_PlatformCustomizationPaintStyle_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* Hover;                                                    // 0x0268 (size: 0x8)
    class UImage* Image;                                                              // 0x0270 (size: 0x8)
    class UImage* ImageLocked;                                                        // 0x0278 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x0280 (size: 0x8)
    class UOverlay* Overlay_Locked;                                                   // 0x0288 (size: 0x8)
    class UButton* PaintStyleButton;                                                  // 0x0290 (size: 0x8)
    class UImage* PaintStyleIcon;                                                     // 0x0298 (size: 0x8)
    class UImage* PaintStyleIcon_GamePad;                                             // 0x02A0 (size: 0x8)
    FWBP_PlatformCustomizationPaintStyle_COnPaintStyleSelected OnPaintStyleSelected;  // 0x02A8 (size: 0x10)
    void OnPaintStyleSelected(class UWBP_PlatformCustomizationPaintStyle_C* Button, ECustomizationPaintType PaintType);
    bool bIsActive;                                                                   // 0x02B8 (size: 0x1)
    int32 Index;                                                                      // 0x02BC (size: 0x4)
    FWBP_PlatformCustomizationPaintStyle_COnPaintStyleHovered OnPaintStyleHovered;    // 0x02C0 (size: 0x10)
    void OnPaintStyleHovered(class UTexture2D* CarMaterial);
    FWBP_PlatformCustomizationPaintStyle_COnPaintStyleUnhovered OnPaintStyleUnhovered; // 0x02D0 (size: 0x10)
    void OnPaintStyleUnhovered();
    bool bNoPaintStyle;                                                               // 0x02E0 (size: 0x1)
    class UTexture2D* PaintStyleThumbnail;                                            // 0x02E8 (size: 0x8)
    TSoftObjectPtr<class UTexture2D> Icon;                                            // 0x02F0 (size: 0x28)
    class UMaterialInstanceDynamic* MAT_PaintStyleIcon;                               // 0x0318 (size: 0x8)
    ECustomizationPaintType PaintStyleData;                                           // 0x0320 (size: 0x1)
    class UMaterialInstanceDynamic* MAT_PaintStyleGamePad;                            // 0x0328 (size: 0x8)

    void SetNormal_Gamepad();
    void SetActive_Gamepad();
    class UWidget* Get_PaintStyleButton_ToolTipWidget_0();
    void SetNormal();
    void SetActive();
    void OnLoaded_8CDF547C46980650DCB25BA7D0C8A132(class UObject* Loaded);
    void Construct();
    void BndEvt__WBP_PlatformCustomizationColor_ColorButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Destruct();
    void BndEvt__WBP_PlatformCustomizationColor_ColorButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_PlatformCustomizationColor_ColorButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void GamePadClick();
    void ExecuteUbergraph_WBP_PlatformCustomizationPaintStyle(int32 EntryPoint);
    void OnPaintStyleUnhovered__DelegateSignature();
    void OnPaintStyleHovered__DelegateSignature(class UTexture2D* CarMaterial);
    void OnPaintStyleSelected__DelegateSignature(class UWBP_PlatformCustomizationPaintStyle_C* Button, ECustomizationPaintType PaintType);
}; // Size: 0x330

#endif
