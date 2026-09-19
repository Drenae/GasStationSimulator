#ifndef UE4SS_SDK_BTT_MoveTo_HPP
#define UE4SS_SDK_BTT_MoveTo_HPP

class UBTT_MoveTo_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    class AAICharacterBase* AICharacter;                                              // 0x00B0 (size: 0x8)
    FRotator GoalRotation;                                                            // 0x00B8 (size: 0xC)

    void IncreaseStuckCounter();
    void CalcCharacterSpeed();
    void OnFail_3646B22248D32B15D6735687346D0F07(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_3646B22248D32B15D6735687346D0F07(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnFail_BD4A0B324AB8D3D756FA9DBBF776837B(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_BD4A0B324AB8D3D756FA9DBBF776837B(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void GOGO();
    void UpdateDistanceTravelled();
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void OnCannonHitEnded_Event_0(class AActor* AICharacter);
    void Unbind OnCannonHitEnded();
    void ExecuteUbergraph_BTT_MoveTo(int32 EntryPoint);
}; // Size: 0xC4

#endif
