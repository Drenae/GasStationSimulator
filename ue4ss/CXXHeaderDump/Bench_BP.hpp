#ifndef UE4SS_SDK_Bench_BP_HPP
#define UE4SS_SDK_Bench_BP_HPP

class ABench_BP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* JoeTeleportPoint;                                     // 0x0228 (size: 0x8)
    class UArrowComponent* arrow;                                                     // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0238 (size: 0x8)
    class UNPSmartObjectComponent* NPSmartObject;                                     // 0x0240 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Bench_BP(int32 EntryPoint);
}; // Size: 0x248

#endif
