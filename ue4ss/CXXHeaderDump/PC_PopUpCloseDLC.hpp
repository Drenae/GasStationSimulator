#ifndef UE4SS_SDK_PC_PopUpCloseDLC_HPP
#define UE4SS_SDK_PC_PopUpCloseDLC_HPP

class UPC_PopUpCloseDLC_C : public UGSSBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UWidgetAnimation* OnHoverConfirm;                                           // 0x0288 (size: 0x8)
    class UWidgetAnimation* OnHoverCancel;                                            // 0x0290 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0298 (size: 0x8)
    class UDragoButton* NoButton;                                                     // 0x02A0 (size: 0x8)
    class UTextBlock* PrimaryText;                                                    // 0x02A8 (size: 0x8)
    class UTextBlock* SecondaryText;                                                  // 0x02B0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Cancel;                                         // 0x02B8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Confirm;                                        // 0x02C0 (size: 0x8)
    class UDragoButton* YesButton;                                                    // 0x02C8 (size: 0x8)
    FPC_PopUpCloseDLC_COnYesClicked OnYesClicked;                                     // 0x02D0 (size: 0x10)
    void OnYesClicked();
    class URVBookingSettings* BookingSettings;                                        // 0x02E0 (size: 0x8)
    FPC_PopUpCloseDLC_COnNoClicked OnNoClicked;                                       // 0x02E8 (size: 0x10)
    void OnNoClicked();
    FTimerHandle ClearErrorMessageTimer;                                              // 0x02F8 (size: 0x8)
    float ErrorMessageDuration;                                                       // 0x0300 (size: 0x4)
    FPC_PopUpCloseDLC_COnClosed OnClosed;                                             // 0x0308 (size: 0x10)
    void OnClosed();
    EDLCName DLC Name;                                                                // 0x0318 (size: 0x1)
    FText Structure Name;                                                             // 0x0320 (size: 0x18)

    void BndEvt__WBP_RefreshPopup_No_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_RefreshPopup_Yes_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__WBP_RefreshPopup_Yes_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_RefreshPopup_Yes_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_RefreshPopup_No_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_RefreshPopup_No_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature();
    void GamePadClickConfirm(bool Yes);
    void OnDefaultEscape();
    void CleanUp();
    void PreConstruct(bool IsDesignTime);
    void Init(EDLCName DLC Name, FText Structure Name);
    void ExecuteUbergraph_PC_PopUpCloseDLC(int32 EntryPoint);
    void OnClosed__DelegateSignature();
    void OnNoClicked__DelegateSignature();
    void OnYesClicked__DelegateSignature();
}; // Size: 0x338

#endif
