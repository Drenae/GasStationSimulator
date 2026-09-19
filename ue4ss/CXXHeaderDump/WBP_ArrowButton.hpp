#ifndef UE4SS_SDK_WBP_ArrowButton_HPP
#define UE4SS_SDK_WBP_ArrowButton_HPP

class UWBP_ArrowButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* HoverAnim;                                                // 0x0268 (size: 0x8)
    class UButton* Button_27;                                                         // 0x0270 (size: 0x8)
    class UImage* Image_26;                                                           // 0x0278 (size: 0x8)
    class UImage* Image_52;                                                           // 0x0280 (size: 0x8)
    FWBP_ArrowButton_CClicked Clicked;                                                // 0x0288 (size: 0x10)
    void Clicked();

    void BndEvt__WBP_ArrowButton_Button_27_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_ArrowButton_Button_27_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_ArrowButton_Button_27_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_ArrowButton(int32 EntryPoint);
    void Clicked__DelegateSignature();
}; // Size: 0x298

#endif
