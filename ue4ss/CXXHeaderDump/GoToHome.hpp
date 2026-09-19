#ifndef UE4SS_SDK_GoToHome_HPP
#define UE4SS_SDK_GoToHome_HPP

class UGoToHome_C : public UIteractableActorTask
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)
    class AAICharacterBase* AIChar;                                                   // 0x0158 (size: 0x8)

    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void ExecuteUbergraph_GoToHome(int32 EntryPoint);
}; // Size: 0x160

#endif
