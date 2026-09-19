#ifndef UE4SS_SDK_FuelMiniGame_HPP
#define UE4SS_SDK_FuelMiniGame_HPP

class UFuelMiniGame_C : public UFuelMinigameWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UWidgetAnimation* TurboAnim;                                                // 0x0270 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Area;                                             // 0x0278 (size: 0x8)
    class UVerticalBox* ControllsHorizontal;                                          // 0x0280 (size: 0x8)
    class UFUEL_AIR_CLOCK_C* FUEL_AIR_CLOCK;                                          // 0x0288 (size: 0x8)
    class UFuel_Place_Holder_C* Fuel_Place_Holder;                                    // 0x0290 (size: 0x8)
    class UFuelMiniGame_Score_C* FuelMiniGame_Score;                                  // 0x0298 (size: 0x8)
    class UImage* Image_278;                                                          // 0x02A0 (size: 0x8)
    class UInvalidationBox* InvalidationBox_2;                                        // 0x02A8 (size: 0x8)
    class UInvalidationBox* InvalidationBox_4;                                        // 0x02B0 (size: 0x8)
    class UMiniGames_Tutorial_C* MiniGames_Tutorial;                                  // 0x02B8 (size: 0x8)
    class UOverlay* PressKeyOverlay;                                                  // 0x02C0 (size: 0x8)
    class UWBP_KeyBindedAction_C* SHIFT_INTERACTION;                                  // 0x02C8 (size: 0x8)
    class UOverlay* StartFuelingInfoPad;                                              // 0x02D0 (size: 0x8)
    class UWBP_BuyFuelNotification_C* WBP_BuyFuelNotification;                        // 0x02D8 (size: 0x8)
    class ACharacter* Instigator;                                                     // 0x02E0 (size: 0x8)
    float CurrentFuel;                                                                // 0x02E8 (size: 0x4)
    class AAICharacterBase* AICharacter;                                              // 0x02F0 (size: 0x8)
    float TargetFuel;                                                                 // 0x02F8 (size: 0x4)
    float FuelMultiply;                                                               // 0x02FC (size: 0x4)
    class AFuelStation* FuelStation;                                                  // 0x0300 (size: 0x8)
    class UPC_Notification_TT_C* Boost;                                               // 0x0308 (size: 0x8)
    class UPC_Notification_TT_C* ooo;                                                 // 0x0310 (size: 0x8)
    class UAudioComponent* LoopFuel;                                                  // 0x0318 (size: 0x8)
    FTimerHandle Timer;                                                               // 0x0320 (size: 0x8)
    class UMiniGames_Tutorial_C* Tip;                                                 // 0x0328 (size: 0x8)
    bool BuyFuelOnScreen;                                                             // 0x0330 (size: 0x1)
    bool IsFueling;                                                                   // 0x0331 (size: 0x1)
    float TimeSinceStart;                                                             // 0x0334 (size: 0x4)
    class AFuelPistolBase* FuelPistol;                                                // 0x0338 (size: 0x8)
    bool FinishedMinigame;                                                            // 0x0340 (size: 0x1)

    void FuelFinished_AchievementEvent(float TargetDifference);
    void Interacted_Minigame();
    void Interacted_PC();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void StopTurbo();
    void TurboSpeed(bool On);
    void StopFuel();
    void CustomEvent_1();
    void Destruct();
    void CustomEvent_2();
    void CreateTutorial();
    void KeyBindChanged(const FName ActionName);
    void OnGamePadUpdate();
    void OnFuelUpdate(const float CurrentFuelAmount);
    void SPACE();
    void StopFuelingLPM();
    void OnChunchumanchuAngerChange(EChunchumanchuAnger AngerState, const float Value, const float ValueChanged);
    void ForceStopFuel();
    void ExecuteUbergraph_FuelMiniGame(int32 EntryPoint);
}; // Size: 0x341

#endif
