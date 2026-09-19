#ifndef UE4SS_SDK_GoToMagazine_HPP
#define UE4SS_SDK_GoToMagazine_HPP

class UGoToMagazine_C : public UIteractableActorTask
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)
    class UInventoryComponent* Inventory;                                             // 0x0158 (size: 0x8)

    void CloseVehicleDoors();
    void CustomEvent_0();
    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void TickObject(float DeltaTime);
    void ExecuteUbergraph_GoToMagazine(int32 EntryPoint);
}; // Size: 0x160

#endif
