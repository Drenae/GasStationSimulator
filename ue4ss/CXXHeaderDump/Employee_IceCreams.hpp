#ifndef UE4SS_SDK_Employee_IceCreams_HPP
#define UE4SS_SDK_Employee_IceCreams_HPP

class UEmployee_IceCreams_C : public UEmployeeTask
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    float AnimFinishTime;                                                             // 0x0168 (size: 0x4)
    float RandomTimeKamil;                                                            // 0x016C (size: 0x4)
    class AAICharacterBase* Customer;                                                 // 0x0170 (size: 0x8)
    TArray<FBaseCharacterSkeletonMontage> Montages Skeletons;                         // 0x0178 (size: 0x10)
    class AInteractableBuilding* InteractableBuilding;                                // 0x0188 (size: 0x8)

    void OnNotifyEnd_A4CB364A4838A6A936235A9491B3E488(FName NotifyName);
    void OnNotifyBegin_A4CB364A4838A6A936235A9491B3E488(FName NotifyName);
    void OnInterrupted_A4CB364A4838A6A936235A9491B3E488(FName NotifyName);
    void OnBlendOut_A4CB364A4838A6A936235A9491B3E488(FName NotifyName);
    void OnCompleted_A4CB364A4838A6A936235A9491B3E488(FName NotifyName);
    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void TickObject(float DeltaTime);
    void ResetCleanAnimation();
    void ExecuteUbergraph_Employee_IceCreams(int32 EntryPoint);
}; // Size: 0x190

#endif
