#ifndef UE4SS_SDK_SoftToy_4_HPP
#define UE4SS_SDK_SoftToy_4_HPP

class ASoftToy_4_C : public ATeddyBear
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_SoftToy_4(int32 EntryPoint);
}; // Size: 0x388

#endif
