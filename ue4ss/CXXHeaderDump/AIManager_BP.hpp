#ifndef UE4SS_SDK_AIManager_BP_HPP
#define UE4SS_SDK_AIManager_BP_HPP

class UAIManager_BP_C : public UAIManager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    TSoftClassPtr<AGSSWheeledVehicle> tmpVehicleClass;                                // 0x0368 (size: 0x28)
    class AAISpawnPoint_BP_C* SpawnPoint;                                             // 0x0390 (size: 0x8)

    TArray<FTaskStruct> GenerateCustomerTask(TArray<FTaskStruct>& InTask);
    TArray<FTaskStruct> GenerateVehicleTask(TArray<FTaskStruct>& InTask);
    bool SetupDeliveryCars(class AAICharacterBase* InICharacterBase, class AGSSWheeledVehicle* GSSWheeledVehicle);
    void ReceiveBeginPlay();
    void TrySpawnVehicle(class AAISpawnPoint* SpawnPoint);
    void ResetFrequenceOfTasks(int32 Variation);
    void ExecuteUbergraph_AIManager_BP(int32 EntryPoint);
}; // Size: 0x398

#endif
