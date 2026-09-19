#ifndef UE4SS_SDK_OptionsPickerSubButton_HPP
#define UE4SS_SDK_OptionsPickerSubButton_HPP

class UOptionsPickerSubButton_C : public UGlobalInteractableUserWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05C0 (size: 0x8)
    class UBorder* ButtonBorder;                                                      // 0x05C8 (size: 0x8)
    class USizeBox* ButtonSizeBox;                                                    // 0x05D0 (size: 0x8)
    class UButton* SubButton;                                                         // 0x05D8 (size: 0x8)
    float Width;                                                                      // 0x05E0 (size: 0x4)
    float Height;                                                                     // 0x05E4 (size: 0x4)
    FOptionsPickerSubButton_COnClickSubButton OnClickSubButton;                       // 0x05E8 (size: 0x10)
    void OnClickSubButton(int32 InIndex);
    int32 Index;                                                                      // 0x05F8 (size: 0x4)
    FLinearColor SubButtonMainColor;                                                  // 0x05FC (size: 0x10)
    FLinearColor SubButtonHighlightColor;                                             // 0x060C (size: 0x10)
    FLinearColor SubButtonExtraHightlightColor;                                       // 0x061C (size: 0x10)
    FLinearColor OptionPickerColor;                                                   // 0x062C (size: 0x10)

    void SetSubButtonActiveColor(bool bIsActive);
    void SetSubButtonHoverEffect(bool bIsHovered);
    void GetIndex(int32& OutIndex);
    void SetIndex(int32 InIndex);
    void SetGlobalSettings();
    void BndEvt__SubButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void OnGlobalSettingsApply();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__SubButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__SubButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_OptionsPickerSubButton(int32 EntryPoint);
    void OnClickSubButton__DelegateSignature(int32 InIndex);
}; // Size: 0x63C

#endif
