#ifndef UE4SS_SDK_IngameMenuContainerWidgetBP_HPP
#define UE4SS_SDK_IngameMenuContainerWidgetBP_HPP

class UIngameMenuContainerWidgetBP_C : public UInteractableMenuWidgetBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0600 (size: 0x8)
    class UDecisionDialogWidgetBP_C* DecisionDialogWidgetBP;                          // 0x0608 (size: 0x8)
    class UIngameMenuOverviewWidgetBP_C* IngameMenuOverviewWidgetBP;                  // 0x0610 (size: 0x8)
    class UCanvasPanel* MenuCanvasPanel;                                              // 0x0618 (size: 0x8)
    class UOptionsMenuContainerWidgetBP_C* OptionsMenuWidgetBP;                       // 0x0620 (size: 0x8)
    class USampleMenuWidgetBP_C* SaveMenuWidget;                                      // 0x0628 (size: 0x8)
    class UWBP_AchievementsMenu_C* WBP_AchievementsMenu;                              // 0x0630 (size: 0x8)

    void ShowDecisionDialog();
    void ResumeGame();
    void OnNavigationEnter(class UInteractableMenuWidgetBP_C* NavigateFromMenu, bool bIsGamepadBeingUsed);
    void OnNavigationExit(class UInteractableMenuWidgetBP_C* NavigateToMenu, class UInteractableMenuWidgetBP_C* NavigateFromMenu);
    void Construct();
    void Destruct();
    void BndEvt__DecisionDialogWidgetBP_K2Node_ComponentBoundEvent_0_DecisionAccept__DelegateSignature();
    void BndEvt__DecisionDialogWidgetBP_K2Node_ComponentBoundEvent_6_DecisionDecline__DelegateSignature();
    void ExecuteUbergraph_IngameMenuContainerWidgetBP(int32 EntryPoint);
}; // Size: 0x638

#endif
