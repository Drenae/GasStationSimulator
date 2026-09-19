#ifndef UE4SS_SDK_WBP_AchievementsMenu_HPP
#define UE4SS_SDK_WBP_AchievementsMenu_HPP

class UWBP_AchievementsMenu_C : public UInteractableMenuWidgetBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0600 (size: 0x8)
    class UAchievement_Slot_C* Achievement_Slot_1;                                    // 0x0608 (size: 0x8)
    class UAchievement_Slot_C* Achievement_Slot_2;                                    // 0x0610 (size: 0x8)
    class UAchievement_Slot_C* Achievement_Slot_3;                                    // 0x0618 (size: 0x8)
    class UWrapBox* AchiWrapBox;                                                      // 0x0620 (size: 0x8)
    class UNavigationKeyButton_C* BackButton;                                         // 0x0628 (size: 0x8)
    class UCanvasPanel* MenuCanvasPanel;                                              // 0x0630 (size: 0x8)
    class UTextBlock* MenuTitleText;                                                  // 0x0638 (size: 0x8)
    class UBorder* RightBorder;                                                       // 0x0640 (size: 0x8)
    class UScrollBox* ScrollBox;                                                      // 0x0648 (size: 0x8)
    FWBP_AchievementsMenu_COnClickedBack OnClickedBack;                               // 0x0650 (size: 0x10)
    void OnClickedBack();

    void CreateAchivements();
    void OnNavigationExit(class UInteractableMenuWidgetBP_C* NavigateToMenu, class UInteractableMenuWidgetBP_C* NavigateFromMenu);
    void OnPressedBack();
    void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void OnGlobalSettingsApply();
    void PreConstruct(bool IsDesignTime);
    void OnNavigationEnter(class UInteractableMenuWidgetBP_C* NavigateFromMenu, bool bIsGamepadBeingUsed);
    void OnPressedUp();
    void OnPressedDown();
    void OnChangeInputDeviceMenuUI(bool bIsGamepadBeingUsed);
    void ExecuteUbergraph_WBP_AchievementsMenu(int32 EntryPoint);
    void OnClickedBack__DelegateSignature();
}; // Size: 0x660

#endif
