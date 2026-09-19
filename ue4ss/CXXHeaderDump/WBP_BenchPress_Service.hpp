#ifndef UE4SS_SDK_WBP_BenchPress_Service_HPP
#define UE4SS_SDK_WBP_BenchPress_Service_HPP

class UWBP_BenchPress_Service_C : public URvMinigameWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class UWidgetAnimation* RightArrowSuccessAnim;                                    // 0x02B8 (size: 0x8)
    class UWidgetAnimation* LeftArrowSuccessAnim;                                     // 0x02C0 (size: 0x8)
    class UWidgetAnimation* RightArrowAnim;                                           // 0x02C8 (size: 0x8)
    class UWidgetAnimation* LeftArrowAnim;                                            // 0x02D0 (size: 0x8)
    class UWidgetAnimation* WaitingForStart;                                          // 0x02D8 (size: 0x8)
    class UWidgetAnimation* StartGame;                                                // 0x02E0 (size: 0x8)
    class UWidgetAnimation* RotateWarning;                                            // 0x02E8 (size: 0x8)
    class UImage* ArrowLeftSuccess;                                                   // 0x02F0 (size: 0x8)
    class UImage* ArrowRightSuccess;                                                  // 0x02F8 (size: 0x8)
    class UImage* background;                                                         // 0x0300 (size: 0x8)
    class UTextBlock* Counter_Repetitions_TXT;                                        // 0x0308 (size: 0x8)
    class UImage* Icon;                                                               // 0x0310 (size: 0x8)
    class UImage* Image;                                                              // 0x0318 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0320 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0328 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0330 (size: 0x8)
    class UImage* Image_Bar_Lifting;                                                  // 0x0338 (size: 0x8)
    class UImage* Image_Bar_Player;                                                   // 0x0340 (size: 0x8)
    class UImage* Image_Barbell;                                                      // 0x0348 (size: 0x8)
    class UImage* KeyHint_Background;                                                 // 0x0350 (size: 0x8)
    class UImage* KeyHint_Background_1;                                               // 0x0358 (size: 0x8)
    class UImage* KeyHint_Background_2;                                               // 0x0360 (size: 0x8)
    class UImage* KeyHint_Background_3;                                               // 0x0368 (size: 0x8)
    class UWBP_KeyBindedAction_C* KeyHint_BendLeft;                                   // 0x0370 (size: 0x8)
    class UWBP_KeyBindedAction_C* KeyHint_BendLeft_1;                                 // 0x0378 (size: 0x8)
    class UWBP_KeyBindedAction_C* KeyHint_BendRight;                                  // 0x0380 (size: 0x8)
    class UImage* KeyHint_Mouse;                                                      // 0x0388 (size: 0x8)
    class UWBP_KeyBindedAction_C* KeyHint_MoveDown;                                   // 0x0390 (size: 0x8)
    class UWBP_KeyBindedAction_C* KeyHint_MoveUp;                                     // 0x0398 (size: 0x8)
    class UOverlay* LeftArrowContent;                                                 // 0x03A0 (size: 0x8)
    class UMiniGames_Tutorial_C* MiniGames_Tutorial;                                  // 0x03A8 (size: 0x8)
    class UWBP_RvMinigameActionNotification_C* Notification_Perfect;                  // 0x03B0 (size: 0x8)
    class UOverlay* Overlay_BarHolder;                                                // 0x03B8 (size: 0x8)
    class UProgressBar* PanicBar_ProgressBar;                                         // 0x03C0 (size: 0x8)
    class UOverlay* PressStart_Overlay;                                               // 0x03C8 (size: 0x8)
    class UOverlay* RightArrowContent;                                                // 0x03D0 (size: 0x8)
    class UWBP_KeyBindedAction_C* RMB;                                                // 0x03D8 (size: 0x8)
    class UHorizontalBox* StartGameGamePadHint_Horizontal;                            // 0x03E0 (size: 0x8)
    class UTextBlock* TextBlock_Start;                                                // 0x03E8 (size: 0x8)
    class UTextBlock* TextBlock_Start_3;                                              // 0x03F0 (size: 0x8)
    class UTextBlock* TextBlock_Timer;                                                // 0x03F8 (size: 0x8)
    class UImage* WBP_KeyHint_LeftAnalog;                                             // 0x0400 (size: 0x8)
    class UImage* WBP_KeyHint_LeftAnalog_1;                                           // 0x0408 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_LeftThumbstick;                                 // 0x0410 (size: 0x8)
    class UWBP_RvMinigameActionNotification_C* WBP_RvMinigameActionNotification;      // 0x0418 (size: 0x8)
    class UWBP_RvMinigameKeybindGuidePopup_C* WBP_RvMinigameKeybindGuidePopup;        // 0x0420 (size: 0x8)
    bool bIncrease;                                                                   // 0x0428 (size: 0x1)
    int32 RepsCount;                                                                  // 0x042C (size: 0x4)
    bool bMinigameActive;                                                             // 0x0430 (size: 0x1)
    float TimeLeft;                                                                   // 0x0434 (size: 0x4)
    float TiltTime;                                                                   // 0x0438 (size: 0x4)
    int32 CurrentRotateCount;                                                         // 0x043C (size: 0x4)
    bool bRotateRight;                                                                // 0x0440 (size: 0x1)
    bool bWPressed;                                                                   // 0x0441 (size: 0x1)
    bool bSPressed;                                                                   // 0x0442 (size: 0x1)
    bool bAPressed;                                                                   // 0x0443 (size: 0x1)
    bool bDPressed;                                                                   // 0x0444 (size: 0x1)
    class UBenchPressSettings* BenchPressSettings;                                    // 0x0448 (size: 0x8)
    class ABP_BarbellForBench_C* SpawnedBarbellREF;                                   // 0x0450 (size: 0x8)
    float BarSpeed;                                                                   // 0x0458 (size: 0x4)
    float BarTiltSpeed;                                                               // 0x045C (size: 0x4)
    float BarSizeY;                                                                   // 0x0460 (size: 0x4)
    float CurrentUpMove;                                                              // 0x0464 (size: 0x4)
    float CurrentTilt;                                                                // 0x0468 (size: 0x4)
    float PanicBarBaseProgress;                                                       // 0x046C (size: 0x4)
    float CurrentPanicBarProgress;                                                    // 0x0470 (size: 0x4)
    float PlayerBarSpeed;                                                             // 0x0474 (size: 0x4)
    float PlayerTiltSpeed;                                                            // 0x0478 (size: 0x4)
    class AAICharacterBase* CustomerOnBenchREF;                                       // 0x0480 (size: 0x8)
    FTimerHandle StartRotationTimerHandler;                                           // 0x0488 (size: 0x8)
    FTimerHandle AtGameStartStartRotateTimer;                                         // 0x0490 (size: 0x8)
    float Cached Angle;                                                               // 0x0498 (size: 0x4)
    ESlateVisibility Cached Left Arrow Visibility;                                    // 0x049C (size: 0x1)
    ESlateVisibility Cached Right Arrow Visibility;                                   // 0x049D (size: 0x1)

    void LiftBarOverMaxValue(bool& InRange);
    void OnFocusLost(FFocusEvent InFocusEvent);
    float GetCooldownPercentageBonus();
    void StartRotating();
    void RotateBarbell(float RotateValue);
    void GetMaxValue(float& MaxValue);
    void IsOutOfBounds(bool& bOutOfBounds);
    void RefreshRepCount();
    void MovePlayerBar(bool bUp, float DeltaTime);
    void Finished_569C5AEC4EA3665C0640749119E78D58();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void CustomEscape();
    void StartMiniGame(FGameplayTag ServiceTag, class ARvGuestServiceSpot* TargetServiceSpot, EGuestServiceDifficulty Difficulty);
    void PlayerStartMinigame();
    void OnDeviceChanged(bool bNewGamepadMode);
    void EndMinigame(bool bSuccess, FRVServiceExperienceData ExperienceData);
    void ShowGamepadHints();
    void KeyBindReset();
    void KeyBindChanged(const FName ActionName);
    void Destruct();
    void SetTutorialOpened(bool bOpen);
    void AtGameStartStartRotating();
    void Cache Arrows Visibility();
    void ExecuteUbergraph_WBP_BenchPress_Service(int32 EntryPoint);
}; // Size: 0x49E

#endif
