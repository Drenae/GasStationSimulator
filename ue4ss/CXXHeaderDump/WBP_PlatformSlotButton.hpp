#ifndef UE4SS_SDK_WBP_PlatformSlotButton_HPP
#define UE4SS_SDK_WBP_PlatformSlotButton_HPP

class UWBP_PlatformSlotButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* HoverAnim;                                                // 0x0268 (size: 0x8)
    class UImage* CarPart_BG_IMG_1;                                                   // 0x0270 (size: 0x8)
    class UOverlay* CategoryBG_Overlay;                                               // 0x0278 (size: 0x8)
    class UTextBlock* CategoryName_Text;                                              // 0x0280 (size: 0x8)
    class UCheckBox* CheckBox_120;                                                    // 0x0288 (size: 0x8)
    class UGSSButton* PartButton;                                                     // 0x0290 (size: 0x8)
    class UWBP_SavedColor_C* WBP_SavedColor;                                          // 0x0298 (size: 0x8)
    class UWBP_SavedColor_C* WBP_SavedColor_1;                                        // 0x02A0 (size: 0x8)
    class UWBP_SavedColor_C* WBP_SavedColor_2;                                        // 0x02A8 (size: 0x8)
    EJunkyardCarPartType Car Part Type;                                               // 0x02B0 (size: 0x1)
    FWBP_PlatformSlotButton_COnPressed OnPressed;                                     // 0x02B8 (size: 0x10)
    void OnPressed(EJunkyardCarPartType Slot, class UWBP_PlatformSlotButton_C* Button);
    bool bIsActive;                                                                   // 0x02C8 (size: 0x1)
    FSavedCarPaint CarPaint;                                                          // 0x02CC (size: 0x44)
    FWBP_PlatformSlotButton_CClickedColor1 ClickedColor1;                             // 0x0310 (size: 0x10)
    void ClickedColor1(FLinearColor Color, int32 ColorIndex, bool bNoColor);
    FWBP_PlatformSlotButton_CClickedColor2 ClickedColor2;                             // 0x0320 (size: 0x10)
    void ClickedColor2(FLinearColor Color, int32 ColorIndex, bool bNoColor);
    FWBP_PlatformSlotButton_CClickedColor3 ClickedColor3;                             // 0x0330 (size: 0x10)
    void ClickedColor3(FLinearColor Color, int32 ColorIndex, bool bNoColor);
    class UMaterialInstanceDynamic* MAT_CarCategory;                                  // 0x0340 (size: 0x8)

    void SetUnchecked();
    void SetChecked();
    void ShowCurrentPartColors(const FSavedCarPaint& SavedCarPaint);
    void Construct();
    void BndEvt__PlatformPanelCarPart_PartButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_PlatformSlotButton_PartButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_PlatformSlotButton_PartButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_PlatformSlotButton_WBP_SavedColor_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(FLinearColor Color, class UWBP_SavedColor_C* WidgetRef, int32 ColorIndex);
    void BndEvt__WBP_PlatformSlotButton_WBP_SavedColor_1_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(FLinearColor Color, class UWBP_SavedColor_C* WidgetRef, int32 ColorIndex);
    void BndEvt__WBP_PlatformSlotButton_WBP_SavedColor_2_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(FLinearColor Color, class UWBP_SavedColor_C* WidgetRef, int32 ColorIndex);
    void Destruct();
    void GamePadClickCategory();
    void GamePadHover(bool Hover);
    void ExecuteUbergraph_WBP_PlatformSlotButton(int32 EntryPoint);
    void ClickedColor3__DelegateSignature(FLinearColor Color, int32 ColorIndex, bool bNoColor);
    void ClickedColor2__DelegateSignature(FLinearColor Color, int32 ColorIndex, bool bNoColor);
    void ClickedColor1__DelegateSignature(FLinearColor Color, int32 ColorIndex, bool bNoColor);
    void OnPressed__DelegateSignature(EJunkyardCarPartType Slot, class UWBP_PlatformSlotButton_C* Button);
}; // Size: 0x348

#endif
