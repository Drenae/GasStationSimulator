#ifndef UE4SS_SDK_SoftToy_2_HPP
#define UE4SS_SDK_SoftToy_2_HPP

class ASoftToy_2_C : public ATeddyBear
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_SoftToy_2(int32 EntryPoint);
}; // Size: 0x388

#endif
