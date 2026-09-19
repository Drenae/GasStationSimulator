#ifndef UE4SS_SDK_OptionsText_NoChoices_HPP
#define UE4SS_SDK_OptionsText_NoChoices_HPP

class UOptionsText_NoChoices_C : public UInteractableUserWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0670 (size: 0x8)
    class UButton* HoverButton;                                                       // 0x0678 (size: 0x8)
    class UBorder* LeftBorder;                                                        // 0x0680 (size: 0x8)
    class UTextBlock* OptionNameText;                                                 // 0x0688 (size: 0x8)
    class UBorder* OuterBorder;                                                       // 0x0690 (size: 0x8)
    FOptionsText_NoChoices_COnOptionChanged OnOptionChanged;                          // 0x0698 (size: 0x10)
    void OnOptionChanged();
    bool bInEditMode;                                                                 // 0x06A8 (size: 0x1)
    FText TextTemp;                                                                   // 0x06B0 (size: 0x18)
    FText DefaultText;                                                                // 0x06C8 (size: 0x18)
    FLinearColor OptionsTextInputBgColor;                                             // 0x06E0 (size: 0x10)
    FLinearColor OptionsTextInputHighlightColor;                                      // 0x06F0 (size: 0x10)
    int32 MaximumCharacters;                                                          // 0x0700 (size: 0x4)
    bool bOnlyNumeric;                                                                // 0x0704 (size: 0x1)

    void ValidateInputIsNumeric(FText InText, FText& ModifiedText);
    void ValidateInputText(FText InText);
    void SetGlobalSettings();
    void SetupOptionNameText();
    void SetHoverEffect(bool IsON);
    void OnSetHoverEffect(bool bIsHovered, bool bPlaySound);
    void OnGlobalSettingsApply();
    void BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_7_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__HoverButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__TextInputBox_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void OnPressedSelect();
    void BndEvt__HoverButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_OptionsText_NoChoices(int32 EntryPoint);
    void OnOptionChanged__DelegateSignature();
}; // Size: 0x705

#endif
