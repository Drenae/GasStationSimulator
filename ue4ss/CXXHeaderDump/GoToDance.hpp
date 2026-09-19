#ifndef UE4SS_SDK_GoToDance_HPP
#define UE4SS_SDK_GoToDance_HPP

class UGoToDance_C : public UIteractableActorTask
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)
    class ADanceFloor* DanceFloorREF;                                                 // 0x0158 (size: 0x8)
    class UArrowComponent* SpotREF;                                                   // 0x0160 (size: 0x8)
    FTimeStruct DancingTimeLeft;                                                      // 0x0168 (size: 0x10)
    TArray<UAnimMontage*> AvailableDances;                                            // 0x0178 (size: 0x10)
    bool Finished;                                                                    // 0x0188 (size: 0x1)
    FGameplayTag ChoosenTag;                                                          // 0x018C (size: 0x8)

    void RollForDance(FGameplayTag& ChoosenTag);
    void OnMoveFinished_7F916E14414FC62417FD4A99E5D2848A(TEnumAsByte<EPathFollowingResult::Type> Result, class AAIController* AIController);
    void OnRequestFailed_7F916E14414FC62417FD4A99E5D2848A();
    void OnNotifyEnd_F64B397849ECF964FF0F82B40B1F5AA6(FName NotifyName);
    void OnNotifyBegin_F64B397849ECF964FF0F82B40B1F5AA6(FName NotifyName);
    void OnInterrupted_F64B397849ECF964FF0F82B40B1F5AA6(FName NotifyName);
    void OnBlendOut_F64B397849ECF964FF0F82B40B1F5AA6(FName NotifyName);
    void OnCompleted_F64B397849ECF964FF0F82B40B1F5AA6(FName NotifyName);
    void StartDancing();
    void OnAllNPCsStoppedDancing_Event_0();
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void StartTask(class ACharacter* Character);
    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void ExecuteUbergraph_GoToDance(int32 EntryPoint);
}; // Size: 0x194

#endif
