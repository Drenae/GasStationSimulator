#ifndef UE4SS_SDK_RVCamp_BP_HPP
#define UE4SS_SDK_RVCamp_BP_HPP

class ARVCamp_BP_C : public ARVCamp
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)

    void ReceiveBeginPlay();
    void CustomEvent_0(const bool GameLoaded);
    void ExecuteUbergraph_RVCamp_BP(int32 EntryPoint);
}; // Size: 0x588

#endif
