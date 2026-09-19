#ifndef UE4SS_SDK_DLC_RV_GoToRVHome_HPP
#define UE4SS_SDK_DLC_RV_GoToRVHome_HPP

class UDLC_RV_GoToRVHome_C : public UGoToHome_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    class AAICharacterBase* AICharacter;                                              // 0x0168 (size: 0x8)
    class AGSSWheeledVehicle* As GSSWheeled Vehicle;                                  // 0x0170 (size: 0x8)
    FVector Destination;                                                              // 0x0178 (size: 0xC)
    bool ShouldCheckCurentlyOccupied;                                                 // 0x0184 (size: 0x1)

    void FindHome(class AActor*& Spawned Npc Home);
    void DeactivateHandsLayer();
    void ActivateHandLayer();
    void SetPositioningValues();
    void OnFail_715F33F44E23F37C9C98188FEDB8182C(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_715F33F44E23F37C9C98188FEDB8182C(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnNotifyEnd_56B8B8514BFF6F3C807F1A8D5F4312B6(FName NotifyName);
    void OnNotifyBegin_56B8B8514BFF6F3C807F1A8D5F4312B6(FName NotifyName);
    void OnInterrupted_56B8B8514BFF6F3C807F1A8D5F4312B6(FName NotifyName);
    void OnBlendOut_56B8B8514BFF6F3C807F1A8D5F4312B6(FName NotifyName);
    void OnCompleted_56B8B8514BFF6F3C807F1A8D5F4312B6(FName NotifyName);
    void OnNotifyEnd_9CE85ED348FE211AE7B0CCAE67B9CF7B(FName NotifyName);
    void OnNotifyBegin_9CE85ED348FE211AE7B0CCAE67B9CF7B(FName NotifyName);
    void OnInterrupted_9CE85ED348FE211AE7B0CCAE67B9CF7B(FName NotifyName);
    void OnBlendOut_9CE85ED348FE211AE7B0CCAE67B9CF7B(FName NotifyName);
    void OnCompleted_9CE85ED348FE211AE7B0CCAE67B9CF7B(FName NotifyName);
    void OnFail_60687AC84453B3BCF653D0BF22E61EF9(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_60687AC84453B3BCF653D0BF22E61EF9(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnFail_4F209A1B40751E3EE10575B31AA00F4F(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_4F209A1B40751E3EE10575B31AA00F4F(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void TickObject(float DeltaTime);
    void MoveToSpot(class AActor* Target);
    void ExecuteUbergraph_DLC_RV_GoToRVHome(int32 EntryPoint);
}; // Size: 0x185

#endif
