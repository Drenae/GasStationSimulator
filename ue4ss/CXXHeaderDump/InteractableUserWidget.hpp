#ifndef UE4SS_SDK_InteractableUserWidget_HPP
#define UE4SS_SDK_InteractableUserWidget_HPP

class UInteractableUserWidget_C : public UGlobalInteractableUserWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05C0 (size: 0x8)
    FInteractableUserWidget_COnHovered OnHovered;                                     // 0x05C8 (size: 0x10)
    void OnHovered();
    FInteractableUserWidget_COnClicked OnClicked;                                     // 0x05D8 (size: 0x10)
    void OnClicked();
    FText OptionName;                                                                 // 0x05E8 (size: 0x18)
    FText OptionDescription;                                                          // 0x0600 (size: 0x18)
    int32 SelfIndex;                                                                  // 0x0618 (size: 0x4)
    class UInteractableUserWidget_C* PreviousInteractableWidget;                      // 0x0620 (size: 0x8)
    class UInteractableUserWidget_C* NextInteractableWidget;                          // 0x0628 (size: 0x8)
    class UInteractableUserWidget_C* FirstInteractableWidget;                         // 0x0630 (size: 0x8)
    class UInteractableUserWidget_C* LastInteractableWidget;                          // 0x0638 (size: 0x8)
    bool bAllowFocusLost;                                                             // 0x0640 (size: 0x1)
    bool bVerticalNavigation;                                                         // 0x0641 (size: 0x1)
    FInteractableUserWidget_COnFocussed OnFocussed;                                   // 0x0648 (size: 0x10)
    void OnFocussed();
    class UInteractableMenuWidgetBP_C* ParentMenuWidget;                              // 0x0658 (size: 0x8)
    class UTexture2D* OptionImage;                                                    // 0x0660 (size: 0x8)
    bool bIsWidgetEnabled;                                                            // 0x0668 (size: 0x1)

    void EnableWidget(bool bIsWidgetEnabled);
    void SetSelfAsLastSelectedWidget();
    void CreateChangeInputDeviceUIEvent();
    void PlaySliderSound(bool bPlaySound);
    void PlayChangeSound();
    void PlaySelectSound();
    void PlayHoverSound(bool bIsHovered, bool PlaySound);
    void FindFirstAndLastWidget();
    void FocusWidget(class UInteractableUserWidget_C* InWidget);
    void SetAllNavigation(bool bAllowNavigation, bool bIgnoreParentMenu);
    void UnhoverAllAndHoverSelf(bool bPlaySound);
    void SetupNavigation();
    void OnSetHoverEffect(bool bIsHovered, bool bPlaySound);
    void OnPressedUp();
    void OnPressedDown();
    void OnPressedSelect();
    void OnPressedBack();
    void PreConstruct(bool IsDesignTime);
    void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);
    void OnPressedRight();
    void OnPressedLeft();
    void OnChangeInputDevice(bool bIsGamepadBeingUsed);
    void Construct();
    void OnSetupNavigation();
    void OnWidgetEnabled();
    void ExecuteUbergraph_InteractableUserWidget(int32 EntryPoint);
    void OnFocussed__DelegateSignature();
    void OnClicked__DelegateSignature();
    void OnHovered__DelegateSignature();
}; // Size: 0x669

#endif
