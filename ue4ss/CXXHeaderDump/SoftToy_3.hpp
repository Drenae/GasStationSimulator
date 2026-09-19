#ifndef UE4SS_SDK_SoftToy_3_HPP
#define UE4SS_SDK_SoftToy_3_HPP

class ASoftToy_3_C : public ATeddyBear
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_SoftToy_3(int32 EntryPoint);
}; // Size: 0x388

#endif
