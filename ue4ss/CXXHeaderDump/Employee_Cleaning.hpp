#ifndef UE4SS_SDK_Employee_Cleaning_HPP
#define UE4SS_SDK_Employee_Cleaning_HPP

class UEmployee_Cleaning_C : public UEmployeeTask
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    float AnimTimeToWait;                                                             // 0x0168 (size: 0x4)
    TArray<AActor*> IgnoredActors;                                                    // 0x0170 (size: 0x10)
    class UAnimMontage* HeadScratchMontage;                                           // 0x0180 (size: 0x8)
    bool bNewTask;                                                                    // 0x0188 (size: 0x1)
    bool bCanActivateNewTask;                                                         // 0x0189 (size: 0x1)
    int32 NewTaskIndex;                                                               // 0x018C (size: 0x4)
    TArray<FBaseCharacterSkeletonMontage> Montages Skeletons;                         // 0x0190 (size: 0x10)
    UClass* TaskToCheck;                                                              // 0x01A0 (size: 0x8)
    class AActor* DEBUG_TracedDirt;                                                   // 0x01A8 (size: 0x8)
    FTimerHandle CheckTaskTimer;                                                      // 0x01B0 (size: 0x8)

    void FinishIdle();
    void UnlockItemToClean();
    void SetItemToClean();
    void ResetCleaningTask();
    void StopAllMontages();
    void SetAnimTime();
    class AActor* SearchTrash();
    void SearchDecal(class AActor*& TargetActor);
    void OnNotifyEnd_AD726CAC4F5CD87E7F3B60BB56D7C22B(FName NotifyName);
    void OnNotifyBegin_AD726CAC4F5CD87E7F3B60BB56D7C22B(FName NotifyName);
    void OnInterrupted_AD726CAC4F5CD87E7F3B60BB56D7C22B(FName NotifyName);
    void OnBlendOut_AD726CAC4F5CD87E7F3B60BB56D7C22B(FName NotifyName);
    void OnCompleted_AD726CAC4F5CD87E7F3B60BB56D7C22B(FName NotifyName);
    void OnNotifyEnd_553A08B342EFD72EAEDD62BD02538593(FName NotifyName);
    void OnNotifyBegin_553A08B342EFD72EAEDD62BD02538593(FName NotifyName);
    void OnInterrupted_553A08B342EFD72EAEDD62BD02538593(FName NotifyName);
    void OnBlendOut_553A08B342EFD72EAEDD62BD02538593(FName NotifyName);
    void OnCompleted_553A08B342EFD72EAEDD62BD02538593(FName NotifyName);
    void OnNotifyEnd_2315B604411DEBF9EAB248BB84C5BB83(FName NotifyName);
    void OnNotifyBegin_2315B604411DEBF9EAB248BB84C5BB83(FName NotifyName);
    void OnInterrupted_2315B604411DEBF9EAB248BB84C5BB83(FName NotifyName);
    void OnBlendOut_2315B604411DEBF9EAB248BB84C5BB83(FName NotifyName);
    void OnCompleted_2315B604411DEBF9EAB248BB84C5BB83(FName NotifyName);
    void OnNotifyEnd_3D5FC7264F8BE4B5F91A4C85A709CAB3(FName NotifyName);
    void OnNotifyBegin_3D5FC7264F8BE4B5F91A4C85A709CAB3(FName NotifyName);
    void OnInterrupted_3D5FC7264F8BE4B5F91A4C85A709CAB3(FName NotifyName);
    void OnBlendOut_3D5FC7264F8BE4B5F91A4C85A709CAB3(FName NotifyName);
    void OnCompleted_3D5FC7264F8BE4B5F91A4C85A709CAB3(FName NotifyName);
    void OnLoaded_713FE33A4800B099039066B32661CD85(UClass* Loaded);
    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void TickObject(float DeltaTime);
    void Reset();
    void FindTrashAndTake();
    void NoTrashReachableEvent();
    void WaitForTrash();
    void NoTargetMontage();
    void ActivateTask(int32 NewTaskIndex);
    void FindAndPlayAnimation();
    void CheckTasks();
    void ExecuteUbergraph_Employee_Cleaning(int32 EntryPoint);
}; // Size: 0x1B8

#endif
