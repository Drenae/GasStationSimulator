#ifndef UE4SS_SDK_GoToFuelMagazine_HPP
#define UE4SS_SDK_GoToFuelMagazine_HPP

class UGoToFuelMagazine_C : public UIteractableActorTask
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)
    class UInventoryComponent* Inventory;                                             // 0x0158 (size: 0x8)
    float AmountOfFuelPerTick;                                                        // 0x0160 (size: 0x4)
    class UAudioComponent* FuelPourSound;                                             // 0x0168 (size: 0x8)
    class AObjectiveMarker* MarkerFuel;                                               // 0x0170 (size: 0x8)
    bool IsPlayerInteractionNeeded;                                                   // 0x0178 (size: 0x1)
    FVector TargetActorLocation;                                                      // 0x017C (size: 0xC)

    void CustomEvent_0();
    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void TickObject(float DeltaTime);
    void ExecuteUbergraph_GoToFuelMagazine(int32 EntryPoint);
}; // Size: 0x188

#endif
