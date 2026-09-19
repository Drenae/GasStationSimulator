#ifndef UE4SS_SDK_MainMenuContainerWidgetBP_HPP
#define UE4SS_SDK_MainMenuContainerWidgetBP_HPP

class UMainMenuContainerWidgetBP_C : public UInteractableMenuWidgetBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0600 (size: 0x8)
    class UDecisionDialogWidgetBP_C* DecisionDialogWidget_NewGame;                    // 0x0608 (size: 0x8)
    class UDecisionDialogWidgetBP_C* DecisionDialogWidget_QuitGame;                   // 0x0610 (size: 0x8)
    class UDLC_Widget_C* DLC_Widget;                                                  // 0x0618 (size: 0x8)
    class UIntroWidgetBP_C* IntroWidgetBP;                                            // 0x0620 (size: 0x8)
    class UMainMenuOverviewWidgetBP_C* MainMenuOverviewWidgetBP;                      // 0x0628 (size: 0x8)
    class UCanvasPanel* MenuCanvasPanel;                                              // 0x0630 (size: 0x8)
    class UOptionsMenuContainerWidgetBP_C* OptionsMenuWidgetBP;                       // 0x0638 (size: 0x8)
    class USampleMenuWidgetBP_C* SaveMenuWidget;                                      // 0x0640 (size: 0x8)
    class UTextBlock* VersionID;                                                      // 0x0648 (size: 0x8)
    class UWBP_MapSelection_C* WBP_MapSelection;                                      // 0x0650 (size: 0x8)
    FTimerHandle CheckGamepad;                                                        // 0x0658 (size: 0x8)

    void ShowLoadingScreen(bool bIsVisible);
    void PlayBGM();
    void RunBenchmark();
    void StartNewGame();
    void OnNavigationEnter(class UInteractableMenuWidgetBP_C* NavigateFromMenu, bool bIsGamepadBeingUsed);
    void OnNavigationExit(class UInteractableMenuWidgetBP_C* NavigateToMenu, class UInteractableMenuWidgetBP_C* NavigateFromMenu);
    void Construct();
    void BndEvt__DecisionDialogWidgetBP_K2Node_ComponentBoundEvent_0_DecisionAccept__DelegateSignature();
    void BndEvt__DecisionDialogWidgetBP_K2Node_ComponentBoundEvent_1_DecisionDecline__DelegateSignature();
    void BndEvt__MainMenuContainerWidgetBP_DecisionDialogWidget_NewGame_K2Node_ComponentBoundEvent_2_DecisionAccept__DelegateSignature();
    void BndEvt__MainMenuContainerWidgetBP_DecisionDialogWidget_NewGame_K2Node_ComponentBoundEvent_3_DecisionDecline__DelegateSignature();
    void OnInitialized();
    void RefreshBindings();
    void Destruct();
    void CheckGamepadType();
    void ExecuteUbergraph_MainMenuContainerWidgetBP(int32 EntryPoint);
}; // Size: 0x660

#endif
