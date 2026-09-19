#ifndef UE4SS_SDK_MainButton_HPP
#define UE4SS_SDK_MainButton_HPP

class UMainButton_C : public UInteractableUserWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0670 (size: 0x8)
    class UTextBlock* ButtonText;                                                     // 0x0678 (size: 0x8)
    class UButton* MainButton;                                                        // 0x0680 (size: 0x8)
    class UImage* Onhover_IMG;                                                        // 0x0688 (size: 0x8)
    class UBorder* OuterBorder;                                                       // 0x0690 (size: 0x8)
    FText Text;                                                                       // 0x0698 (size: 0x18)
    FLinearColor MainButtonBgColor;                                                   // 0x06B0 (size: 0x10)
    FLinearColor MainButtonHighlightColor;                                            // 0x06C0 (size: 0x10)
    bool IsThatMikesWidget;                                                           // 0x06D0 (size: 0x1)

    void SetGlobalSettings();
    void SetupButtonText();
    void SetFocusEffect(bool bIsHovered);
    void OnPressedSelect();
    void OnPressedBack();
    void BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void OnPressedLeft();
    void OnPressedRight();
    void OnSetHoverEffect(bool bIsHovered, bool bPlaySound);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void OnGlobalSettingsApply();
    void OnWidgetEnabled();
    void BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_MainButton(int32 EntryPoint);
}; // Size: 0x6D1

#endif
