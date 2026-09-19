#ifndef UE4SS_SDK_BP_RoofDecorationVolume_HPP
#define UE4SS_SDK_BP_RoofDecorationVolume_HPP

class ABP_RoofDecorationVolume_C : public ATriggerBox
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_RoofDecorationVolume(int32 EntryPoint);
}; // Size: 0x230

#endif
