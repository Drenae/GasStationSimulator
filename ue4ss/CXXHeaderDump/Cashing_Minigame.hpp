#ifndef UE4SS_SDK_Cashing_Minigame_HPP
#define UE4SS_SDK_Cashing_Minigame_HPP

class UCashing_Minigame_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* TickAnim;                                                 // 0x0268 (size: 0x8)
    class UWidgetAnimation* PlusScan;                                                 // 0x0270 (size: 0x8)
    class UWidgetAnimation* MinusScan;                                                // 0x0278 (size: 0x8)
    class UWidgetAnimation* Xanimation;                                               // 0x0280 (size: 0x8)
    class UWidgetAnimation* WaitingAnimation;                                         // 0x0288 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0290 (size: 0x8)
    class UWidgetAnimation* ScoreAnimation;                                           // 0x0298 (size: 0x8)
    class UTextBlock* ActionPrefixLook;                                               // 0x02A0 (size: 0x8)
    class UTextBlock* ActionPrefixLook_1;                                             // 0x02A8 (size: 0x8)
    class UTextBlock* ActionPrefixLook_2;                                             // 0x02B0 (size: 0x8)
    class UVerticalBox* ControllsHorizontal;                                          // 0x02B8 (size: 0x8)
    class UWBP_KeyBindedAction_C* E_ROTATE_Right;                                     // 0x02C0 (size: 0x8)
    class UImage* GamePadLook;                                                        // 0x02C8 (size: 0x8)
    class UOverlay* GamePadPickUpAndMove;                                             // 0x02D0 (size: 0x8)
    class UWBP_KeyBindedAction_C* Interaction_F;                                      // 0x02D8 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x02E0 (size: 0x8)
    class UInvalidationBox* InvalidationBox_1;                                        // 0x02E8 (size: 0x8)
    class UInvalidationBox* InvalidationBox_2;                                        // 0x02F0 (size: 0x8)
    class UInvalidationBox* InvalidationBox_3;                                        // 0x02F8 (size: 0x8)
    class UMiniGame_Notification_C* MiniGame_Notification;                            // 0x0300 (size: 0x8)
    class UWBP_KeyBindedAction_C* Minigame_SpecialAction_01;                          // 0x0308 (size: 0x8)
    class UWBP_KeyBindedAction_C* Minigame_SpecialAction_01_2nd;                      // 0x0310 (size: 0x8)
    class UMiniGames_Tutorial_C* MiniGames_Tutorial;                                  // 0x0318 (size: 0x8)
    class UOverlay* PressKeyOverlay;                                                  // 0x0320 (size: 0x8)
    class UWBP_KeyBindedAction_C* Q_ROTATE_Left;                                      // 0x0328 (size: 0x8)
    class UWBP_KeyBindedAction_C* RPM;                                                // 0x0330 (size: 0x8)
    class UTextBlock* SlashTXT;                                                       // 0x0338 (size: 0x8)
    class UTextBlock* TXT_AvgTime;                                                    // 0x0340 (size: 0x8)
    class UTextBlock* TXT_ITEMS_LEFT;                                                 // 0x0348 (size: 0x8)
    class UTextBlock* TXT_PERFECT_COMBO;                                              // 0x0350 (size: 0x8)
    class UTextBlock* TXT_SUCCESS;                                                    // 0x0358 (size: 0x8)
    class UTextBlock* TXT_TotalProducts;                                              // 0x0360 (size: 0x8)
    float Time;                                                                       // 0x0368 (size: 0x4)
    float Record;                                                                     // 0x036C (size: 0x4)
    int32 Strike;                                                                     // 0x0370 (size: 0x4)
    float Last;                                                                       // 0x0374 (size: 0x4)

    void ModifyOverlay(bool bStartMinigame);
    void PlayProductFailX();
    void ProductAnimation(bool bSuccess);
    void UpdateAverageTime(float NewTime);
    void UpdateTotalTexts(int32 TotalProducts, int32 TotalSuccess);
    void Update_TXT_StrikeCombo(int32 NewStrikeAmount);
    void Update TXT Items Left(int32 NewItemsLeft);
    void Update_TXT_Success(int32 NewSuccess);
    void ShowShiftButton(bool bShow);
    void Destruct();
    void CreateTutorial();
    void KeyBindChanged(const FName ActionName);
    void KeyBindReset();
    void Construct();
    void ExecuteUbergraph_Cashing_Minigame(int32 EntryPoint);
}; // Size: 0x378

#endif
