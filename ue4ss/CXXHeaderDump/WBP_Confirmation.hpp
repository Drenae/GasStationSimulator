#ifndef UE4SS_SDK_WBP_Confirmation_HPP
#define UE4SS_SDK_WBP_Confirmation_HPP

class UWBP_Confirmation_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* HoverCancel;                                              // 0x0268 (size: 0x8)
    class UWidgetAnimation* HoverConfirm;                                             // 0x0270 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0278 (size: 0x8)
    class UTextBlock* Amount;                                                         // 0x0280 (size: 0x8)
    class UOverlay* Cancel_clear;                                                     // 0x0288 (size: 0x8)
    class UImage* Cancel_ICON_1;                                                      // 0x0290 (size: 0x8)
    class UImage* Confirm_ICON;                                                       // 0x0298 (size: 0x8)
    class UOverlay* Confirm_Overlay;                                                  // 0x02A0 (size: 0x8)
    class UImage* Image;                                                              // 0x02A8 (size: 0x8)
    class UImage* Image_8;                                                            // 0x02B0 (size: 0x8)
    class UImage* Image_279;                                                          // 0x02B8 (size: 0x8)
    class UDragoButton* No_CLEAR;                                                     // 0x02C0 (size: 0x8)
    class UTextBlock* ProductName;                                                    // 0x02C8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Confirm;                                        // 0x02D0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Confirm_1;                                      // 0x02D8 (size: 0x8)
    class UDragoButton* Yes;                                                          // 0x02E0 (size: 0x8)
    FDrawnProduct DrawnProduct;                                                       // 0x02E8 (size: 0x58)
    class APartySpotTable* PartySpotTable;                                            // 0x0340 (size: 0x8)
    FWBP_Confirmation_CBasketFilled BasketFilled;                                     // 0x0348 (size: 0x10)
    void BasketFilled();
    bool GamepadInUse;                                                                // 0x0358 (size: 0x1)

    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void ChangeInputDevice(bool GamepadInUse);
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Construct();
    void Destruct();
    void BndEvt__Yes_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__No_CLEAR_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_Confirmation_No_CLEAR_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_Confirmation_No_CLEAR_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_Confirmation_Yes_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_Confirmation_Yes_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void PressYes();
    void PressNo();
    void ExecuteUbergraph_WBP_Confirmation(int32 EntryPoint);
    void BasketFilled__DelegateSignature();
}; // Size: 0x359

#endif
