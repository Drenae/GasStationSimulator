#ifndef UE4SS_SDK_GoToTrashBin_HPP
#define UE4SS_SDK_GoToTrashBin_HPP

class UGoToTrashBin_C : public UIteractableActorTask
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)
    TArray<FBaseCharacterSkeletonMontage> Montages Skeletons;                         // 0x0158 (size: 0x10)

    void OnNotifyEnd_F366B5D5405936779C10809EEAA69E80(FName NotifyName);
    void OnNotifyBegin_F366B5D5405936779C10809EEAA69E80(FName NotifyName);
    void OnInterrupted_F366B5D5405936779C10809EEAA69E80(FName NotifyName);
    void OnBlendOut_F366B5D5405936779C10809EEAA69E80(FName NotifyName);
    void OnCompleted_F366B5D5405936779C10809EEAA69E80(FName NotifyName);
    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void TickObject(float DeltaTime);
    void OnUFO();
    void ExecuteUbergraph_GoToTrashBin(int32 EntryPoint);
}; // Size: 0x168

#endif
