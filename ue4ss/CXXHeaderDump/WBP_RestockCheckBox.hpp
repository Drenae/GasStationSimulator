#ifndef UE4SS_SDK_WBP_RestockCheckBox_HPP
#define UE4SS_SDK_WBP_RestockCheckBox_HPP

class UWBP_RestockCheckBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* BlushChecked;                                             // 0x0268 (size: 0x8)
    class UCheckBox* AutofillCheckBox;                                                // 0x0270 (size: 0x8)
    class UImage* Image_44;                                                           // 0x0278 (size: 0x8)
    class UBorder* OuterBorder;                                                       // 0x0280 (size: 0x8)
    class UTextBlock* RestockText;                                                    // 0x0288 (size: 0x8)
    FWBP_RestockCheckBox_COnCheckBoxSet OnCheckBoxSet;                                // 0x0290 (size: 0x10)
    void OnCheckBoxSet(bool IsChecked);
    bool CanPlayBlushAnimation;                                                       // 0x02A0 (size: 0x1)
    FText WidgetText;                                                                 // 0x02A8 (size: 0x18)
    FMargin OuterBorderPadding;                                                       // 0x02C0 (size: 0x10)

    void ChangeCheckBoxState(bool IsChecked, bool Index, bool InputPin);
    void TryToPlayBlushAnimation(bool ShouldPlay);
    void PreConstruct(bool IsDesignTime);
    void SetCheckBox(bool IsChecked);
    void BndEvt__WBP_EmployeeRestock_AutofillCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void ExecuteUbergraph_WBP_RestockCheckBox(int32 EntryPoint);
    void OnCheckBoxSet__DelegateSignature(bool IsChecked);
}; // Size: 0x2D0

#endif
