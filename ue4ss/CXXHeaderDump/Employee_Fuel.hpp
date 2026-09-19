#ifndef UE4SS_SDK_Employee_Fuel_HPP
#define UE4SS_SDK_Employee_Fuel_HPP

class UEmployee_Fuel_C : public UEmployeeTask
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    class AActor* NewTargetActor;                                                     // 0x0168 (size: 0x8)
    class AInteractableBuilding* InteractableBuilding;                                // 0x0170 (size: 0x8)
    float ResetLogicDelay;                                                            // 0x0178 (size: 0x4)
    class AAICharacterBase* Customer;                                                 // 0x0180 (size: 0x8)
    float RandomTimeKamil;                                                            // 0x0188 (size: 0x4)
    class AFuelStation* FuelStation;                                                  // 0x0190 (size: 0x8)
    bool bCarFueled;                                                                  // 0x0198 (size: 0x1)
    bool CurrentlyFueling;                                                            // 0x0199 (size: 0x1)
    TArray<FBaseCharacterSkeletonMontage> Montages Skeletons;                         // 0x01A0 (size: 0x10)
    bool CanPlayFuelingAnimation;                                                     // 0x01B0 (size: 0x1)
    bool CanFinishFueling;                                                            // 0x01B1 (size: 0x1)

    void RemoveFuelFromInventory();
    void CheckIfPistolIsInFuelEntry(class AActor*& Output);
    void TakePistolFromVehicleFuelEntry(class USoundBase*& Sound, class UChildActorComponent*& Output);
    void PutPistolToStation();
    void OnNotifyEnd_B7C464F44958C97488E00FAEE6C5BFEA(FName NotifyName);
    void OnNotifyBegin_B7C464F44958C97488E00FAEE6C5BFEA(FName NotifyName);
    void OnInterrupted_B7C464F44958C97488E00FAEE6C5BFEA(FName NotifyName);
    void OnBlendOut_B7C464F44958C97488E00FAEE6C5BFEA(FName NotifyName);
    void OnCompleted_B7C464F44958C97488E00FAEE6C5BFEA(FName NotifyName);
    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void TickObject(float DeltaTime);
    void Reset();
    void CheckFuel();
    void TryProceedTask();
    void ExecuteUbergraph_Employee_Fuel(int32 EntryPoint);
}; // Size: 0x1B2

#endif
