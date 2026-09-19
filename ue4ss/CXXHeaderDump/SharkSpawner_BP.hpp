#ifndef UE4SS_SDK_SharkSpawner_BP_HPP
#define UE4SS_SDK_SharkSpawner_BP_HPP

class ASharkSpawner_BP_C : public ASharkSpawner
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UArrowComponent* arrow;                                                     // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    TArray<AActor*> TargetPoints;                                                     // 0x0248 (size: 0x10)
    float SpawnTime;                                                                  // 0x0258 (size: 0x4)
    class USharkNotification_C* SharkNotification;                                    // 0x0260 (size: 0x8)
    FTimerHandle SpawnSharkHandle;                                                    // 0x0268 (size: 0x8)

    void SpawnSharkFunction(bool bIgnoreCustomers);
    void Finished_E938218E48DFB3EA18FBA88F82638888();
    void Finished_5EFA2EDA48B885767E3842A0E2C1E482();
    void SpawnShark(bool bLoadedFromSave, const FSavedShark& SavedSharkData);
    void StartSharkSpawn();
    void TryToSpawnShark();
    void ActualSpawn();
    void ExecuteUbergraph_SharkSpawner_BP(int32 EntryPoint);
}; // Size: 0x270

#endif
