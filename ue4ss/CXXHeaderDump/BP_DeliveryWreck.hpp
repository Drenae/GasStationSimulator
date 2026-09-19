#ifndef UE4SS_SDK_BP_DeliveryWreck_HPP
#define UE4SS_SDK_BP_DeliveryWreck_HPP

class UBP_DeliveryWreck_C : public UDeliveryWreck
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0150 (size: 0x8)
    class AJunkyardCarWreck* AttachedWreck;                                           // 0x0158 (size: 0x8)
    class UWrecksCollectionContract* DeliveryContract;                                // 0x0160 (size: 0x8)
    float VehicleDefaultMaxSpeed;                                                     // 0x0168 (size: 0x4)
    float MinDistanceFromParkedTowTruck;                                              // 0x016C (size: 0x4)
    FName TowRootBoneName;                                                            // 0x0170 (size: 0x8)
    bool WreckDetached;                                                               // 0x0178 (size: 0x1)
    bool UfoUsed;                                                                     // 0x0179 (size: 0x1)
    bool BlockingOtherTowTrucks;                                                      // 0x017A (size: 0x1)
    class AAICharacterBase* Character;                                                // 0x0180 (size: 0x8)
    TArray<AGSSWheeledVehicle*> TrucksStopped;                                        // 0x0188 (size: 0x10)
    bool WreckDestroyed;                                                              // 0x0198 (size: 0x1)
    bool EnteredVehicle;                                                              // 0x0199 (size: 0x1)

    void OnLoaded_99CA13D7451B64C9B654F6957E46A869(UClass* Loaded);
    void OnLoaded_22BD8739415E37AE0743D683C1590EFE(UClass* Loaded);
    void InitializeTask(class AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    void StartTask(class ACharacter* Character);
    void FinishBeginTask(const ETaskResult TaskState, FString FinishReason);
    void StateChanged(ECarWreckState NewState);
    void ResetDeliveredWreck();
    void OnUfoUsed();
    void TickObject(float DeltaTime);
    void OnUfoStarted();
    void OnDeliveryCancel();
    void ExecuteUbergraph_BP_DeliveryWreck(int32 EntryPoint);
}; // Size: 0x19A

#endif
