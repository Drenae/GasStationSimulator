#ifndef UE4SS_SDK_OptionsOverviewWidgetBP_HPP
#define UE4SS_SDK_OptionsOverviewWidgetBP_HPP

class UOptionsOverviewWidgetBP_C : public UInteractableMenuWidgetBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0600 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x0608 (size: 0x8)
    class UMainButton_C* AudioButton;                                                 // 0x0610 (size: 0x8)
    class UNavigationKeyButton_C* BackButton;                                         // 0x0618 (size: 0x8)
    class UMainButton_C* ControlsButton;                                              // 0x0620 (size: 0x8)
    class UMainButton_C* CreditsButton;                                               // 0x0628 (size: 0x8)
    class UMainButton_C* DisplayButton;                                               // 0x0630 (size: 0x8)
    class UMainButton_C* GameplayButton;                                              // 0x0638 (size: 0x8)
    class UMainButton_C* GraphicsButton;                                              // 0x0640 (size: 0x8)
    class UCanvasPanel* MenuCanvasPanel;                                              // 0x0648 (size: 0x8)
    class UBorder* OptionsBorder;                                                     // 0x0650 (size: 0x8)
    class UTextBlock* OptionsTitleText;                                               // 0x0658 (size: 0x8)
    class UOptionsMenuContainerWidgetBP_C* OptionsMenuContainerWidget;                // 0x0660 (size: 0x8)

    void SetGlobalSettings();
    void BndEvt__GameplayButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__AudioButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__DisplayButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void BndEvt__GraphicsButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void BndEvt__ControlsButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
    void BndEvt__CreditsButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
    void OnNavigationEnter(class UInteractableMenuWidgetBP_C* NavigateFromMenu, bool bIsGamepadBeingUsed);
    void OnNavigationExit(class UInteractableMenuWidgetBP_C* NavigateToMenu, class UInteractableMenuWidgetBP_C* NavigateFromMenu);
    void OnPressedBack();
    void BndEvt__BackButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
    void OnGlobalSettingsApply();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_OptionsOverviewWidgetBP(int32 EntryPoint);
}; // Size: 0x668

#endif
