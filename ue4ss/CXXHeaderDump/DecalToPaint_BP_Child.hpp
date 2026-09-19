#ifndef UE4SS_SDK_DecalToPaint_BP_Child_HPP
#define UE4SS_SDK_DecalToPaint_BP_Child_HPP

class ADecalToPaint_BP_Child_C : public ADecalToPaint_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_DecalToPaint_BP_Child(int32 EntryPoint);
}; // Size: 0x2B0

#endif
