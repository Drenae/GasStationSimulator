#ifndef UE4SS_SDK_IngameMenuOverviewWidgetBP_HPP
#define UE4SS_SDK_IngameMenuOverviewWidgetBP_HPP

class UIngameMenuOverviewWidgetBP_C : public UInteractableMenuWidgetBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0600 (size: 0x8)
    class UMainButton_C* AchievementsButton;                                          // 0x0608 (size: 0x8)
    class UDecisionDialogWidgetBP_C* DecisionDialogWidgetBP;                          // 0x0610 (size: 0x8)
    class UImage* GameLogo;                                                           // 0x0618 (size: 0x8)
    class UImage* Image_73;                                                           // 0x0620 (size: 0x8)
    class UMainButton_C* LoadButton;                                                  // 0x0628 (size: 0x8)
    class UMainButton_C* MainMenuButton;                                              // 0x0630 (size: 0x8)
    class UCanvasPanel* MenuCanvasPanel;                                              // 0x0638 (size: 0x8)
    class UMainButton_C* OptionsButton;                                               // 0x0640 (size: 0x8)
    class UBorder* PauseBorder;                                                       // 0x0648 (size: 0x8)
    class UBorder* PauseBorder_1;                                                     // 0x0650 (size: 0x8)
    class UTextBlock* PauseTitleText;                                                 // 0x0658 (size: 0x8)
    class UMainButton_C* QuitButton;                                                  // 0x0660 (size: 0x8)
    class UMainButton_C* ResetPlayerPosButton;                                        // 0x0668 (size: 0x8)
    class UMainButton_C* ResumeButton;                                                // 0x0670 (size: 0x8)
    class UMainButton_C* SaveButton;                                                  // 0x0678 (size: 0x8)
    class UBorder* SeparatorBorder;                                                   // 0x0680 (size: 0x8)
    class UIngameMenuContainerWidgetBP_C* IngameMenuWidget;                           // 0x0688 (size: 0x8)
    bool SaveGameOpened;                                                              // 0x0690 (size: 0x1)

    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void ShowSaveLoadWindow();
    void SetGlobalSettings();
    void OnNavigationEnter(class UInteractableMenuWidgetBP_C* NavigateFromMenu, bool bIsGamepadBeingUsed);
    void OnNavigationExit(class UInteractableMenuWidgetBP_C* NavigateToMenu, class UInteractableMenuWidgetBP_C* NavigateFromMenu);
    void OnGlobalSettingsApply();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__QuitButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
    void OnPressedBack();
    void BndEvt__LoadButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
    void BndEvt__OptionsButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void BndEvt__ResumeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
    void Destruct();
    void BndEvt__SaveButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void ResumeManualCall();
    void BndEvt__ResetPlayerPosButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void BndEvt__AchievementsButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
    void ExecuteUbergraph_IngameMenuOverviewWidgetBP(int32 EntryPoint);
}; // Size: 0x691

#endif
