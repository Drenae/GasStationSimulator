#ifndef UE4SS_SDK_WBP_PlatformCustomizationMaterial_HPP
#define UE4SS_SDK_WBP_PlatformCustomizationMaterial_HPP

class UWBP_PlatformCustomizationMaterial_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* Hover;                                                    // 0x0268 (size: 0x8)
    class UImage* Image;                                                              // 0x0270 (size: 0x8)
    class UImage* ImageLocked;                                                        // 0x0278 (size: 0x8)
    class UButton* MaterialButton;                                                    // 0x0280 (size: 0x8)
    class UImage* MaterialIcon;                                                       // 0x0288 (size: 0x8)
    class UImage* MaterialIcon_Gamepad;                                               // 0x0290 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x0298 (size: 0x8)
    class UOverlay* Overlay_Locked;                                                   // 0x02A0 (size: 0x8)
    FWBP_PlatformCustomizationMaterial_COnMaterialSelected OnMaterialSelected;        // 0x02A8 (size: 0x10)
    void OnMaterialSelected(class UWBP_PlatformCustomizationMaterial_C* Button, EFinishMaskType mask);
    EFinishMaskType MaterialData;                                                     // 0x02B8 (size: 0x1)
    bool bIsActive;                                                                   // 0x02B9 (size: 0x1)
    int32 Index;                                                                      // 0x02BC (size: 0x4)
    FWBP_PlatformCustomizationMaterial_COnMaterialHovered OnMaterialHovered;          // 0x02C0 (size: 0x10)
    void OnMaterialHovered(class UTexture2D* CarMaterial);
    FWBP_PlatformCustomizationMaterial_COnMaterialUnhovered OnMaterialUnhovered;      // 0x02D0 (size: 0x10)
    void OnMaterialUnhovered();
    bool bNoMaterial;                                                                 // 0x02E0 (size: 0x1)
    class UTexture2D* MaterialThumbnail;                                              // 0x02E8 (size: 0x8)
    TSoftObjectPtr<class UTexture2D> Icon;                                            // 0x02F0 (size: 0x28)
    class UMaterialInstanceDynamic* MAT_MaterialIcon;                                 // 0x0318 (size: 0x8)
    class UMaterialInstanceDynamic* MAT_Materialicon_Gamepad;                         // 0x0320 (size: 0x8)

    void SetNormal_Gamepad();
    void SetActive_Gamepad();
    class UWidget* Get_MaterialButton_ToolTipWidget_0();
    void SetNormal();
    void SetActive();
    void OnLoaded_A479BDAE495DC115635557A55CEF4A5E(class UObject* Loaded);
    void Construct();
    void BndEvt__WBP_PlatformCustomizationColor_ColorButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Destruct();
    void BndEvt__WBP_PlatformCustomizationColor_ColorButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_PlatformCustomizationColor_ColorButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void GamePadClick();
    void ExecuteUbergraph_WBP_PlatformCustomizationMaterial(int32 EntryPoint);
    void OnMaterialUnhovered__DelegateSignature();
    void OnMaterialHovered__DelegateSignature(class UTexture2D* CarMaterial);
    void OnMaterialSelected__DelegateSignature(class UWBP_PlatformCustomizationMaterial_C* Button, EFinishMaskType mask);
}; // Size: 0x328

#endif
