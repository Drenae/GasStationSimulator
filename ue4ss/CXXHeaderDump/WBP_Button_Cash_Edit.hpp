#ifndef UE4SS_SDK_WBP_Button_Cash_Edit_HPP
#define UE4SS_SDK_WBP_Button_Cash_Edit_HPP

class UWBP_Button_Cash_Edit_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ClickAnim;                                                // 0x0268 (size: 0x8)
    class UWidgetAnimation* Hover_Anim;                                               // 0x0270 (size: 0x8)
    class UDragoButton* ActionButton;                                                 // 0x0278 (size: 0x8)
    class UTextBlock* CategoryTitle_TXT;                                              // 0x0280 (size: 0x8)
    class UImage* Image;                                                              // 0x0288 (size: 0x8)
    class UImage* Image_115;                                                          // 0x0290 (size: 0x8)
    FWBP_Button_Cash_Edit_COnClicked OnClicked;                                       // 0x0298 (size: 0x10)
    void OnClicked();
    bool bIsHover;                                                                    // 0x02A8 (size: 0x1)

    void Finished_0D4A8F424A06CC888181E38CB199AB64();
    void Finished_82470B84499F38395DA65CB2039C278B();
    void Finished_101A7876453642511B071496AE5F2F25();
    void BndEvt__WBP_Button_Cash_Edit_ActionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_Button_Cash_Edit_ActionButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_Button_Cash_Edit_ActionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void PlayHover();
    void GamePadHover(bool Hover);
    void ExecuteUbergraph_WBP_Button_Cash_Edit(int32 EntryPoint);
    void OnClicked__DelegateSignature();
}; // Size: 0x2A9

#endif
