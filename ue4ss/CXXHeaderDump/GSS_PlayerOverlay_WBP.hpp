#ifndef UE4SS_SDK_GSS_PlayerOverlay_WBP_HPP
#define UE4SS_SDK_GSS_PlayerOverlay_WBP_HPP

class UGSS_PlayerOverlay_WBP_C : public UGSS_PlayerOverlay
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    class UWidgetAnimation* HideQuestHolder;                                          // 0x0308 (size: 0x8)
    class UWidgetAnimation* OveralFadeUI;                                             // 0x0310 (size: 0x8)
    class UAirplanes_Widget_WBP_C* Airplanes_Widget_WBP;                              // 0x0318 (size: 0x8)
    class USizeBox* AlarmWidgetSizer;                                                 // 0x0320 (size: 0x8)
    class UCanvasPanel* CanvasPanel_16;                                               // 0x0328 (size: 0x8)
    class UHorizontalBox* DirtyHolder;                                                // 0x0330 (size: 0x8)
    class UHorizontalBox* HappyHolder;                                                // 0x0338 (size: 0x8)
    class UHorizontalBox* HorizontalboxQuestsAndChallenges;                           // 0x0340 (size: 0x8)
    class UImage* Image;                                                              // 0x0348 (size: 0x8)
    class UImage* Image_773;                                                          // 0x0350 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x0358 (size: 0x8)
    class UInvalidationBox* InvalidationBox_1;                                        // 0x0360 (size: 0x8)
    class UInvalidationBox* InvalidationBox_Photo;                                    // 0x0368 (size: 0x8)
    class USizeBox* MainGameChallengeSizebox;                                         // 0x0370 (size: 0x8)
    class UMoney_Widget_WBP_C* Money_Widget;                                          // 0x0378 (size: 0x8)
    class UPC_Notification_C* PC_Notification_195;                                    // 0x0380 (size: 0x8)
    class USizeBox* QuestHolderSizeBox;                                               // 0x0388 (size: 0x8)
    class UTextBlock* ScreenVersion;                                                  // 0x0390 (size: 0x8)
    class UStationTrafficMeter_Widget_C* StationTrafficMeter_Widget;                  // 0x0398 (size: 0x8)
    class UScaleBox* TabHolder;                                                       // 0x03A0 (size: 0x8)
    class UTime_Widget_C* Time_Widget;                                                // 0x03A8 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x03B0 (size: 0x8)
    class UVerticalBox* VerticalBox_MoreInfo;                                         // 0x03B8 (size: 0x8)
    class UVerticalBox* VerticalBox_QuestsAndChallenges;                              // 0x03C0 (size: 0x8)
    class UWBP_CarSold_C* WBP_CarSold;                                                // 0x03C8 (size: 0x8)
    class UWBP_ChallengesHolder_C* WBP_ChallengesHolder;                              // 0x03D0 (size: 0x8)
    class UWBP_CinemaConfirmation_C* WBP_CinemaConfirmation;                          // 0x03D8 (size: 0x8)
    class UWBP_CustomerDie_Notification_C* WBP_CustomerDie_Notification;              // 0x03E0 (size: 0x8)
    class UWBP_HideQuestHolderHint_C* WBP_HoldToHide;                                 // 0x03E8 (size: 0x8)
    class UWBP_KeyBindedAction_C* WBP_KeyBindedAction_BugReport;                      // 0x03F0 (size: 0x8)
    class UWBP_KeyBindedAction_C* WBP_KeyBindedAction_MoreInfo;                       // 0x03F8 (size: 0x8)
    class UWBP_NewFameLevelPopup_C* WBP_NewFameLevelPopup;                            // 0x0400 (size: 0x8)
    class UWBP_PhotoBinding_C* WBP_PhotoBinding;                                      // 0x0408 (size: 0x8)
    class UWBP_ShowQuestHolder_C* WBP_QuestHidden_1;                                  // 0x0410 (size: 0x8)
    class UWBP_QuestHolder_C* WBP_QuestHolder;                                        // 0x0418 (size: 0x8)
    class UCursorWidget_C* EngineCursorREF;                                           // 0x0420 (size: 0x8)
    class UMiniGames_Tutorial_C* VolcanoTutorialRef;                                  // 0x0428 (size: 0x8)
    class UMiniGames_Tutorial_C* RentalTutorialRef;                                   // 0x0430 (size: 0x8)
    FTimerHandle VolcanoTutorialTimer;                                                // 0x0438 (size: 0x8)
    FTimerHandle RentalTutorialTimer;                                                 // 0x0440 (size: 0x8)
    class UUserWidget* VIPBonusWidget;                                                // 0x0448 (size: 0x8)

    void CheckBIndings(FName A);
    void ToggleMoreInfo();
    void OnLoaded_13858A4745674026813ACFB4A9CEF199(UClass* Loaded);
    void Construct();
    void RefreshRunway();
    void HideWhitePointer(ESlateVisibility InVisibility);
    void LoadHappyWidgetPerMap();
    void LoadDirtyWidgetPerMap();
    void ShowVolcanoTutorial();
    void VolcanoTutorialClosed();
    void TryOpenVolcanoTutorial();
    void ShowRentalTutorial();
    void TryOpenRentalTutorial();
    void RentalTutorialClosed();
    void ShowLeftCornerBindings(bool bVisible);
    void ToggleCinemaInteractionInfo(bool bVisible);
    void CreateVIPBonusWidget();
    void DestroyVIPBonusWidget();
    void CheckRedDotAlarm();
    void OnNewUnlockableUIStateSet(FUnlockableUIState NewUnlockableUIState);
    void ToggleTrafficMeterDebug();
    void HideChallegnes(class UActiveQuestLine* FollowedQuestLine);
    void FoldQuestAndChallengesHolder();
    void CheckQuestHolderStatus();
    void PreConstruct(bool IsDesignTime);
    void CustomEvent_2(class UQuestBase* QuestStarted);
    void Reset();
    void OnKeyChanged(const FName ActionName);
    void ExecuteUbergraph_GSS_PlayerOverlay_WBP(int32 EntryPoint);
}; // Size: 0x450

#endif
