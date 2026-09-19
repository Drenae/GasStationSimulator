#ifndef UE4SS_SDK_PC_ExitButton_WBP_HPP
#define UE4SS_SDK_PC_ExitButton_WBP_HPP

class UPC_ExitButton_WBP_C : public UGSSInnerWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UWidgetAnimation* HovAnim;                                                  // 0x0290 (size: 0x8)
    class UTextBlock* Exit_TXT;                                                       // 0x0298 (size: 0x8)
    class UImage* ExitIcon_IMG;                                                       // 0x02A0 (size: 0x8)
    class UGSSButton* GSSButton_54;                                                   // 0x02A8 (size: 0x8)
    FPC_ExitButton_WBP_COnExit OnExit;                                                // 0x02B0 (size: 0x10)
    void OnExit();

    void SetText(FText InText);
    void BndEvt__PC_ExitButton_WBP_GSSButton_54_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__PC_ExitButton_WBP_GSSButton_54_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__PC_ExitButton_WBP_GSSButton_54_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void GamePadExitButton();
    void Hover();
    void Unhover();
    void ExecuteUbergraph_PC_ExitButton_WBP(int32 EntryPoint);
    void OnExit__DelegateSignature();
}; // Size: 0x2C0

#endif
