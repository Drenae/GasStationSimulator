#ifndef UE4SS_SDK_OptionsButton_HPP
#define UE4SS_SDK_OptionsButton_HPP

class UOptionsButton_C : public UInteractableUserWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0670 (size: 0x8)
    class UBorder* InnerBorder;                                                       // 0x0678 (size: 0x8)
    class UTextBlock* OptionNameText;                                                 // 0x0680 (size: 0x8)
    class UButton* OptionsButton;                                                     // 0x0688 (size: 0x8)
    class UBorder* OuterBorder;                                                       // 0x0690 (size: 0x8)
    FLinearColor OptionsButtonBgColor;                                                // 0x0698 (size: 0x10)
    FLinearColor OptionsButtonHightlightColor;                                        // 0x06A8 (size: 0x10)

    void SetGlobalSettings();
    void SetupOptionNameText();
    void SetHoverEffect(bool bIsHovered);
    void OnPressedSelect();
    void OnPressedBack();
    void BndEvt__OptionsButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void OnPressedLeft();
    void OnPressedRight();
    void OnSetHoverEffect(bool bIsHovered, bool bPlaySound);
    void BndEvt__OptionsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void OnGlobalSettingsApply();
    void ExecuteUbergraph_OptionsButton(int32 EntryPoint);
}; // Size: 0x6B8

#endif
