#ifndef UE4SS_SDK_TakeToilet_HPP
#define UE4SS_SDK_TakeToilet_HPP

class UTakeToilet_C : public UTakeTolietTask
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)

    void CustomEvent_0();
    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void TickObject(float DeltaTime);
    void ExecuteUbergraph_TakeToilet(int32 EntryPoint);
}; // Size: 0x158

#endif
