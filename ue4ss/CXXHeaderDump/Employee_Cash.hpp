#ifndef UE4SS_SDK_Employee_Cash_HPP
#define UE4SS_SDK_Employee_Cash_HPP

class UEmployee_Cash_C : public UEmployeeTask
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    float AnimFinishTime;                                                             // 0x0168 (size: 0x4)
    float RandomTimeKamil;                                                            // 0x016C (size: 0x4)
    class AAICharacterBase* Customer;                                                 // 0x0170 (size: 0x8)
    TArray<FBaseCharacterSkeletonMontage> Montages Skeletons;                         // 0x0178 (size: 0x10)

    void OnNotifyEnd_8B1641B74D05F7E4F4C013B2CECA4AE9(FName NotifyName);
    void OnNotifyBegin_8B1641B74D05F7E4F4C013B2CECA4AE9(FName NotifyName);
    void OnInterrupted_8B1641B74D05F7E4F4C013B2CECA4AE9(FName NotifyName);
    void OnBlendOut_8B1641B74D05F7E4F4C013B2CECA4AE9(FName NotifyName);
    void OnCompleted_8B1641B74D05F7E4F4C013B2CECA4AE9(FName NotifyName);
    void OnLoaded_9B5F05CF42191432B86C34B6C392F358(UClass* Loaded);
    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void TickObject(float DeltaTime);
    void ResetCleanAnimation();
    void ExecuteUbergraph_Employee_Cash(int32 EntryPoint);
}; // Size: 0x188

#endif
