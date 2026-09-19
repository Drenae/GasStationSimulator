#ifndef UE4SS_SDK_WBP_PanelPlatform_Button_HPP
#define UE4SS_SDK_WBP_PanelPlatform_Button_HPP

class UWBP_PanelPlatform_Button_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* OnClicked1;                                               // 0x0268 (size: 0x8)
    class UWidgetAnimation* OnHover;                                                  // 0x0270 (size: 0x8)
    class UGSSButton* GSSButton_58;                                                   // 0x0278 (size: 0x8)
    class UImage* Image_53;                                                           // 0x0280 (size: 0x8)
    class UTextBlock* TextBlock_24;                                                   // 0x0288 (size: 0x8)
    FText Text;                                                                       // 0x0290 (size: 0x18)
    FWBP_PanelPlatform_Button_COnClicked OnClicked;                                   // 0x02A8 (size: 0x10)
    void OnClicked();
    FGameplayTagContainer RedDotTags;                                                 // 0x02B8 (size: 0x20)
    FVector2D RedDotOffset;                                                           // 0x02D8 (size: 0x8)

    void Finished_F2E14E9642749CE0588C118C3C77B93A();
    void BndEvt__WBP_PanelPlatform_Button_GSSButton_58_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__WBP_PanelPlatform_Button_GSSButton_58_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_PanelPlatform_Button_GSSButton_58_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void UnlockableUIStateSet(FUnlockableUIState NewUnlockableUIState);
    void Destruct();
    void ExecuteUbergraph_WBP_PanelPlatform_Button(int32 EntryPoint);
    void OnClicked__DelegateSignature();
}; // Size: 0x2E0

#endif
