#ifndef UE4SS_SDK_Amount_button_HPP
#define UE4SS_SDK_Amount_button_HPP

class UAmount_button_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* HoverAnim;                                                // 0x0268 (size: 0x8)
    class UButton* Button_52;                                                         // 0x0270 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0278 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0280 (size: 0x8)
    FAmount_button_CClickAmountChange ClickAmountChange;                              // 0x0288 (size: 0x10)
    void ClickAmountChange();

    void BndEvt__Amount_button_Button_52_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Amount_button_Button_52_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Amount_button_Button_52_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Amount_button(int32 EntryPoint);
    void ClickAmountChange__DelegateSignature();
}; // Size: 0x298

#endif
