#ifndef UE4SS_SDK_WBP_CarPartsButton_HPP
#define UE4SS_SDK_WBP_CarPartsButton_HPP

class UWBP_CarPartsButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* HoverAnim;                                                // 0x0268 (size: 0x8)
    class UButton* Button_43;                                                         // 0x0270 (size: 0x8)
    class UImage* Image_19;                                                           // 0x0278 (size: 0x8)
    class UTextBlock* TextBlock_Name;                                                 // 0x0280 (size: 0x8)
    FText Name;                                                                       // 0x0288 (size: 0x18)
    TArray<EJunkyardCarPartType> PartTypes;                                           // 0x02A0 (size: 0x10)
    FWBP_CarPartsButton_CClicked Clicked;                                             // 0x02B0 (size: 0x10)
    void Clicked();
    bool bIsActive;                                                                   // 0x02C0 (size: 0x1)

    void SetNormal();
    void SetActive();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__WBP_CarPartsButton_Button_43_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_CarPartsButton_Button_43_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_CarPartsButton_Button_43_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_CarPartsButton(int32 EntryPoint);
    void Clicked__DelegateSignature();
}; // Size: 0x2C1

#endif
