#ifndef UE4SS_SDK_WBP_ConfirmCarExhibition_HPP
#define UE4SS_SDK_WBP_ConfirmCarExhibition_HPP

class UWBP_ConfirmCarExhibition_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* OnHovConfirm;                                             // 0x0268 (size: 0x8)
    class UWidgetAnimation* OnHovCancel;                                              // 0x0270 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0278 (size: 0x8)
    class UTextBlock* DescriptionText;                                                // 0x0280 (size: 0x8)
    class UImage* GamePadGuidA;                                                       // 0x0288 (size: 0x8)
    class UImage* GamePadGuideB;                                                      // 0x0290 (size: 0x8)
    class UDragoButton* No;                                                           // 0x0298 (size: 0x8)
    class UDragoButton* Yes;                                                          // 0x02A0 (size: 0x8)
    bool IsRemoveFunction;                                                            // 0x02A8 (size: 0x1)
    FWBP_ConfirmCarExhibition_COnOptionSelected OnOptionSelected;                     // 0x02B0 (size: 0x10)
    void OnOptionSelected(bool bSendToExhibition);
    FText Description;                                                                // 0x02C0 (size: 0x18)

    void BndEvt__Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__Yes_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Yes_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__No_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__No_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_ConfirmCarExhibition(int32 EntryPoint);
    void OnOptionSelected__DelegateSignature(bool bSendToExhibition);
}; // Size: 0x2D8

#endif
