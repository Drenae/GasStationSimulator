#ifndef UE4SS_SDK_UnlimitedPoint_BP_HPP
#define UE4SS_SDK_UnlimitedPoint_BP_HPP

class AUnlimitedPoint_BP_C : public AUnlimitedPathPoint
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x0280 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0288 (size: 0x8)
    bool UnblockedParkingSpot;                                                        // 0x0290 (size: 0x1)

    void ReceiveBeginPlay();
    void ShowStats();
    void ExecuteUbergraph_UnlimitedPoint_BP(int32 EntryPoint);
}; // Size: 0x291

#endif
