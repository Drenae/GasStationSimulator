#ifndef UE4SS_SDK_Cap_2_HPP
#define UE4SS_SDK_Cap_2_HPP

class ACap_2_C : public ACap
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Cap_2(int32 EntryPoint);
}; // Size: 0x388

#endif
