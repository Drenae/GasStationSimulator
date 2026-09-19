#ifndef UE4SS_SDK_OptionsPicker_HPP
#define UE4SS_SDK_OptionsPicker_HPP

class UOptionsPicker_C : public UInteractableUserWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0670 (size: 0x8)
    class UButton* HoverButton;                                                       // 0x0678 (size: 0x8)
    class UBorder* LeftBorder;                                                        // 0x0680 (size: 0x8)
    class UButton* NextOptionButton;                                                  // 0x0688 (size: 0x8)
    class UImage* NextOptionButtonImage;                                              // 0x0690 (size: 0x8)
    class UTextBlock* OptionNameText;                                                 // 0x0698 (size: 0x8)
    class UHorizontalBox* OptionsHorizontalBox;                                       // 0x06A0 (size: 0x8)
    class UBorder* OuterBorder;                                                       // 0x06A8 (size: 0x8)
    class UTextBlock* PickedOptionText;                                               // 0x06B0 (size: 0x8)
    class UButton* PreviousOptionButton;                                              // 0x06B8 (size: 0x8)
    class UImage* PreviousOptionButtonImage;                                          // 0x06C0 (size: 0x8)
    class UBorder* RightBorder;                                                       // 0x06C8 (size: 0x8)
    class UScrollBox* SubButtonsScrollBox;                                            // 0x06D0 (size: 0x8)
    TArray<FText> OptionsArray;                                                       // 0x06D8 (size: 0x10)
    int32 ActiveOptionIndex;                                                          // 0x06E8 (size: 0x4)
    TArray<UOptionsPickerSubButton_C*> SubButtonWidgets;                              // 0x06F0 (size: 0x10)
    FOptionsPicker_COnOptionChanged OnOptionChanged;                                  // 0x0700 (size: 0x10)
    void OnOptionChanged(int32 ActiveIndex);
    int32 DefaultOptionIndex;                                                         // 0x0710 (size: 0x4)
    TArray<UTexture2D*> OptionsImageArray;                                            // 0x0718 (size: 0x10)
    bool ShowSubButtons;                                                              // 0x0728 (size: 0x1)
    FLinearColor OptionsPickerBgColor;                                                // 0x072C (size: 0x10)
    FLinearColor OptionsPickerHighlightColor;                                         // 0x073C (size: 0x10)
    FLinearColor OptionsPickerExtraHighlightColor;                                    // 0x074C (size: 0x10)
    FLinearColor OptionsPickerOptionButtonBgColor;                                    // 0x075C (size: 0x10)

    void SetPickedOptionText();
    void IsInOptionsArrayBounds(int32 InIndex, bool& bIsInBounds);
    void SetDefaultOptionIndex();
    void SetChangeOptionButtonHoverEffect(bool bIsHovered, class UImage* InImage);
    void SetCurrentImage(int32 Index);
    void SetPickedOptionTextSettings();
    void SetGlobalSettings();
    void SetupOptionNameText();
    void SetChangeOptionsButtonVisibility(bool bIsVisible);
    void SetCurrentIndex(int32 InIndex, bool bPlaySound);
    void SetHoverEffect(bool IsON);
    void UpdateSubButtons();
    void SetActiveOption(int32 InIndex, bool bOptionChangedIgnore, bool bPlaySound);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__NextOptionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__PreviousOptionButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void SubOnClick(int32 InIndex);
    void Setup();
    void BndEvt__HoverButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void OnPressedLeft();
    void OnPressedRight();
    void OnSetHoverEffect(bool bIsHovered, bool bPlaySound);
    void OnGlobalSettingsApply();
    void BndEvt__PreviousOptionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__NextOptionButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__NextOptionButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__PreviousOptionButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_OptionsPicker(int32 EntryPoint);
    void OnOptionChanged__DelegateSignature(int32 ActiveIndex);
}; // Size: 0x76C

#endif
