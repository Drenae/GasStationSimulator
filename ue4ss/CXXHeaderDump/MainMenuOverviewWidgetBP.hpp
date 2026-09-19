#ifndef UE4SS_SDK_MainMenuOverviewWidgetBP_HPP
#define UE4SS_SDK_MainMenuOverviewWidgetBP_HPP

class UMainMenuOverviewWidgetBP_C : public UInteractableMenuWidgetBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0600 (size: 0x8)
    class UMainButton_C* ContinueButton;                                              // 0x0608 (size: 0x8)
    class UMainButton_C* DLCButton;                                                   // 0x0610 (size: 0x8)
    class UImage* GameLogo;                                                           // 0x0618 (size: 0x8)
    class UMainButton_C* LoadGameButton;                                              // 0x0620 (size: 0x8)
    class UVerticalBox* MainButtonsVerticalBox;                                       // 0x0628 (size: 0x8)
    class UBorder* MainMenuBorder;                                                    // 0x0630 (size: 0x8)
    class UCanvasPanel* MenuCanvasPanel;                                              // 0x0638 (size: 0x8)
    class UMainButton_C* NewGameButton;                                               // 0x0640 (size: 0x8)
    class UWBP_Newsfeed_C* Newsfeed;                                                  // 0x0648 (size: 0x8)
    class UMainButton_C* OptionsButton;                                               // 0x0650 (size: 0x8)
    class UImage* PrologIMG;                                                          // 0x0658 (size: 0x8)
    class UMainButton_C* QuitButton;                                                  // 0x0660 (size: 0x8)
    class UBorder* SeparatorBorder;                                                   // 0x0668 (size: 0x8)
    class UWBP_AdvertIcon_C* WBP_AdvertIconNew;                                       // 0x0670 (size: 0x8)
    class UWBP_NewsButton_C* WBP_NewsButton_Facebook;                                 // 0x0678 (size: 0x8)
    class UWBP_NewsButton_C* WBP_NewsButton_Instagram;                                // 0x0680 (size: 0x8)
    class UWBP_NewsButton_C* WBP_NewsButton_X;                                        // 0x0688 (size: 0x8)
    class UWBP_NewsButton_C* WBP_NewsButton_YT;                                       // 0x0690 (size: 0x8)
    class UWBP_NewsButton_C* WBP_NewsButtonDiscord;                                   // 0x0698 (size: 0x8)
    class UMainMenuContainerWidgetBP_C* MainMenuWidget;                               // 0x06A0 (size: 0x8)
    FName LoadedLevelName;                                                            // 0x06A8 (size: 0x8)
    FSavedSlotStruct NewVar_0;                                                        // 0x06B0 (size: 0xC8)
    bool bCanBeLoaded;                                                                // 0x0778 (size: 0x1)
    class UWBP_MapSelection_C* MapSelectionWIdget;                                    // 0x0780 (size: 0x8)
    FName Level Name;                                                                 // 0x0788 (size: 0x8)
    FTimerHandle PopupTimer;                                                          // 0x0790 (size: 0x8)
    bool bShowAdvertPopupWhenNavigatedTo;                                             // 0x0798 (size: 0x1)
    bool bShouldRebuildNavigationOnWhenNavigatedTo;                                   // 0x0799 (size: 0x1)
    FTimerHandle BlockTimer;                                                          // 0x07A0 (size: 0x8)

    void ResetGraphicsSettings();
    void Check DLCCompability(TArray<EDLCName>& Array, TArray<EDLCName>& DisactivatedDLCs);
    void BackButtonHandling();
    void SetGlobalSettings();
    void ShowDecisionDialog(class UDecisionDialogWidgetBP_C* Decision);
    void BndEvt__OptionsButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__NewGameButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void BndEvt__QuitButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void OnNavigationEnter(class UInteractableMenuWidgetBP_C* NavigateFromMenu, bool bIsGamepadBeingUsed);
    void OnNavigationExit(class UInteractableMenuWidgetBP_C* NavigateToMenu, class UInteractableMenuWidgetBP_C* NavigateFromMenu);
    void OnPressedBack();
    void OnGlobalSettingsApply();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ToggleContinueButton(bool bIsContinueButtonEnabled);
    void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__LoadGameButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
    void UpdateContinueButton();
    void BndEvt__MainMenuOverviewWidgetBP_DLCButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void OnMapSelected(FName MapToOpen);
    void StartNewGame();
    void BndEvt__MainMenuOverviewWidgetBP_WBP_NewsButtonDiscord_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void BndEvt__MainMenuOverviewWidgetBP_WBP_NewsButton_Facebook_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
    void BndEvt__MainMenuOverviewWidgetBP_WBP_NewsButton_Instagram_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
    void BndEvt__MainMenuOverviewWidgetBP_WBP_NewsButton_Mail_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
    void BndEvt__MainMenuOverviewWidgetBP_WBP_NewsButton_X_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature();
    void OnInitialized();
    void RebuildNavigation(bool IsEnabled);
    void BndEvt__MainMenuOverviewWidgetBP_WBP_AdvertIconNew_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
    void BndEvt__MainMenuOverviewWidgetBP_WBP_AdvertIconNew_K2Node_ComponentBoundEvent_12_OnNewPopupRequested__DelegateSignature(class UWBP_AdvertIcon_C* AdvertIcon);
    void BndEvt__MainMenuOverviewWidgetBP_WBP_AdvertIconNew_K2Node_ComponentBoundEvent_13_OnAdvertIconEnabled__DelegateSignature(bool NewEnabled);
    void ExecuteUbergraph_MainMenuOverviewWidgetBP(int32 EntryPoint);
}; // Size: 0x7A8

#endif
