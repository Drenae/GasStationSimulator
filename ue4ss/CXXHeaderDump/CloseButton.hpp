#ifndef UE4SS_SDK_CloseButton_HPP
#define UE4SS_SDK_CloseButton_HPP

class UCloseButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* HoverAnim;                                                // 0x0268 (size: 0x8)
    class UButton* Button_105;                                                        // 0x0270 (size: 0x8)
    class UImage* Image;                                                              // 0x0278 (size: 0x8)
    class UImage* Image_46;                                                           // 0x0280 (size: 0x8)
    FCloseButton_CClickButton ClickButton;                                            // 0x0288 (size: 0x10)
    void ClickButton();

    void BndEvt__CloseButton_Button_105_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__CloseButton_Button_105_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__CloseButton_Button_105_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_CloseButton(int32 EntryPoint);
    void ClickButton__DelegateSignature();
}; // Size: 0x298

#endif
