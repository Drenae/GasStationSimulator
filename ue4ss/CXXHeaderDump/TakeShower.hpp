#ifndef UE4SS_SDK_TakeShower_HPP
#define UE4SS_SDK_TakeShower_HPP

class UTakeShower_C : public UIteractableActorTask
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)

    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void CustomEvent_0();
    void StartTask(class ACharacter* Character);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void TickObject(float DeltaTime);
    void ExecuteUbergraph_TakeShower(int32 EntryPoint);
}; // Size: 0x158

#endif
