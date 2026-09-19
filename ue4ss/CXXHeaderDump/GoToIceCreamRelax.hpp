#ifndef UE4SS_SDK_GoToIceCreamRelax_HPP
#define UE4SS_SDK_GoToIceCreamRelax_HPP

class UGoToIceCreamRelax_C : public UIteractableActorTask
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)

    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void ExecuteUbergraph_GoToIceCreamRelax(int32 EntryPoint);
}; // Size: 0x158

#endif
