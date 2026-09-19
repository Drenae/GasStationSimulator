#ifndef UE4SS_SDK_GoToGarbage_HPP
#define UE4SS_SDK_GoToGarbage_HPP

class UGoToGarbage_C : public UIteractableActorTask
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)
    TArray<FBaseCharacterSkeletonMontage> Montages Skeletons;                         // 0x0158 (size: 0x10)

    void OnNotifyEnd_35D09157423ADD2E2484F9A1C7BD77E6(FName NotifyName);
    void OnNotifyBegin_35D09157423ADD2E2484F9A1C7BD77E6(FName NotifyName);
    void OnInterrupted_35D09157423ADD2E2484F9A1C7BD77E6(FName NotifyName);
    void OnBlendOut_35D09157423ADD2E2484F9A1C7BD77E6(FName NotifyName);
    void OnCompleted_35D09157423ADD2E2484F9A1C7BD77E6(FName NotifyName);
    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void TickObject(float DeltaTime);
    void ExecuteUbergraph_GoToGarbage(int32 EntryPoint);
}; // Size: 0x168

#endif
