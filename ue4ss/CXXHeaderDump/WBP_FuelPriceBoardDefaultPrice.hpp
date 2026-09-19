#ifndef UE4SS_SDK_WBP_FuelPriceBoardDefaultPrice_HPP
#define UE4SS_SDK_WBP_FuelPriceBoardDefaultPrice_HPP

class UWBP_FuelPriceBoardDefaultPrice_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* OnHovConfirm;                                             // 0x0268 (size: 0x8)
    class UWidgetAnimation* OnHovCancel;                                              // 0x0270 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0278 (size: 0x8)
    class UCheckBox* AutofillCheckBox;                                                // 0x0280 (size: 0x8)
    class UImage* Cancel_ICON;                                                        // 0x0288 (size: 0x8)
    class UOverlay* Cancel_Overlay;                                                   // 0x0290 (size: 0x8)
    class UImage* Confirm_ICON;                                                       // 0x0298 (size: 0x8)
    class UOverlay* Confirm_Overlay;                                                  // 0x02A0 (size: 0x8)
    class UImage* Image;                                                              // 0x02A8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02B0 (size: 0x8)
    class UImage* Image_279;                                                          // 0x02B8 (size: 0x8)
    class UTextBlock* InfoText;                                                       // 0x02C0 (size: 0x8)
    class UTextBlock* InfoText_1;                                                     // 0x02C8 (size: 0x8)
    class UTextBlock* InitialPriceText;                                               // 0x02D0 (size: 0x8)
    class UTextBlock* NewPriceText;                                                   // 0x02D8 (size: 0x8)
    class UDragoButton* No;                                                           // 0x02E0 (size: 0x8)
    class UTextBlock* RestockText;                                                    // 0x02E8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_BottomButtonUpload;                             // 0x02F0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_BottomButtonUpload_1;                           // 0x02F8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_DontShowAgain;                                  // 0x0300 (size: 0x8)
    class UDragoButton* Yes;                                                          // 0x0308 (size: 0x8)
    class AFuelPriceBoard* FuelPriceBoardRef;                                         // 0x0310 (size: 0x8)
    float NewPrice;                                                                   // 0x0318 (size: 0x4)
    FText UpdateHourText;                                                             // 0x0320 (size: 0x18)
    FWBP_FuelPriceBoardDefaultPrice_COnPopupExit OnPopupExit;                         // 0x0338 (size: 0x10)
    void OnPopupExit(bool Accepted);
    FGameplayTag Tag;                                                                 // 0x0348 (size: 0x8)

    void HintsVisibility(bool Visible);
    void BndEvt__Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__Yes_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Yes_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__No_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__No_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void CustomEvent_0();
    void CustomEvent_1();
    void Destruct();
    void LockPopup();
    void CustomEvent_2();
    void CustomEvent();
    void ExecuteUbergraph_WBP_FuelPriceBoardDefaultPrice(int32 EntryPoint);
    void OnPopupExit__DelegateSignature(bool Accepted);
}; // Size: 0x350

#endif
