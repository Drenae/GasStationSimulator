#ifndef UE4SS_SDK_AI_Denis_HPP
#define UE4SS_SDK_AI_Denis_HPP

class AAI_Denis_C : public ACharacterController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0330 (size: 0x8)
    FTimerHandle TimerRef;                                                            // 0x0338 (size: 0x8)

    void RunBehaviorTreeEvent();
    void DistanceToPlayerCheck();
    void EnableDennisAi();
    void StartAIDenis();
    void OnFinishGameLoaded_Event_0(const bool GameLoaded);
    void ReceiveBeginPlay();
    void ReceivePossess(class APawn* PossessedPawn);
    void OnFinishGameLoaded(const bool GameLoaded);
    void ExecuteUbergraph_AI_Denis(int32 EntryPoint);
}; // Size: 0x340

#endif
