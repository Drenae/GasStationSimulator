#ifndef UE4SS_SDK_DecalToPaint_BP_HPP
#define UE4SS_SDK_DecalToPaint_BP_HPP

class ADecalToPaint_BP_C : public ADecalToPaint
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_DecalToPaint_BP(int32 EntryPoint);
}; // Size: 0x2A8

#endif
