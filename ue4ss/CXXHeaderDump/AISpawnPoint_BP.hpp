#ifndef UE4SS_SDK_AISpawnPoint_BP_HPP
#define UE4SS_SDK_AISpawnPoint_BP_HPP

class AAISpawnPoint_BP_C : public AAISpawnPoint
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    class UArrowComponent* arrow;                                                     // 0x0278 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0280 (size: 0x8)
    class AGSSGameState* GameState;                                                   // 0x0288 (size: 0x8)
    float TimeTo Spawn;                                                               // 0x0290 (size: 0x4)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void SetTime(float Min, float Max);
    void ExecuteUbergraph_AISpawnPoint_BP(int32 EntryPoint);
}; // Size: 0x294

#endif
