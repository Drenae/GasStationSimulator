#ifndef UE4SS_SDK_GSS_Button_WBP_HPP
#define UE4SS_SDK_GSS_Button_WBP_HPP

class UGSS_Button_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* Junkyard_Contract_Red;                                    // 0x0268 (size: 0x8)
    class UWidgetAnimation* Junkyard_ContractUnchecked;                               // 0x0270 (size: 0x8)
    class UWidgetAnimation* JunkyardContractDone;                                     // 0x0278 (size: 0x8)
    class UWidgetAnimation* Junkyard_ContractChecked;                                 // 0x0280 (size: 0x8)
    class UWidgetAnimation* Hover;                                                    // 0x0288 (size: 0x8)
    class UGSSButton* GSSButton_95;                                                   // 0x0290 (size: 0x8)
    class UImage* Image_436;                                                          // 0x0298 (size: 0x8)
    class UNamedSlot* NamedSlot_34;                                                   // 0x02A0 (size: 0x8)
    class UOverlay* Overlay_1;                                                        // 0x02A8 (size: 0x8)
    FVector2D Desired Size;                                                           // 0x02B0 (size: 0x8)
    FGSS_Button_WBP_CClicked Clicked;                                                 // 0x02B8 (size: 0x10)
    void Clicked();
    FLinearColor Color1;                                                              // 0x02C8 (size: 0x10)
    FLinearColor Color2;                                                              // 0x02D8 (size: 0x10)
    FGameplayTagContainer RedDotTags;                                                 // 0x02E8 (size: 0x20)
    FVector2D RedDotOffset;                                                           // 0x0308 (size: 0x8)

    void SetDone();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__GSS_Button_WBP_GSSButton_95_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__GSS_Button_WBP_GSSButton_95_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__GSS_Button_WBP_GSSButton_95_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void UnlockableUIStateSet(FUnlockableUIState NewUnlockableUIState);
    void Destruct();
    void Construct();
    void ExecuteUbergraph_GSS_Button_WBP(int32 EntryPoint);
    void Clicked__DelegateSignature();
}; // Size: 0x310

#endif
