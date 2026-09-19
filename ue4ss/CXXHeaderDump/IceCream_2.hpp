#ifndef UE4SS_SDK_IceCream_2_HPP
#define UE4SS_SDK_IceCream_2_HPP

class AIceCream_2_C : public AIceCream
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_IceCream_2(int32 EntryPoint);
}; // Size: 0x388

#endif
