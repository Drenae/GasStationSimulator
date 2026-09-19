#ifndef UE4SS_SDK_WBP_PlatformButton_HPP
#define UE4SS_SDK_WBP_PlatformButton_HPP

class UWBP_PlatformButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* HoverAnim;                                                // 0x0268 (size: 0x8)
    class UGSSButton* GSSButton_31;                                                   // 0x0270 (size: 0x8)
    class UImage* Image_33;                                                           // 0x0278 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x0280 (size: 0x8)
    class UTextBlock* TextBlock_Name;                                                 // 0x0288 (size: 0x8)
    FText Name;                                                                       // 0x0290 (size: 0x18)
    class UTexture2D* Icon;                                                           // 0x02A8 (size: 0x8)
    bool bIsActive;                                                                   // 0x02B0 (size: 0x1)
    FWBP_PlatformButton_CClicked Clicked;                                             // 0x02B8 (size: 0x10)
    void Clicked(class UWBP_PlatformButton_C* Button);

    void SetNormal();
    void SetActive();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__WBP_PlatformButton_GSSButton_31_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_PlatformButton_GSSButton_31_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_PlatformButton_GSSButton_31_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void GamePadHover(bool Hover);
    void ExecuteUbergraph_WBP_PlatformButton(int32 EntryPoint);
    void Clicked__DelegateSignature(class UWBP_PlatformButton_C* Button);
}; // Size: 0x2C8

#endif
