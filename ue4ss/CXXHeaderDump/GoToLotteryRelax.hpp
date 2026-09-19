#ifndef UE4SS_SDK_GoToLotteryRelax_HPP
#define UE4SS_SDK_GoToLotteryRelax_HPP

class UGoToLotteryRelax_C : public UIteractableActorTask
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)

    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void ExecuteUbergraph_GoToLotteryRelax(int32 EntryPoint);
}; // Size: 0x158

#endif
