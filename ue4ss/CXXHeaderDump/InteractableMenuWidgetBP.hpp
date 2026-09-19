#ifndef UE4SS_SDK_InteractableMenuWidgetBP_HPP
#define UE4SS_SDK_InteractableMenuWidgetBP_HPP

class UInteractableMenuWidgetBP_C : public UGlobalInteractableUserWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05C0 (size: 0x8)
    class UInteractableMenuWidgetBP_C* PreviousMenu;                                  // 0x05C8 (size: 0x8)
    TArray<UInteractableUserWidget_C*> InteractableUserWidgets;                       // 0x05D0 (size: 0x10)
    class UPanelWidget* MenuCanvasPanelWidget;                                        // 0x05E0 (size: 0x8)
    class UFadeBorderWidgetBP_C* FadeBorderWidget;                                    // 0x05E8 (size: 0x8)
    class UInteractableUserWidget_C* LastSelectedUserWidget;                          // 0x05F0 (size: 0x8)
    class UInteractableUserWidget_C* DefaultSelectedUserWidget;                       // 0x05F8 (size: 0x8)

    void GetFirstEnabledInteractableUserWidget(class UInteractableUserWidget_C*& FirstInteractableUserWidget);
    void SetupNavigation();
    void HoverSpecificWidget(class UInteractableUserWidget_C* InUserWidget);
    void UpdateOptionsActionBinders();
    void GetPreviousMenuInputDevice(bool bIsGamepadBeingUsed);
    void PlaySelectSound();
    void HoverDefaultOrLastSelectedWidget();
    void SetMenuAndChildReferences(class UPanelWidget* MenuCanvasPanelWidget);
    void SetupFadeAnimation();
    void UpdateNavigationBarIcons(bool bIsGamepadBeingUsed);
    void SetInteractableUserWidgetReferences(class UPanelWidget* InPanel);
    void CreateChangeInputDeviceUIEvent();
    void PlayBackSound();
    void OnPressedBack();
    void OnNavigationEnter(class UInteractableMenuWidgetBP_C* NavigateFromMenu, bool bIsGamepadBeingUsed);
    void OnNavigationExit(class UInteractableMenuWidgetBP_C* NavigateToMenu, class UInteractableMenuWidgetBP_C* NavigateFromMenu);
    void PreConstruct(bool IsDesignTime);
    void OnChangeInputDeviceMenuUI(bool bIsGamepadBeingUsed);
    void OnSpecialPreConstruct(class UPanelWidget* InMenuCanvasPanel);
    void OnPressedReset();
    void OnPressedExtra();
    void Construct();
    void ExecuteUbergraph_InteractableMenuWidgetBP(int32 EntryPoint);
}; // Size: 0x600

#endif
