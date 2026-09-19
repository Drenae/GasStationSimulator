#ifndef UE4SS_SDK_Wait_HPP
#define UE4SS_SDK_Wait_HPP

class UWait_C : public UEmployeeTask
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)

    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void ExecuteUbergraph_Wait(int32 EntryPoint);
}; // Size: 0x168

#endif
