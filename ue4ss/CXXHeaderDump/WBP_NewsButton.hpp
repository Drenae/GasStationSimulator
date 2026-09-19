#ifndef UE4SS_SDK_WBP_NewsButton_HPP
#define UE4SS_SDK_WBP_NewsButton_HPP

class UWBP_NewsButton_C : public UInteractableUserWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0670 (size: 0x8)
    class UImage* BackgroundImage;                                                    // 0x0678 (size: 0x8)
    class UButton* MainButton;                                                        // 0x0680 (size: 0x8)
    FSlateBrush NormalStyle;                                                          // 0x0688 (size: 0x88)
    FSlateBrush HoveredStyle;                                                         // 0x0710 (size: 0x88)
    FSlateBrush PressedStyle;                                                         // 0x0798 (size: 0x88)
    FSlateBrush DisabledStyle;                                                        // 0x0820 (size: 0x88)

    void FocusButton(bool bIsHovered);
    void SetupButton();
    void PreConstruct(bool IsDesignTime);
    void OnSetHoverEffect(bool bIsHovered, bool bPlaySound);
    void BndEvt__WBP_NewsButton_MainButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void OnPressedSelect();
    void BndEvt__WBP_NewsButton_MainButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_NewsButton(int32 EntryPoint);
}; // Size: 0x8A8

#endif
