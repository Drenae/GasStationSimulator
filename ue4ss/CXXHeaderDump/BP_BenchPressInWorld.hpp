#ifndef UE4SS_SDK_BP_BenchPressInWorld_HPP
#define UE4SS_SDK_BP_BenchPressInWorld_HPP

class ABP_BenchPressInWorld_C : public ARvMinigameInWorldBenchPress
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0308 (size: 0x8)
    class ABP_BarbellForBench_C* SpawnedBarbellREF;                                   // 0x0310 (size: 0x8)
    class UWBP_BenchPress_Service_C* BenchPressWidgetREF;                             // 0x0318 (size: 0x8)
    class AActor* TempNpcReference;                                                   // 0x0320 (size: 0x8)
    class AAICharacterBase* CustomerOnBenchREF;                                       // 0x0328 (size: 0x8)
    float CurrentUpDownDirection;                                                     // 0x0330 (size: 0x4)
    float CurrentLeftRightDirection;                                                  // 0x0334 (size: 0x4)
    FTransform Original Customer Transform;                                           // 0x0340 (size: 0x30)
    float LastRawMouseInput;                                                          // 0x0370 (size: 0x4)
    FTimerHandle Setup Customer At Bench Timer;                                       // 0x0378 (size: 0x8)

    void RemoveCustomerFromBench();
    void SetupCustomerAtBench();
    void StartMiniGame(class ARvGuestServiceSpot* Service, EGuestServiceDifficulty ChosenDifficulty);
    void EndMinigame(bool bSuccess);
    void OnEscape(bool bIsPressed);
    void DestroyBarbell();
    void TryEndMInigameCustom(bool Success);
    void ReceiveTick(float DeltaSeconds);
    void TempNpcTickLogic();
    void OnMoveForwardAction(float Value);
    void OnMoveRightAction(float Value);
    void OnJumpAction(bool bIsPressed);
    void CustomEvent_0(float Val);
    void ExecuteUbergraph_BP_BenchPressInWorld(int32 EntryPoint);
}; // Size: 0x380

#endif
