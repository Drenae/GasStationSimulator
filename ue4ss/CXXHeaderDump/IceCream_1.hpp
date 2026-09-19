#ifndef UE4SS_SDK_IceCream_1_HPP
#define UE4SS_SDK_IceCream_1_HPP

class AIceCream_1_C : public AIceCream
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_IceCream_1(int32 EntryPoint);
}; // Size: 0x388

#endif
