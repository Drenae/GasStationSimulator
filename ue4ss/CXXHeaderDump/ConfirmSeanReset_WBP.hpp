#ifndef UE4SS_SDK_ConfirmSeanReset_WBP_HPP
#define UE4SS_SDK_ConfirmSeanReset_WBP_HPP

class UConfirmSeanReset_WBP_C : public UGSSBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UWidgetAnimation* OnHovConfirm;                                             // 0x0288 (size: 0x8)
    class UWidgetAnimation* OnHovCancel;                                              // 0x0290 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0298 (size: 0x8)
    class UImage* Cancel_ICON;                                                        // 0x02A0 (size: 0x8)
    class UOverlay* Cancel_Overlay;                                                   // 0x02A8 (size: 0x8)
    class UCanvasPanel* Canvas_Panel_Area;                                            // 0x02B0 (size: 0x8)
    class UImage* Confirm_ICON;                                                       // 0x02B8 (size: 0x8)
    class UOverlay* Confirm_Overlay;                                                  // 0x02C0 (size: 0x8)
    class UTextBlock* DescriptionText;                                                // 0x02C8 (size: 0x8)
    class UImage* GamePadGuidA;                                                       // 0x02D0 (size: 0x8)
    class UImage* GamePadGuideB;                                                      // 0x02D8 (size: 0x8)
    class UImage* Image;                                                              // 0x02E0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02E8 (size: 0x8)
    class UImage* Image_279;                                                          // 0x02F0 (size: 0x8)
    class UDragoButton* No;                                                           // 0x02F8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint;                                                // 0x0300 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_1;                                              // 0x0308 (size: 0x8)
    class UDragoButton* Yes;                                                          // 0x0310 (size: 0x8)
    FConfirmSeanReset_WBP_CClick_Yes Click_Yes;                                       // 0x0318 (size: 0x10)
    void Click_Yes();
    FConfirmSeanReset_WBP_CClick_No Click_No;                                         // 0x0328 (size: 0x10)
    void Click_No();
    int32 LoanAmount;                                                                 // 0x0338 (size: 0x4)

    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Construct();
    void BndEvt__Yes_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__No_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_BorrowMoney_No_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_BorrowMoney_No_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_BorrowMoney_Yes_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_BorrowMoney_Yes_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void GamePadClickButton(bool Yes);
    void ExecuteUbergraph_ConfirmSeanReset_WBP(int32 EntryPoint);
    void Click_No__DelegateSignature();
    void Click_Yes__DelegateSignature();
}; // Size: 0x33C

#endif
