#ifndef UE4SS_SDK_NavigationKeyButton_HPP
#define UE4SS_SDK_NavigationKeyButton_HPP

class UNavigationKeyButton_C : public UInteractableUserWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0670 (size: 0x8)
    class UImage* ButtonBackgroundImage;                                              // 0x0678 (size: 0x8)
    class UTextBlock* ButtonText;                                                     // 0x0680 (size: 0x8)
    class UImage* GamepadButtonImage;                                                 // 0x0688 (size: 0x8)
    class UImage* KeyboardKeyImage;                                                   // 0x0690 (size: 0x8)
    class UButton* NavigationKeyButton;                                               // 0x0698 (size: 0x8)
    class UBorder* OuterBorder;                                                       // 0x06A0 (size: 0x8)
    FText Text;                                                                       // 0x06A8 (size: 0x18)
    class UTexture2D* KeyboardKeyTexture;                                             // 0x06C0 (size: 0x8)
    class UTexture2D* GamepadButtonTexture;                                           // 0x06C8 (size: 0x8)
    bool bIsActive;                                                                   // 0x06D0 (size: 0x1)

    void GetPSGamepadButtonImage(class UTexture2D*& GamePadPlaystation);
    void SetGamepadButtonImage();
    void GetButtonActive(bool& bIsActive);
    void SetGlobalSettings();
    void SetupButtonText();
    void SetButtonActive(bool bIsActive);
    void UpdateButtonIcon(bool bIsGamepadBeingUsed);
    void SetHoverEffect(bool bIsHovered);
    void BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void OnSetHoverEffect(bool bIsHovered, bool bPlaySound);
    void BndEvt__NavigationKeyButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void OnPressedSelect();
    void OnPressedBack();
    void OnGlobalSettingsApply();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__NavigationKeyButton_NavigationKeyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_NavigationKeyButton(int32 EntryPoint);
}; // Size: 0x6D1

#endif
