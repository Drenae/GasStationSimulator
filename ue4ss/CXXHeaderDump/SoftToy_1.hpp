#ifndef UE4SS_SDK_SoftToy_1_HPP
#define UE4SS_SDK_SoftToy_1_HPP

class ASoftToy_1_C : public ATeddyBear
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_SoftToy_1(int32 EntryPoint);
}; // Size: 0x388

#endif
