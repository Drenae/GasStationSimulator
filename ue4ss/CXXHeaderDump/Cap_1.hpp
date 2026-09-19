#ifndef UE4SS_SDK_Cap_1_HPP
#define UE4SS_SDK_Cap_1_HPP

class ACap_1_C : public ACap
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Cap_1(int32 EntryPoint);
}; // Size: 0x388

#endif
