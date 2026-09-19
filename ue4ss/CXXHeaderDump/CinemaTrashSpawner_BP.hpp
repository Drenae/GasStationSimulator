#ifndef UE4SS_SDK_CinemaTrashSpawner_BP_HPP
#define UE4SS_SDK_CinemaTrashSpawner_BP_HPP

class ACinemaTrashSpawner_BP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    class AActor* SandstormRef;                                                       // 0x0238 (size: 0x8)
    int32 TrashItemCountToSpawn;                                                      // 0x0240 (size: 0x4)
    int32 TrashItemsSpawned;                                                          // 0x0244 (size: 0x4)

    void SpawnTrash();
    void ReceiveBeginPlay();
    void OnSandstormStart(class AActor* Sandstorm);
    void OnSandstormEnd();
    void ReceiveTick(float DeltaSeconds);
    void ResetTrashCooldown();
    void ReceiveDestroyed();
    void SandstormReset();
    void ExecuteUbergraph_CinemaTrashSpawner_BP(int32 EntryPoint);
}; // Size: 0x248

#endif
