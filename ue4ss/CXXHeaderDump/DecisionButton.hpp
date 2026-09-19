#ifndef UE4SS_SDK_DecisionButton_HPP
#define UE4SS_SDK_DecisionButton_HPP

class UDecisionButton_C : public UInteractableUserWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0670 (size: 0x8)
    class UTextBlock* ButtonText;                                                     // 0x0678 (size: 0x8)
    class UButton* DecisionButton;                                                    // 0x0680 (size: 0x8)
    class UBorder* OuterBorder;                                                       // 0x0688 (size: 0x8)
    FText Text;                                                                       // 0x0690 (size: 0x18)
    FLinearColor DecisionButtonHighlightColor;                                        // 0x06A8 (size: 0x10)
    FLinearColor DecisionButtonBgColor;                                               // 0x06B8 (size: 0x10)

    void SetGlobalSettings();
    void SetupButtonText();
    void SetHoverEffect(bool bIsHovered);
    void BndEvt__DecisionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__DecisionButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void OnSetHoverEffect(bool bIsHovered, bool bPlaySound);
    void PreConstruct(bool IsDesignTime);
    void OnGlobalSettingsApply();
    void BndEvt__DecisionButton_DecisionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_DecisionButton(int32 EntryPoint);
}; // Size: 0x6C8

#endif
