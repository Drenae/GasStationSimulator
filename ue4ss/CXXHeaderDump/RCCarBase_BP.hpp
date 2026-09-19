#ifndef UE4SS_SDK_RCCarBase_BP_HPP
#define UE4SS_SDK_RCCarBase_BP_HPP

class ARCCarBase_BP_C : public ADesertCar
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    FTransform StartTransform;                                                        // 0x02A0 (size: 0x30)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_RCCarBase_BP(int32 EntryPoint);
}; // Size: 0x2D0

#endif
