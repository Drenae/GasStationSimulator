#ifndef UE4SS_SDK_PathPoint_BP_HPP
#define UE4SS_SDK_PathPoint_BP_HPP

class APathPoint_BP_C : public APathPoint
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0280 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0288 (size: 0x8)

    void ShowStats();
    void ReceiveBeginPlay();
    void CustomEvent_0();
    void ExecuteUbergraph_PathPoint_BP(int32 EntryPoint);
}; // Size: 0x290

#endif
