#ifndef UE4SS_SDK_Employee_Home_HPP
#define UE4SS_SDK_Employee_Home_HPP

class UEmployee_Home_C : public UEmployeeTask
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    float RotationOffset;                                                             // 0x0168 (size: 0x4)
    FGameplayTag Tag to Check;                                                        // 0x016C (size: 0x8)

    void CheckFacing(bool& bSameFacing);
    void Handle Montage Positioning();
    void OnNotifyEnd_63F6968542F41D37A96174B5B15D6490(FName NotifyName);
    void OnNotifyBegin_63F6968542F41D37A96174B5B15D6490(FName NotifyName);
    void OnInterrupted_63F6968542F41D37A96174B5B15D6490(FName NotifyName);
    void OnBlendOut_63F6968542F41D37A96174B5B15D6490(FName NotifyName);
    void OnCompleted_63F6968542F41D37A96174B5B15D6490(FName NotifyName);
    void OnNotifyEnd_66FFCD424356850E6716E29C8E687E34(FName NotifyName);
    void OnNotifyBegin_66FFCD424356850E6716E29C8E687E34(FName NotifyName);
    void OnInterrupted_66FFCD424356850E6716E29C8E687E34(FName NotifyName);
    void OnBlendOut_66FFCD424356850E6716E29C8E687E34(FName NotifyName);
    void OnCompleted_66FFCD424356850E6716E29C8E687E34(FName NotifyName);
    void OnNotifyEnd_1F0549F1410D1D7E2E16D49ED4CC48FA(FName NotifyName);
    void OnNotifyBegin_1F0549F1410D1D7E2E16D49ED4CC48FA(FName NotifyName);
    void OnInterrupted_1F0549F1410D1D7E2E16D49ED4CC48FA(FName NotifyName);
    void OnBlendOut_1F0549F1410D1D7E2E16D49ED4CC48FA(FName NotifyName);
    void OnCompleted_1F0549F1410D1D7E2E16D49ED4CC48FA(FName NotifyName);
    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void ExecuteUbergraph_Employee_Home(int32 EntryPoint);
}; // Size: 0x174

#endif
