#ifndef UE4SS_SDK_WBP_TicketMinigame_HPP
#define UE4SS_SDK_WBP_TicketMinigame_HPP

class UWBP_TicketMinigame_C : public UTicketValidateMinigame
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UWidgetAnimation* SpaceBarShake;                                            // 0x0288 (size: 0x8)
    class UWBP_KeyBindedAction_C* Bind_Quit;                                          // 0x0290 (size: 0x8)
    class UWBP_KeyBindedAction_C* Bind_Reject;                                        // 0x0298 (size: 0x8)
    class UWBP_KeyBindedAction_C* Bind_Validate;                                      // 0x02A0 (size: 0x8)
    class UTextBlock* HighScoreTextValue;                                             // 0x02A8 (size: 0x8)
    class UImage* Image;                                                              // 0x02B0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02B8 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02C0 (size: 0x8)
    class UImage* Image_3;                                                            // 0x02C8 (size: 0x8)
    class UImage* Image_4;                                                            // 0x02D0 (size: 0x8)
    class UImage* Image_5;                                                            // 0x02D8 (size: 0x8)
    class UImage* Image_93;                                                           // 0x02E0 (size: 0x8)
    class UImage* Image_100;                                                          // 0x02E8 (size: 0x8)
    class UImage* Image_104;                                                          // 0x02F0 (size: 0x8)
    class UImage* Image_126;                                                          // 0x02F8 (size: 0x8)
    class UImage* Image_193;                                                          // 0x0300 (size: 0x8)
    class UImage* KeyBindIMG;                                                         // 0x0308 (size: 0x8)
    class UImage* MashProgressBar;                                                    // 0x0310 (size: 0x8)
    class UOverlay* Overlay_Combo;                                                    // 0x0318 (size: 0x8)
    class UOverlay* Overlay_CustomerTicket;                                           // 0x0320 (size: 0x8)
    class UImage* SpaceBar;                                                           // 0x0328 (size: 0x8)
    class UOverlay* SpaceBarButton;                                                   // 0x0330 (size: 0x8)
    class UTextBlock* SpaceBarText;                                                   // 0x0338 (size: 0x8)
    class UWBP_Correct_Ticket_C* WBP_Correct_Ticket_258;                              // 0x0340 (size: 0x8)
    class UWBP_Customer_Ticket_C* WBP_Customer_Ticket;                                // 0x0348 (size: 0x8)
    class UWBP_CinemaTicket_C* WBP_TargetTicket;                                      // 0x0350 (size: 0x8)
    class UWBP_CinemaTicket_C* WBP_TicketToCompare;                                   // 0x0358 (size: 0x8)
    bool bCustomerFakeTicket;                                                         // 0x0360 (size: 0x1)
    bool bStartedValidating;                                                          // 0x0361 (size: 0x1)
    bool bStuck;                                                                      // 0x0362 (size: 0x1)
    int32 StuckClickCount;                                                            // 0x0364 (size: 0x4)
    FWBP_TicketMinigame_COnValidateStart OnValidateStart;                             // 0x0368 (size: 0x10)
    void OnValidateStart();
    FWBP_TicketMinigame_COnUnstuckAttempt OnUnstuckAttempt;                           // 0x0378 (size: 0x10)
    void OnUnstuckAttempt();
    FWBP_TicketMinigame_COnUnstuckSuccess OnUnstuckSuccess;                           // 0x0388 (size: 0x10)
    void OnUnstuckSuccess();
    FWBP_TicketMinigame_COnWidgetDestroy OnWidgetDestroy;                             // 0x0398 (size: 0x10)
    void OnWidgetDestroy(bool bCancel);
    bool bMinigameCompleted;                                                          // 0x03A8 (size: 0x1)
    class UNotification_C* QuestPopup;                                                // 0x03B0 (size: 0x8)
    FTicketData NpcTicket;                                                            // 0x03B8 (size: 0x90)
    bool RevertHUDWidgetsVisibility;                                                  // 0x0448 (size: 0x1)

    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void SetupStuckText();
    void CompleteMinigame();
    void FinishUnstuck();
    void DestroyWidget(bool bCancelMinigame);
    void SetupStuck();
    void TryUnstuck();
    void TryEndValidating(bool& bValidated);
    void StartValidating();
    void QuitMinigame();
    void RejectCustomer();
    void LetCustomerIn();
    void Finished_B0F387AC4A3696DDBE6BD58B1E18262E();
    void ShowQuestPopup();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void OnGamepadModeToggle(bool bNewGamepadMode);
    void OnUIHidden(ESlateVisibility InVisibility);
    void SetupWidget(bool bFake, const FTicketData& TicketData);
    void Destruct();
    void ExecuteUbergraph_WBP_TicketMinigame(int32 EntryPoint);
    void OnWidgetDestroy__DelegateSignature(bool bCancel);
    void OnUnstuckSuccess__DelegateSignature();
    void OnUnstuckAttempt__DelegateSignature();
    void OnValidateStart__DelegateSignature();
}; // Size: 0x449

#endif
