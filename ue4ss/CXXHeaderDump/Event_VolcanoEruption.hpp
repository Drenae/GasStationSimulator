#ifndef UE4SS_SDK_Event_VolcanoEruption_HPP
#define UE4SS_SDK_Event_VolcanoEruption_HPP

class UEvent_VolcanoEruption_C : public UEvent_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    class ABP_Volcano_C* VolcanoRef;                                                  // 0x00B0 (size: 0x8)
    FFloatRange RockScale;                                                            // 0x00B8 (size: 0x10)
    FFloatRange RockDelay;                                                            // 0x00C8 (size: 0x10)
    FTimeStruct ResetVolcanoDelay;                                                    // 0x00D8 (size: 0x10)
    TArray<TSubclassOf<class ATrashItem_VolcanoRock_C>> RockAssets;                   // 0x00E8 (size: 0x10)
    class UAudioComponent* EruptionSFX;                                               // 0x00F8 (size: 0x8)
    TArray<FVector> AvailablePoints;                                                  // 0x0100 (size: 0x10)
    FVector SelectedPoint;                                                            // 0x0110 (size: 0xC)
    FInt32Range DirtToSpawnCountRange;                                                // 0x011C (size: 0x10)
    FInt32Range RocksToSpawnCountRange;                                               // 0x012C (size: 0x10)
    float WallDirtyPercentageToAdd;                                                   // 0x013C (size: 0x4)
    TArray<TSoftObjectPtr<class ANoCarAISpawnPoint>> Spawn Point;                     // 0x0140 (size: 0x10)
    FTimerHandle SpawnTimerHandle;                                                    // 0x0150 (size: 0x8)

    void FindSpawnPoint(class ANoCarAISpawnPoint*& NewParam);
    void MakeWallsDirty();
    void Spawn Dirt();
    void UpdateTime(bool& IsTimeOver);
    void InitializeEvent(class APlayerController* NewPlayerController, FGSSEventTime NewGSSEventTime);
    void OnGameTimeUpdated_Event(const FTimeStruct UpdatedTime);
    void SpawnRocks();
    void SpawnFakeCustomer();
    void FinishEvent();
    void ExecuteUbergraph_Event_VolcanoEruption(int32 EntryPoint);
}; // Size: 0x158

#endif
