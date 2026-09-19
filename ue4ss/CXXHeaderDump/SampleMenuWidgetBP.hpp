#ifndef UE4SS_SDK_SampleMenuWidgetBP_HPP
#define UE4SS_SDK_SampleMenuWidgetBP_HPP

class USampleMenuWidgetBP_C : public UInteractableMenuWidgetBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0600 (size: 0x8)
    class UNavigationKeyButton_C* BackButton;                                         // 0x0608 (size: 0x8)
    class UCanvasPanel* MenuCanvasPanel;                                              // 0x0610 (size: 0x8)
    class UWBP_SaveScreen_C* WBP_SaveScreen;                                          // 0x0618 (size: 0x8)
    FSampleMenuWidgetBP_COnClickedBack OnClickedBack;                                 // 0x0620 (size: 0x10)
    void OnClickedBack();

    void SetBackButtonVisibility(bool Condition);
    void SetGlobalSettings();
    void OnNavigationEnter(class UInteractableMenuWidgetBP_C* NavigateFromMenu, bool bIsGamepadBeingUsed);
    void OnNavigationExit(class UInteractableMenuWidgetBP_C* NavigateToMenu, class UInteractableMenuWidgetBP_C* NavigateFromMenu);
    void OnPressedBack();
    void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void OnGlobalSettingsApply();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnPressedDown();
    void OnPressedUp();
    void OnChangeInputDeviceMenuUI(bool bIsGamepadBeingUsed);
    void ExecuteUbergraph_SampleMenuWidgetBP(int32 EntryPoint);
    void OnClickedBack__DelegateSignature();
}; // Size: 0x630

#endif
