#ifndef UE4SS_SDK_GoToCash_HPP
#define UE4SS_SDK_GoToCash_HPP

class UGoToCash_C : public UTaskCash
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)
    bool IsBlockingTaskResetByResetQueue;                                             // 0x0158 (size: 0x1)

    void OnTaskFailure();
    void OnTaskSuccess();
    void OnAnimEnd();
    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void ExecuteUbergraph_GoToCash(int32 EntryPoint);
}; // Size: 0x159

#endif
